#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/krueger/cs5222/projects/project2/cs5222-lab-fpga-mlp/zynq/build/accel/solution0/.autopilot/db/a.g.bc ${1+"$@"}
