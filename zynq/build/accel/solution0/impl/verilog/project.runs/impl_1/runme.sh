#!/bin/sh

# 
# Vivado(TM)
# runme.sh: a Vivado-generated Runs Script for UNIX
# Copyright 1986-2017 Xilinx, Inc. All Rights Reserved.
# 

if [ -z "$PATH" ]; then
  PATH=/home/krueger/vivado-2017-1/Vivado/2017.1/ids_lite/ISE/bin/lin64:/home/krueger/vivado-2017-1/Vivado/2017.1/bin
else
  PATH=/home/krueger/vivado-2017-1/Vivado/2017.1/ids_lite/ISE/bin/lin64:/home/krueger/vivado-2017-1/Vivado/2017.1/bin:$PATH
fi
export PATH

if [ -z "$LD_LIBRARY_PATH" ]; then
  LD_LIBRARY_PATH=/home/krueger/vivado-2017-1/Vivado/2017.1/ids_lite/ISE/lib/lin64
else
  LD_LIBRARY_PATH=/home/krueger/vivado-2017-1/Vivado/2017.1/ids_lite/ISE/lib/lin64:$LD_LIBRARY_PATH
fi
export LD_LIBRARY_PATH

HD_PWD='/home/krueger/cs5222/projects/project2/cs5222-lab-fpga-mlp/zynq/build/accel/solution0/impl/verilog/project.runs/impl_1'
cd "$HD_PWD"

HD_LOG=runme.log
/bin/touch $HD_LOG

ISEStep="./ISEWrap.sh"
EAStep()
{
     $ISEStep $HD_LOG "$@" >> $HD_LOG 2>&1
     if [ $? -ne 0 ]
     then
         exit
     fi
}

# pre-commands:
/bin/touch .init_design.begin.rst
EAStep vivado -log mmult_hw.vdi -applog -m64 -product Vivado -messageDb vivado.pb -mode batch -source mmult_hw.tcl -notrace


