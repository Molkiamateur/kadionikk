# ******************************
#            VARIABLE
# ******************************
set XPR_NAME "cw312"
set BOARD_NAME "cw312-a7-35t"
set BOARD_PART ""
set TOP_NAME "Top"
set PART_NAME "xc7a35tcsg324-1"
set JOB_COUNT "8"

set XPR_PATH "xpr/$XPR_NAME"
set SRC_PATH "src"
set GEN_PATH "gen"

# Create project directory if it does not exist
file mkdir $XPR_PATH

# Create new project
create_project -force $XPR_NAME $XPR_PATH -part $PART_NAME
if {$BOARD_PART ne ""} {
  set_property board_part $BOARD_PART [current_project]
}

# Add generated SystemVerilog files, generated memory files and source files
add_files [glob -nocomplain $GEN_PATH/*.{sv,svh}]
add_files [glob -nocomplain $GEN_PATH/*.{mem}]
add_files [glob -nocomplain $SRC_PATH/$BOARD_NAME.sv]

# Add constraint file
read_xdc [glob -nocomplain $SRC_PATH/$BOARD_NAME.xdc]

# Set the top module
set_property top $TOP_NAME [current_fileset]

# Run synthesis
# set_property strategy Flow_PerfOptimized_high [get_runs synth_1]
launch_runs synth_1 -jobs $JOB_COUNT
wait_on_run synth_1

# Run implementation
# set_property strategy Performance_ExplorePostRoutePhysOpt [get_runs impl_1]
launch_runs impl_1 -to_step write_bitstream -jobs $JOB_COUNT
wait_on_run impl_1

# Generate bitstream
open_run impl_1 -name implemented_design

report_utilization -file $XPR_PATH/utilization.txt
report_utilization -hierarchical -file $XPR_PATH/hierarchical.txt
report_timing_summary -file $XPR_PATH/timing.txt
write_bitstream -force $XPR_PATH/$XPR_NAME.bit

# Close project
close_project
exit