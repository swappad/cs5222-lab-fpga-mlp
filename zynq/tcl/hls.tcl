# Commands to compile your matrix multiply design
# and package it as an AXI IP for Vivado
set src_dir "../hls/mmult_fixed"
open_project accel
set_top mmult_hw
add_files $src_dir/mmult_fixed.cpp
add_files -tb $src_dir/mmult_test.cpp
open_solution "solution0"
set_part {xc7z020clg484-1}
create_clock -period 10 -name default
csim_design -clean
csynth_design
export_design -evaluate verilog -format ip_catalog 
close_project
exit
