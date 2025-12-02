// ******************************
//           PARAMETERS
// ******************************
ThisBuild / scalaVersion     := "2.13.12"
ThisBuild / version          := "0.1.0"
ThisBuild / organization     := "riscv-design"
val chiselVersion = "6.5.0"

val libDep = Seq(
  "org.chipsalliance" %% "chisel" % chiselVersion,
  "edu.berkeley.cs" %% "chiseltest" % "6.0.0" % "test"
)

val scalacOpt = Seq(
  //"-Xsource:2.13",
  "-language:reflectiveCalls",
  "-deprecation",
  "-feature",
  "-Xcheckinit",
  "-Ymacro-annotations"
  // Enables autoclonetype2 in 3.4.x (on by default in 3.5)
  //"-P:chiselplugin:useBundlePlugin"
  //"-P:chiselplugin:genBundleElements"
)

// ******************************
//           PROJECTS
// ******************************
lazy val main = (project in file("."))
  .settings(
    name := "main",
    libraryDependencies ++= libDep,
    scalacOptions ++= scalacOpt,
    addCompilerPlugin("org.chipsalliance" % "chisel-plugin" % chiselVersion cross CrossVersion.full)
  )