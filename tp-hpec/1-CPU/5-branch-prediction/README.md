# SE301-High-Performance-Computing

## CPU experiments

### Stage 5 - Branch predictions, remove "if" from your codes!

The last thing you will observe is related to the internal architecture of the CPU. When executing a program, the CPU fetch-decode-execute-write pipeline is used. In order to obtain high levels of performance, it is important that the pipeline is used efficiently, minimizing the number of conditional branches. Indeed, despite the integration of branch predictors in current architectures, they can't do miracles...

In this example, the point is to count the number of positive and negative integers in an array. The file <main.ccp> builds several test patterns to emphasize the influence of branch prediction.
Write an equivalent function in <counter.cpp> to remove the 'if' statement and optimize the computation time.

Once done, you are ready with This part. It made you increase your skills on the impact of algorithmic and/or software implementation on performance. Now it's time for you to move on. Take the direction of part 2 dedicated to the use of OpenMP.
