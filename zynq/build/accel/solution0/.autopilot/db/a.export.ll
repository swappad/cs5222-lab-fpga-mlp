; ModuleID = '/home/krueger/cs5222/projects/project2/cs5222-lab-fpga-mlp/zynq/build/accel/solution0/.autopilot/db/a.o.2.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@mmult_hw_str = internal unnamed_addr constant [9 x i8] c"mmult_hw\00"
@llvm_global_ctors_1 = appending global [1 x void ()*] [void ()* @_GLOBAL__I_a]
@llvm_global_ctors_0 = appending global [1 x i32] [i32 65535]
@L1_L2_str = internal unnamed_addr constant [6 x i8] c"L1_L2\00"
@p_str9 = private unnamed_addr constant [9 x i8] c"LOAD_W_2\00", align 1
@p_str8 = private unnamed_addr constant [9 x i8] c"LOAD_W_1\00", align 1
@p_str7 = private unnamed_addr constant [11 x i8] c"LOAD_OFF_1\00", align 1
@p_str4 = private unnamed_addr constant [5 x i8] c"both\00", align 1
@p_str3 = private unnamed_addr constant [5 x i8] c"axis\00", align 1
@p_str2 = private unnamed_addr constant [12 x i8] c"CONTROL_BUS\00", align 1
@p_str16 = private unnamed_addr constant [10 x i8] c"STORE_O_1\00", align 1
@p_str14 = private unnamed_addr constant [3 x i8] c"L2\00", align 1
@p_str12 = private unnamed_addr constant [9 x i8] c"LOAD_I_2\00", align 1
@p_str11 = private unnamed_addr constant [9 x i8] c"LOAD_I_1\00", align 1
@p_str10 = private unnamed_addr constant [3 x i8] c"LT\00", align 1
@p_str1 = private unnamed_addr constant [1 x i8] zeroinitializer, align 1
@p_str = private unnamed_addr constant [10 x i8] c"s_axilite\00", align 1

define void @mmult_hw(i64* %in_stream_data_V, i8* %in_stream_keep_V, i8* %in_stream_strb_V, i4* %in_stream_user_V, i1* %in_stream_last_V, i5* %in_stream_id_V, i5* %in_stream_dest_V, i64* %out_stream_data_V, i8* %out_stream_keep_V, i8* %out_stream_strb_V, i4* %out_stream_user_V, i1* %out_stream_last_V, i5* %out_stream_id_V, i5* %out_stream_dest_V) {
arrayctor.loop1.preheader:
  call void (...)* @_ssdm_op_SpecBitsMap(i64* %in_stream_data_V), !map !85
  call void (...)* @_ssdm_op_SpecBitsMap(i8* %in_stream_keep_V), !map !91
  call void (...)* @_ssdm_op_SpecBitsMap(i8* %in_stream_strb_V), !map !95
  call void (...)* @_ssdm_op_SpecBitsMap(i4* %in_stream_user_V), !map !99
  call void (...)* @_ssdm_op_SpecBitsMap(i1* %in_stream_last_V), !map !103
  call void (...)* @_ssdm_op_SpecBitsMap(i5* %in_stream_id_V), !map !107
  call void (...)* @_ssdm_op_SpecBitsMap(i5* %in_stream_dest_V), !map !111
  call void (...)* @_ssdm_op_SpecBitsMap(i64* %out_stream_data_V), !map !115
  call void (...)* @_ssdm_op_SpecBitsMap(i8* %out_stream_keep_V), !map !121
  call void (...)* @_ssdm_op_SpecBitsMap(i8* %out_stream_strb_V), !map !125
  call void (...)* @_ssdm_op_SpecBitsMap(i4* %out_stream_user_V), !map !129
  call void (...)* @_ssdm_op_SpecBitsMap(i1* %out_stream_last_V), !map !133
  call void (...)* @_ssdm_op_SpecBitsMap(i5* %out_stream_id_V), !map !137
  call void (...)* @_ssdm_op_SpecBitsMap(i5* %out_stream_dest_V), !map !141
  call void (...)* @_ssdm_op_SpecTopModule([9 x i8]* @mmult_hw_str) nounwind
  %offset_buf_V = alloca [10 x i32], align 4
  %in_buf_0_0_V = alloca [128 x i8], align 1
  %in_buf_0_1_V = alloca [128 x i8], align 1
  %in_buf_0_2_V = alloca [128 x i8], align 1
  %in_buf_0_3_V = alloca [128 x i8], align 1
  %in_buf_0_4_V = alloca [128 x i8], align 1
  %in_buf_0_5_V = alloca [128 x i8], align 1
  %in_buf_0_6_V = alloca [128 x i8], align 1
  %in_buf_0_7_V = alloca [128 x i8], align 1
  %in_buf_1_0_V = alloca [128 x i8], align 1
  %in_buf_1_1_V = alloca [128 x i8], align 1
  %in_buf_1_2_V = alloca [128 x i8], align 1
  %in_buf_1_3_V = alloca [128 x i8], align 1
  %in_buf_1_4_V = alloca [128 x i8], align 1
  %in_buf_1_5_V = alloca [128 x i8], align 1
  %in_buf_1_6_V = alloca [128 x i8], align 1
  %in_buf_1_7_V = alloca [128 x i8], align 1
  %in_buf_2_0_V = alloca [128 x i8], align 1
  %in_buf_2_1_V = alloca [128 x i8], align 1
  %in_buf_2_2_V = alloca [128 x i8], align 1
  %in_buf_2_3_V = alloca [128 x i8], align 1
  %in_buf_2_4_V = alloca [128 x i8], align 1
  %in_buf_2_5_V = alloca [128 x i8], align 1
  %in_buf_2_6_V = alloca [128 x i8], align 1
  %in_buf_2_7_V = alloca [128 x i8], align 1
  %in_buf_3_0_V = alloca [128 x i8], align 1
  %in_buf_3_1_V = alloca [128 x i8], align 1
  %in_buf_3_2_V = alloca [128 x i8], align 1
  %in_buf_3_3_V = alloca [128 x i8], align 1
  %in_buf_3_4_V = alloca [128 x i8], align 1
  %in_buf_3_5_V = alloca [128 x i8], align 1
  %in_buf_3_6_V = alloca [128 x i8], align 1
  %in_buf_3_7_V = alloca [128 x i8], align 1
  %in_buf_4_0_V = alloca [128 x i8], align 1
  %in_buf_4_1_V = alloca [128 x i8], align 1
  %in_buf_4_2_V = alloca [128 x i8], align 1
  %in_buf_4_3_V = alloca [128 x i8], align 1
  %in_buf_4_4_V = alloca [128 x i8], align 1
  %in_buf_4_5_V = alloca [128 x i8], align 1
  %in_buf_4_6_V = alloca [128 x i8], align 1
  %in_buf_4_7_V = alloca [128 x i8], align 1
  %in_buf_5_0_V = alloca [128 x i8], align 1
  %in_buf_5_1_V = alloca [128 x i8], align 1
  %in_buf_5_2_V = alloca [128 x i8], align 1
  %in_buf_5_3_V = alloca [128 x i8], align 1
  %in_buf_5_4_V = alloca [128 x i8], align 1
  %in_buf_5_5_V = alloca [128 x i8], align 1
  %in_buf_5_6_V = alloca [128 x i8], align 1
  %in_buf_5_7_V = alloca [128 x i8], align 1
  %in_buf_6_0_V = alloca [128 x i8], align 1
  %in_buf_6_1_V = alloca [128 x i8], align 1
  %in_buf_6_2_V = alloca [128 x i8], align 1
  %in_buf_6_3_V = alloca [128 x i8], align 1
  %in_buf_6_4_V = alloca [128 x i8], align 1
  %in_buf_6_5_V = alloca [128 x i8], align 1
  %in_buf_6_6_V = alloca [128 x i8], align 1
  %in_buf_6_7_V = alloca [128 x i8], align 1
  %in_buf_7_0_V = alloca [128 x i8], align 1
  %in_buf_7_1_V = alloca [128 x i8], align 1
  %in_buf_7_2_V = alloca [128 x i8], align 1
  %in_buf_7_3_V = alloca [128 x i8], align 1
  %in_buf_7_4_V = alloca [128 x i8], align 1
  %in_buf_7_5_V = alloca [128 x i8], align 1
  %in_buf_7_6_V = alloca [128 x i8], align 1
  %in_buf_7_7_V = alloca [128 x i8], align 1
  %in_buf_8_0_V = alloca [128 x i8], align 1
  %in_buf_8_1_V = alloca [128 x i8], align 1
  %in_buf_8_2_V = alloca [128 x i8], align 1
  %in_buf_8_3_V = alloca [128 x i8], align 1
  %in_buf_8_4_V = alloca [128 x i8], align 1
  %in_buf_8_5_V = alloca [128 x i8], align 1
  %in_buf_8_6_V = alloca [128 x i8], align 1
  %in_buf_8_7_V = alloca [128 x i8], align 1
  %in_buf_9_0_V = alloca [128 x i8], align 1
  %in_buf_9_1_V = alloca [128 x i8], align 1
  %in_buf_9_2_V = alloca [128 x i8], align 1
  %in_buf_9_3_V = alloca [128 x i8], align 1
  %in_buf_9_4_V = alloca [128 x i8], align 1
  %in_buf_9_5_V = alloca [128 x i8], align 1
  %in_buf_9_6_V = alloca [128 x i8], align 1
  %in_buf_9_7_V = alloca [128 x i8], align 1
  %in_buf_10_0_V = alloca [128 x i8], align 1
  %in_buf_10_1_V = alloca [128 x i8], align 1
  %in_buf_10_2_V = alloca [128 x i8], align 1
  %in_buf_10_3_V = alloca [128 x i8], align 1
  %in_buf_10_4_V = alloca [128 x i8], align 1
  %in_buf_10_5_V = alloca [128 x i8], align 1
  %in_buf_10_6_V = alloca [128 x i8], align 1
  %in_buf_10_7_V = alloca [128 x i8], align 1
  %in_buf_11_0_V = alloca [128 x i8], align 1
  %in_buf_11_1_V = alloca [128 x i8], align 1
  %in_buf_11_2_V = alloca [128 x i8], align 1
  %in_buf_11_3_V = alloca [128 x i8], align 1
  %in_buf_11_4_V = alloca [128 x i8], align 1
  %in_buf_11_5_V = alloca [128 x i8], align 1
  %in_buf_11_6_V = alloca [128 x i8], align 1
  %in_buf_11_7_V = alloca [128 x i8], align 1
  %in_buf_12_0_V = alloca [128 x i8], align 1
  %in_buf_12_1_V = alloca [128 x i8], align 1
  %in_buf_12_2_V = alloca [128 x i8], align 1
  %in_buf_12_3_V = alloca [128 x i8], align 1
  %in_buf_12_4_V = alloca [128 x i8], align 1
  %in_buf_12_5_V = alloca [128 x i8], align 1
  %in_buf_12_6_V = alloca [128 x i8], align 1
  %in_buf_12_7_V = alloca [128 x i8], align 1
  %in_buf_13_0_V = alloca [128 x i8], align 1
  %in_buf_13_1_V = alloca [128 x i8], align 1
  %in_buf_13_2_V = alloca [128 x i8], align 1
  %in_buf_13_3_V = alloca [128 x i8], align 1
  %in_buf_13_4_V = alloca [128 x i8], align 1
  %in_buf_13_5_V = alloca [128 x i8], align 1
  %in_buf_13_6_V = alloca [128 x i8], align 1
  %in_buf_13_7_V = alloca [128 x i8], align 1
  %in_buf_14_0_V = alloca [128 x i8], align 1
  %in_buf_14_1_V = alloca [128 x i8], align 1
  %in_buf_14_2_V = alloca [128 x i8], align 1
  %in_buf_14_3_V = alloca [128 x i8], align 1
  %in_buf_14_4_V = alloca [128 x i8], align 1
  %in_buf_14_5_V = alloca [128 x i8], align 1
  %in_buf_14_6_V = alloca [128 x i8], align 1
  %in_buf_14_7_V = alloca [128 x i8], align 1
  %in_buf_15_0_V = alloca [128 x i8], align 1
  %in_buf_15_1_V = alloca [128 x i8], align 1
  %in_buf_15_2_V = alloca [128 x i8], align 1
  %in_buf_15_3_V = alloca [128 x i8], align 1
  %in_buf_15_4_V = alloca [128 x i8], align 1
  %in_buf_15_5_V = alloca [128 x i8], align 1
  %in_buf_15_6_V = alloca [128 x i8], align 1
  %in_buf_15_7_V = alloca [128 x i8], align 1
  %in_buf_16_0_V = alloca [128 x i8], align 1
  %in_buf_16_1_V = alloca [128 x i8], align 1
  %in_buf_16_2_V = alloca [128 x i8], align 1
  %in_buf_16_3_V = alloca [128 x i8], align 1
  %in_buf_16_4_V = alloca [128 x i8], align 1
  %in_buf_16_5_V = alloca [128 x i8], align 1
  %in_buf_16_6_V = alloca [128 x i8], align 1
  %in_buf_16_7_V = alloca [128 x i8], align 1
  %in_buf_17_0_V = alloca [128 x i8], align 1
  %in_buf_17_1_V = alloca [128 x i8], align 1
  %in_buf_17_2_V = alloca [128 x i8], align 1
  %in_buf_17_3_V = alloca [128 x i8], align 1
  %in_buf_17_4_V = alloca [128 x i8], align 1
  %in_buf_17_5_V = alloca [128 x i8], align 1
  %in_buf_17_6_V = alloca [128 x i8], align 1
  %in_buf_17_7_V = alloca [128 x i8], align 1
  %in_buf_18_0_V = alloca [128 x i8], align 1
  %in_buf_18_1_V = alloca [128 x i8], align 1
  %in_buf_18_2_V = alloca [128 x i8], align 1
  %in_buf_18_3_V = alloca [128 x i8], align 1
  %in_buf_18_4_V = alloca [128 x i8], align 1
  %in_buf_18_5_V = alloca [128 x i8], align 1
  %in_buf_18_6_V = alloca [128 x i8], align 1
  %in_buf_18_7_V = alloca [128 x i8], align 1
  %in_buf_19_0_V = alloca [128 x i8], align 1
  %in_buf_19_1_V = alloca [128 x i8], align 1
  %in_buf_19_2_V = alloca [128 x i8], align 1
  %in_buf_19_3_V = alloca [128 x i8], align 1
  %in_buf_19_4_V = alloca [128 x i8], align 1
  %in_buf_19_5_V = alloca [128 x i8], align 1
  %in_buf_19_6_V = alloca [128 x i8], align 1
  %in_buf_19_7_V = alloca [128 x i8], align 1
  %in_buf_20_0_V = alloca [128 x i8], align 1
  %in_buf_20_1_V = alloca [128 x i8], align 1
  %in_buf_20_2_V = alloca [128 x i8], align 1
  %in_buf_20_3_V = alloca [128 x i8], align 1
  %in_buf_20_4_V = alloca [128 x i8], align 1
  %in_buf_20_5_V = alloca [128 x i8], align 1
  %in_buf_20_6_V = alloca [128 x i8], align 1
  %in_buf_20_7_V = alloca [128 x i8], align 1
  %in_buf_21_0_V = alloca [128 x i8], align 1
  %in_buf_21_1_V = alloca [128 x i8], align 1
  %in_buf_21_2_V = alloca [128 x i8], align 1
  %in_buf_21_3_V = alloca [128 x i8], align 1
  %in_buf_21_4_V = alloca [128 x i8], align 1
  %in_buf_21_5_V = alloca [128 x i8], align 1
  %in_buf_21_6_V = alloca [128 x i8], align 1
  %in_buf_21_7_V = alloca [128 x i8], align 1
  %in_buf_22_0_V = alloca [128 x i8], align 1
  %in_buf_22_1_V = alloca [128 x i8], align 1
  %in_buf_22_2_V = alloca [128 x i8], align 1
  %in_buf_22_3_V = alloca [128 x i8], align 1
  %in_buf_22_4_V = alloca [128 x i8], align 1
  %in_buf_22_5_V = alloca [128 x i8], align 1
  %in_buf_22_6_V = alloca [128 x i8], align 1
  %in_buf_22_7_V = alloca [128 x i8], align 1
  %in_buf_23_0_V = alloca [128 x i8], align 1
  %in_buf_23_1_V = alloca [128 x i8], align 1
  %in_buf_23_2_V = alloca [128 x i8], align 1
  %in_buf_23_3_V = alloca [128 x i8], align 1
  %in_buf_23_4_V = alloca [128 x i8], align 1
  %in_buf_23_5_V = alloca [128 x i8], align 1
  %in_buf_23_6_V = alloca [128 x i8], align 1
  %in_buf_23_7_V = alloca [128 x i8], align 1
  %in_buf_24_0_V = alloca [128 x i8], align 1
  %in_buf_24_1_V = alloca [128 x i8], align 1
  %in_buf_24_2_V = alloca [128 x i8], align 1
  %in_buf_24_3_V = alloca [128 x i8], align 1
  %in_buf_24_4_V = alloca [128 x i8], align 1
  %in_buf_24_5_V = alloca [128 x i8], align 1
  %in_buf_24_6_V = alloca [128 x i8], align 1
  %in_buf_24_7_V = alloca [128 x i8], align 1
  %in_buf_25_0_V = alloca [128 x i8], align 1
  %in_buf_25_1_V = alloca [128 x i8], align 1
  %in_buf_25_2_V = alloca [128 x i8], align 1
  %in_buf_25_3_V = alloca [128 x i8], align 1
  %in_buf_25_4_V = alloca [128 x i8], align 1
  %in_buf_25_5_V = alloca [128 x i8], align 1
  %in_buf_25_6_V = alloca [128 x i8], align 1
  %in_buf_25_7_V = alloca [128 x i8], align 1
  %in_buf_26_0_V = alloca [128 x i8], align 1
  %in_buf_26_1_V = alloca [128 x i8], align 1
  %in_buf_26_2_V = alloca [128 x i8], align 1
  %in_buf_26_3_V = alloca [128 x i8], align 1
  %in_buf_26_4_V = alloca [128 x i8], align 1
  %in_buf_26_5_V = alloca [128 x i8], align 1
  %in_buf_26_6_V = alloca [128 x i8], align 1
  %in_buf_26_7_V = alloca [128 x i8], align 1
  %in_buf_27_0_V = alloca [128 x i8], align 1
  %in_buf_27_1_V = alloca [128 x i8], align 1
  %in_buf_27_2_V = alloca [128 x i8], align 1
  %in_buf_27_3_V = alloca [128 x i8], align 1
  %in_buf_27_4_V = alloca [128 x i8], align 1
  %in_buf_27_5_V = alloca [128 x i8], align 1
  %in_buf_27_6_V = alloca [128 x i8], align 1
  %in_buf_27_7_V = alloca [128 x i8], align 1
  %in_buf_28_0_V = alloca [128 x i8], align 1
  %in_buf_28_1_V = alloca [128 x i8], align 1
  %in_buf_28_2_V = alloca [128 x i8], align 1
  %in_buf_28_3_V = alloca [128 x i8], align 1
  %in_buf_28_4_V = alloca [128 x i8], align 1
  %in_buf_28_5_V = alloca [128 x i8], align 1
  %in_buf_28_6_V = alloca [128 x i8], align 1
  %in_buf_28_7_V = alloca [128 x i8], align 1
  %in_buf_29_0_V = alloca [128 x i8], align 1
  %in_buf_29_1_V = alloca [128 x i8], align 1
  %in_buf_29_2_V = alloca [128 x i8], align 1
  %in_buf_29_3_V = alloca [128 x i8], align 1
  %in_buf_29_4_V = alloca [128 x i8], align 1
  %in_buf_29_5_V = alloca [128 x i8], align 1
  %in_buf_29_6_V = alloca [128 x i8], align 1
  %in_buf_29_7_V = alloca [128 x i8], align 1
  %in_buf_30_0_V = alloca [128 x i8], align 1
  %in_buf_30_1_V = alloca [128 x i8], align 1
  %in_buf_30_2_V = alloca [128 x i8], align 1
  %in_buf_30_3_V = alloca [128 x i8], align 1
  %in_buf_30_4_V = alloca [128 x i8], align 1
  %in_buf_30_5_V = alloca [128 x i8], align 1
  %in_buf_30_6_V = alloca [128 x i8], align 1
  %in_buf_30_7_V = alloca [128 x i8], align 1
  %in_buf_31_0_V = alloca [128 x i8], align 1
  %in_buf_31_1_V = alloca [128 x i8], align 1
  %in_buf_31_2_V = alloca [128 x i8], align 1
  %in_buf_31_3_V = alloca [128 x i8], align 1
  %in_buf_31_4_V = alloca [128 x i8], align 1
  %in_buf_31_5_V = alloca [128 x i8], align 1
  %in_buf_31_6_V = alloca [128 x i8], align 1
  %in_buf_31_7_V = alloca [128 x i8], align 1
  %weight_buf_0_0_V = alloca [10 x i8], align 1
  %weight_buf_0_1_V = alloca [10 x i8], align 1
  %weight_buf_0_2_V = alloca [10 x i8], align 1
  %weight_buf_0_3_V = alloca [10 x i8], align 1
  %weight_buf_0_4_V = alloca [10 x i8], align 1
  %weight_buf_0_5_V = alloca [10 x i8], align 1
  %weight_buf_0_6_V = alloca [10 x i8], align 1
  %weight_buf_0_7_V = alloca [10 x i8], align 1
  %weight_buf_1_0_V = alloca [10 x i8], align 1
  %weight_buf_1_1_V = alloca [10 x i8], align 1
  %weight_buf_1_2_V = alloca [10 x i8], align 1
  %weight_buf_1_3_V = alloca [10 x i8], align 1
  %weight_buf_1_4_V = alloca [10 x i8], align 1
  %weight_buf_1_5_V = alloca [10 x i8], align 1
  %weight_buf_1_6_V = alloca [10 x i8], align 1
  %weight_buf_1_7_V = alloca [10 x i8], align 1
  %weight_buf_2_0_V = alloca [10 x i8], align 1
  %weight_buf_2_1_V = alloca [10 x i8], align 1
  %weight_buf_2_2_V = alloca [10 x i8], align 1
  %weight_buf_2_3_V = alloca [10 x i8], align 1
  %weight_buf_2_4_V = alloca [10 x i8], align 1
  %weight_buf_2_5_V = alloca [10 x i8], align 1
  %weight_buf_2_6_V = alloca [10 x i8], align 1
  %weight_buf_2_7_V = alloca [10 x i8], align 1
  %weight_buf_3_0_V = alloca [10 x i8], align 1
  %weight_buf_3_1_V = alloca [10 x i8], align 1
  %weight_buf_3_2_V = alloca [10 x i8], align 1
  %weight_buf_3_3_V = alloca [10 x i8], align 1
  %weight_buf_3_4_V = alloca [10 x i8], align 1
  %weight_buf_3_5_V = alloca [10 x i8], align 1
  %weight_buf_3_6_V = alloca [10 x i8], align 1
  %weight_buf_3_7_V = alloca [10 x i8], align 1
  %weight_buf_4_0_V = alloca [10 x i8], align 1
  %weight_buf_4_1_V = alloca [10 x i8], align 1
  %weight_buf_4_2_V = alloca [10 x i8], align 1
  %weight_buf_4_3_V = alloca [10 x i8], align 1
  %weight_buf_4_4_V = alloca [10 x i8], align 1
  %weight_buf_4_5_V = alloca [10 x i8], align 1
  %weight_buf_4_6_V = alloca [10 x i8], align 1
  %weight_buf_4_7_V = alloca [10 x i8], align 1
  %weight_buf_5_0_V = alloca [10 x i8], align 1
  %weight_buf_5_1_V = alloca [10 x i8], align 1
  %weight_buf_5_2_V = alloca [10 x i8], align 1
  %weight_buf_5_3_V = alloca [10 x i8], align 1
  %weight_buf_5_4_V = alloca [10 x i8], align 1
  %weight_buf_5_5_V = alloca [10 x i8], align 1
  %weight_buf_5_6_V = alloca [10 x i8], align 1
  %weight_buf_5_7_V = alloca [10 x i8], align 1
  %weight_buf_6_0_V = alloca [10 x i8], align 1
  %weight_buf_6_1_V = alloca [10 x i8], align 1
  %weight_buf_6_2_V = alloca [10 x i8], align 1
  %weight_buf_6_3_V = alloca [10 x i8], align 1
  %weight_buf_6_4_V = alloca [10 x i8], align 1
  %weight_buf_6_5_V = alloca [10 x i8], align 1
  %weight_buf_6_6_V = alloca [10 x i8], align 1
  %weight_buf_6_7_V = alloca [10 x i8], align 1
  %weight_buf_7_0_V = alloca [10 x i8], align 1
  %weight_buf_7_1_V = alloca [10 x i8], align 1
  %weight_buf_7_2_V = alloca [10 x i8], align 1
  %weight_buf_7_3_V = alloca [10 x i8], align 1
  %weight_buf_7_4_V = alloca [10 x i8], align 1
  %weight_buf_7_5_V = alloca [10 x i8], align 1
  %weight_buf_7_6_V = alloca [10 x i8], align 1
  %weight_buf_7_7_V = alloca [10 x i8], align 1
  %weight_buf_8_0_V = alloca [10 x i8], align 1
  %weight_buf_8_1_V = alloca [10 x i8], align 1
  %weight_buf_8_2_V = alloca [10 x i8], align 1
  %weight_buf_8_3_V = alloca [10 x i8], align 1
  %weight_buf_8_4_V = alloca [10 x i8], align 1
  %weight_buf_8_5_V = alloca [10 x i8], align 1
  %weight_buf_8_6_V = alloca [10 x i8], align 1
  %weight_buf_8_7_V = alloca [10 x i8], align 1
  %weight_buf_9_0_V = alloca [10 x i8], align 1
  %weight_buf_9_1_V = alloca [10 x i8], align 1
  %weight_buf_9_2_V = alloca [10 x i8], align 1
  %weight_buf_9_3_V = alloca [10 x i8], align 1
  %weight_buf_9_4_V = alloca [10 x i8], align 1
  %weight_buf_9_5_V = alloca [10 x i8], align 1
  %weight_buf_9_6_V = alloca [10 x i8], align 1
  %weight_buf_9_7_V = alloca [10 x i8], align 1
  %weight_buf_10_0_V = alloca [10 x i8], align 1
  %weight_buf_10_1_V = alloca [10 x i8], align 1
  %weight_buf_10_2_V = alloca [10 x i8], align 1
  %weight_buf_10_3_V = alloca [10 x i8], align 1
  %weight_buf_10_4_V = alloca [10 x i8], align 1
  %weight_buf_10_5_V = alloca [10 x i8], align 1
  %weight_buf_10_6_V = alloca [10 x i8], align 1
  %weight_buf_10_7_V = alloca [10 x i8], align 1
  %weight_buf_11_0_V = alloca [10 x i8], align 1
  %weight_buf_11_1_V = alloca [10 x i8], align 1
  %weight_buf_11_2_V = alloca [10 x i8], align 1
  %weight_buf_11_3_V = alloca [10 x i8], align 1
  %weight_buf_11_4_V = alloca [10 x i8], align 1
  %weight_buf_11_5_V = alloca [10 x i8], align 1
  %weight_buf_11_6_V = alloca [10 x i8], align 1
  %weight_buf_11_7_V = alloca [10 x i8], align 1
  %weight_buf_12_0_V = alloca [10 x i8], align 1
  %weight_buf_12_1_V = alloca [10 x i8], align 1
  %weight_buf_12_2_V = alloca [10 x i8], align 1
  %weight_buf_12_3_V = alloca [10 x i8], align 1
  %weight_buf_12_4_V = alloca [10 x i8], align 1
  %weight_buf_12_5_V = alloca [10 x i8], align 1
  %weight_buf_12_6_V = alloca [10 x i8], align 1
  %weight_buf_12_7_V = alloca [10 x i8], align 1
  %weight_buf_13_0_V = alloca [10 x i8], align 1
  %weight_buf_13_1_V = alloca [10 x i8], align 1
  %weight_buf_13_2_V = alloca [10 x i8], align 1
  %weight_buf_13_3_V = alloca [10 x i8], align 1
  %weight_buf_13_4_V = alloca [10 x i8], align 1
  %weight_buf_13_5_V = alloca [10 x i8], align 1
  %weight_buf_13_6_V = alloca [10 x i8], align 1
  %weight_buf_13_7_V = alloca [10 x i8], align 1
  %weight_buf_14_0_V = alloca [10 x i8], align 1
  %weight_buf_14_1_V = alloca [10 x i8], align 1
  %weight_buf_14_2_V = alloca [10 x i8], align 1
  %weight_buf_14_3_V = alloca [10 x i8], align 1
  %weight_buf_14_4_V = alloca [10 x i8], align 1
  %weight_buf_14_5_V = alloca [10 x i8], align 1
  %weight_buf_14_6_V = alloca [10 x i8], align 1
  %weight_buf_14_7_V = alloca [10 x i8], align 1
  %weight_buf_15_0_V = alloca [10 x i8], align 1
  %weight_buf_15_1_V = alloca [10 x i8], align 1
  %weight_buf_15_2_V = alloca [10 x i8], align 1
  %weight_buf_15_3_V = alloca [10 x i8], align 1
  %weight_buf_15_4_V = alloca [10 x i8], align 1
  %weight_buf_15_5_V = alloca [10 x i8], align 1
  %weight_buf_15_6_V = alloca [10 x i8], align 1
  %weight_buf_15_7_V = alloca [10 x i8], align 1
  %weight_buf_16_0_V = alloca [10 x i8], align 1
  %weight_buf_16_1_V = alloca [10 x i8], align 1
  %weight_buf_16_2_V = alloca [10 x i8], align 1
  %weight_buf_16_3_V = alloca [10 x i8], align 1
  %weight_buf_16_4_V = alloca [10 x i8], align 1
  %weight_buf_16_5_V = alloca [10 x i8], align 1
  %weight_buf_16_6_V = alloca [10 x i8], align 1
  %weight_buf_16_7_V = alloca [10 x i8], align 1
  %weight_buf_17_0_V = alloca [10 x i8], align 1
  %weight_buf_17_1_V = alloca [10 x i8], align 1
  %weight_buf_17_2_V = alloca [10 x i8], align 1
  %weight_buf_17_3_V = alloca [10 x i8], align 1
  %weight_buf_17_4_V = alloca [10 x i8], align 1
  %weight_buf_17_5_V = alloca [10 x i8], align 1
  %weight_buf_17_6_V = alloca [10 x i8], align 1
  %weight_buf_17_7_V = alloca [10 x i8], align 1
  %weight_buf_18_0_V = alloca [10 x i8], align 1
  %weight_buf_18_1_V = alloca [10 x i8], align 1
  %weight_buf_18_2_V = alloca [10 x i8], align 1
  %weight_buf_18_3_V = alloca [10 x i8], align 1
  %weight_buf_18_4_V = alloca [10 x i8], align 1
  %weight_buf_18_5_V = alloca [10 x i8], align 1
  %weight_buf_18_6_V = alloca [10 x i8], align 1
  %weight_buf_18_7_V = alloca [10 x i8], align 1
  %weight_buf_19_0_V = alloca [10 x i8], align 1
  %weight_buf_19_1_V = alloca [10 x i8], align 1
  %weight_buf_19_2_V = alloca [10 x i8], align 1
  %weight_buf_19_3_V = alloca [10 x i8], align 1
  %weight_buf_19_4_V = alloca [10 x i8], align 1
  %weight_buf_19_5_V = alloca [10 x i8], align 1
  %weight_buf_19_6_V = alloca [10 x i8], align 1
  %weight_buf_19_7_V = alloca [10 x i8], align 1
  %weight_buf_20_0_V = alloca [10 x i8], align 1
  %weight_buf_20_1_V = alloca [10 x i8], align 1
  %weight_buf_20_2_V = alloca [10 x i8], align 1
  %weight_buf_20_3_V = alloca [10 x i8], align 1
  %weight_buf_20_4_V = alloca [10 x i8], align 1
  %weight_buf_20_5_V = alloca [10 x i8], align 1
  %weight_buf_20_6_V = alloca [10 x i8], align 1
  %weight_buf_20_7_V = alloca [10 x i8], align 1
  %weight_buf_21_0_V = alloca [10 x i8], align 1
  %weight_buf_21_1_V = alloca [10 x i8], align 1
  %weight_buf_21_2_V = alloca [10 x i8], align 1
  %weight_buf_21_3_V = alloca [10 x i8], align 1
  %weight_buf_21_4_V = alloca [10 x i8], align 1
  %weight_buf_21_5_V = alloca [10 x i8], align 1
  %weight_buf_21_6_V = alloca [10 x i8], align 1
  %weight_buf_21_7_V = alloca [10 x i8], align 1
  %weight_buf_22_0_V = alloca [10 x i8], align 1
  %weight_buf_22_1_V = alloca [10 x i8], align 1
  %weight_buf_22_2_V = alloca [10 x i8], align 1
  %weight_buf_22_3_V = alloca [10 x i8], align 1
  %weight_buf_22_4_V = alloca [10 x i8], align 1
  %weight_buf_22_5_V = alloca [10 x i8], align 1
  %weight_buf_22_6_V = alloca [10 x i8], align 1
  %weight_buf_22_7_V = alloca [10 x i8], align 1
  %weight_buf_23_0_V = alloca [10 x i8], align 1
  %weight_buf_23_1_V = alloca [10 x i8], align 1
  %weight_buf_23_2_V = alloca [10 x i8], align 1
  %weight_buf_23_3_V = alloca [10 x i8], align 1
  %weight_buf_23_4_V = alloca [10 x i8], align 1
  %weight_buf_23_5_V = alloca [10 x i8], align 1
  %weight_buf_23_6_V = alloca [10 x i8], align 1
  %weight_buf_23_7_V = alloca [10 x i8], align 1
  %weight_buf_24_0_V = alloca [10 x i8], align 1
  %weight_buf_24_1_V = alloca [10 x i8], align 1
  %weight_buf_24_2_V = alloca [10 x i8], align 1
  %weight_buf_24_3_V = alloca [10 x i8], align 1
  %weight_buf_24_4_V = alloca [10 x i8], align 1
  %weight_buf_24_5_V = alloca [10 x i8], align 1
  %weight_buf_24_6_V = alloca [10 x i8], align 1
  %weight_buf_24_7_V = alloca [10 x i8], align 1
  %weight_buf_25_0_V = alloca [10 x i8], align 1
  %weight_buf_25_1_V = alloca [10 x i8], align 1
  %weight_buf_25_2_V = alloca [10 x i8], align 1
  %weight_buf_25_3_V = alloca [10 x i8], align 1
  %weight_buf_25_4_V = alloca [10 x i8], align 1
  %weight_buf_25_5_V = alloca [10 x i8], align 1
  %weight_buf_25_6_V = alloca [10 x i8], align 1
  %weight_buf_25_7_V = alloca [10 x i8], align 1
  %weight_buf_26_0_V = alloca [10 x i8], align 1
  %weight_buf_26_1_V = alloca [10 x i8], align 1
  %weight_buf_26_2_V = alloca [10 x i8], align 1
  %weight_buf_26_3_V = alloca [10 x i8], align 1
  %weight_buf_26_4_V = alloca [10 x i8], align 1
  %weight_buf_26_5_V = alloca [10 x i8], align 1
  %weight_buf_26_6_V = alloca [10 x i8], align 1
  %weight_buf_26_7_V = alloca [10 x i8], align 1
  %weight_buf_27_0_V = alloca [10 x i8], align 1
  %weight_buf_27_1_V = alloca [10 x i8], align 1
  %weight_buf_27_2_V = alloca [10 x i8], align 1
  %weight_buf_27_3_V = alloca [10 x i8], align 1
  %weight_buf_27_4_V = alloca [10 x i8], align 1
  %weight_buf_27_5_V = alloca [10 x i8], align 1
  %weight_buf_27_6_V = alloca [10 x i8], align 1
  %weight_buf_27_7_V = alloca [10 x i8], align 1
  %weight_buf_28_0_V = alloca [10 x i8], align 1
  %weight_buf_28_1_V = alloca [10 x i8], align 1
  %weight_buf_28_2_V = alloca [10 x i8], align 1
  %weight_buf_28_3_V = alloca [10 x i8], align 1
  %weight_buf_28_4_V = alloca [10 x i8], align 1
  %weight_buf_28_5_V = alloca [10 x i8], align 1
  %weight_buf_28_6_V = alloca [10 x i8], align 1
  %weight_buf_28_7_V = alloca [10 x i8], align 1
  %weight_buf_29_0_V = alloca [10 x i8], align 1
  %weight_buf_29_1_V = alloca [10 x i8], align 1
  %weight_buf_29_2_V = alloca [10 x i8], align 1
  %weight_buf_29_3_V = alloca [10 x i8], align 1
  %weight_buf_29_4_V = alloca [10 x i8], align 1
  %weight_buf_29_5_V = alloca [10 x i8], align 1
  %weight_buf_29_6_V = alloca [10 x i8], align 1
  %weight_buf_29_7_V = alloca [10 x i8], align 1
  %weight_buf_30_0_V = alloca [10 x i8], align 1
  %weight_buf_30_1_V = alloca [10 x i8], align 1
  %weight_buf_30_2_V = alloca [10 x i8], align 1
  %weight_buf_30_3_V = alloca [10 x i8], align 1
  %weight_buf_30_4_V = alloca [10 x i8], align 1
  %weight_buf_30_5_V = alloca [10 x i8], align 1
  %weight_buf_30_6_V = alloca [10 x i8], align 1
  %weight_buf_30_7_V = alloca [10 x i8], align 1
  %weight_buf_31_0_V = alloca [10 x i8], align 1
  %weight_buf_31_1_V = alloca [10 x i8], align 1
  %weight_buf_31_2_V = alloca [10 x i8], align 1
  %weight_buf_31_3_V = alloca [10 x i8], align 1
  %weight_buf_31_4_V = alloca [10 x i8], align 1
  %weight_buf_31_5_V = alloca [10 x i8], align 1
  %weight_buf_31_6_V = alloca [10 x i8], align 1
  %weight_buf_31_7_V = alloca [10 x i8], align 1
  %out_buf_V = alloca [128 x i4], align 1
  call void (...)* @_ssdm_op_SpecInterface(i32 0, [10 x i8]* @p_str, i32 0, i32 0, [1 x i8]* @p_str1, i32 0, i32 0, [12 x i8]* @p_str2, [1 x i8]* @p_str1, [1 x i8]* @p_str1, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1) nounwind
  call void (...)* @_ssdm_op_SpecInterface(i64* %in_stream_data_V, i8* %in_stream_keep_V, i8* %in_stream_strb_V, i4* %in_stream_user_V, i1* %in_stream_last_V, i5* %in_stream_id_V, i5* %in_stream_dest_V, [5 x i8]* @p_str3, i32 1, i32 1, [5 x i8]* @p_str4, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1, [1 x i8]* @p_str1, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1)
  call void (...)* @_ssdm_op_SpecInterface(i64* %out_stream_data_V, i8* %out_stream_keep_V, i8* %out_stream_strb_V, i4* %out_stream_user_V, i1* %out_stream_last_V, i5* %out_stream_id_V, i5* %out_stream_dest_V, [5 x i8]* @p_str3, i32 1, i32 1, [5 x i8]* @p_str4, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1, [1 x i8]* @p_str1, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1)
  br label %0

; <label>:0                                       ; preds = %1, %arrayctor.loop1.preheader
  %is_idx = phi i3 [ 0, %arrayctor.loop1.preheader ], [ %tmp, %1 ]
  %i = phi i4 [ 0, %arrayctor.loop1.preheader ], [ %i_1, %1 ]
  %exitcond1 = icmp eq i3 %is_idx, -3
  %tmp = add i3 %is_idx, 1
  br i1 %exitcond1, label %.preheader952.preheader, label %1

.preheader952.preheader:                          ; preds = %0
  br label %.preheader952

; <label>:1                                       ; preds = %0
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 5, i64 5, i64 5)
  call void (...)* @_ssdm_op_SpecLoopName([11 x i8]* @p_str7) nounwind
  %tmp_9 = call i32 (...)* @_ssdm_op_SpecRegionBegin([11 x i8]* @p_str7)
  call void (...)* @_ssdm_op_SpecPipeline(i32 1, i32 1, i32 1, i32 0, [1 x i8]* @p_str1) nounwind
  %empty_7 = call { i64, i8, i8, i4, i1, i5, i5 } @_ssdm_op_Read.axis.volatile.i64P.i8P.i8P.i4P.i1P.i5P.i5P(i64* %in_stream_data_V, i8* %in_stream_keep_V, i8* %in_stream_strb_V, i4* %in_stream_user_V, i1* %in_stream_last_V, i5* %in_stream_id_V, i5* %in_stream_dest_V)
  %ret = extractvalue { i64, i8, i8, i4, i1, i5, i5 } %empty_7, 0
  %tmp_2 = zext i4 %i to i64
  %tmp_8 = trunc i64 %ret to i32
  %offset_buf_V_addr = getelementptr [10 x i32]* %offset_buf_V, i64 0, i64 %tmp_2
  store i32 %tmp_8, i32* %offset_buf_V_addr, align 8
  %tmp_3 = or i4 %i, 1
  %tmp_4 = zext i4 %tmp_3 to i64
  %p_Result_1 = call i32 @_ssdm_op_PartSelect.i32.i64.i32.i32(i64 %ret, i32 32, i32 63)
  %offset_buf_V_addr_1 = getelementptr [10 x i32]* %offset_buf_V, i64 0, i64 %tmp_4
  store i32 %p_Result_1, i32* %offset_buf_V_addr_1, align 4
  %empty_8 = call i32 (...)* @_ssdm_op_SpecRegionEnd([11 x i8]* @p_str7, i32 %tmp_9)
  %i_1 = add i4 2, %i
  br label %0

.preheader952:                                    ; preds = %.preheader952.preheader, %6
  %indvars_iv1 = phi i9 [ %indvars_iv_next1, %6 ], [ 37, %.preheader952.preheader ]
  %is_idx_1 = phi i9 [ %tmp_6, %6 ], [ 5, %.preheader952.preheader ]
  %i2 = phi i4 [ %i_2, %6 ], [ 0, %.preheader952.preheader ]
  %exitcond2 = icmp eq i4 %i2, -6
  %i_2 = add i4 %i2, 1
  br i1 %exitcond2, label %.preheader951.preheader, label %2

.preheader951.preheader:                          ; preds = %.preheader952
  %out_tmp_9_V_1 = alloca i32
  %out_tmp_9_V_4 = alloca i32
  %out_tmp_9_V_6 = alloca i32
  %out_tmp_9_V_8 = alloca i32
  %out_tmp_9_V_10 = alloca i32
  %out_tmp_9_V_12 = alloca i32
  %out_tmp_9_V_14 = alloca i32
  %out_tmp_9_V_15 = alloca i32
  %out_tmp_9_V_16 = alloca i32
  %out_tmp_9_V_17 = alloca i32
  br label %.preheader951

; <label>:2                                       ; preds = %.preheader952
  %empty_9 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 10, i64 10, i64 10)
  call void (...)* @_ssdm_op_SpecLoopName([9 x i8]* @p_str8) nounwind
  %tmp_1 = call i32 (...)* @_ssdm_op_SpecRegionBegin([9 x i8]* @p_str8)
  %tmp_6 = add i9 %is_idx_1, 32
  %tmp_7 = zext i4 %i2 to i64
  %weight_buf_0_0_V_a = getelementptr [10 x i8]* %weight_buf_0_0_V, i64 0, i64 %tmp_7
  %weight_buf_1_0_V_a = getelementptr [10 x i8]* %weight_buf_1_0_V, i64 0, i64 %tmp_7
  %weight_buf_2_0_V_a = getelementptr [10 x i8]* %weight_buf_2_0_V, i64 0, i64 %tmp_7
  %weight_buf_3_0_V_a = getelementptr [10 x i8]* %weight_buf_3_0_V, i64 0, i64 %tmp_7
  %weight_buf_4_0_V_a = getelementptr [10 x i8]* %weight_buf_4_0_V, i64 0, i64 %tmp_7
  %weight_buf_5_0_V_a = getelementptr [10 x i8]* %weight_buf_5_0_V, i64 0, i64 %tmp_7
  %weight_buf_6_0_V_a = getelementptr [10 x i8]* %weight_buf_6_0_V, i64 0, i64 %tmp_7
  %weight_buf_7_0_V_a = getelementptr [10 x i8]* %weight_buf_7_0_V, i64 0, i64 %tmp_7
  %weight_buf_8_0_V_a = getelementptr [10 x i8]* %weight_buf_8_0_V, i64 0, i64 %tmp_7
  %weight_buf_9_0_V_a = getelementptr [10 x i8]* %weight_buf_9_0_V, i64 0, i64 %tmp_7
  %weight_buf_10_0_V_s = getelementptr [10 x i8]* %weight_buf_10_0_V, i64 0, i64 %tmp_7
  %weight_buf_11_0_V_s = getelementptr [10 x i8]* %weight_buf_11_0_V, i64 0, i64 %tmp_7
  %weight_buf_12_0_V_s = getelementptr [10 x i8]* %weight_buf_12_0_V, i64 0, i64 %tmp_7
  %weight_buf_13_0_V_s = getelementptr [10 x i8]* %weight_buf_13_0_V, i64 0, i64 %tmp_7
  %weight_buf_14_0_V_s = getelementptr [10 x i8]* %weight_buf_14_0_V, i64 0, i64 %tmp_7
  %weight_buf_15_0_V_s = getelementptr [10 x i8]* %weight_buf_15_0_V, i64 0, i64 %tmp_7
  %weight_buf_16_0_V_s = getelementptr [10 x i8]* %weight_buf_16_0_V, i64 0, i64 %tmp_7
  %weight_buf_17_0_V_s = getelementptr [10 x i8]* %weight_buf_17_0_V, i64 0, i64 %tmp_7
  %weight_buf_18_0_V_s = getelementptr [10 x i8]* %weight_buf_18_0_V, i64 0, i64 %tmp_7
  %weight_buf_19_0_V_s = getelementptr [10 x i8]* %weight_buf_19_0_V, i64 0, i64 %tmp_7
  %weight_buf_20_0_V_s = getelementptr [10 x i8]* %weight_buf_20_0_V, i64 0, i64 %tmp_7
  %weight_buf_21_0_V_s = getelementptr [10 x i8]* %weight_buf_21_0_V, i64 0, i64 %tmp_7
  %weight_buf_22_0_V_s = getelementptr [10 x i8]* %weight_buf_22_0_V, i64 0, i64 %tmp_7
  %weight_buf_23_0_V_s = getelementptr [10 x i8]* %weight_buf_23_0_V, i64 0, i64 %tmp_7
  %weight_buf_24_0_V_s = getelementptr [10 x i8]* %weight_buf_24_0_V, i64 0, i64 %tmp_7
  %weight_buf_25_0_V_s = getelementptr [10 x i8]* %weight_buf_25_0_V, i64 0, i64 %tmp_7
  %weight_buf_26_0_V_s = getelementptr [10 x i8]* %weight_buf_26_0_V, i64 0, i64 %tmp_7
  %weight_buf_27_0_V_s = getelementptr [10 x i8]* %weight_buf_27_0_V, i64 0, i64 %tmp_7
  %weight_buf_28_0_V_s = getelementptr [10 x i8]* %weight_buf_28_0_V, i64 0, i64 %tmp_7
  %weight_buf_29_0_V_s = getelementptr [10 x i8]* %weight_buf_29_0_V, i64 0, i64 %tmp_7
  %weight_buf_30_0_V_s = getelementptr [10 x i8]* %weight_buf_30_0_V, i64 0, i64 %tmp_7
  %weight_buf_31_0_V_s = getelementptr [10 x i8]* %weight_buf_31_0_V, i64 0, i64 %tmp_7
  %weight_buf_0_1_V_a = getelementptr [10 x i8]* %weight_buf_0_1_V, i64 0, i64 %tmp_7
  %weight_buf_1_1_V_a = getelementptr [10 x i8]* %weight_buf_1_1_V, i64 0, i64 %tmp_7
  %weight_buf_2_1_V_a = getelementptr [10 x i8]* %weight_buf_2_1_V, i64 0, i64 %tmp_7
  %weight_buf_3_1_V_a = getelementptr [10 x i8]* %weight_buf_3_1_V, i64 0, i64 %tmp_7
  %weight_buf_4_1_V_a = getelementptr [10 x i8]* %weight_buf_4_1_V, i64 0, i64 %tmp_7
  %weight_buf_5_1_V_a = getelementptr [10 x i8]* %weight_buf_5_1_V, i64 0, i64 %tmp_7
  %weight_buf_6_1_V_a = getelementptr [10 x i8]* %weight_buf_6_1_V, i64 0, i64 %tmp_7
  %weight_buf_7_1_V_a = getelementptr [10 x i8]* %weight_buf_7_1_V, i64 0, i64 %tmp_7
  %weight_buf_8_1_V_a = getelementptr [10 x i8]* %weight_buf_8_1_V, i64 0, i64 %tmp_7
  %weight_buf_9_1_V_a = getelementptr [10 x i8]* %weight_buf_9_1_V, i64 0, i64 %tmp_7
  %weight_buf_10_1_V_s = getelementptr [10 x i8]* %weight_buf_10_1_V, i64 0, i64 %tmp_7
  %weight_buf_11_1_V_s = getelementptr [10 x i8]* %weight_buf_11_1_V, i64 0, i64 %tmp_7
  %weight_buf_12_1_V_s = getelementptr [10 x i8]* %weight_buf_12_1_V, i64 0, i64 %tmp_7
  %weight_buf_13_1_V_s = getelementptr [10 x i8]* %weight_buf_13_1_V, i64 0, i64 %tmp_7
  %weight_buf_14_1_V_s = getelementptr [10 x i8]* %weight_buf_14_1_V, i64 0, i64 %tmp_7
  %weight_buf_15_1_V_s = getelementptr [10 x i8]* %weight_buf_15_1_V, i64 0, i64 %tmp_7
  %weight_buf_16_1_V_s = getelementptr [10 x i8]* %weight_buf_16_1_V, i64 0, i64 %tmp_7
  %weight_buf_17_1_V_s = getelementptr [10 x i8]* %weight_buf_17_1_V, i64 0, i64 %tmp_7
  %weight_buf_18_1_V_s = getelementptr [10 x i8]* %weight_buf_18_1_V, i64 0, i64 %tmp_7
  %weight_buf_19_1_V_s = getelementptr [10 x i8]* %weight_buf_19_1_V, i64 0, i64 %tmp_7
  %weight_buf_20_1_V_s = getelementptr [10 x i8]* %weight_buf_20_1_V, i64 0, i64 %tmp_7
  %weight_buf_21_1_V_s = getelementptr [10 x i8]* %weight_buf_21_1_V, i64 0, i64 %tmp_7
  %weight_buf_22_1_V_s = getelementptr [10 x i8]* %weight_buf_22_1_V, i64 0, i64 %tmp_7
  %weight_buf_23_1_V_s = getelementptr [10 x i8]* %weight_buf_23_1_V, i64 0, i64 %tmp_7
  %weight_buf_24_1_V_s = getelementptr [10 x i8]* %weight_buf_24_1_V, i64 0, i64 %tmp_7
  %weight_buf_25_1_V_s = getelementptr [10 x i8]* %weight_buf_25_1_V, i64 0, i64 %tmp_7
  %weight_buf_26_1_V_s = getelementptr [10 x i8]* %weight_buf_26_1_V, i64 0, i64 %tmp_7
  %weight_buf_27_1_V_s = getelementptr [10 x i8]* %weight_buf_27_1_V, i64 0, i64 %tmp_7
  %weight_buf_28_1_V_s = getelementptr [10 x i8]* %weight_buf_28_1_V, i64 0, i64 %tmp_7
  %weight_buf_29_1_V_s = getelementptr [10 x i8]* %weight_buf_29_1_V, i64 0, i64 %tmp_7
  %weight_buf_30_1_V_s = getelementptr [10 x i8]* %weight_buf_30_1_V, i64 0, i64 %tmp_7
  %weight_buf_31_1_V_s = getelementptr [10 x i8]* %weight_buf_31_1_V, i64 0, i64 %tmp_7
  %weight_buf_0_2_V_a = getelementptr [10 x i8]* %weight_buf_0_2_V, i64 0, i64 %tmp_7
  %weight_buf_1_2_V_a = getelementptr [10 x i8]* %weight_buf_1_2_V, i64 0, i64 %tmp_7
  %weight_buf_2_2_V_a = getelementptr [10 x i8]* %weight_buf_2_2_V, i64 0, i64 %tmp_7
  %weight_buf_3_2_V_a = getelementptr [10 x i8]* %weight_buf_3_2_V, i64 0, i64 %tmp_7
  %weight_buf_4_2_V_a = getelementptr [10 x i8]* %weight_buf_4_2_V, i64 0, i64 %tmp_7
  %weight_buf_5_2_V_a = getelementptr [10 x i8]* %weight_buf_5_2_V, i64 0, i64 %tmp_7
  %weight_buf_6_2_V_a = getelementptr [10 x i8]* %weight_buf_6_2_V, i64 0, i64 %tmp_7
  %weight_buf_7_2_V_a = getelementptr [10 x i8]* %weight_buf_7_2_V, i64 0, i64 %tmp_7
  %weight_buf_8_2_V_a = getelementptr [10 x i8]* %weight_buf_8_2_V, i64 0, i64 %tmp_7
  %weight_buf_9_2_V_a = getelementptr [10 x i8]* %weight_buf_9_2_V, i64 0, i64 %tmp_7
  %weight_buf_10_2_V_s = getelementptr [10 x i8]* %weight_buf_10_2_V, i64 0, i64 %tmp_7
  %weight_buf_11_2_V_s = getelementptr [10 x i8]* %weight_buf_11_2_V, i64 0, i64 %tmp_7
  %weight_buf_12_2_V_s = getelementptr [10 x i8]* %weight_buf_12_2_V, i64 0, i64 %tmp_7
  %weight_buf_13_2_V_s = getelementptr [10 x i8]* %weight_buf_13_2_V, i64 0, i64 %tmp_7
  %weight_buf_14_2_V_s = getelementptr [10 x i8]* %weight_buf_14_2_V, i64 0, i64 %tmp_7
  %weight_buf_15_2_V_s = getelementptr [10 x i8]* %weight_buf_15_2_V, i64 0, i64 %tmp_7
  %weight_buf_16_2_V_s = getelementptr [10 x i8]* %weight_buf_16_2_V, i64 0, i64 %tmp_7
  %weight_buf_17_2_V_s = getelementptr [10 x i8]* %weight_buf_17_2_V, i64 0, i64 %tmp_7
  %weight_buf_18_2_V_s = getelementptr [10 x i8]* %weight_buf_18_2_V, i64 0, i64 %tmp_7
  %weight_buf_19_2_V_s = getelementptr [10 x i8]* %weight_buf_19_2_V, i64 0, i64 %tmp_7
  %weight_buf_20_2_V_s = getelementptr [10 x i8]* %weight_buf_20_2_V, i64 0, i64 %tmp_7
  %weight_buf_21_2_V_s = getelementptr [10 x i8]* %weight_buf_21_2_V, i64 0, i64 %tmp_7
  %weight_buf_22_2_V_s = getelementptr [10 x i8]* %weight_buf_22_2_V, i64 0, i64 %tmp_7
  %weight_buf_23_2_V_s = getelementptr [10 x i8]* %weight_buf_23_2_V, i64 0, i64 %tmp_7
  %weight_buf_24_2_V_s = getelementptr [10 x i8]* %weight_buf_24_2_V, i64 0, i64 %tmp_7
  %weight_buf_25_2_V_s = getelementptr [10 x i8]* %weight_buf_25_2_V, i64 0, i64 %tmp_7
  %weight_buf_26_2_V_s = getelementptr [10 x i8]* %weight_buf_26_2_V, i64 0, i64 %tmp_7
  %weight_buf_27_2_V_s = getelementptr [10 x i8]* %weight_buf_27_2_V, i64 0, i64 %tmp_7
  %weight_buf_28_2_V_s = getelementptr [10 x i8]* %weight_buf_28_2_V, i64 0, i64 %tmp_7
  %weight_buf_29_2_V_s = getelementptr [10 x i8]* %weight_buf_29_2_V, i64 0, i64 %tmp_7
  %weight_buf_30_2_V_s = getelementptr [10 x i8]* %weight_buf_30_2_V, i64 0, i64 %tmp_7
  %weight_buf_31_2_V_s = getelementptr [10 x i8]* %weight_buf_31_2_V, i64 0, i64 %tmp_7
  %weight_buf_0_3_V_a = getelementptr [10 x i8]* %weight_buf_0_3_V, i64 0, i64 %tmp_7
  %weight_buf_1_3_V_a = getelementptr [10 x i8]* %weight_buf_1_3_V, i64 0, i64 %tmp_7
  %weight_buf_2_3_V_a = getelementptr [10 x i8]* %weight_buf_2_3_V, i64 0, i64 %tmp_7
  %weight_buf_3_3_V_a = getelementptr [10 x i8]* %weight_buf_3_3_V, i64 0, i64 %tmp_7
  %weight_buf_4_3_V_a = getelementptr [10 x i8]* %weight_buf_4_3_V, i64 0, i64 %tmp_7
  %weight_buf_5_3_V_a = getelementptr [10 x i8]* %weight_buf_5_3_V, i64 0, i64 %tmp_7
  %weight_buf_6_3_V_a = getelementptr [10 x i8]* %weight_buf_6_3_V, i64 0, i64 %tmp_7
  %weight_buf_7_3_V_a = getelementptr [10 x i8]* %weight_buf_7_3_V, i64 0, i64 %tmp_7
  %weight_buf_8_3_V_a = getelementptr [10 x i8]* %weight_buf_8_3_V, i64 0, i64 %tmp_7
  %weight_buf_9_3_V_a = getelementptr [10 x i8]* %weight_buf_9_3_V, i64 0, i64 %tmp_7
  %weight_buf_10_3_V_s = getelementptr [10 x i8]* %weight_buf_10_3_V, i64 0, i64 %tmp_7
  %weight_buf_11_3_V_s = getelementptr [10 x i8]* %weight_buf_11_3_V, i64 0, i64 %tmp_7
  %weight_buf_12_3_V_s = getelementptr [10 x i8]* %weight_buf_12_3_V, i64 0, i64 %tmp_7
  %weight_buf_13_3_V_s = getelementptr [10 x i8]* %weight_buf_13_3_V, i64 0, i64 %tmp_7
  %weight_buf_14_3_V_s = getelementptr [10 x i8]* %weight_buf_14_3_V, i64 0, i64 %tmp_7
  %weight_buf_15_3_V_s = getelementptr [10 x i8]* %weight_buf_15_3_V, i64 0, i64 %tmp_7
  %weight_buf_16_3_V_s = getelementptr [10 x i8]* %weight_buf_16_3_V, i64 0, i64 %tmp_7
  %weight_buf_17_3_V_s = getelementptr [10 x i8]* %weight_buf_17_3_V, i64 0, i64 %tmp_7
  %weight_buf_18_3_V_s = getelementptr [10 x i8]* %weight_buf_18_3_V, i64 0, i64 %tmp_7
  %weight_buf_19_3_V_s = getelementptr [10 x i8]* %weight_buf_19_3_V, i64 0, i64 %tmp_7
  %weight_buf_20_3_V_s = getelementptr [10 x i8]* %weight_buf_20_3_V, i64 0, i64 %tmp_7
  %weight_buf_21_3_V_s = getelementptr [10 x i8]* %weight_buf_21_3_V, i64 0, i64 %tmp_7
  %weight_buf_22_3_V_s = getelementptr [10 x i8]* %weight_buf_22_3_V, i64 0, i64 %tmp_7
  %weight_buf_23_3_V_s = getelementptr [10 x i8]* %weight_buf_23_3_V, i64 0, i64 %tmp_7
  %weight_buf_24_3_V_s = getelementptr [10 x i8]* %weight_buf_24_3_V, i64 0, i64 %tmp_7
  %weight_buf_25_3_V_s = getelementptr [10 x i8]* %weight_buf_25_3_V, i64 0, i64 %tmp_7
  %weight_buf_26_3_V_s = getelementptr [10 x i8]* %weight_buf_26_3_V, i64 0, i64 %tmp_7
  %weight_buf_27_3_V_s = getelementptr [10 x i8]* %weight_buf_27_3_V, i64 0, i64 %tmp_7
  %weight_buf_28_3_V_s = getelementptr [10 x i8]* %weight_buf_28_3_V, i64 0, i64 %tmp_7
  %weight_buf_29_3_V_s = getelementptr [10 x i8]* %weight_buf_29_3_V, i64 0, i64 %tmp_7
  %weight_buf_30_3_V_s = getelementptr [10 x i8]* %weight_buf_30_3_V, i64 0, i64 %tmp_7
  %weight_buf_31_3_V_s = getelementptr [10 x i8]* %weight_buf_31_3_V, i64 0, i64 %tmp_7
  %weight_buf_0_4_V_a = getelementptr [10 x i8]* %weight_buf_0_4_V, i64 0, i64 %tmp_7
  %weight_buf_1_4_V_a = getelementptr [10 x i8]* %weight_buf_1_4_V, i64 0, i64 %tmp_7
  %weight_buf_2_4_V_a = getelementptr [10 x i8]* %weight_buf_2_4_V, i64 0, i64 %tmp_7
  %weight_buf_3_4_V_a = getelementptr [10 x i8]* %weight_buf_3_4_V, i64 0, i64 %tmp_7
  %weight_buf_4_4_V_a = getelementptr [10 x i8]* %weight_buf_4_4_V, i64 0, i64 %tmp_7
  %weight_buf_5_4_V_a = getelementptr [10 x i8]* %weight_buf_5_4_V, i64 0, i64 %tmp_7
  %weight_buf_6_4_V_a = getelementptr [10 x i8]* %weight_buf_6_4_V, i64 0, i64 %tmp_7
  %weight_buf_7_4_V_a = getelementptr [10 x i8]* %weight_buf_7_4_V, i64 0, i64 %tmp_7
  %weight_buf_8_4_V_a = getelementptr [10 x i8]* %weight_buf_8_4_V, i64 0, i64 %tmp_7
  %weight_buf_9_4_V_a = getelementptr [10 x i8]* %weight_buf_9_4_V, i64 0, i64 %tmp_7
  %weight_buf_10_4_V_s = getelementptr [10 x i8]* %weight_buf_10_4_V, i64 0, i64 %tmp_7
  %weight_buf_11_4_V_s = getelementptr [10 x i8]* %weight_buf_11_4_V, i64 0, i64 %tmp_7
  %weight_buf_12_4_V_s = getelementptr [10 x i8]* %weight_buf_12_4_V, i64 0, i64 %tmp_7
  %weight_buf_13_4_V_s = getelementptr [10 x i8]* %weight_buf_13_4_V, i64 0, i64 %tmp_7
  %weight_buf_14_4_V_s = getelementptr [10 x i8]* %weight_buf_14_4_V, i64 0, i64 %tmp_7
  %weight_buf_15_4_V_s = getelementptr [10 x i8]* %weight_buf_15_4_V, i64 0, i64 %tmp_7
  %weight_buf_16_4_V_s = getelementptr [10 x i8]* %weight_buf_16_4_V, i64 0, i64 %tmp_7
  %weight_buf_17_4_V_s = getelementptr [10 x i8]* %weight_buf_17_4_V, i64 0, i64 %tmp_7
  %weight_buf_18_4_V_s = getelementptr [10 x i8]* %weight_buf_18_4_V, i64 0, i64 %tmp_7
  %weight_buf_19_4_V_s = getelementptr [10 x i8]* %weight_buf_19_4_V, i64 0, i64 %tmp_7
  %weight_buf_20_4_V_s = getelementptr [10 x i8]* %weight_buf_20_4_V, i64 0, i64 %tmp_7
  %weight_buf_21_4_V_s = getelementptr [10 x i8]* %weight_buf_21_4_V, i64 0, i64 %tmp_7
  %weight_buf_22_4_V_s = getelementptr [10 x i8]* %weight_buf_22_4_V, i64 0, i64 %tmp_7
  %weight_buf_23_4_V_s = getelementptr [10 x i8]* %weight_buf_23_4_V, i64 0, i64 %tmp_7
  %weight_buf_24_4_V_s = getelementptr [10 x i8]* %weight_buf_24_4_V, i64 0, i64 %tmp_7
  %weight_buf_25_4_V_s = getelementptr [10 x i8]* %weight_buf_25_4_V, i64 0, i64 %tmp_7
  %weight_buf_26_4_V_s = getelementptr [10 x i8]* %weight_buf_26_4_V, i64 0, i64 %tmp_7
  %weight_buf_27_4_V_s = getelementptr [10 x i8]* %weight_buf_27_4_V, i64 0, i64 %tmp_7
  %weight_buf_28_4_V_s = getelementptr [10 x i8]* %weight_buf_28_4_V, i64 0, i64 %tmp_7
  %weight_buf_29_4_V_s = getelementptr [10 x i8]* %weight_buf_29_4_V, i64 0, i64 %tmp_7
  %weight_buf_30_4_V_s = getelementptr [10 x i8]* %weight_buf_30_4_V, i64 0, i64 %tmp_7
  %weight_buf_31_4_V_s = getelementptr [10 x i8]* %weight_buf_31_4_V, i64 0, i64 %tmp_7
  %weight_buf_0_5_V_a = getelementptr [10 x i8]* %weight_buf_0_5_V, i64 0, i64 %tmp_7
  %weight_buf_1_5_V_a = getelementptr [10 x i8]* %weight_buf_1_5_V, i64 0, i64 %tmp_7
  %weight_buf_2_5_V_a = getelementptr [10 x i8]* %weight_buf_2_5_V, i64 0, i64 %tmp_7
  %weight_buf_3_5_V_a = getelementptr [10 x i8]* %weight_buf_3_5_V, i64 0, i64 %tmp_7
  %weight_buf_4_5_V_a = getelementptr [10 x i8]* %weight_buf_4_5_V, i64 0, i64 %tmp_7
  %weight_buf_5_5_V_a = getelementptr [10 x i8]* %weight_buf_5_5_V, i64 0, i64 %tmp_7
  %weight_buf_6_5_V_a = getelementptr [10 x i8]* %weight_buf_6_5_V, i64 0, i64 %tmp_7
  %weight_buf_7_5_V_a = getelementptr [10 x i8]* %weight_buf_7_5_V, i64 0, i64 %tmp_7
  %weight_buf_8_5_V_a = getelementptr [10 x i8]* %weight_buf_8_5_V, i64 0, i64 %tmp_7
  %weight_buf_9_5_V_a = getelementptr [10 x i8]* %weight_buf_9_5_V, i64 0, i64 %tmp_7
  %weight_buf_10_5_V_s = getelementptr [10 x i8]* %weight_buf_10_5_V, i64 0, i64 %tmp_7
  %weight_buf_11_5_V_s = getelementptr [10 x i8]* %weight_buf_11_5_V, i64 0, i64 %tmp_7
  %weight_buf_12_5_V_s = getelementptr [10 x i8]* %weight_buf_12_5_V, i64 0, i64 %tmp_7
  %weight_buf_13_5_V_s = getelementptr [10 x i8]* %weight_buf_13_5_V, i64 0, i64 %tmp_7
  %weight_buf_14_5_V_s = getelementptr [10 x i8]* %weight_buf_14_5_V, i64 0, i64 %tmp_7
  %weight_buf_15_5_V_s = getelementptr [10 x i8]* %weight_buf_15_5_V, i64 0, i64 %tmp_7
  %weight_buf_16_5_V_s = getelementptr [10 x i8]* %weight_buf_16_5_V, i64 0, i64 %tmp_7
  %weight_buf_17_5_V_s = getelementptr [10 x i8]* %weight_buf_17_5_V, i64 0, i64 %tmp_7
  %weight_buf_18_5_V_s = getelementptr [10 x i8]* %weight_buf_18_5_V, i64 0, i64 %tmp_7
  %weight_buf_19_5_V_s = getelementptr [10 x i8]* %weight_buf_19_5_V, i64 0, i64 %tmp_7
  %weight_buf_20_5_V_s = getelementptr [10 x i8]* %weight_buf_20_5_V, i64 0, i64 %tmp_7
  %weight_buf_21_5_V_s = getelementptr [10 x i8]* %weight_buf_21_5_V, i64 0, i64 %tmp_7
  %weight_buf_22_5_V_s = getelementptr [10 x i8]* %weight_buf_22_5_V, i64 0, i64 %tmp_7
  %weight_buf_23_5_V_s = getelementptr [10 x i8]* %weight_buf_23_5_V, i64 0, i64 %tmp_7
  %weight_buf_24_5_V_s = getelementptr [10 x i8]* %weight_buf_24_5_V, i64 0, i64 %tmp_7
  %weight_buf_25_5_V_s = getelementptr [10 x i8]* %weight_buf_25_5_V, i64 0, i64 %tmp_7
  %weight_buf_26_5_V_s = getelementptr [10 x i8]* %weight_buf_26_5_V, i64 0, i64 %tmp_7
  %weight_buf_27_5_V_s = getelementptr [10 x i8]* %weight_buf_27_5_V, i64 0, i64 %tmp_7
  %weight_buf_28_5_V_s = getelementptr [10 x i8]* %weight_buf_28_5_V, i64 0, i64 %tmp_7
  %weight_buf_29_5_V_s = getelementptr [10 x i8]* %weight_buf_29_5_V, i64 0, i64 %tmp_7
  %weight_buf_30_5_V_s = getelementptr [10 x i8]* %weight_buf_30_5_V, i64 0, i64 %tmp_7
  %weight_buf_31_5_V_s = getelementptr [10 x i8]* %weight_buf_31_5_V, i64 0, i64 %tmp_7
  %weight_buf_0_6_V_a = getelementptr [10 x i8]* %weight_buf_0_6_V, i64 0, i64 %tmp_7
  %weight_buf_1_6_V_a = getelementptr [10 x i8]* %weight_buf_1_6_V, i64 0, i64 %tmp_7
  %weight_buf_2_6_V_a = getelementptr [10 x i8]* %weight_buf_2_6_V, i64 0, i64 %tmp_7
  %weight_buf_3_6_V_a = getelementptr [10 x i8]* %weight_buf_3_6_V, i64 0, i64 %tmp_7
  %weight_buf_4_6_V_a = getelementptr [10 x i8]* %weight_buf_4_6_V, i64 0, i64 %tmp_7
  %weight_buf_5_6_V_a = getelementptr [10 x i8]* %weight_buf_5_6_V, i64 0, i64 %tmp_7
  %weight_buf_6_6_V_a = getelementptr [10 x i8]* %weight_buf_6_6_V, i64 0, i64 %tmp_7
  %weight_buf_7_6_V_a = getelementptr [10 x i8]* %weight_buf_7_6_V, i64 0, i64 %tmp_7
  %weight_buf_8_6_V_a = getelementptr [10 x i8]* %weight_buf_8_6_V, i64 0, i64 %tmp_7
  %weight_buf_9_6_V_a = getelementptr [10 x i8]* %weight_buf_9_6_V, i64 0, i64 %tmp_7
  %weight_buf_10_6_V_s = getelementptr [10 x i8]* %weight_buf_10_6_V, i64 0, i64 %tmp_7
  %weight_buf_11_6_V_s = getelementptr [10 x i8]* %weight_buf_11_6_V, i64 0, i64 %tmp_7
  %weight_buf_12_6_V_s = getelementptr [10 x i8]* %weight_buf_12_6_V, i64 0, i64 %tmp_7
  %weight_buf_13_6_V_s = getelementptr [10 x i8]* %weight_buf_13_6_V, i64 0, i64 %tmp_7
  %weight_buf_14_6_V_s = getelementptr [10 x i8]* %weight_buf_14_6_V, i64 0, i64 %tmp_7
  %weight_buf_15_6_V_s = getelementptr [10 x i8]* %weight_buf_15_6_V, i64 0, i64 %tmp_7
  %weight_buf_16_6_V_s = getelementptr [10 x i8]* %weight_buf_16_6_V, i64 0, i64 %tmp_7
  %weight_buf_17_6_V_s = getelementptr [10 x i8]* %weight_buf_17_6_V, i64 0, i64 %tmp_7
  %weight_buf_18_6_V_s = getelementptr [10 x i8]* %weight_buf_18_6_V, i64 0, i64 %tmp_7
  %weight_buf_19_6_V_s = getelementptr [10 x i8]* %weight_buf_19_6_V, i64 0, i64 %tmp_7
  %weight_buf_20_6_V_s = getelementptr [10 x i8]* %weight_buf_20_6_V, i64 0, i64 %tmp_7
  %weight_buf_21_6_V_s = getelementptr [10 x i8]* %weight_buf_21_6_V, i64 0, i64 %tmp_7
  %weight_buf_22_6_V_s = getelementptr [10 x i8]* %weight_buf_22_6_V, i64 0, i64 %tmp_7
  %weight_buf_23_6_V_s = getelementptr [10 x i8]* %weight_buf_23_6_V, i64 0, i64 %tmp_7
  %weight_buf_24_6_V_s = getelementptr [10 x i8]* %weight_buf_24_6_V, i64 0, i64 %tmp_7
  %weight_buf_25_6_V_s = getelementptr [10 x i8]* %weight_buf_25_6_V, i64 0, i64 %tmp_7
  %weight_buf_26_6_V_s = getelementptr [10 x i8]* %weight_buf_26_6_V, i64 0, i64 %tmp_7
  %weight_buf_27_6_V_s = getelementptr [10 x i8]* %weight_buf_27_6_V, i64 0, i64 %tmp_7
  %weight_buf_28_6_V_s = getelementptr [10 x i8]* %weight_buf_28_6_V, i64 0, i64 %tmp_7
  %weight_buf_29_6_V_s = getelementptr [10 x i8]* %weight_buf_29_6_V, i64 0, i64 %tmp_7
  %weight_buf_30_6_V_s = getelementptr [10 x i8]* %weight_buf_30_6_V, i64 0, i64 %tmp_7
  %weight_buf_31_6_V_s = getelementptr [10 x i8]* %weight_buf_31_6_V, i64 0, i64 %tmp_7
  %weight_buf_0_7_V_a = getelementptr [10 x i8]* %weight_buf_0_7_V, i64 0, i64 %tmp_7
  %weight_buf_1_7_V_a = getelementptr [10 x i8]* %weight_buf_1_7_V, i64 0, i64 %tmp_7
  %weight_buf_2_7_V_a = getelementptr [10 x i8]* %weight_buf_2_7_V, i64 0, i64 %tmp_7
  %weight_buf_3_7_V_a = getelementptr [10 x i8]* %weight_buf_3_7_V, i64 0, i64 %tmp_7
  %weight_buf_4_7_V_a = getelementptr [10 x i8]* %weight_buf_4_7_V, i64 0, i64 %tmp_7
  %weight_buf_5_7_V_a = getelementptr [10 x i8]* %weight_buf_5_7_V, i64 0, i64 %tmp_7
  %weight_buf_6_7_V_a = getelementptr [10 x i8]* %weight_buf_6_7_V, i64 0, i64 %tmp_7
  %weight_buf_7_7_V_a = getelementptr [10 x i8]* %weight_buf_7_7_V, i64 0, i64 %tmp_7
  %weight_buf_8_7_V_a = getelementptr [10 x i8]* %weight_buf_8_7_V, i64 0, i64 %tmp_7
  %weight_buf_9_7_V_a = getelementptr [10 x i8]* %weight_buf_9_7_V, i64 0, i64 %tmp_7
  %weight_buf_10_7_V_s = getelementptr [10 x i8]* %weight_buf_10_7_V, i64 0, i64 %tmp_7
  %weight_buf_11_7_V_s = getelementptr [10 x i8]* %weight_buf_11_7_V, i64 0, i64 %tmp_7
  %weight_buf_12_7_V_s = getelementptr [10 x i8]* %weight_buf_12_7_V, i64 0, i64 %tmp_7
  %weight_buf_13_7_V_s = getelementptr [10 x i8]* %weight_buf_13_7_V, i64 0, i64 %tmp_7
  %weight_buf_14_7_V_s = getelementptr [10 x i8]* %weight_buf_14_7_V, i64 0, i64 %tmp_7
  %weight_buf_15_7_V_s = getelementptr [10 x i8]* %weight_buf_15_7_V, i64 0, i64 %tmp_7
  %weight_buf_16_7_V_s = getelementptr [10 x i8]* %weight_buf_16_7_V, i64 0, i64 %tmp_7
  %weight_buf_17_7_V_s = getelementptr [10 x i8]* %weight_buf_17_7_V, i64 0, i64 %tmp_7
  %weight_buf_18_7_V_s = getelementptr [10 x i8]* %weight_buf_18_7_V, i64 0, i64 %tmp_7
  %weight_buf_19_7_V_s = getelementptr [10 x i8]* %weight_buf_19_7_V, i64 0, i64 %tmp_7
  %weight_buf_20_7_V_s = getelementptr [10 x i8]* %weight_buf_20_7_V, i64 0, i64 %tmp_7
  %weight_buf_21_7_V_s = getelementptr [10 x i8]* %weight_buf_21_7_V, i64 0, i64 %tmp_7
  %weight_buf_22_7_V_s = getelementptr [10 x i8]* %weight_buf_22_7_V, i64 0, i64 %tmp_7
  %weight_buf_23_7_V_s = getelementptr [10 x i8]* %weight_buf_23_7_V, i64 0, i64 %tmp_7
  %weight_buf_24_7_V_s = getelementptr [10 x i8]* %weight_buf_24_7_V, i64 0, i64 %tmp_7
  %weight_buf_25_7_V_s = getelementptr [10 x i8]* %weight_buf_25_7_V, i64 0, i64 %tmp_7
  %weight_buf_26_7_V_s = getelementptr [10 x i8]* %weight_buf_26_7_V, i64 0, i64 %tmp_7
  %weight_buf_27_7_V_s = getelementptr [10 x i8]* %weight_buf_27_7_V, i64 0, i64 %tmp_7
  %weight_buf_28_7_V_s = getelementptr [10 x i8]* %weight_buf_28_7_V, i64 0, i64 %tmp_7
  %weight_buf_29_7_V_s = getelementptr [10 x i8]* %weight_buf_29_7_V, i64 0, i64 %tmp_7
  %weight_buf_30_7_V_s = getelementptr [10 x i8]* %weight_buf_30_7_V, i64 0, i64 %tmp_7
  %weight_buf_31_7_V_s = getelementptr [10 x i8]* %weight_buf_31_7_V, i64 0, i64 %tmp_7
  br label %3

; <label>:3                                       ; preds = %5, %2
  %is_idx_2 = phi i9 [ %is_idx_1, %2 ], [ %tmp_s, %5 ]
  %j = phi i9 [ 0, %2 ], [ %j_1, %5 ]
  %exitcond3 = icmp eq i9 %is_idx_2, %indvars_iv1
  br i1 %exitcond3, label %6, label %4

; <label>:4                                       ; preds = %3
  %empty_10 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32)
  call void (...)* @_ssdm_op_SpecLoopName([9 x i8]* @p_str9) nounwind
  %tmp_10 = call i32 (...)* @_ssdm_op_SpecRegionBegin([9 x i8]* @p_str9)
  call void (...)* @_ssdm_op_SpecPipeline(i32 1, i32 1, i32 1, i32 0, [1 x i8]* @p_str1) nounwind
  %tmp_s = add i9 1, %is_idx_2
  %empty_11 = call { i64, i8, i8, i4, i1, i5, i5 } @_ssdm_op_Read.axis.volatile.i64P.i8P.i8P.i4P.i1P.i5P.i5P(i64* %in_stream_data_V, i8* %in_stream_keep_V, i8* %in_stream_strb_V, i4* %in_stream_user_V, i1* %in_stream_last_V, i5* %in_stream_id_V, i5* %in_stream_dest_V)
  %ret_1 = extractvalue { i64, i8, i8, i4, i1, i5, i5 } %empty_11, 0
  %tmp_14 = trunc i64 %ret_1 to i8
  %arrayNo_cast_cast = call i6 @_ssdm_op_PartSelect.i6.i9.i32.i32(i9 %j, i32 3, i32 8)
  %p_Result_3 = call i8 @_ssdm_op_PartSelect.i8.i64.i32.i32(i64 %ret_1, i32 8, i32 15)
  %p_Result_4 = call i8 @_ssdm_op_PartSelect.i8.i64.i32.i32(i64 %ret_1, i32 16, i32 23)
  %p_Result_5 = call i8 @_ssdm_op_PartSelect.i8.i64.i32.i32(i64 %ret_1, i32 24, i32 31)
  %p_Result_6 = call i8 @_ssdm_op_PartSelect.i8.i64.i32.i32(i64 %ret_1, i32 32, i32 39)
  %p_Result_7 = call i8 @_ssdm_op_PartSelect.i8.i64.i32.i32(i64 %ret_1, i32 40, i32 47)
  %p_Result_8 = call i8 @_ssdm_op_PartSelect.i8.i64.i32.i32(i64 %ret_1, i32 48, i32 55)
  %p_Result_9 = call i8 @_ssdm_op_PartSelect.i8.i64.i32.i32(i64 %ret_1, i32 56, i32 63)
  switch i6 %arrayNo_cast_cast, label %branch511 [
    i6 0, label %branch480
    i6 1, label %branch481
    i6 2, label %branch482
    i6 3, label %branch483
    i6 4, label %branch484
    i6 5, label %branch485
    i6 6, label %branch486
    i6 7, label %branch487
    i6 8, label %branch488
    i6 9, label %branch489
    i6 10, label %branch490
    i6 11, label %branch491
    i6 12, label %branch492
    i6 13, label %branch493
    i6 14, label %branch494
    i6 15, label %branch495
    i6 16, label %branch496
    i6 17, label %branch497
    i6 18, label %branch498
    i6 19, label %branch499
    i6 20, label %branch500
    i6 21, label %branch501
    i6 22, label %branch502
    i6 23, label %branch503
    i6 24, label %branch504
    i6 25, label %branch505
    i6 26, label %branch506
    i6 27, label %branch507
    i6 28, label %branch508
    i6 29, label %branch509
    i6 30, label %branch510
  ]

; <label>:5                                       ; preds = %branch511, %branch510, %branch509, %branch508, %branch507, %branch506, %branch505, %branch504, %branch503, %branch502, %branch501, %branch500, %branch499, %branch498, %branch497, %branch496, %branch495, %branch494, %branch493, %branch492, %branch491, %branch490, %branch489, %branch488, %branch487, %branch486, %branch485, %branch484, %branch483, %branch482, %branch481, %branch480
  %empty_12 = call i32 (...)* @_ssdm_op_SpecRegionEnd([9 x i8]* @p_str9, i32 %tmp_10)
  %j_1 = add i9 %j, 8
  br label %3

; <label>:6                                       ; preds = %3
  %empty_13 = call i32 (...)* @_ssdm_op_SpecRegionEnd([9 x i8]* @p_str8, i32 %tmp_1)
  %indvars_iv_next1 = add i9 %indvars_iv1, 32
  br label %.preheader952

.preheader951:                                    ; preds = %.preheader951.preheader, %17
  %indvars_iv = phi i11 [ %indvars_iv_next, %17 ], [ 16, %.preheader951.preheader ]
  %is_idx_3 = phi i19 [ %is_idx_4, %17 ], [ 325, %.preheader951.preheader ]
  %os_idx = phi i11 [ %os_idx_2, %17 ], [ 0, %.preheader951.preheader ]
  %t = phi i14 [ %t_1, %17 ], [ 0, %.preheader951.preheader ]
  %tmp_13 = call i1 @_ssdm_op_BitSelect.i1.i14.i32(i14 %t, i32 13)
  br i1 %tmp_13, label %18, label %7

; <label>:7                                       ; preds = %.preheader951
  %empty_14 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 64, i64 64, i64 64)
  call void (...)* @_ssdm_op_SpecLoopName([3 x i8]* @p_str10) nounwind
  %tmp_5 = call i32 (...)* @_ssdm_op_SpecRegionBegin([3 x i8]* @p_str10)
  %is_idx_4 = add i19 %is_idx_3, 4096
  br label %8

; <label>:8                                       ; preds = %13, %7
  %indvars_iv940_in = phi i19 [ %is_idx_6, %13 ], [ %is_idx_3, %7 ]
  %i3 = phi i8 [ %i_3, %13 ], [ 0, %7 ]
  %exitcond4 = icmp eq i8 %i3, -128
  %i_3 = add i8 %i3, 1
  br i1 %exitcond4, label %.preheader.preheader.preheader, label %9

.preheader.preheader.preheader:                   ; preds = %8
  br label %.preheader.preheader

; <label>:9                                       ; preds = %8
  %is_idx_6 = add i19 %indvars_iv940_in, 32
  %empty_15 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 128, i64 128, i64 128)
  call void (...)* @_ssdm_op_SpecLoopName([9 x i8]* @p_str11) nounwind
  %tmp_11 = call i32 (...)* @_ssdm_op_SpecRegionBegin([9 x i8]* @p_str11)
  %tmp_12 = zext i8 %i3 to i64
  %in_buf_0_0_V_addr = getelementptr [128 x i8]* %in_buf_0_0_V, i64 0, i64 %tmp_12
  %in_buf_1_0_V_addr = getelementptr [128 x i8]* %in_buf_1_0_V, i64 0, i64 %tmp_12
  %in_buf_2_0_V_addr = getelementptr [128 x i8]* %in_buf_2_0_V, i64 0, i64 %tmp_12
  %in_buf_3_0_V_addr = getelementptr [128 x i8]* %in_buf_3_0_V, i64 0, i64 %tmp_12
  %in_buf_4_0_V_addr = getelementptr [128 x i8]* %in_buf_4_0_V, i64 0, i64 %tmp_12
  %in_buf_5_0_V_addr = getelementptr [128 x i8]* %in_buf_5_0_V, i64 0, i64 %tmp_12
  %in_buf_6_0_V_addr = getelementptr [128 x i8]* %in_buf_6_0_V, i64 0, i64 %tmp_12
  %in_buf_7_0_V_addr = getelementptr [128 x i8]* %in_buf_7_0_V, i64 0, i64 %tmp_12
  %in_buf_8_0_V_addr = getelementptr [128 x i8]* %in_buf_8_0_V, i64 0, i64 %tmp_12
  %in_buf_9_0_V_addr = getelementptr [128 x i8]* %in_buf_9_0_V, i64 0, i64 %tmp_12
  %in_buf_10_0_V_addr = getelementptr [128 x i8]* %in_buf_10_0_V, i64 0, i64 %tmp_12
  %in_buf_11_0_V_addr = getelementptr [128 x i8]* %in_buf_11_0_V, i64 0, i64 %tmp_12
  %in_buf_12_0_V_addr = getelementptr [128 x i8]* %in_buf_12_0_V, i64 0, i64 %tmp_12
  %in_buf_13_0_V_addr = getelementptr [128 x i8]* %in_buf_13_0_V, i64 0, i64 %tmp_12
  %in_buf_14_0_V_addr = getelementptr [128 x i8]* %in_buf_14_0_V, i64 0, i64 %tmp_12
  %in_buf_15_0_V_addr = getelementptr [128 x i8]* %in_buf_15_0_V, i64 0, i64 %tmp_12
  %in_buf_16_0_V_addr = getelementptr [128 x i8]* %in_buf_16_0_V, i64 0, i64 %tmp_12
  %in_buf_17_0_V_addr = getelementptr [128 x i8]* %in_buf_17_0_V, i64 0, i64 %tmp_12
  %in_buf_18_0_V_addr = getelementptr [128 x i8]* %in_buf_18_0_V, i64 0, i64 %tmp_12
  %in_buf_19_0_V_addr = getelementptr [128 x i8]* %in_buf_19_0_V, i64 0, i64 %tmp_12
  %in_buf_20_0_V_addr = getelementptr [128 x i8]* %in_buf_20_0_V, i64 0, i64 %tmp_12
  %in_buf_21_0_V_addr = getelementptr [128 x i8]* %in_buf_21_0_V, i64 0, i64 %tmp_12
  %in_buf_22_0_V_addr = getelementptr [128 x i8]* %in_buf_22_0_V, i64 0, i64 %tmp_12
  %in_buf_23_0_V_addr = getelementptr [128 x i8]* %in_buf_23_0_V, i64 0, i64 %tmp_12
  %in_buf_24_0_V_addr = getelementptr [128 x i8]* %in_buf_24_0_V, i64 0, i64 %tmp_12
  %in_buf_25_0_V_addr = getelementptr [128 x i8]* %in_buf_25_0_V, i64 0, i64 %tmp_12
  %in_buf_26_0_V_addr = getelementptr [128 x i8]* %in_buf_26_0_V, i64 0, i64 %tmp_12
  %in_buf_27_0_V_addr = getelementptr [128 x i8]* %in_buf_27_0_V, i64 0, i64 %tmp_12
  %in_buf_28_0_V_addr = getelementptr [128 x i8]* %in_buf_28_0_V, i64 0, i64 %tmp_12
  %in_buf_29_0_V_addr = getelementptr [128 x i8]* %in_buf_29_0_V, i64 0, i64 %tmp_12
  %in_buf_30_0_V_addr = getelementptr [128 x i8]* %in_buf_30_0_V, i64 0, i64 %tmp_12
  %in_buf_31_0_V_addr = getelementptr [128 x i8]* %in_buf_31_0_V, i64 0, i64 %tmp_12
  %in_buf_0_1_V_addr = getelementptr [128 x i8]* %in_buf_0_1_V, i64 0, i64 %tmp_12
  %in_buf_1_1_V_addr = getelementptr [128 x i8]* %in_buf_1_1_V, i64 0, i64 %tmp_12
  %in_buf_2_1_V_addr = getelementptr [128 x i8]* %in_buf_2_1_V, i64 0, i64 %tmp_12
  %in_buf_3_1_V_addr = getelementptr [128 x i8]* %in_buf_3_1_V, i64 0, i64 %tmp_12
  %in_buf_4_1_V_addr = getelementptr [128 x i8]* %in_buf_4_1_V, i64 0, i64 %tmp_12
  %in_buf_5_1_V_addr = getelementptr [128 x i8]* %in_buf_5_1_V, i64 0, i64 %tmp_12
  %in_buf_6_1_V_addr = getelementptr [128 x i8]* %in_buf_6_1_V, i64 0, i64 %tmp_12
  %in_buf_7_1_V_addr = getelementptr [128 x i8]* %in_buf_7_1_V, i64 0, i64 %tmp_12
  %in_buf_8_1_V_addr = getelementptr [128 x i8]* %in_buf_8_1_V, i64 0, i64 %tmp_12
  %in_buf_9_1_V_addr = getelementptr [128 x i8]* %in_buf_9_1_V, i64 0, i64 %tmp_12
  %in_buf_10_1_V_addr = getelementptr [128 x i8]* %in_buf_10_1_V, i64 0, i64 %tmp_12
  %in_buf_11_1_V_addr = getelementptr [128 x i8]* %in_buf_11_1_V, i64 0, i64 %tmp_12
  %in_buf_12_1_V_addr = getelementptr [128 x i8]* %in_buf_12_1_V, i64 0, i64 %tmp_12
  %in_buf_13_1_V_addr = getelementptr [128 x i8]* %in_buf_13_1_V, i64 0, i64 %tmp_12
  %in_buf_14_1_V_addr = getelementptr [128 x i8]* %in_buf_14_1_V, i64 0, i64 %tmp_12
  %in_buf_15_1_V_addr = getelementptr [128 x i8]* %in_buf_15_1_V, i64 0, i64 %tmp_12
  %in_buf_16_1_V_addr = getelementptr [128 x i8]* %in_buf_16_1_V, i64 0, i64 %tmp_12
  %in_buf_17_1_V_addr = getelementptr [128 x i8]* %in_buf_17_1_V, i64 0, i64 %tmp_12
  %in_buf_18_1_V_addr = getelementptr [128 x i8]* %in_buf_18_1_V, i64 0, i64 %tmp_12
  %in_buf_19_1_V_addr = getelementptr [128 x i8]* %in_buf_19_1_V, i64 0, i64 %tmp_12
  %in_buf_20_1_V_addr = getelementptr [128 x i8]* %in_buf_20_1_V, i64 0, i64 %tmp_12
  %in_buf_21_1_V_addr = getelementptr [128 x i8]* %in_buf_21_1_V, i64 0, i64 %tmp_12
  %in_buf_22_1_V_addr = getelementptr [128 x i8]* %in_buf_22_1_V, i64 0, i64 %tmp_12
  %in_buf_23_1_V_addr = getelementptr [128 x i8]* %in_buf_23_1_V, i64 0, i64 %tmp_12
  %in_buf_24_1_V_addr = getelementptr [128 x i8]* %in_buf_24_1_V, i64 0, i64 %tmp_12
  %in_buf_25_1_V_addr = getelementptr [128 x i8]* %in_buf_25_1_V, i64 0, i64 %tmp_12
  %in_buf_26_1_V_addr = getelementptr [128 x i8]* %in_buf_26_1_V, i64 0, i64 %tmp_12
  %in_buf_27_1_V_addr = getelementptr [128 x i8]* %in_buf_27_1_V, i64 0, i64 %tmp_12
  %in_buf_28_1_V_addr = getelementptr [128 x i8]* %in_buf_28_1_V, i64 0, i64 %tmp_12
  %in_buf_29_1_V_addr = getelementptr [128 x i8]* %in_buf_29_1_V, i64 0, i64 %tmp_12
  %in_buf_30_1_V_addr = getelementptr [128 x i8]* %in_buf_30_1_V, i64 0, i64 %tmp_12
  %in_buf_31_1_V_addr = getelementptr [128 x i8]* %in_buf_31_1_V, i64 0, i64 %tmp_12
  %in_buf_0_2_V_addr = getelementptr [128 x i8]* %in_buf_0_2_V, i64 0, i64 %tmp_12
  %in_buf_1_2_V_addr = getelementptr [128 x i8]* %in_buf_1_2_V, i64 0, i64 %tmp_12
  %in_buf_2_2_V_addr = getelementptr [128 x i8]* %in_buf_2_2_V, i64 0, i64 %tmp_12
  %in_buf_3_2_V_addr = getelementptr [128 x i8]* %in_buf_3_2_V, i64 0, i64 %tmp_12
  %in_buf_4_2_V_addr = getelementptr [128 x i8]* %in_buf_4_2_V, i64 0, i64 %tmp_12
  %in_buf_5_2_V_addr = getelementptr [128 x i8]* %in_buf_5_2_V, i64 0, i64 %tmp_12
  %in_buf_6_2_V_addr = getelementptr [128 x i8]* %in_buf_6_2_V, i64 0, i64 %tmp_12
  %in_buf_7_2_V_addr = getelementptr [128 x i8]* %in_buf_7_2_V, i64 0, i64 %tmp_12
  %in_buf_8_2_V_addr = getelementptr [128 x i8]* %in_buf_8_2_V, i64 0, i64 %tmp_12
  %in_buf_9_2_V_addr = getelementptr [128 x i8]* %in_buf_9_2_V, i64 0, i64 %tmp_12
  %in_buf_10_2_V_addr = getelementptr [128 x i8]* %in_buf_10_2_V, i64 0, i64 %tmp_12
  %in_buf_11_2_V_addr = getelementptr [128 x i8]* %in_buf_11_2_V, i64 0, i64 %tmp_12
  %in_buf_12_2_V_addr = getelementptr [128 x i8]* %in_buf_12_2_V, i64 0, i64 %tmp_12
  %in_buf_13_2_V_addr = getelementptr [128 x i8]* %in_buf_13_2_V, i64 0, i64 %tmp_12
  %in_buf_14_2_V_addr = getelementptr [128 x i8]* %in_buf_14_2_V, i64 0, i64 %tmp_12
  %in_buf_15_2_V_addr = getelementptr [128 x i8]* %in_buf_15_2_V, i64 0, i64 %tmp_12
  %in_buf_16_2_V_addr = getelementptr [128 x i8]* %in_buf_16_2_V, i64 0, i64 %tmp_12
  %in_buf_17_2_V_addr = getelementptr [128 x i8]* %in_buf_17_2_V, i64 0, i64 %tmp_12
  %in_buf_18_2_V_addr = getelementptr [128 x i8]* %in_buf_18_2_V, i64 0, i64 %tmp_12
  %in_buf_19_2_V_addr = getelementptr [128 x i8]* %in_buf_19_2_V, i64 0, i64 %tmp_12
  %in_buf_20_2_V_addr = getelementptr [128 x i8]* %in_buf_20_2_V, i64 0, i64 %tmp_12
  %in_buf_21_2_V_addr = getelementptr [128 x i8]* %in_buf_21_2_V, i64 0, i64 %tmp_12
  %in_buf_22_2_V_addr = getelementptr [128 x i8]* %in_buf_22_2_V, i64 0, i64 %tmp_12
  %in_buf_23_2_V_addr = getelementptr [128 x i8]* %in_buf_23_2_V, i64 0, i64 %tmp_12
  %in_buf_24_2_V_addr = getelementptr [128 x i8]* %in_buf_24_2_V, i64 0, i64 %tmp_12
  %in_buf_25_2_V_addr = getelementptr [128 x i8]* %in_buf_25_2_V, i64 0, i64 %tmp_12
  %in_buf_26_2_V_addr = getelementptr [128 x i8]* %in_buf_26_2_V, i64 0, i64 %tmp_12
  %in_buf_27_2_V_addr = getelementptr [128 x i8]* %in_buf_27_2_V, i64 0, i64 %tmp_12
  %in_buf_28_2_V_addr = getelementptr [128 x i8]* %in_buf_28_2_V, i64 0, i64 %tmp_12
  %in_buf_29_2_V_addr = getelementptr [128 x i8]* %in_buf_29_2_V, i64 0, i64 %tmp_12
  %in_buf_30_2_V_addr = getelementptr [128 x i8]* %in_buf_30_2_V, i64 0, i64 %tmp_12
  %in_buf_31_2_V_addr = getelementptr [128 x i8]* %in_buf_31_2_V, i64 0, i64 %tmp_12
  %in_buf_0_3_V_addr = getelementptr [128 x i8]* %in_buf_0_3_V, i64 0, i64 %tmp_12
  %in_buf_1_3_V_addr = getelementptr [128 x i8]* %in_buf_1_3_V, i64 0, i64 %tmp_12
  %in_buf_2_3_V_addr = getelementptr [128 x i8]* %in_buf_2_3_V, i64 0, i64 %tmp_12
  %in_buf_3_3_V_addr = getelementptr [128 x i8]* %in_buf_3_3_V, i64 0, i64 %tmp_12
  %in_buf_4_3_V_addr = getelementptr [128 x i8]* %in_buf_4_3_V, i64 0, i64 %tmp_12
  %in_buf_5_3_V_addr = getelementptr [128 x i8]* %in_buf_5_3_V, i64 0, i64 %tmp_12
  %in_buf_6_3_V_addr = getelementptr [128 x i8]* %in_buf_6_3_V, i64 0, i64 %tmp_12
  %in_buf_7_3_V_addr = getelementptr [128 x i8]* %in_buf_7_3_V, i64 0, i64 %tmp_12
  %in_buf_8_3_V_addr = getelementptr [128 x i8]* %in_buf_8_3_V, i64 0, i64 %tmp_12
  %in_buf_9_3_V_addr = getelementptr [128 x i8]* %in_buf_9_3_V, i64 0, i64 %tmp_12
  %in_buf_10_3_V_addr = getelementptr [128 x i8]* %in_buf_10_3_V, i64 0, i64 %tmp_12
  %in_buf_11_3_V_addr = getelementptr [128 x i8]* %in_buf_11_3_V, i64 0, i64 %tmp_12
  %in_buf_12_3_V_addr = getelementptr [128 x i8]* %in_buf_12_3_V, i64 0, i64 %tmp_12
  %in_buf_13_3_V_addr = getelementptr [128 x i8]* %in_buf_13_3_V, i64 0, i64 %tmp_12
  %in_buf_14_3_V_addr = getelementptr [128 x i8]* %in_buf_14_3_V, i64 0, i64 %tmp_12
  %in_buf_15_3_V_addr = getelementptr [128 x i8]* %in_buf_15_3_V, i64 0, i64 %tmp_12
  %in_buf_16_3_V_addr = getelementptr [128 x i8]* %in_buf_16_3_V, i64 0, i64 %tmp_12
  %in_buf_17_3_V_addr = getelementptr [128 x i8]* %in_buf_17_3_V, i64 0, i64 %tmp_12
  %in_buf_18_3_V_addr = getelementptr [128 x i8]* %in_buf_18_3_V, i64 0, i64 %tmp_12
  %in_buf_19_3_V_addr = getelementptr [128 x i8]* %in_buf_19_3_V, i64 0, i64 %tmp_12
  %in_buf_20_3_V_addr = getelementptr [128 x i8]* %in_buf_20_3_V, i64 0, i64 %tmp_12
  %in_buf_21_3_V_addr = getelementptr [128 x i8]* %in_buf_21_3_V, i64 0, i64 %tmp_12
  %in_buf_22_3_V_addr = getelementptr [128 x i8]* %in_buf_22_3_V, i64 0, i64 %tmp_12
  %in_buf_23_3_V_addr = getelementptr [128 x i8]* %in_buf_23_3_V, i64 0, i64 %tmp_12
  %in_buf_24_3_V_addr = getelementptr [128 x i8]* %in_buf_24_3_V, i64 0, i64 %tmp_12
  %in_buf_25_3_V_addr = getelementptr [128 x i8]* %in_buf_25_3_V, i64 0, i64 %tmp_12
  %in_buf_26_3_V_addr = getelementptr [128 x i8]* %in_buf_26_3_V, i64 0, i64 %tmp_12
  %in_buf_27_3_V_addr = getelementptr [128 x i8]* %in_buf_27_3_V, i64 0, i64 %tmp_12
  %in_buf_28_3_V_addr = getelementptr [128 x i8]* %in_buf_28_3_V, i64 0, i64 %tmp_12
  %in_buf_29_3_V_addr = getelementptr [128 x i8]* %in_buf_29_3_V, i64 0, i64 %tmp_12
  %in_buf_30_3_V_addr = getelementptr [128 x i8]* %in_buf_30_3_V, i64 0, i64 %tmp_12
  %in_buf_31_3_V_addr = getelementptr [128 x i8]* %in_buf_31_3_V, i64 0, i64 %tmp_12
  %in_buf_0_4_V_addr = getelementptr [128 x i8]* %in_buf_0_4_V, i64 0, i64 %tmp_12
  %in_buf_1_4_V_addr = getelementptr [128 x i8]* %in_buf_1_4_V, i64 0, i64 %tmp_12
  %in_buf_2_4_V_addr = getelementptr [128 x i8]* %in_buf_2_4_V, i64 0, i64 %tmp_12
  %in_buf_3_4_V_addr = getelementptr [128 x i8]* %in_buf_3_4_V, i64 0, i64 %tmp_12
  %in_buf_4_4_V_addr = getelementptr [128 x i8]* %in_buf_4_4_V, i64 0, i64 %tmp_12
  %in_buf_5_4_V_addr = getelementptr [128 x i8]* %in_buf_5_4_V, i64 0, i64 %tmp_12
  %in_buf_6_4_V_addr = getelementptr [128 x i8]* %in_buf_6_4_V, i64 0, i64 %tmp_12
  %in_buf_7_4_V_addr = getelementptr [128 x i8]* %in_buf_7_4_V, i64 0, i64 %tmp_12
  %in_buf_8_4_V_addr = getelementptr [128 x i8]* %in_buf_8_4_V, i64 0, i64 %tmp_12
  %in_buf_9_4_V_addr = getelementptr [128 x i8]* %in_buf_9_4_V, i64 0, i64 %tmp_12
  %in_buf_10_4_V_addr = getelementptr [128 x i8]* %in_buf_10_4_V, i64 0, i64 %tmp_12
  %in_buf_11_4_V_addr = getelementptr [128 x i8]* %in_buf_11_4_V, i64 0, i64 %tmp_12
  %in_buf_12_4_V_addr = getelementptr [128 x i8]* %in_buf_12_4_V, i64 0, i64 %tmp_12
  %in_buf_13_4_V_addr = getelementptr [128 x i8]* %in_buf_13_4_V, i64 0, i64 %tmp_12
  %in_buf_14_4_V_addr = getelementptr [128 x i8]* %in_buf_14_4_V, i64 0, i64 %tmp_12
  %in_buf_15_4_V_addr = getelementptr [128 x i8]* %in_buf_15_4_V, i64 0, i64 %tmp_12
  %in_buf_16_4_V_addr = getelementptr [128 x i8]* %in_buf_16_4_V, i64 0, i64 %tmp_12
  %in_buf_17_4_V_addr = getelementptr [128 x i8]* %in_buf_17_4_V, i64 0, i64 %tmp_12
  %in_buf_18_4_V_addr = getelementptr [128 x i8]* %in_buf_18_4_V, i64 0, i64 %tmp_12
  %in_buf_19_4_V_addr = getelementptr [128 x i8]* %in_buf_19_4_V, i64 0, i64 %tmp_12
  %in_buf_20_4_V_addr = getelementptr [128 x i8]* %in_buf_20_4_V, i64 0, i64 %tmp_12
  %in_buf_21_4_V_addr = getelementptr [128 x i8]* %in_buf_21_4_V, i64 0, i64 %tmp_12
  %in_buf_22_4_V_addr = getelementptr [128 x i8]* %in_buf_22_4_V, i64 0, i64 %tmp_12
  %in_buf_23_4_V_addr = getelementptr [128 x i8]* %in_buf_23_4_V, i64 0, i64 %tmp_12
  %in_buf_24_4_V_addr = getelementptr [128 x i8]* %in_buf_24_4_V, i64 0, i64 %tmp_12
  %in_buf_25_4_V_addr = getelementptr [128 x i8]* %in_buf_25_4_V, i64 0, i64 %tmp_12
  %in_buf_26_4_V_addr = getelementptr [128 x i8]* %in_buf_26_4_V, i64 0, i64 %tmp_12
  %in_buf_27_4_V_addr = getelementptr [128 x i8]* %in_buf_27_4_V, i64 0, i64 %tmp_12
  %in_buf_28_4_V_addr = getelementptr [128 x i8]* %in_buf_28_4_V, i64 0, i64 %tmp_12
  %in_buf_29_4_V_addr = getelementptr [128 x i8]* %in_buf_29_4_V, i64 0, i64 %tmp_12
  %in_buf_30_4_V_addr = getelementptr [128 x i8]* %in_buf_30_4_V, i64 0, i64 %tmp_12
  %in_buf_31_4_V_addr = getelementptr [128 x i8]* %in_buf_31_4_V, i64 0, i64 %tmp_12
  %in_buf_0_5_V_addr = getelementptr [128 x i8]* %in_buf_0_5_V, i64 0, i64 %tmp_12
  %in_buf_1_5_V_addr = getelementptr [128 x i8]* %in_buf_1_5_V, i64 0, i64 %tmp_12
  %in_buf_2_5_V_addr = getelementptr [128 x i8]* %in_buf_2_5_V, i64 0, i64 %tmp_12
  %in_buf_3_5_V_addr = getelementptr [128 x i8]* %in_buf_3_5_V, i64 0, i64 %tmp_12
  %in_buf_4_5_V_addr = getelementptr [128 x i8]* %in_buf_4_5_V, i64 0, i64 %tmp_12
  %in_buf_5_5_V_addr = getelementptr [128 x i8]* %in_buf_5_5_V, i64 0, i64 %tmp_12
  %in_buf_6_5_V_addr = getelementptr [128 x i8]* %in_buf_6_5_V, i64 0, i64 %tmp_12
  %in_buf_7_5_V_addr = getelementptr [128 x i8]* %in_buf_7_5_V, i64 0, i64 %tmp_12
  %in_buf_8_5_V_addr = getelementptr [128 x i8]* %in_buf_8_5_V, i64 0, i64 %tmp_12
  %in_buf_9_5_V_addr = getelementptr [128 x i8]* %in_buf_9_5_V, i64 0, i64 %tmp_12
  %in_buf_10_5_V_addr = getelementptr [128 x i8]* %in_buf_10_5_V, i64 0, i64 %tmp_12
  %in_buf_11_5_V_addr = getelementptr [128 x i8]* %in_buf_11_5_V, i64 0, i64 %tmp_12
  %in_buf_12_5_V_addr = getelementptr [128 x i8]* %in_buf_12_5_V, i64 0, i64 %tmp_12
  %in_buf_13_5_V_addr = getelementptr [128 x i8]* %in_buf_13_5_V, i64 0, i64 %tmp_12
  %in_buf_14_5_V_addr = getelementptr [128 x i8]* %in_buf_14_5_V, i64 0, i64 %tmp_12
  %in_buf_15_5_V_addr = getelementptr [128 x i8]* %in_buf_15_5_V, i64 0, i64 %tmp_12
  %in_buf_16_5_V_addr = getelementptr [128 x i8]* %in_buf_16_5_V, i64 0, i64 %tmp_12
  %in_buf_17_5_V_addr = getelementptr [128 x i8]* %in_buf_17_5_V, i64 0, i64 %tmp_12
  %in_buf_18_5_V_addr = getelementptr [128 x i8]* %in_buf_18_5_V, i64 0, i64 %tmp_12
  %in_buf_19_5_V_addr = getelementptr [128 x i8]* %in_buf_19_5_V, i64 0, i64 %tmp_12
  %in_buf_20_5_V_addr = getelementptr [128 x i8]* %in_buf_20_5_V, i64 0, i64 %tmp_12
  %in_buf_21_5_V_addr = getelementptr [128 x i8]* %in_buf_21_5_V, i64 0, i64 %tmp_12
  %in_buf_22_5_V_addr = getelementptr [128 x i8]* %in_buf_22_5_V, i64 0, i64 %tmp_12
  %in_buf_23_5_V_addr = getelementptr [128 x i8]* %in_buf_23_5_V, i64 0, i64 %tmp_12
  %in_buf_24_5_V_addr = getelementptr [128 x i8]* %in_buf_24_5_V, i64 0, i64 %tmp_12
  %in_buf_25_5_V_addr = getelementptr [128 x i8]* %in_buf_25_5_V, i64 0, i64 %tmp_12
  %in_buf_26_5_V_addr = getelementptr [128 x i8]* %in_buf_26_5_V, i64 0, i64 %tmp_12
  %in_buf_27_5_V_addr = getelementptr [128 x i8]* %in_buf_27_5_V, i64 0, i64 %tmp_12
  %in_buf_28_5_V_addr = getelementptr [128 x i8]* %in_buf_28_5_V, i64 0, i64 %tmp_12
  %in_buf_29_5_V_addr = getelementptr [128 x i8]* %in_buf_29_5_V, i64 0, i64 %tmp_12
  %in_buf_30_5_V_addr = getelementptr [128 x i8]* %in_buf_30_5_V, i64 0, i64 %tmp_12
  %in_buf_31_5_V_addr = getelementptr [128 x i8]* %in_buf_31_5_V, i64 0, i64 %tmp_12
  %in_buf_0_6_V_addr = getelementptr [128 x i8]* %in_buf_0_6_V, i64 0, i64 %tmp_12
  %in_buf_1_6_V_addr = getelementptr [128 x i8]* %in_buf_1_6_V, i64 0, i64 %tmp_12
  %in_buf_2_6_V_addr = getelementptr [128 x i8]* %in_buf_2_6_V, i64 0, i64 %tmp_12
  %in_buf_3_6_V_addr = getelementptr [128 x i8]* %in_buf_3_6_V, i64 0, i64 %tmp_12
  %in_buf_4_6_V_addr = getelementptr [128 x i8]* %in_buf_4_6_V, i64 0, i64 %tmp_12
  %in_buf_5_6_V_addr = getelementptr [128 x i8]* %in_buf_5_6_V, i64 0, i64 %tmp_12
  %in_buf_6_6_V_addr = getelementptr [128 x i8]* %in_buf_6_6_V, i64 0, i64 %tmp_12
  %in_buf_7_6_V_addr = getelementptr [128 x i8]* %in_buf_7_6_V, i64 0, i64 %tmp_12
  %in_buf_8_6_V_addr = getelementptr [128 x i8]* %in_buf_8_6_V, i64 0, i64 %tmp_12
  %in_buf_9_6_V_addr = getelementptr [128 x i8]* %in_buf_9_6_V, i64 0, i64 %tmp_12
  %in_buf_10_6_V_addr = getelementptr [128 x i8]* %in_buf_10_6_V, i64 0, i64 %tmp_12
  %in_buf_11_6_V_addr = getelementptr [128 x i8]* %in_buf_11_6_V, i64 0, i64 %tmp_12
  %in_buf_12_6_V_addr = getelementptr [128 x i8]* %in_buf_12_6_V, i64 0, i64 %tmp_12
  %in_buf_13_6_V_addr = getelementptr [128 x i8]* %in_buf_13_6_V, i64 0, i64 %tmp_12
  %in_buf_14_6_V_addr = getelementptr [128 x i8]* %in_buf_14_6_V, i64 0, i64 %tmp_12
  %in_buf_15_6_V_addr = getelementptr [128 x i8]* %in_buf_15_6_V, i64 0, i64 %tmp_12
  %in_buf_16_6_V_addr = getelementptr [128 x i8]* %in_buf_16_6_V, i64 0, i64 %tmp_12
  %in_buf_17_6_V_addr = getelementptr [128 x i8]* %in_buf_17_6_V, i64 0, i64 %tmp_12
  %in_buf_18_6_V_addr = getelementptr [128 x i8]* %in_buf_18_6_V, i64 0, i64 %tmp_12
  %in_buf_19_6_V_addr = getelementptr [128 x i8]* %in_buf_19_6_V, i64 0, i64 %tmp_12
  %in_buf_20_6_V_addr = getelementptr [128 x i8]* %in_buf_20_6_V, i64 0, i64 %tmp_12
  %in_buf_21_6_V_addr = getelementptr [128 x i8]* %in_buf_21_6_V, i64 0, i64 %tmp_12
  %in_buf_22_6_V_addr = getelementptr [128 x i8]* %in_buf_22_6_V, i64 0, i64 %tmp_12
  %in_buf_23_6_V_addr = getelementptr [128 x i8]* %in_buf_23_6_V, i64 0, i64 %tmp_12
  %in_buf_24_6_V_addr = getelementptr [128 x i8]* %in_buf_24_6_V, i64 0, i64 %tmp_12
  %in_buf_25_6_V_addr = getelementptr [128 x i8]* %in_buf_25_6_V, i64 0, i64 %tmp_12
  %in_buf_26_6_V_addr = getelementptr [128 x i8]* %in_buf_26_6_V, i64 0, i64 %tmp_12
  %in_buf_27_6_V_addr = getelementptr [128 x i8]* %in_buf_27_6_V, i64 0, i64 %tmp_12
  %in_buf_28_6_V_addr = getelementptr [128 x i8]* %in_buf_28_6_V, i64 0, i64 %tmp_12
  %in_buf_29_6_V_addr = getelementptr [128 x i8]* %in_buf_29_6_V, i64 0, i64 %tmp_12
  %in_buf_30_6_V_addr = getelementptr [128 x i8]* %in_buf_30_6_V, i64 0, i64 %tmp_12
  %in_buf_31_6_V_addr = getelementptr [128 x i8]* %in_buf_31_6_V, i64 0, i64 %tmp_12
  %in_buf_0_7_V_addr = getelementptr [128 x i8]* %in_buf_0_7_V, i64 0, i64 %tmp_12
  %in_buf_1_7_V_addr = getelementptr [128 x i8]* %in_buf_1_7_V, i64 0, i64 %tmp_12
  %in_buf_2_7_V_addr = getelementptr [128 x i8]* %in_buf_2_7_V, i64 0, i64 %tmp_12
  %in_buf_3_7_V_addr = getelementptr [128 x i8]* %in_buf_3_7_V, i64 0, i64 %tmp_12
  %in_buf_4_7_V_addr = getelementptr [128 x i8]* %in_buf_4_7_V, i64 0, i64 %tmp_12
  %in_buf_5_7_V_addr = getelementptr [128 x i8]* %in_buf_5_7_V, i64 0, i64 %tmp_12
  %in_buf_6_7_V_addr = getelementptr [128 x i8]* %in_buf_6_7_V, i64 0, i64 %tmp_12
  %in_buf_7_7_V_addr = getelementptr [128 x i8]* %in_buf_7_7_V, i64 0, i64 %tmp_12
  %in_buf_8_7_V_addr = getelementptr [128 x i8]* %in_buf_8_7_V, i64 0, i64 %tmp_12
  %in_buf_9_7_V_addr = getelementptr [128 x i8]* %in_buf_9_7_V, i64 0, i64 %tmp_12
  %in_buf_10_7_V_addr = getelementptr [128 x i8]* %in_buf_10_7_V, i64 0, i64 %tmp_12
  %in_buf_11_7_V_addr = getelementptr [128 x i8]* %in_buf_11_7_V, i64 0, i64 %tmp_12
  %in_buf_12_7_V_addr = getelementptr [128 x i8]* %in_buf_12_7_V, i64 0, i64 %tmp_12
  %in_buf_13_7_V_addr = getelementptr [128 x i8]* %in_buf_13_7_V, i64 0, i64 %tmp_12
  %in_buf_14_7_V_addr = getelementptr [128 x i8]* %in_buf_14_7_V, i64 0, i64 %tmp_12
  %in_buf_15_7_V_addr = getelementptr [128 x i8]* %in_buf_15_7_V, i64 0, i64 %tmp_12
  %in_buf_16_7_V_addr = getelementptr [128 x i8]* %in_buf_16_7_V, i64 0, i64 %tmp_12
  %in_buf_17_7_V_addr = getelementptr [128 x i8]* %in_buf_17_7_V, i64 0, i64 %tmp_12
  %in_buf_18_7_V_addr = getelementptr [128 x i8]* %in_buf_18_7_V, i64 0, i64 %tmp_12
  %in_buf_19_7_V_addr = getelementptr [128 x i8]* %in_buf_19_7_V, i64 0, i64 %tmp_12
  %in_buf_20_7_V_addr = getelementptr [128 x i8]* %in_buf_20_7_V, i64 0, i64 %tmp_12
  %in_buf_21_7_V_addr = getelementptr [128 x i8]* %in_buf_21_7_V, i64 0, i64 %tmp_12
  %in_buf_22_7_V_addr = getelementptr [128 x i8]* %in_buf_22_7_V, i64 0, i64 %tmp_12
  %in_buf_23_7_V_addr = getelementptr [128 x i8]* %in_buf_23_7_V, i64 0, i64 %tmp_12
  %in_buf_24_7_V_addr = getelementptr [128 x i8]* %in_buf_24_7_V, i64 0, i64 %tmp_12
  %in_buf_25_7_V_addr = getelementptr [128 x i8]* %in_buf_25_7_V, i64 0, i64 %tmp_12
  %in_buf_26_7_V_addr = getelementptr [128 x i8]* %in_buf_26_7_V, i64 0, i64 %tmp_12
  %in_buf_27_7_V_addr = getelementptr [128 x i8]* %in_buf_27_7_V, i64 0, i64 %tmp_12
  %in_buf_28_7_V_addr = getelementptr [128 x i8]* %in_buf_28_7_V, i64 0, i64 %tmp_12
  %in_buf_29_7_V_addr = getelementptr [128 x i8]* %in_buf_29_7_V, i64 0, i64 %tmp_12
  %in_buf_30_7_V_addr = getelementptr [128 x i8]* %in_buf_30_7_V, i64 0, i64 %tmp_12
  %in_buf_31_7_V_addr = getelementptr [128 x i8]* %in_buf_31_7_V, i64 0, i64 %tmp_12
  br label %10

; <label>:10                                      ; preds = %12, %9
  %is_idx_5 = phi i19 [ %indvars_iv940_in, %9 ], [ %is_idx_7, %12 ]
  %j2 = phi i9 [ 0, %9 ], [ %j_2, %12 ]
  %exitcond6 = icmp eq i19 %is_idx_5, %is_idx_6
  br i1 %exitcond6, label %13, label %11

; <label>:11                                      ; preds = %10
  %empty_16 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32)
  call void (...)* @_ssdm_op_SpecLoopName([9 x i8]* @p_str12) nounwind
  %tmp_15 = call i32 (...)* @_ssdm_op_SpecRegionBegin([9 x i8]* @p_str12)
  call void (...)* @_ssdm_op_SpecPipeline(i32 1, i32 1, i32 1, i32 0, [1 x i8]* @p_str1) nounwind
  %is_idx_7 = add i19 1, %is_idx_5
  %empty_17 = call { i64, i8, i8, i4, i1, i5, i5 } @_ssdm_op_Read.axis.volatile.i64P.i8P.i8P.i4P.i1P.i5P.i5P(i64* %in_stream_data_V, i8* %in_stream_keep_V, i8* %in_stream_strb_V, i4* %in_stream_user_V, i1* %in_stream_last_V, i5* %in_stream_id_V, i5* %in_stream_dest_V)
  %ret_2 = extractvalue { i64, i8, i8, i4, i1, i5, i5 } %empty_17, 0
  %tmp_256 = trunc i64 %ret_2 to i8
  %arrayNo1_cast_cast = call i6 @_ssdm_op_PartSelect.i6.i9.i32.i32(i9 %j2, i32 3, i32 8)
  %p_Result_s = call i8 @_ssdm_op_PartSelect.i8.i64.i32.i32(i64 %ret_2, i32 8, i32 15)
  %p_Result_2 = call i8 @_ssdm_op_PartSelect.i8.i64.i32.i32(i64 %ret_2, i32 16, i32 23)
  %p_Result_10 = call i8 @_ssdm_op_PartSelect.i8.i64.i32.i32(i64 %ret_2, i32 24, i32 31)
  %p_Result_11 = call i8 @_ssdm_op_PartSelect.i8.i64.i32.i32(i64 %ret_2, i32 32, i32 39)
  %p_Result_12 = call i8 @_ssdm_op_PartSelect.i8.i64.i32.i32(i64 %ret_2, i32 40, i32 47)
  %p_Result_13 = call i8 @_ssdm_op_PartSelect.i8.i64.i32.i32(i64 %ret_2, i32 48, i32 55)
  %p_Result_14 = call i8 @_ssdm_op_PartSelect.i8.i64.i32.i32(i64 %ret_2, i32 56, i32 63)
  switch i6 %arrayNo1_cast_cast, label %branch255 [
    i6 0, label %branch224
    i6 1, label %branch225
    i6 2, label %branch226
    i6 3, label %branch227
    i6 4, label %branch228
    i6 5, label %branch229
    i6 6, label %branch230
    i6 7, label %branch231
    i6 8, label %branch232
    i6 9, label %branch233
    i6 10, label %branch234
    i6 11, label %branch235
    i6 12, label %branch236
    i6 13, label %branch237
    i6 14, label %branch238
    i6 15, label %branch239
    i6 16, label %branch240
    i6 17, label %branch241
    i6 18, label %branch242
    i6 19, label %branch243
    i6 20, label %branch244
    i6 21, label %branch245
    i6 22, label %branch246
    i6 23, label %branch247
    i6 24, label %branch248
    i6 25, label %branch249
    i6 26, label %branch250
    i6 27, label %branch251
    i6 28, label %branch252
    i6 29, label %branch253
    i6 30, label %branch254
  ]

; <label>:12                                      ; preds = %branch255, %branch254, %branch253, %branch252, %branch251, %branch250, %branch249, %branch248, %branch247, %branch246, %branch245, %branch244, %branch243, %branch242, %branch241, %branch240, %branch239, %branch238, %branch237, %branch236, %branch235, %branch234, %branch233, %branch232, %branch231, %branch230, %branch229, %branch228, %branch227, %branch226, %branch225, %branch224
  %empty_18 = call i32 (...)* @_ssdm_op_SpecRegionEnd([9 x i8]* @p_str12, i32 %tmp_15)
  %j_2 = add i9 %j2, 8
  br label %10

; <label>:13                                      ; preds = %10
  %empty_19 = call i32 (...)* @_ssdm_op_SpecRegionEnd([9 x i8]* @p_str11, i32 %tmp_11)
  br label %8

.preheader.preheader:                             ; preds = %.preheader.preheader.preheader, %ifFalse
  %indvar_flatten = phi i11 [ %indvar_flatten_next, %ifFalse ], [ 0, %.preheader.preheader.preheader ]
  %i4 = phi i8 [ %tmp_14_mid2_v, %ifFalse ], [ 0, %.preheader.preheader.preheader ]
  %j3 = phi i4 [ %j_3, %ifFalse ], [ 0, %.preheader.preheader.preheader ]
  %exitcond_flatten = icmp eq i11 %indvar_flatten, -768
  %indvar_flatten_next = add i11 %indvar_flatten, 1
  br i1 %exitcond_flatten, label %14, label %_ifconv180

ifTrue:                                           ; preds = %_ifconv180
  %tmp_34 = icmp slt i32 %out_tmp_9_V_24, %out_tmp_9_V_23
  %ix0_V_cast = zext i1 %tmp_34 to i2
  %tmp_35 = icmp slt i32 %out_tmp_9_V_21, %out_tmp_9_V_20
  %ix1_V = select i1 %tmp_35, i2 -1, i2 -2
  %tmp_36 = icmp slt i32 %out_tmp_9_V_19, %out_tmp_9_V_9
  %ix2_V = select i1 %tmp_36, i3 -3, i3 -4
  %tmp_37 = icmp slt i32 %out_tmp_9_V_7, %out_tmp_9_V_5
  %ix3_V_cast_cast = select i1 %tmp_37, i3 -1, i3 -2
  %tmp_38 = icmp slt i32 %out_tmp_9_V_3, %out_tmp_9_V_2
  %ix4_V = select i1 %tmp_38, i4 -7, i4 -8
  %out_tmp_V_load_10_ph = select i1 %tmp_34, i32 %out_tmp_9_V_23, i32 %out_tmp_9_V_24
  %out_tmp_V_load_11_ph = select i1 %tmp_35, i32 %out_tmp_9_V_20, i32 %out_tmp_9_V_21
  %tmp_39 = icmp slt i32 %out_tmp_V_load_10_ph, %out_tmp_V_load_11_ph
  %ix5_V = select i1 %tmp_39, i2 %ix1_V, i2 %ix0_V_cast
  %ix5_V_cast = zext i2 %ix5_V to i3
  %out_tmp_V_load_12_ph = select i1 %tmp_36, i32 %out_tmp_9_V_9, i32 %out_tmp_9_V_19
  %out_tmp_V_load_13_ph = select i1 %tmp_37, i32 %out_tmp_9_V_5, i32 %out_tmp_9_V_7
  %tmp_40 = icmp slt i32 %out_tmp_V_load_12_ph, %out_tmp_V_load_13_ph
  %ix6_V = select i1 %tmp_40, i3 %ix3_V_cast_cast, i3 %ix2_V
  %sel_tmp1 = icmp eq i2 %ix5_V, 1
  %sel_tmp3 = icmp eq i2 %ix5_V, -2
  %sel_tmp5 = icmp eq i2 %ix5_V, 0
  %newSel = select i1 %sel_tmp5, i32 %out_tmp_9_V_24, i32 %out_tmp_9_V_21
  %or_cond1 = or i1 %sel_tmp5, %sel_tmp3
  %newSel1 = select i1 %sel_tmp1, i32 %out_tmp_9_V_23, i32 %out_tmp_9_V_20
  %out_tmp_9_V = select i1 %or_cond1, i32 %newSel, i32 %newSel1
  %ix6_V_t = zext i3 %ix6_V to i4
  %out_tmp_V_load_15_ph = call i32 @_ssdm_op_Mux.ap_auto.16i32.i4(i32 %out_tmp_9_V_5, i32 %out_tmp_9_V_5, i32 %out_tmp_9_V_5, i32 %out_tmp_9_V_5, i32 %out_tmp_9_V_19, i32 %out_tmp_9_V_9, i32 %out_tmp_9_V_7, i32 %out_tmp_9_V_5, i32 %out_tmp_9_V_5, i32 %out_tmp_9_V_5, i32 %out_tmp_9_V_5, i32 %out_tmp_9_V_5, i32 %out_tmp_9_V_5, i32 %out_tmp_9_V_5, i32 %out_tmp_9_V_5, i32 %out_tmp_9_V_5, i4 %ix6_V_t)
  %tmp_42 = icmp slt i32 %out_tmp_9_V, %out_tmp_V_load_15_ph
  %ix7_V = select i1 %tmp_42, i3 %ix6_V, i3 %ix5_V_cast
  %ix7_V_cast = zext i3 %ix7_V to i4
  %out_tmp_V_load_16_ph = call i32 @_ssdm_op_Mux.ap_auto.16i32.i4(i32 %out_tmp_9_V_24, i32 %out_tmp_9_V_23, i32 %out_tmp_9_V_21, i32 %out_tmp_9_V_20, i32 %out_tmp_9_V_19, i32 %out_tmp_9_V_9, i32 %out_tmp_9_V_7, i32 %out_tmp_9_V_5, i32 %out_tmp_9_V_5, i32 %out_tmp_9_V_5, i32 %out_tmp_9_V_5, i32 %out_tmp_9_V_5, i32 %out_tmp_9_V_5, i32 %out_tmp_9_V_5, i32 %out_tmp_9_V_5, i32 %out_tmp_9_V_5, i4 %ix7_V_cast)
  %out_tmp_V_load_17_ph = select i1 %tmp_38, i32 %out_tmp_9_V_2, i32 %out_tmp_9_V_3
  %tmp_44 = icmp slt i32 %out_tmp_V_load_16_ph, %out_tmp_V_load_17_ph
  %ix8_V = select i1 %tmp_44, i4 %ix4_V, i4 %ix7_V_cast
  %out_buf_V_addr = getelementptr [128 x i4]* %out_buf_V, i64 0, i64 %tmp_14_mid2
  store i4 %ix8_V, i4* %out_buf_V_addr, align 1
  br label %ifFalse

ifFalse:                                          ; preds = %ifTrue, %_ifconv180
  store i32 %out_tmp_9_V_2, i32* %out_tmp_9_V_17
  store i32 %out_tmp_9_V_3, i32* %out_tmp_9_V_16
  store i32 %out_tmp_9_V_5, i32* %out_tmp_9_V_15
  store i32 %out_tmp_9_V_7, i32* %out_tmp_9_V_14
  store i32 %out_tmp_9_V_9, i32* %out_tmp_9_V_12
  store i32 %out_tmp_9_V_19, i32* %out_tmp_9_V_10
  store i32 %out_tmp_9_V_20, i32* %out_tmp_9_V_8
  store i32 %out_tmp_9_V_21, i32* %out_tmp_9_V_6
  store i32 %out_tmp_9_V_23, i32* %out_tmp_9_V_4
  store i32 %out_tmp_9_V_24, i32* %out_tmp_9_V_1
  br label %.preheader.preheader

_ifconv180:                                       ; preds = %.preheader.preheader
  %out_tmp_9_V_1_load = load i32* %out_tmp_9_V_1
  %out_tmp_9_V_4_load = load i32* %out_tmp_9_V_4
  %out_tmp_9_V_6_load = load i32* %out_tmp_9_V_6
  %out_tmp_9_V_8_load = load i32* %out_tmp_9_V_8
  %out_tmp_9_V_10_load = load i32* %out_tmp_9_V_10
  %out_tmp_9_V_12_load = load i32* %out_tmp_9_V_12
  %out_tmp_9_V_14_load = load i32* %out_tmp_9_V_14
  %out_tmp_9_V_15_load = load i32* %out_tmp_9_V_15
  %out_tmp_9_V_16_load = load i32* %out_tmp_9_V_16
  %out_tmp_9_V_17_load = load i32* %out_tmp_9_V_17
  call void (...)* @_ssdm_op_SpecLoopName([6 x i8]* @L1_L2_str)
  %empty_20 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 1280, i64 1280, i64 1280)
  %tmp_43 = icmp eq i4 %j3, -6
  %j3_mid2 = select i1 %tmp_43, i4 0, i4 %j3
  %i_s = add i8 %i4, 1
  %tmp_14_mid2_v = select i1 %tmp_43, i8 %i_s, i8 %i4
  %tmp_14_mid2 = zext i8 %tmp_14_mid2_v to i64
  %in_buf_0_0_V_addr_1 = getelementptr [128 x i8]* %in_buf_0_0_V, i64 0, i64 %tmp_14_mid2
  %in_buf_0_0_V_load = load i8* %in_buf_0_0_V_addr_1, align 1
  %lhs_V_mid2 = zext i8 %in_buf_0_0_V_load to i16
  %in_buf_0_1_V_addr_1 = getelementptr [128 x i8]* %in_buf_0_1_V, i64 0, i64 %tmp_14_mid2
  %in_buf_0_1_V_load = load i8* %in_buf_0_1_V_addr_1, align 1
  %lhs_V_1_mid2 = zext i8 %in_buf_0_1_V_load to i16
  %in_buf_0_2_V_addr_1 = getelementptr [128 x i8]* %in_buf_0_2_V, i64 0, i64 %tmp_14_mid2
  %in_buf_0_2_V_load = load i8* %in_buf_0_2_V_addr_1, align 1
  %lhs_V_2_mid2 = zext i8 %in_buf_0_2_V_load to i16
  %in_buf_0_3_V_addr_1 = getelementptr [128 x i8]* %in_buf_0_3_V, i64 0, i64 %tmp_14_mid2
  %in_buf_0_3_V_load = load i8* %in_buf_0_3_V_addr_1, align 1
  %lhs_V_3_mid2 = zext i8 %in_buf_0_3_V_load to i16
  %in_buf_0_4_V_addr_1 = getelementptr [128 x i8]* %in_buf_0_4_V, i64 0, i64 %tmp_14_mid2
  %in_buf_0_4_V_load = load i8* %in_buf_0_4_V_addr_1, align 1
  %lhs_V_4_mid2 = zext i8 %in_buf_0_4_V_load to i16
  %in_buf_0_5_V_addr_1 = getelementptr [128 x i8]* %in_buf_0_5_V, i64 0, i64 %tmp_14_mid2
  %in_buf_0_5_V_load = load i8* %in_buf_0_5_V_addr_1, align 1
  %lhs_V_5_mid2 = zext i8 %in_buf_0_5_V_load to i16
  %in_buf_0_6_V_addr_1 = getelementptr [128 x i8]* %in_buf_0_6_V, i64 0, i64 %tmp_14_mid2
  %in_buf_0_6_V_load = load i8* %in_buf_0_6_V_addr_1, align 1
  %lhs_V_6_mid2 = zext i8 %in_buf_0_6_V_load to i16
  %in_buf_0_7_V_addr_1 = getelementptr [128 x i8]* %in_buf_0_7_V, i64 0, i64 %tmp_14_mid2
  %in_buf_0_7_V_load = load i8* %in_buf_0_7_V_addr_1, align 1
  %lhs_V_7_mid2 = zext i8 %in_buf_0_7_V_load to i16
  %in_buf_1_0_V_addr_1 = getelementptr [128 x i8]* %in_buf_1_0_V, i64 0, i64 %tmp_14_mid2
  %in_buf_1_0_V_load = load i8* %in_buf_1_0_V_addr_1, align 1
  %lhs_V_8_mid2 = zext i8 %in_buf_1_0_V_load to i16
  %in_buf_1_1_V_addr_1 = getelementptr [128 x i8]* %in_buf_1_1_V, i64 0, i64 %tmp_14_mid2
  %in_buf_1_1_V_load = load i8* %in_buf_1_1_V_addr_1, align 1
  %lhs_V_9_mid2 = zext i8 %in_buf_1_1_V_load to i16
  %in_buf_1_2_V_addr_1 = getelementptr [128 x i8]* %in_buf_1_2_V, i64 0, i64 %tmp_14_mid2
  %in_buf_1_2_V_load = load i8* %in_buf_1_2_V_addr_1, align 1
  %lhs_V_mid2_21 = zext i8 %in_buf_1_2_V_load to i16
  %in_buf_1_3_V_addr_1 = getelementptr [128 x i8]* %in_buf_1_3_V, i64 0, i64 %tmp_14_mid2
  %in_buf_1_3_V_load = load i8* %in_buf_1_3_V_addr_1, align 1
  %lhs_V_10_mid2 = zext i8 %in_buf_1_3_V_load to i16
  %in_buf_1_4_V_addr_1 = getelementptr [128 x i8]* %in_buf_1_4_V, i64 0, i64 %tmp_14_mid2
  %in_buf_1_4_V_load = load i8* %in_buf_1_4_V_addr_1, align 1
  %lhs_V_11_mid2 = zext i8 %in_buf_1_4_V_load to i16
  %in_buf_1_5_V_addr_1 = getelementptr [128 x i8]* %in_buf_1_5_V, i64 0, i64 %tmp_14_mid2
  %in_buf_1_5_V_load = load i8* %in_buf_1_5_V_addr_1, align 1
  %lhs_V_12_mid2 = zext i8 %in_buf_1_5_V_load to i16
  %in_buf_1_6_V_addr_1 = getelementptr [128 x i8]* %in_buf_1_6_V, i64 0, i64 %tmp_14_mid2
  %in_buf_1_6_V_load = load i8* %in_buf_1_6_V_addr_1, align 1
  %lhs_V_13_mid2 = zext i8 %in_buf_1_6_V_load to i16
  %in_buf_1_7_V_addr_1 = getelementptr [128 x i8]* %in_buf_1_7_V, i64 0, i64 %tmp_14_mid2
  %in_buf_1_7_V_load = load i8* %in_buf_1_7_V_addr_1, align 1
  %lhs_V_14_mid2 = zext i8 %in_buf_1_7_V_load to i16
  %in_buf_2_0_V_addr_1 = getelementptr [128 x i8]* %in_buf_2_0_V, i64 0, i64 %tmp_14_mid2
  %in_buf_2_0_V_load = load i8* %in_buf_2_0_V_addr_1, align 1
  %lhs_V_15_mid2 = zext i8 %in_buf_2_0_V_load to i16
  %in_buf_2_1_V_addr_1 = getelementptr [128 x i8]* %in_buf_2_1_V, i64 0, i64 %tmp_14_mid2
  %in_buf_2_1_V_load = load i8* %in_buf_2_1_V_addr_1, align 1
  %lhs_V_16_mid2 = zext i8 %in_buf_2_1_V_load to i16
  %in_buf_2_2_V_addr_1 = getelementptr [128 x i8]* %in_buf_2_2_V, i64 0, i64 %tmp_14_mid2
  %in_buf_2_2_V_load = load i8* %in_buf_2_2_V_addr_1, align 1
  %lhs_V_17_mid2 = zext i8 %in_buf_2_2_V_load to i16
  %in_buf_2_3_V_addr_1 = getelementptr [128 x i8]* %in_buf_2_3_V, i64 0, i64 %tmp_14_mid2
  %in_buf_2_3_V_load = load i8* %in_buf_2_3_V_addr_1, align 1
  %lhs_V_18_mid2 = zext i8 %in_buf_2_3_V_load to i16
  %in_buf_2_4_V_addr_1 = getelementptr [128 x i8]* %in_buf_2_4_V, i64 0, i64 %tmp_14_mid2
  %in_buf_2_4_V_load = load i8* %in_buf_2_4_V_addr_1, align 1
  %lhs_V_19_mid2 = zext i8 %in_buf_2_4_V_load to i16
  %in_buf_2_5_V_addr_1 = getelementptr [128 x i8]* %in_buf_2_5_V, i64 0, i64 %tmp_14_mid2
  %in_buf_2_5_V_load = load i8* %in_buf_2_5_V_addr_1, align 1
  %lhs_V_20_mid2 = zext i8 %in_buf_2_5_V_load to i16
  %in_buf_2_6_V_addr_1 = getelementptr [128 x i8]* %in_buf_2_6_V, i64 0, i64 %tmp_14_mid2
  %in_buf_2_6_V_load = load i8* %in_buf_2_6_V_addr_1, align 1
  %lhs_V_21_mid2 = zext i8 %in_buf_2_6_V_load to i16
  %in_buf_2_7_V_addr_1 = getelementptr [128 x i8]* %in_buf_2_7_V, i64 0, i64 %tmp_14_mid2
  %in_buf_2_7_V_load = load i8* %in_buf_2_7_V_addr_1, align 1
  %lhs_V_22_mid2 = zext i8 %in_buf_2_7_V_load to i16
  %in_buf_3_0_V_addr_1 = getelementptr [128 x i8]* %in_buf_3_0_V, i64 0, i64 %tmp_14_mid2
  %in_buf_3_0_V_load = load i8* %in_buf_3_0_V_addr_1, align 1
  %lhs_V_23_mid2 = zext i8 %in_buf_3_0_V_load to i16
  %in_buf_3_1_V_addr_1 = getelementptr [128 x i8]* %in_buf_3_1_V, i64 0, i64 %tmp_14_mid2
  %in_buf_3_1_V_load = load i8* %in_buf_3_1_V_addr_1, align 1
  %lhs_V_24_mid2 = zext i8 %in_buf_3_1_V_load to i16
  %in_buf_3_2_V_addr_1 = getelementptr [128 x i8]* %in_buf_3_2_V, i64 0, i64 %tmp_14_mid2
  %in_buf_3_2_V_load = load i8* %in_buf_3_2_V_addr_1, align 1
  %lhs_V_25_mid2 = zext i8 %in_buf_3_2_V_load to i16
  %in_buf_3_3_V_addr_1 = getelementptr [128 x i8]* %in_buf_3_3_V, i64 0, i64 %tmp_14_mid2
  %in_buf_3_3_V_load = load i8* %in_buf_3_3_V_addr_1, align 1
  %lhs_V_26_mid2 = zext i8 %in_buf_3_3_V_load to i16
  %in_buf_3_4_V_addr_1 = getelementptr [128 x i8]* %in_buf_3_4_V, i64 0, i64 %tmp_14_mid2
  %in_buf_3_4_V_load = load i8* %in_buf_3_4_V_addr_1, align 1
  %lhs_V_27_mid2 = zext i8 %in_buf_3_4_V_load to i16
  %in_buf_3_5_V_addr_1 = getelementptr [128 x i8]* %in_buf_3_5_V, i64 0, i64 %tmp_14_mid2
  %in_buf_3_5_V_load = load i8* %in_buf_3_5_V_addr_1, align 1
  %lhs_V_28_mid2 = zext i8 %in_buf_3_5_V_load to i16
  %in_buf_3_6_V_addr_1 = getelementptr [128 x i8]* %in_buf_3_6_V, i64 0, i64 %tmp_14_mid2
  %in_buf_3_6_V_load = load i8* %in_buf_3_6_V_addr_1, align 1
  %lhs_V_29_mid2 = zext i8 %in_buf_3_6_V_load to i16
  %in_buf_3_7_V_addr_1 = getelementptr [128 x i8]* %in_buf_3_7_V, i64 0, i64 %tmp_14_mid2
  %in_buf_3_7_V_load = load i8* %in_buf_3_7_V_addr_1, align 1
  %lhs_V_30_mid2 = zext i8 %in_buf_3_7_V_load to i16
  %in_buf_4_0_V_addr_1 = getelementptr [128 x i8]* %in_buf_4_0_V, i64 0, i64 %tmp_14_mid2
  %in_buf_4_0_V_load = load i8* %in_buf_4_0_V_addr_1, align 1
  %lhs_V_31_mid2 = zext i8 %in_buf_4_0_V_load to i16
  %in_buf_4_1_V_addr_1 = getelementptr [128 x i8]* %in_buf_4_1_V, i64 0, i64 %tmp_14_mid2
  %in_buf_4_1_V_load = load i8* %in_buf_4_1_V_addr_1, align 1
  %lhs_V_32_mid2 = zext i8 %in_buf_4_1_V_load to i16
  %in_buf_4_2_V_addr_1 = getelementptr [128 x i8]* %in_buf_4_2_V, i64 0, i64 %tmp_14_mid2
  %in_buf_4_2_V_load = load i8* %in_buf_4_2_V_addr_1, align 1
  %lhs_V_33_mid2 = zext i8 %in_buf_4_2_V_load to i16
  %in_buf_4_3_V_addr_1 = getelementptr [128 x i8]* %in_buf_4_3_V, i64 0, i64 %tmp_14_mid2
  %in_buf_4_3_V_load = load i8* %in_buf_4_3_V_addr_1, align 1
  %lhs_V_34_mid2 = zext i8 %in_buf_4_3_V_load to i16
  %in_buf_4_4_V_addr_1 = getelementptr [128 x i8]* %in_buf_4_4_V, i64 0, i64 %tmp_14_mid2
  %in_buf_4_4_V_load = load i8* %in_buf_4_4_V_addr_1, align 1
  %lhs_V_35_mid2 = zext i8 %in_buf_4_4_V_load to i16
  %in_buf_4_5_V_addr_1 = getelementptr [128 x i8]* %in_buf_4_5_V, i64 0, i64 %tmp_14_mid2
  %in_buf_4_5_V_load = load i8* %in_buf_4_5_V_addr_1, align 1
  %lhs_V_36_mid2 = zext i8 %in_buf_4_5_V_load to i16
  %in_buf_4_6_V_addr_1 = getelementptr [128 x i8]* %in_buf_4_6_V, i64 0, i64 %tmp_14_mid2
  %in_buf_4_6_V_load = load i8* %in_buf_4_6_V_addr_1, align 1
  %lhs_V_37_mid2 = zext i8 %in_buf_4_6_V_load to i16
  %in_buf_4_7_V_addr_1 = getelementptr [128 x i8]* %in_buf_4_7_V, i64 0, i64 %tmp_14_mid2
  %in_buf_4_7_V_load = load i8* %in_buf_4_7_V_addr_1, align 1
  %lhs_V_38_mid2 = zext i8 %in_buf_4_7_V_load to i16
  %in_buf_5_0_V_addr_1 = getelementptr [128 x i8]* %in_buf_5_0_V, i64 0, i64 %tmp_14_mid2
  %in_buf_5_0_V_load = load i8* %in_buf_5_0_V_addr_1, align 1
  %lhs_V_39_mid2 = zext i8 %in_buf_5_0_V_load to i16
  %in_buf_5_1_V_addr_1 = getelementptr [128 x i8]* %in_buf_5_1_V, i64 0, i64 %tmp_14_mid2
  %in_buf_5_1_V_load = load i8* %in_buf_5_1_V_addr_1, align 1
  %lhs_V_40_mid2 = zext i8 %in_buf_5_1_V_load to i16
  %in_buf_5_2_V_addr_1 = getelementptr [128 x i8]* %in_buf_5_2_V, i64 0, i64 %tmp_14_mid2
  %in_buf_5_2_V_load = load i8* %in_buf_5_2_V_addr_1, align 1
  %lhs_V_41_mid2 = zext i8 %in_buf_5_2_V_load to i16
  %in_buf_5_3_V_addr_1 = getelementptr [128 x i8]* %in_buf_5_3_V, i64 0, i64 %tmp_14_mid2
  %in_buf_5_3_V_load = load i8* %in_buf_5_3_V_addr_1, align 1
  %lhs_V_42_mid2 = zext i8 %in_buf_5_3_V_load to i16
  %in_buf_5_4_V_addr_1 = getelementptr [128 x i8]* %in_buf_5_4_V, i64 0, i64 %tmp_14_mid2
  %in_buf_5_4_V_load = load i8* %in_buf_5_4_V_addr_1, align 1
  %lhs_V_43_mid2 = zext i8 %in_buf_5_4_V_load to i16
  %in_buf_5_5_V_addr_1 = getelementptr [128 x i8]* %in_buf_5_5_V, i64 0, i64 %tmp_14_mid2
  %in_buf_5_5_V_load = load i8* %in_buf_5_5_V_addr_1, align 1
  %lhs_V_44_mid2 = zext i8 %in_buf_5_5_V_load to i16
  %in_buf_5_6_V_addr_1 = getelementptr [128 x i8]* %in_buf_5_6_V, i64 0, i64 %tmp_14_mid2
  %in_buf_5_6_V_load = load i8* %in_buf_5_6_V_addr_1, align 1
  %lhs_V_45_mid2 = zext i8 %in_buf_5_6_V_load to i16
  %in_buf_5_7_V_addr_1 = getelementptr [128 x i8]* %in_buf_5_7_V, i64 0, i64 %tmp_14_mid2
  %in_buf_5_7_V_load = load i8* %in_buf_5_7_V_addr_1, align 1
  %lhs_V_46_mid2 = zext i8 %in_buf_5_7_V_load to i16
  %in_buf_6_0_V_addr_1 = getelementptr [128 x i8]* %in_buf_6_0_V, i64 0, i64 %tmp_14_mid2
  %in_buf_6_0_V_load = load i8* %in_buf_6_0_V_addr_1, align 1
  %lhs_V_47_mid2 = zext i8 %in_buf_6_0_V_load to i16
  %in_buf_6_1_V_addr_1 = getelementptr [128 x i8]* %in_buf_6_1_V, i64 0, i64 %tmp_14_mid2
  %in_buf_6_1_V_load = load i8* %in_buf_6_1_V_addr_1, align 1
  %lhs_V_48_mid2 = zext i8 %in_buf_6_1_V_load to i16
  %in_buf_6_2_V_addr_1 = getelementptr [128 x i8]* %in_buf_6_2_V, i64 0, i64 %tmp_14_mid2
  %in_buf_6_2_V_load = load i8* %in_buf_6_2_V_addr_1, align 1
  %lhs_V_49_mid2 = zext i8 %in_buf_6_2_V_load to i16
  %in_buf_6_3_V_addr_1 = getelementptr [128 x i8]* %in_buf_6_3_V, i64 0, i64 %tmp_14_mid2
  %in_buf_6_3_V_load = load i8* %in_buf_6_3_V_addr_1, align 1
  %lhs_V_50_mid2 = zext i8 %in_buf_6_3_V_load to i16
  %in_buf_6_4_V_addr_1 = getelementptr [128 x i8]* %in_buf_6_4_V, i64 0, i64 %tmp_14_mid2
  %in_buf_6_4_V_load = load i8* %in_buf_6_4_V_addr_1, align 1
  %lhs_V_51_mid2 = zext i8 %in_buf_6_4_V_load to i16
  %in_buf_6_5_V_addr_1 = getelementptr [128 x i8]* %in_buf_6_5_V, i64 0, i64 %tmp_14_mid2
  %in_buf_6_5_V_load = load i8* %in_buf_6_5_V_addr_1, align 1
  %lhs_V_52_mid2 = zext i8 %in_buf_6_5_V_load to i16
  %in_buf_6_6_V_addr_1 = getelementptr [128 x i8]* %in_buf_6_6_V, i64 0, i64 %tmp_14_mid2
  %in_buf_6_6_V_load = load i8* %in_buf_6_6_V_addr_1, align 1
  %lhs_V_53_mid2 = zext i8 %in_buf_6_6_V_load to i16
  %in_buf_6_7_V_addr_1 = getelementptr [128 x i8]* %in_buf_6_7_V, i64 0, i64 %tmp_14_mid2
  %in_buf_6_7_V_load = load i8* %in_buf_6_7_V_addr_1, align 1
  %lhs_V_54_mid2 = zext i8 %in_buf_6_7_V_load to i16
  %in_buf_7_0_V_addr_1 = getelementptr [128 x i8]* %in_buf_7_0_V, i64 0, i64 %tmp_14_mid2
  %in_buf_7_0_V_load = load i8* %in_buf_7_0_V_addr_1, align 1
  %lhs_V_55_mid2 = zext i8 %in_buf_7_0_V_load to i16
  %in_buf_7_1_V_addr_1 = getelementptr [128 x i8]* %in_buf_7_1_V, i64 0, i64 %tmp_14_mid2
  %in_buf_7_1_V_load = load i8* %in_buf_7_1_V_addr_1, align 1
  %lhs_V_56_mid2 = zext i8 %in_buf_7_1_V_load to i16
  %in_buf_7_2_V_addr_1 = getelementptr [128 x i8]* %in_buf_7_2_V, i64 0, i64 %tmp_14_mid2
  %in_buf_7_2_V_load = load i8* %in_buf_7_2_V_addr_1, align 1
  %lhs_V_57_mid2 = zext i8 %in_buf_7_2_V_load to i16
  %in_buf_7_3_V_addr_1 = getelementptr [128 x i8]* %in_buf_7_3_V, i64 0, i64 %tmp_14_mid2
  %in_buf_7_3_V_load = load i8* %in_buf_7_3_V_addr_1, align 1
  %lhs_V_58_mid2 = zext i8 %in_buf_7_3_V_load to i16
  %in_buf_7_4_V_addr_1 = getelementptr [128 x i8]* %in_buf_7_4_V, i64 0, i64 %tmp_14_mid2
  %in_buf_7_4_V_load = load i8* %in_buf_7_4_V_addr_1, align 1
  %lhs_V_59_mid2 = zext i8 %in_buf_7_4_V_load to i16
  %in_buf_7_5_V_addr_1 = getelementptr [128 x i8]* %in_buf_7_5_V, i64 0, i64 %tmp_14_mid2
  %in_buf_7_5_V_load = load i8* %in_buf_7_5_V_addr_1, align 1
  %lhs_V_60_mid2 = zext i8 %in_buf_7_5_V_load to i16
  %in_buf_7_6_V_addr_1 = getelementptr [128 x i8]* %in_buf_7_6_V, i64 0, i64 %tmp_14_mid2
  %in_buf_7_6_V_load = load i8* %in_buf_7_6_V_addr_1, align 1
  %lhs_V_61_mid2 = zext i8 %in_buf_7_6_V_load to i16
  %in_buf_7_7_V_addr_1 = getelementptr [128 x i8]* %in_buf_7_7_V, i64 0, i64 %tmp_14_mid2
  %in_buf_7_7_V_load = load i8* %in_buf_7_7_V_addr_1, align 1
  %lhs_V_62_mid2 = zext i8 %in_buf_7_7_V_load to i16
  %in_buf_8_0_V_addr_1 = getelementptr [128 x i8]* %in_buf_8_0_V, i64 0, i64 %tmp_14_mid2
  %in_buf_8_0_V_load = load i8* %in_buf_8_0_V_addr_1, align 1
  %lhs_V_63_mid2 = zext i8 %in_buf_8_0_V_load to i16
  %in_buf_8_1_V_addr_1 = getelementptr [128 x i8]* %in_buf_8_1_V, i64 0, i64 %tmp_14_mid2
  %in_buf_8_1_V_load = load i8* %in_buf_8_1_V_addr_1, align 1
  %lhs_V_64_mid2 = zext i8 %in_buf_8_1_V_load to i16
  %in_buf_8_2_V_addr_1 = getelementptr [128 x i8]* %in_buf_8_2_V, i64 0, i64 %tmp_14_mid2
  %in_buf_8_2_V_load = load i8* %in_buf_8_2_V_addr_1, align 1
  %lhs_V_65_mid2 = zext i8 %in_buf_8_2_V_load to i16
  %in_buf_8_3_V_addr_1 = getelementptr [128 x i8]* %in_buf_8_3_V, i64 0, i64 %tmp_14_mid2
  %in_buf_8_3_V_load = load i8* %in_buf_8_3_V_addr_1, align 1
  %lhs_V_66_mid2 = zext i8 %in_buf_8_3_V_load to i16
  %in_buf_8_4_V_addr_1 = getelementptr [128 x i8]* %in_buf_8_4_V, i64 0, i64 %tmp_14_mid2
  %in_buf_8_4_V_load = load i8* %in_buf_8_4_V_addr_1, align 1
  %lhs_V_67_mid2 = zext i8 %in_buf_8_4_V_load to i16
  %in_buf_8_5_V_addr_1 = getelementptr [128 x i8]* %in_buf_8_5_V, i64 0, i64 %tmp_14_mid2
  %in_buf_8_5_V_load = load i8* %in_buf_8_5_V_addr_1, align 1
  %lhs_V_68_mid2 = zext i8 %in_buf_8_5_V_load to i16
  %in_buf_8_6_V_addr_1 = getelementptr [128 x i8]* %in_buf_8_6_V, i64 0, i64 %tmp_14_mid2
  %in_buf_8_6_V_load = load i8* %in_buf_8_6_V_addr_1, align 1
  %lhs_V_69_mid2 = zext i8 %in_buf_8_6_V_load to i16
  %in_buf_8_7_V_addr_1 = getelementptr [128 x i8]* %in_buf_8_7_V, i64 0, i64 %tmp_14_mid2
  %in_buf_8_7_V_load = load i8* %in_buf_8_7_V_addr_1, align 1
  %lhs_V_70_mid2 = zext i8 %in_buf_8_7_V_load to i16
  %in_buf_9_0_V_addr_1 = getelementptr [128 x i8]* %in_buf_9_0_V, i64 0, i64 %tmp_14_mid2
  %in_buf_9_0_V_load = load i8* %in_buf_9_0_V_addr_1, align 1
  %lhs_V_71_mid2 = zext i8 %in_buf_9_0_V_load to i16
  %in_buf_9_1_V_addr_1 = getelementptr [128 x i8]* %in_buf_9_1_V, i64 0, i64 %tmp_14_mid2
  %in_buf_9_1_V_load = load i8* %in_buf_9_1_V_addr_1, align 1
  %lhs_V_72_mid2 = zext i8 %in_buf_9_1_V_load to i16
  %in_buf_9_2_V_addr_1 = getelementptr [128 x i8]* %in_buf_9_2_V, i64 0, i64 %tmp_14_mid2
  %in_buf_9_2_V_load = load i8* %in_buf_9_2_V_addr_1, align 1
  %lhs_V_73_mid2 = zext i8 %in_buf_9_2_V_load to i16
  %in_buf_9_3_V_addr_1 = getelementptr [128 x i8]* %in_buf_9_3_V, i64 0, i64 %tmp_14_mid2
  %in_buf_9_3_V_load = load i8* %in_buf_9_3_V_addr_1, align 1
  %lhs_V_74_mid2 = zext i8 %in_buf_9_3_V_load to i16
  %in_buf_9_4_V_addr_1 = getelementptr [128 x i8]* %in_buf_9_4_V, i64 0, i64 %tmp_14_mid2
  %in_buf_9_4_V_load = load i8* %in_buf_9_4_V_addr_1, align 1
  %lhs_V_75_mid2 = zext i8 %in_buf_9_4_V_load to i16
  %in_buf_9_5_V_addr_1 = getelementptr [128 x i8]* %in_buf_9_5_V, i64 0, i64 %tmp_14_mid2
  %in_buf_9_5_V_load = load i8* %in_buf_9_5_V_addr_1, align 1
  %lhs_V_76_mid2 = zext i8 %in_buf_9_5_V_load to i16
  %in_buf_9_6_V_addr_1 = getelementptr [128 x i8]* %in_buf_9_6_V, i64 0, i64 %tmp_14_mid2
  %in_buf_9_6_V_load = load i8* %in_buf_9_6_V_addr_1, align 1
  %lhs_V_77_mid2 = zext i8 %in_buf_9_6_V_load to i16
  %in_buf_9_7_V_addr_1 = getelementptr [128 x i8]* %in_buf_9_7_V, i64 0, i64 %tmp_14_mid2
  %in_buf_9_7_V_load = load i8* %in_buf_9_7_V_addr_1, align 1
  %lhs_V_78_mid2 = zext i8 %in_buf_9_7_V_load to i16
  %in_buf_10_0_V_addr_1 = getelementptr [128 x i8]* %in_buf_10_0_V, i64 0, i64 %tmp_14_mid2
  %in_buf_10_0_V_load = load i8* %in_buf_10_0_V_addr_1, align 1
  %lhs_V_79_mid2 = zext i8 %in_buf_10_0_V_load to i16
  %in_buf_10_1_V_addr_1 = getelementptr [128 x i8]* %in_buf_10_1_V, i64 0, i64 %tmp_14_mid2
  %in_buf_10_1_V_load = load i8* %in_buf_10_1_V_addr_1, align 1
  %lhs_V_80_mid2 = zext i8 %in_buf_10_1_V_load to i16
  %in_buf_10_2_V_addr_1 = getelementptr [128 x i8]* %in_buf_10_2_V, i64 0, i64 %tmp_14_mid2
  %in_buf_10_2_V_load = load i8* %in_buf_10_2_V_addr_1, align 1
  %lhs_V_81_mid2 = zext i8 %in_buf_10_2_V_load to i16
  %in_buf_10_3_V_addr_1 = getelementptr [128 x i8]* %in_buf_10_3_V, i64 0, i64 %tmp_14_mid2
  %in_buf_10_3_V_load = load i8* %in_buf_10_3_V_addr_1, align 1
  %lhs_V_82_mid2 = zext i8 %in_buf_10_3_V_load to i16
  %in_buf_10_4_V_addr_1 = getelementptr [128 x i8]* %in_buf_10_4_V, i64 0, i64 %tmp_14_mid2
  %in_buf_10_4_V_load = load i8* %in_buf_10_4_V_addr_1, align 1
  %lhs_V_83_mid2 = zext i8 %in_buf_10_4_V_load to i16
  %in_buf_10_5_V_addr_1 = getelementptr [128 x i8]* %in_buf_10_5_V, i64 0, i64 %tmp_14_mid2
  %in_buf_10_5_V_load = load i8* %in_buf_10_5_V_addr_1, align 1
  %lhs_V_84_mid2 = zext i8 %in_buf_10_5_V_load to i16
  %in_buf_10_6_V_addr_1 = getelementptr [128 x i8]* %in_buf_10_6_V, i64 0, i64 %tmp_14_mid2
  %in_buf_10_6_V_load = load i8* %in_buf_10_6_V_addr_1, align 1
  %lhs_V_85_mid2 = zext i8 %in_buf_10_6_V_load to i16
  %in_buf_10_7_V_addr_1 = getelementptr [128 x i8]* %in_buf_10_7_V, i64 0, i64 %tmp_14_mid2
  %in_buf_10_7_V_load = load i8* %in_buf_10_7_V_addr_1, align 1
  %lhs_V_86_mid2 = zext i8 %in_buf_10_7_V_load to i16
  %in_buf_11_0_V_addr_1 = getelementptr [128 x i8]* %in_buf_11_0_V, i64 0, i64 %tmp_14_mid2
  %in_buf_11_0_V_load = load i8* %in_buf_11_0_V_addr_1, align 1
  %lhs_V_87_mid2 = zext i8 %in_buf_11_0_V_load to i16
  %in_buf_11_1_V_addr_1 = getelementptr [128 x i8]* %in_buf_11_1_V, i64 0, i64 %tmp_14_mid2
  %in_buf_11_1_V_load = load i8* %in_buf_11_1_V_addr_1, align 1
  %lhs_V_88_mid2 = zext i8 %in_buf_11_1_V_load to i16
  %in_buf_11_2_V_addr_1 = getelementptr [128 x i8]* %in_buf_11_2_V, i64 0, i64 %tmp_14_mid2
  %in_buf_11_2_V_load = load i8* %in_buf_11_2_V_addr_1, align 1
  %lhs_V_89_mid2 = zext i8 %in_buf_11_2_V_load to i16
  %in_buf_11_3_V_addr_1 = getelementptr [128 x i8]* %in_buf_11_3_V, i64 0, i64 %tmp_14_mid2
  %in_buf_11_3_V_load = load i8* %in_buf_11_3_V_addr_1, align 1
  %lhs_V_90_mid2 = zext i8 %in_buf_11_3_V_load to i16
  %in_buf_11_4_V_addr_1 = getelementptr [128 x i8]* %in_buf_11_4_V, i64 0, i64 %tmp_14_mid2
  %in_buf_11_4_V_load = load i8* %in_buf_11_4_V_addr_1, align 1
  %lhs_V_91_mid2 = zext i8 %in_buf_11_4_V_load to i16
  %in_buf_11_5_V_addr_1 = getelementptr [128 x i8]* %in_buf_11_5_V, i64 0, i64 %tmp_14_mid2
  %in_buf_11_5_V_load = load i8* %in_buf_11_5_V_addr_1, align 1
  %lhs_V_92_mid2 = zext i8 %in_buf_11_5_V_load to i16
  %in_buf_11_6_V_addr_1 = getelementptr [128 x i8]* %in_buf_11_6_V, i64 0, i64 %tmp_14_mid2
  %in_buf_11_6_V_load = load i8* %in_buf_11_6_V_addr_1, align 1
  %lhs_V_93_mid2 = zext i8 %in_buf_11_6_V_load to i16
  %in_buf_11_7_V_addr_1 = getelementptr [128 x i8]* %in_buf_11_7_V, i64 0, i64 %tmp_14_mid2
  %in_buf_11_7_V_load = load i8* %in_buf_11_7_V_addr_1, align 1
  %lhs_V_94_mid2 = zext i8 %in_buf_11_7_V_load to i16
  %in_buf_12_0_V_addr_1 = getelementptr [128 x i8]* %in_buf_12_0_V, i64 0, i64 %tmp_14_mid2
  %in_buf_12_0_V_load = load i8* %in_buf_12_0_V_addr_1, align 1
  %lhs_V_95_mid2 = zext i8 %in_buf_12_0_V_load to i16
  %in_buf_12_1_V_addr_1 = getelementptr [128 x i8]* %in_buf_12_1_V, i64 0, i64 %tmp_14_mid2
  %in_buf_12_1_V_load = load i8* %in_buf_12_1_V_addr_1, align 1
  %lhs_V_96_mid2 = zext i8 %in_buf_12_1_V_load to i16
  %in_buf_12_2_V_addr_1 = getelementptr [128 x i8]* %in_buf_12_2_V, i64 0, i64 %tmp_14_mid2
  %in_buf_12_2_V_load = load i8* %in_buf_12_2_V_addr_1, align 1
  %lhs_V_97_mid2 = zext i8 %in_buf_12_2_V_load to i16
  %in_buf_12_3_V_addr_1 = getelementptr [128 x i8]* %in_buf_12_3_V, i64 0, i64 %tmp_14_mid2
  %in_buf_12_3_V_load = load i8* %in_buf_12_3_V_addr_1, align 1
  %lhs_V_98_mid2 = zext i8 %in_buf_12_3_V_load to i16
  %in_buf_12_4_V_addr_1 = getelementptr [128 x i8]* %in_buf_12_4_V, i64 0, i64 %tmp_14_mid2
  %in_buf_12_4_V_load = load i8* %in_buf_12_4_V_addr_1, align 1
  %lhs_V_99_mid2 = zext i8 %in_buf_12_4_V_load to i16
  %in_buf_12_5_V_addr_1 = getelementptr [128 x i8]* %in_buf_12_5_V, i64 0, i64 %tmp_14_mid2
  %in_buf_12_5_V_load = load i8* %in_buf_12_5_V_addr_1, align 1
  %lhs_V_100_mid2 = zext i8 %in_buf_12_5_V_load to i16
  %in_buf_12_6_V_addr_1 = getelementptr [128 x i8]* %in_buf_12_6_V, i64 0, i64 %tmp_14_mid2
  %in_buf_12_6_V_load = load i8* %in_buf_12_6_V_addr_1, align 1
  %lhs_V_101_mid2 = zext i8 %in_buf_12_6_V_load to i16
  %in_buf_12_7_V_addr_1 = getelementptr [128 x i8]* %in_buf_12_7_V, i64 0, i64 %tmp_14_mid2
  %in_buf_12_7_V_load = load i8* %in_buf_12_7_V_addr_1, align 1
  %lhs_V_102_mid2 = zext i8 %in_buf_12_7_V_load to i16
  %in_buf_13_0_V_addr_1 = getelementptr [128 x i8]* %in_buf_13_0_V, i64 0, i64 %tmp_14_mid2
  %in_buf_13_0_V_load = load i8* %in_buf_13_0_V_addr_1, align 1
  %lhs_V_103_mid2 = zext i8 %in_buf_13_0_V_load to i16
  %in_buf_13_1_V_addr_1 = getelementptr [128 x i8]* %in_buf_13_1_V, i64 0, i64 %tmp_14_mid2
  %in_buf_13_1_V_load = load i8* %in_buf_13_1_V_addr_1, align 1
  %lhs_V_104_mid2 = zext i8 %in_buf_13_1_V_load to i16
  %in_buf_13_2_V_addr_1 = getelementptr [128 x i8]* %in_buf_13_2_V, i64 0, i64 %tmp_14_mid2
  %in_buf_13_2_V_load = load i8* %in_buf_13_2_V_addr_1, align 1
  %lhs_V_105_mid2 = zext i8 %in_buf_13_2_V_load to i16
  %in_buf_13_3_V_addr_1 = getelementptr [128 x i8]* %in_buf_13_3_V, i64 0, i64 %tmp_14_mid2
  %in_buf_13_3_V_load = load i8* %in_buf_13_3_V_addr_1, align 1
  %lhs_V_106_mid2 = zext i8 %in_buf_13_3_V_load to i16
  %in_buf_13_4_V_addr_1 = getelementptr [128 x i8]* %in_buf_13_4_V, i64 0, i64 %tmp_14_mid2
  %in_buf_13_4_V_load = load i8* %in_buf_13_4_V_addr_1, align 1
  %lhs_V_107_mid2 = zext i8 %in_buf_13_4_V_load to i16
  %in_buf_13_5_V_addr_1 = getelementptr [128 x i8]* %in_buf_13_5_V, i64 0, i64 %tmp_14_mid2
  %in_buf_13_5_V_load = load i8* %in_buf_13_5_V_addr_1, align 1
  %lhs_V_108_mid2 = zext i8 %in_buf_13_5_V_load to i16
  %in_buf_13_6_V_addr_1 = getelementptr [128 x i8]* %in_buf_13_6_V, i64 0, i64 %tmp_14_mid2
  %in_buf_13_6_V_load = load i8* %in_buf_13_6_V_addr_1, align 1
  %lhs_V_109_mid2 = zext i8 %in_buf_13_6_V_load to i16
  %in_buf_13_7_V_addr_1 = getelementptr [128 x i8]* %in_buf_13_7_V, i64 0, i64 %tmp_14_mid2
  %in_buf_13_7_V_load = load i8* %in_buf_13_7_V_addr_1, align 1
  %lhs_V_110_mid2 = zext i8 %in_buf_13_7_V_load to i16
  %in_buf_14_0_V_addr_1 = getelementptr [128 x i8]* %in_buf_14_0_V, i64 0, i64 %tmp_14_mid2
  %in_buf_14_0_V_load = load i8* %in_buf_14_0_V_addr_1, align 1
  %lhs_V_111_mid2 = zext i8 %in_buf_14_0_V_load to i16
  %in_buf_14_1_V_addr_1 = getelementptr [128 x i8]* %in_buf_14_1_V, i64 0, i64 %tmp_14_mid2
  %in_buf_14_1_V_load = load i8* %in_buf_14_1_V_addr_1, align 1
  %lhs_V_112_mid2 = zext i8 %in_buf_14_1_V_load to i16
  %in_buf_14_2_V_addr_1 = getelementptr [128 x i8]* %in_buf_14_2_V, i64 0, i64 %tmp_14_mid2
  %in_buf_14_2_V_load = load i8* %in_buf_14_2_V_addr_1, align 1
  %lhs_V_113_mid2 = zext i8 %in_buf_14_2_V_load to i16
  %in_buf_14_3_V_addr_1 = getelementptr [128 x i8]* %in_buf_14_3_V, i64 0, i64 %tmp_14_mid2
  %in_buf_14_3_V_load = load i8* %in_buf_14_3_V_addr_1, align 1
  %lhs_V_114_mid2 = zext i8 %in_buf_14_3_V_load to i16
  %in_buf_14_4_V_addr_1 = getelementptr [128 x i8]* %in_buf_14_4_V, i64 0, i64 %tmp_14_mid2
  %in_buf_14_4_V_load = load i8* %in_buf_14_4_V_addr_1, align 1
  %lhs_V_115_mid2 = zext i8 %in_buf_14_4_V_load to i16
  %in_buf_14_5_V_addr_1 = getelementptr [128 x i8]* %in_buf_14_5_V, i64 0, i64 %tmp_14_mid2
  %in_buf_14_5_V_load = load i8* %in_buf_14_5_V_addr_1, align 1
  %lhs_V_116_mid2 = zext i8 %in_buf_14_5_V_load to i16
  %in_buf_14_6_V_addr_1 = getelementptr [128 x i8]* %in_buf_14_6_V, i64 0, i64 %tmp_14_mid2
  %in_buf_14_6_V_load = load i8* %in_buf_14_6_V_addr_1, align 1
  %lhs_V_117_mid2 = zext i8 %in_buf_14_6_V_load to i16
  %in_buf_14_7_V_addr_1 = getelementptr [128 x i8]* %in_buf_14_7_V, i64 0, i64 %tmp_14_mid2
  %in_buf_14_7_V_load = load i8* %in_buf_14_7_V_addr_1, align 1
  %lhs_V_118_mid2 = zext i8 %in_buf_14_7_V_load to i16
  %in_buf_15_0_V_addr_1 = getelementptr [128 x i8]* %in_buf_15_0_V, i64 0, i64 %tmp_14_mid2
  %in_buf_15_0_V_load = load i8* %in_buf_15_0_V_addr_1, align 1
  %lhs_V_119_mid2 = zext i8 %in_buf_15_0_V_load to i16
  %in_buf_15_1_V_addr_1 = getelementptr [128 x i8]* %in_buf_15_1_V, i64 0, i64 %tmp_14_mid2
  %in_buf_15_1_V_load = load i8* %in_buf_15_1_V_addr_1, align 1
  %lhs_V_120_mid2 = zext i8 %in_buf_15_1_V_load to i16
  %in_buf_15_2_V_addr_1 = getelementptr [128 x i8]* %in_buf_15_2_V, i64 0, i64 %tmp_14_mid2
  %in_buf_15_2_V_load = load i8* %in_buf_15_2_V_addr_1, align 1
  %lhs_V_121_mid2 = zext i8 %in_buf_15_2_V_load to i16
  %in_buf_15_3_V_addr_1 = getelementptr [128 x i8]* %in_buf_15_3_V, i64 0, i64 %tmp_14_mid2
  %in_buf_15_3_V_load = load i8* %in_buf_15_3_V_addr_1, align 1
  %lhs_V_122_mid2 = zext i8 %in_buf_15_3_V_load to i16
  %in_buf_15_4_V_addr_1 = getelementptr [128 x i8]* %in_buf_15_4_V, i64 0, i64 %tmp_14_mid2
  %in_buf_15_4_V_load = load i8* %in_buf_15_4_V_addr_1, align 1
  %lhs_V_123_mid2 = zext i8 %in_buf_15_4_V_load to i16
  %in_buf_15_5_V_addr_1 = getelementptr [128 x i8]* %in_buf_15_5_V, i64 0, i64 %tmp_14_mid2
  %in_buf_15_5_V_load = load i8* %in_buf_15_5_V_addr_1, align 1
  %lhs_V_124_mid2 = zext i8 %in_buf_15_5_V_load to i16
  %in_buf_15_6_V_addr_1 = getelementptr [128 x i8]* %in_buf_15_6_V, i64 0, i64 %tmp_14_mid2
  %in_buf_15_6_V_load = load i8* %in_buf_15_6_V_addr_1, align 1
  %lhs_V_125_mid2 = zext i8 %in_buf_15_6_V_load to i16
  %in_buf_15_7_V_addr_1 = getelementptr [128 x i8]* %in_buf_15_7_V, i64 0, i64 %tmp_14_mid2
  %in_buf_15_7_V_load = load i8* %in_buf_15_7_V_addr_1, align 1
  %lhs_V_126_mid2 = zext i8 %in_buf_15_7_V_load to i16
  %in_buf_16_0_V_addr_1 = getelementptr [128 x i8]* %in_buf_16_0_V, i64 0, i64 %tmp_14_mid2
  %in_buf_16_0_V_load = load i8* %in_buf_16_0_V_addr_1, align 1
  %lhs_V_127_mid2 = zext i8 %in_buf_16_0_V_load to i16
  %in_buf_16_1_V_addr_1 = getelementptr [128 x i8]* %in_buf_16_1_V, i64 0, i64 %tmp_14_mid2
  %in_buf_16_1_V_load = load i8* %in_buf_16_1_V_addr_1, align 1
  %lhs_V_128_mid2 = zext i8 %in_buf_16_1_V_load to i16
  %in_buf_16_2_V_addr_1 = getelementptr [128 x i8]* %in_buf_16_2_V, i64 0, i64 %tmp_14_mid2
  %in_buf_16_2_V_load = load i8* %in_buf_16_2_V_addr_1, align 1
  %lhs_V_129_mid2 = zext i8 %in_buf_16_2_V_load to i16
  %in_buf_16_3_V_addr_1 = getelementptr [128 x i8]* %in_buf_16_3_V, i64 0, i64 %tmp_14_mid2
  %in_buf_16_3_V_load = load i8* %in_buf_16_3_V_addr_1, align 1
  %lhs_V_130_mid2 = zext i8 %in_buf_16_3_V_load to i16
  %in_buf_16_4_V_addr_1 = getelementptr [128 x i8]* %in_buf_16_4_V, i64 0, i64 %tmp_14_mid2
  %in_buf_16_4_V_load = load i8* %in_buf_16_4_V_addr_1, align 1
  %lhs_V_131_mid2 = zext i8 %in_buf_16_4_V_load to i16
  %in_buf_16_5_V_addr_1 = getelementptr [128 x i8]* %in_buf_16_5_V, i64 0, i64 %tmp_14_mid2
  %in_buf_16_5_V_load = load i8* %in_buf_16_5_V_addr_1, align 1
  %lhs_V_132_mid2 = zext i8 %in_buf_16_5_V_load to i16
  %in_buf_16_6_V_addr_1 = getelementptr [128 x i8]* %in_buf_16_6_V, i64 0, i64 %tmp_14_mid2
  %in_buf_16_6_V_load = load i8* %in_buf_16_6_V_addr_1, align 1
  %lhs_V_133_mid2 = zext i8 %in_buf_16_6_V_load to i16
  %in_buf_16_7_V_addr_1 = getelementptr [128 x i8]* %in_buf_16_7_V, i64 0, i64 %tmp_14_mid2
  %in_buf_16_7_V_load = load i8* %in_buf_16_7_V_addr_1, align 1
  %lhs_V_134_mid2 = zext i8 %in_buf_16_7_V_load to i16
  %in_buf_17_0_V_addr_1 = getelementptr [128 x i8]* %in_buf_17_0_V, i64 0, i64 %tmp_14_mid2
  %in_buf_17_0_V_load = load i8* %in_buf_17_0_V_addr_1, align 1
  %lhs_V_135_mid2 = zext i8 %in_buf_17_0_V_load to i16
  %in_buf_17_1_V_addr_1 = getelementptr [128 x i8]* %in_buf_17_1_V, i64 0, i64 %tmp_14_mid2
  %in_buf_17_1_V_load = load i8* %in_buf_17_1_V_addr_1, align 1
  %lhs_V_136_mid2 = zext i8 %in_buf_17_1_V_load to i16
  %in_buf_17_2_V_addr_1 = getelementptr [128 x i8]* %in_buf_17_2_V, i64 0, i64 %tmp_14_mid2
  %in_buf_17_2_V_load = load i8* %in_buf_17_2_V_addr_1, align 1
  %lhs_V_137_mid2 = zext i8 %in_buf_17_2_V_load to i16
  %in_buf_17_3_V_addr_1 = getelementptr [128 x i8]* %in_buf_17_3_V, i64 0, i64 %tmp_14_mid2
  %in_buf_17_3_V_load = load i8* %in_buf_17_3_V_addr_1, align 1
  %lhs_V_138_mid2 = zext i8 %in_buf_17_3_V_load to i16
  %in_buf_17_4_V_addr_1 = getelementptr [128 x i8]* %in_buf_17_4_V, i64 0, i64 %tmp_14_mid2
  %in_buf_17_4_V_load = load i8* %in_buf_17_4_V_addr_1, align 1
  %lhs_V_139_mid2 = zext i8 %in_buf_17_4_V_load to i16
  %in_buf_17_5_V_addr_1 = getelementptr [128 x i8]* %in_buf_17_5_V, i64 0, i64 %tmp_14_mid2
  %in_buf_17_5_V_load = load i8* %in_buf_17_5_V_addr_1, align 1
  %lhs_V_140_mid2 = zext i8 %in_buf_17_5_V_load to i16
  %in_buf_17_6_V_addr_1 = getelementptr [128 x i8]* %in_buf_17_6_V, i64 0, i64 %tmp_14_mid2
  %in_buf_17_6_V_load = load i8* %in_buf_17_6_V_addr_1, align 1
  %lhs_V_141_mid2 = zext i8 %in_buf_17_6_V_load to i16
  %in_buf_17_7_V_addr_1 = getelementptr [128 x i8]* %in_buf_17_7_V, i64 0, i64 %tmp_14_mid2
  %in_buf_17_7_V_load = load i8* %in_buf_17_7_V_addr_1, align 1
  %lhs_V_142_mid2 = zext i8 %in_buf_17_7_V_load to i16
  %in_buf_18_0_V_addr_1 = getelementptr [128 x i8]* %in_buf_18_0_V, i64 0, i64 %tmp_14_mid2
  %in_buf_18_0_V_load = load i8* %in_buf_18_0_V_addr_1, align 1
  %lhs_V_143_mid2 = zext i8 %in_buf_18_0_V_load to i16
  %in_buf_18_1_V_addr_1 = getelementptr [128 x i8]* %in_buf_18_1_V, i64 0, i64 %tmp_14_mid2
  %in_buf_18_1_V_load = load i8* %in_buf_18_1_V_addr_1, align 1
  %lhs_V_144_mid2 = zext i8 %in_buf_18_1_V_load to i16
  %in_buf_18_2_V_addr_1 = getelementptr [128 x i8]* %in_buf_18_2_V, i64 0, i64 %tmp_14_mid2
  %in_buf_18_2_V_load = load i8* %in_buf_18_2_V_addr_1, align 1
  %lhs_V_145_mid2 = zext i8 %in_buf_18_2_V_load to i16
  %in_buf_18_3_V_addr_1 = getelementptr [128 x i8]* %in_buf_18_3_V, i64 0, i64 %tmp_14_mid2
  %in_buf_18_3_V_load = load i8* %in_buf_18_3_V_addr_1, align 1
  %lhs_V_146_mid2 = zext i8 %in_buf_18_3_V_load to i16
  %in_buf_18_4_V_addr_1 = getelementptr [128 x i8]* %in_buf_18_4_V, i64 0, i64 %tmp_14_mid2
  %in_buf_18_4_V_load = load i8* %in_buf_18_4_V_addr_1, align 1
  %lhs_V_147_mid2 = zext i8 %in_buf_18_4_V_load to i16
  %in_buf_18_5_V_addr_1 = getelementptr [128 x i8]* %in_buf_18_5_V, i64 0, i64 %tmp_14_mid2
  %in_buf_18_5_V_load = load i8* %in_buf_18_5_V_addr_1, align 1
  %lhs_V_148_mid2 = zext i8 %in_buf_18_5_V_load to i16
  %in_buf_18_6_V_addr_1 = getelementptr [128 x i8]* %in_buf_18_6_V, i64 0, i64 %tmp_14_mid2
  %in_buf_18_6_V_load = load i8* %in_buf_18_6_V_addr_1, align 1
  %lhs_V_149_mid2 = zext i8 %in_buf_18_6_V_load to i16
  %in_buf_18_7_V_addr_1 = getelementptr [128 x i8]* %in_buf_18_7_V, i64 0, i64 %tmp_14_mid2
  %in_buf_18_7_V_load = load i8* %in_buf_18_7_V_addr_1, align 1
  %lhs_V_150_mid2 = zext i8 %in_buf_18_7_V_load to i16
  %in_buf_19_0_V_addr_1 = getelementptr [128 x i8]* %in_buf_19_0_V, i64 0, i64 %tmp_14_mid2
  %in_buf_19_0_V_load = load i8* %in_buf_19_0_V_addr_1, align 1
  %lhs_V_151_mid2 = zext i8 %in_buf_19_0_V_load to i16
  %in_buf_19_1_V_addr_1 = getelementptr [128 x i8]* %in_buf_19_1_V, i64 0, i64 %tmp_14_mid2
  %in_buf_19_1_V_load = load i8* %in_buf_19_1_V_addr_1, align 1
  %lhs_V_152_mid2 = zext i8 %in_buf_19_1_V_load to i16
  %in_buf_19_2_V_addr_1 = getelementptr [128 x i8]* %in_buf_19_2_V, i64 0, i64 %tmp_14_mid2
  %in_buf_19_2_V_load = load i8* %in_buf_19_2_V_addr_1, align 1
  %lhs_V_153_mid2 = zext i8 %in_buf_19_2_V_load to i16
  %in_buf_19_3_V_addr_1 = getelementptr [128 x i8]* %in_buf_19_3_V, i64 0, i64 %tmp_14_mid2
  %in_buf_19_3_V_load = load i8* %in_buf_19_3_V_addr_1, align 1
  %lhs_V_154_mid2 = zext i8 %in_buf_19_3_V_load to i16
  %in_buf_19_4_V_addr_1 = getelementptr [128 x i8]* %in_buf_19_4_V, i64 0, i64 %tmp_14_mid2
  %in_buf_19_4_V_load = load i8* %in_buf_19_4_V_addr_1, align 1
  %lhs_V_155_mid2 = zext i8 %in_buf_19_4_V_load to i16
  %in_buf_19_5_V_addr_1 = getelementptr [128 x i8]* %in_buf_19_5_V, i64 0, i64 %tmp_14_mid2
  %in_buf_19_5_V_load = load i8* %in_buf_19_5_V_addr_1, align 1
  %lhs_V_156_mid2 = zext i8 %in_buf_19_5_V_load to i16
  %in_buf_19_6_V_addr_1 = getelementptr [128 x i8]* %in_buf_19_6_V, i64 0, i64 %tmp_14_mid2
  %in_buf_19_6_V_load = load i8* %in_buf_19_6_V_addr_1, align 1
  %lhs_V_157_mid2 = zext i8 %in_buf_19_6_V_load to i16
  %in_buf_19_7_V_addr_1 = getelementptr [128 x i8]* %in_buf_19_7_V, i64 0, i64 %tmp_14_mid2
  %in_buf_19_7_V_load = load i8* %in_buf_19_7_V_addr_1, align 1
  %lhs_V_158_mid2 = zext i8 %in_buf_19_7_V_load to i16
  %in_buf_20_0_V_addr_1 = getelementptr [128 x i8]* %in_buf_20_0_V, i64 0, i64 %tmp_14_mid2
  %in_buf_20_0_V_load = load i8* %in_buf_20_0_V_addr_1, align 1
  %lhs_V_159_mid2 = zext i8 %in_buf_20_0_V_load to i16
  %in_buf_20_1_V_addr_1 = getelementptr [128 x i8]* %in_buf_20_1_V, i64 0, i64 %tmp_14_mid2
  %in_buf_20_1_V_load = load i8* %in_buf_20_1_V_addr_1, align 1
  %lhs_V_160_mid2 = zext i8 %in_buf_20_1_V_load to i16
  %in_buf_20_2_V_addr_1 = getelementptr [128 x i8]* %in_buf_20_2_V, i64 0, i64 %tmp_14_mid2
  %in_buf_20_2_V_load = load i8* %in_buf_20_2_V_addr_1, align 1
  %lhs_V_161_mid2 = zext i8 %in_buf_20_2_V_load to i16
  %in_buf_20_3_V_addr_1 = getelementptr [128 x i8]* %in_buf_20_3_V, i64 0, i64 %tmp_14_mid2
  %in_buf_20_3_V_load = load i8* %in_buf_20_3_V_addr_1, align 1
  %lhs_V_162_mid2 = zext i8 %in_buf_20_3_V_load to i16
  %in_buf_20_4_V_addr_1 = getelementptr [128 x i8]* %in_buf_20_4_V, i64 0, i64 %tmp_14_mid2
  %in_buf_20_4_V_load = load i8* %in_buf_20_4_V_addr_1, align 1
  %lhs_V_163_mid2 = zext i8 %in_buf_20_4_V_load to i16
  %in_buf_20_5_V_addr_1 = getelementptr [128 x i8]* %in_buf_20_5_V, i64 0, i64 %tmp_14_mid2
  %in_buf_20_5_V_load = load i8* %in_buf_20_5_V_addr_1, align 1
  %lhs_V_164_mid2 = zext i8 %in_buf_20_5_V_load to i16
  %in_buf_20_6_V_addr_1 = getelementptr [128 x i8]* %in_buf_20_6_V, i64 0, i64 %tmp_14_mid2
  %in_buf_20_6_V_load = load i8* %in_buf_20_6_V_addr_1, align 1
  %lhs_V_165_mid2 = zext i8 %in_buf_20_6_V_load to i16
  %in_buf_20_7_V_addr_1 = getelementptr [128 x i8]* %in_buf_20_7_V, i64 0, i64 %tmp_14_mid2
  %in_buf_20_7_V_load = load i8* %in_buf_20_7_V_addr_1, align 1
  %lhs_V_166_mid2 = zext i8 %in_buf_20_7_V_load to i16
  %in_buf_21_0_V_addr_1 = getelementptr [128 x i8]* %in_buf_21_0_V, i64 0, i64 %tmp_14_mid2
  %in_buf_21_0_V_load = load i8* %in_buf_21_0_V_addr_1, align 1
  %lhs_V_167_mid2 = zext i8 %in_buf_21_0_V_load to i16
  %in_buf_21_1_V_addr_1 = getelementptr [128 x i8]* %in_buf_21_1_V, i64 0, i64 %tmp_14_mid2
  %in_buf_21_1_V_load = load i8* %in_buf_21_1_V_addr_1, align 1
  %lhs_V_168_mid2 = zext i8 %in_buf_21_1_V_load to i16
  %in_buf_21_2_V_addr_1 = getelementptr [128 x i8]* %in_buf_21_2_V, i64 0, i64 %tmp_14_mid2
  %in_buf_21_2_V_load = load i8* %in_buf_21_2_V_addr_1, align 1
  %lhs_V_169_mid2 = zext i8 %in_buf_21_2_V_load to i16
  %in_buf_21_3_V_addr_1 = getelementptr [128 x i8]* %in_buf_21_3_V, i64 0, i64 %tmp_14_mid2
  %in_buf_21_3_V_load = load i8* %in_buf_21_3_V_addr_1, align 1
  %lhs_V_170_mid2 = zext i8 %in_buf_21_3_V_load to i16
  %in_buf_21_4_V_addr_1 = getelementptr [128 x i8]* %in_buf_21_4_V, i64 0, i64 %tmp_14_mid2
  %in_buf_21_4_V_load = load i8* %in_buf_21_4_V_addr_1, align 1
  %lhs_V_171_mid2 = zext i8 %in_buf_21_4_V_load to i16
  %in_buf_21_5_V_addr_1 = getelementptr [128 x i8]* %in_buf_21_5_V, i64 0, i64 %tmp_14_mid2
  %in_buf_21_5_V_load = load i8* %in_buf_21_5_V_addr_1, align 1
  %lhs_V_172_mid2 = zext i8 %in_buf_21_5_V_load to i16
  %in_buf_21_6_V_addr_1 = getelementptr [128 x i8]* %in_buf_21_6_V, i64 0, i64 %tmp_14_mid2
  %in_buf_21_6_V_load = load i8* %in_buf_21_6_V_addr_1, align 1
  %lhs_V_173_mid2 = zext i8 %in_buf_21_6_V_load to i16
  %in_buf_21_7_V_addr_1 = getelementptr [128 x i8]* %in_buf_21_7_V, i64 0, i64 %tmp_14_mid2
  %in_buf_21_7_V_load = load i8* %in_buf_21_7_V_addr_1, align 1
  %lhs_V_174_mid2 = zext i8 %in_buf_21_7_V_load to i16
  %in_buf_22_0_V_addr_1 = getelementptr [128 x i8]* %in_buf_22_0_V, i64 0, i64 %tmp_14_mid2
  %in_buf_22_0_V_load = load i8* %in_buf_22_0_V_addr_1, align 1
  %lhs_V_175_mid2 = zext i8 %in_buf_22_0_V_load to i16
  %in_buf_22_1_V_addr_1 = getelementptr [128 x i8]* %in_buf_22_1_V, i64 0, i64 %tmp_14_mid2
  %in_buf_22_1_V_load = load i8* %in_buf_22_1_V_addr_1, align 1
  %lhs_V_176_mid2 = zext i8 %in_buf_22_1_V_load to i16
  %in_buf_22_2_V_addr_1 = getelementptr [128 x i8]* %in_buf_22_2_V, i64 0, i64 %tmp_14_mid2
  %in_buf_22_2_V_load = load i8* %in_buf_22_2_V_addr_1, align 1
  %lhs_V_177_mid2 = zext i8 %in_buf_22_2_V_load to i16
  %in_buf_22_3_V_addr_1 = getelementptr [128 x i8]* %in_buf_22_3_V, i64 0, i64 %tmp_14_mid2
  %in_buf_22_3_V_load = load i8* %in_buf_22_3_V_addr_1, align 1
  %lhs_V_178_mid2 = zext i8 %in_buf_22_3_V_load to i16
  %in_buf_22_4_V_addr_1 = getelementptr [128 x i8]* %in_buf_22_4_V, i64 0, i64 %tmp_14_mid2
  %in_buf_22_4_V_load = load i8* %in_buf_22_4_V_addr_1, align 1
  %lhs_V_179_mid2 = zext i8 %in_buf_22_4_V_load to i16
  %in_buf_22_5_V_addr_1 = getelementptr [128 x i8]* %in_buf_22_5_V, i64 0, i64 %tmp_14_mid2
  %in_buf_22_5_V_load = load i8* %in_buf_22_5_V_addr_1, align 1
  %lhs_V_180_mid2 = zext i8 %in_buf_22_5_V_load to i16
  %in_buf_22_6_V_addr_1 = getelementptr [128 x i8]* %in_buf_22_6_V, i64 0, i64 %tmp_14_mid2
  %in_buf_22_6_V_load = load i8* %in_buf_22_6_V_addr_1, align 1
  %lhs_V_181_mid2 = zext i8 %in_buf_22_6_V_load to i16
  %in_buf_22_7_V_addr_1 = getelementptr [128 x i8]* %in_buf_22_7_V, i64 0, i64 %tmp_14_mid2
  %in_buf_22_7_V_load = load i8* %in_buf_22_7_V_addr_1, align 1
  %lhs_V_182_mid2 = zext i8 %in_buf_22_7_V_load to i16
  %in_buf_23_0_V_addr_1 = getelementptr [128 x i8]* %in_buf_23_0_V, i64 0, i64 %tmp_14_mid2
  %in_buf_23_0_V_load = load i8* %in_buf_23_0_V_addr_1, align 1
  %lhs_V_183_mid2 = zext i8 %in_buf_23_0_V_load to i16
  %in_buf_23_1_V_addr_1 = getelementptr [128 x i8]* %in_buf_23_1_V, i64 0, i64 %tmp_14_mid2
  %in_buf_23_1_V_load = load i8* %in_buf_23_1_V_addr_1, align 1
  %lhs_V_184_mid2 = zext i8 %in_buf_23_1_V_load to i16
  %in_buf_23_2_V_addr_1 = getelementptr [128 x i8]* %in_buf_23_2_V, i64 0, i64 %tmp_14_mid2
  %in_buf_23_2_V_load = load i8* %in_buf_23_2_V_addr_1, align 1
  %lhs_V_185_mid2 = zext i8 %in_buf_23_2_V_load to i16
  %in_buf_23_3_V_addr_1 = getelementptr [128 x i8]* %in_buf_23_3_V, i64 0, i64 %tmp_14_mid2
  %in_buf_23_3_V_load = load i8* %in_buf_23_3_V_addr_1, align 1
  %lhs_V_186_mid2 = zext i8 %in_buf_23_3_V_load to i16
  %in_buf_23_4_V_addr_1 = getelementptr [128 x i8]* %in_buf_23_4_V, i64 0, i64 %tmp_14_mid2
  %in_buf_23_4_V_load = load i8* %in_buf_23_4_V_addr_1, align 1
  %lhs_V_187_mid2 = zext i8 %in_buf_23_4_V_load to i16
  %in_buf_23_5_V_addr_1 = getelementptr [128 x i8]* %in_buf_23_5_V, i64 0, i64 %tmp_14_mid2
  %in_buf_23_5_V_load = load i8* %in_buf_23_5_V_addr_1, align 1
  %lhs_V_188_mid2 = zext i8 %in_buf_23_5_V_load to i16
  %in_buf_23_6_V_addr_1 = getelementptr [128 x i8]* %in_buf_23_6_V, i64 0, i64 %tmp_14_mid2
  %in_buf_23_6_V_load = load i8* %in_buf_23_6_V_addr_1, align 1
  %lhs_V_189_mid2 = zext i8 %in_buf_23_6_V_load to i16
  %in_buf_23_7_V_addr_1 = getelementptr [128 x i8]* %in_buf_23_7_V, i64 0, i64 %tmp_14_mid2
  %in_buf_23_7_V_load = load i8* %in_buf_23_7_V_addr_1, align 1
  %lhs_V_190_mid2 = zext i8 %in_buf_23_7_V_load to i16
  %in_buf_24_0_V_addr_1 = getelementptr [128 x i8]* %in_buf_24_0_V, i64 0, i64 %tmp_14_mid2
  %in_buf_24_0_V_load = load i8* %in_buf_24_0_V_addr_1, align 1
  %lhs_V_191_mid2 = zext i8 %in_buf_24_0_V_load to i16
  %in_buf_24_1_V_addr_1 = getelementptr [128 x i8]* %in_buf_24_1_V, i64 0, i64 %tmp_14_mid2
  %in_buf_24_1_V_load = load i8* %in_buf_24_1_V_addr_1, align 1
  %lhs_V_192_mid2 = zext i8 %in_buf_24_1_V_load to i16
  %in_buf_24_2_V_addr_1 = getelementptr [128 x i8]* %in_buf_24_2_V, i64 0, i64 %tmp_14_mid2
  %in_buf_24_2_V_load = load i8* %in_buf_24_2_V_addr_1, align 1
  %lhs_V_193_mid2 = zext i8 %in_buf_24_2_V_load to i16
  %in_buf_24_3_V_addr_1 = getelementptr [128 x i8]* %in_buf_24_3_V, i64 0, i64 %tmp_14_mid2
  %in_buf_24_3_V_load = load i8* %in_buf_24_3_V_addr_1, align 1
  %lhs_V_194_mid2 = zext i8 %in_buf_24_3_V_load to i16
  %in_buf_24_4_V_addr_1 = getelementptr [128 x i8]* %in_buf_24_4_V, i64 0, i64 %tmp_14_mid2
  %in_buf_24_4_V_load = load i8* %in_buf_24_4_V_addr_1, align 1
  %lhs_V_195_mid2 = zext i8 %in_buf_24_4_V_load to i16
  %in_buf_24_5_V_addr_1 = getelementptr [128 x i8]* %in_buf_24_5_V, i64 0, i64 %tmp_14_mid2
  %in_buf_24_5_V_load = load i8* %in_buf_24_5_V_addr_1, align 1
  %lhs_V_196_mid2 = zext i8 %in_buf_24_5_V_load to i16
  %in_buf_24_6_V_addr_1 = getelementptr [128 x i8]* %in_buf_24_6_V, i64 0, i64 %tmp_14_mid2
  %in_buf_24_6_V_load = load i8* %in_buf_24_6_V_addr_1, align 1
  %lhs_V_197_mid2 = zext i8 %in_buf_24_6_V_load to i16
  %in_buf_24_7_V_addr_1 = getelementptr [128 x i8]* %in_buf_24_7_V, i64 0, i64 %tmp_14_mid2
  %in_buf_24_7_V_load = load i8* %in_buf_24_7_V_addr_1, align 1
  %lhs_V_198_mid2 = zext i8 %in_buf_24_7_V_load to i16
  %in_buf_25_0_V_addr_1 = getelementptr [128 x i8]* %in_buf_25_0_V, i64 0, i64 %tmp_14_mid2
  %in_buf_25_0_V_load = load i8* %in_buf_25_0_V_addr_1, align 1
  %lhs_V_199_mid2 = zext i8 %in_buf_25_0_V_load to i16
  %in_buf_25_1_V_addr_1 = getelementptr [128 x i8]* %in_buf_25_1_V, i64 0, i64 %tmp_14_mid2
  %in_buf_25_1_V_load = load i8* %in_buf_25_1_V_addr_1, align 1
  %lhs_V_200_mid2 = zext i8 %in_buf_25_1_V_load to i16
  %in_buf_25_2_V_addr_1 = getelementptr [128 x i8]* %in_buf_25_2_V, i64 0, i64 %tmp_14_mid2
  %in_buf_25_2_V_load = load i8* %in_buf_25_2_V_addr_1, align 1
  %lhs_V_201_mid2 = zext i8 %in_buf_25_2_V_load to i16
  %in_buf_25_3_V_addr_1 = getelementptr [128 x i8]* %in_buf_25_3_V, i64 0, i64 %tmp_14_mid2
  %in_buf_25_3_V_load = load i8* %in_buf_25_3_V_addr_1, align 1
  %lhs_V_202_mid2 = zext i8 %in_buf_25_3_V_load to i16
  %in_buf_25_4_V_addr_1 = getelementptr [128 x i8]* %in_buf_25_4_V, i64 0, i64 %tmp_14_mid2
  %in_buf_25_4_V_load = load i8* %in_buf_25_4_V_addr_1, align 1
  %lhs_V_203_mid2 = zext i8 %in_buf_25_4_V_load to i16
  %in_buf_25_5_V_addr_1 = getelementptr [128 x i8]* %in_buf_25_5_V, i64 0, i64 %tmp_14_mid2
  %in_buf_25_5_V_load = load i8* %in_buf_25_5_V_addr_1, align 1
  %lhs_V_204_mid2 = zext i8 %in_buf_25_5_V_load to i16
  %in_buf_25_6_V_addr_1 = getelementptr [128 x i8]* %in_buf_25_6_V, i64 0, i64 %tmp_14_mid2
  %in_buf_25_6_V_load = load i8* %in_buf_25_6_V_addr_1, align 1
  %lhs_V_205_mid2 = zext i8 %in_buf_25_6_V_load to i16
  %in_buf_25_7_V_addr_1 = getelementptr [128 x i8]* %in_buf_25_7_V, i64 0, i64 %tmp_14_mid2
  %in_buf_25_7_V_load = load i8* %in_buf_25_7_V_addr_1, align 1
  %lhs_V_206_mid2 = zext i8 %in_buf_25_7_V_load to i16
  %in_buf_26_0_V_addr_1 = getelementptr [128 x i8]* %in_buf_26_0_V, i64 0, i64 %tmp_14_mid2
  %in_buf_26_0_V_load = load i8* %in_buf_26_0_V_addr_1, align 1
  %lhs_V_207_mid2 = zext i8 %in_buf_26_0_V_load to i16
  %in_buf_26_1_V_addr_1 = getelementptr [128 x i8]* %in_buf_26_1_V, i64 0, i64 %tmp_14_mid2
  %in_buf_26_1_V_load = load i8* %in_buf_26_1_V_addr_1, align 1
  %lhs_V_208_mid2 = zext i8 %in_buf_26_1_V_load to i16
  %in_buf_26_2_V_addr_1 = getelementptr [128 x i8]* %in_buf_26_2_V, i64 0, i64 %tmp_14_mid2
  %in_buf_26_2_V_load = load i8* %in_buf_26_2_V_addr_1, align 1
  %lhs_V_209_mid2 = zext i8 %in_buf_26_2_V_load to i16
  %in_buf_26_3_V_addr_1 = getelementptr [128 x i8]* %in_buf_26_3_V, i64 0, i64 %tmp_14_mid2
  %in_buf_26_3_V_load = load i8* %in_buf_26_3_V_addr_1, align 1
  %lhs_V_210_mid2 = zext i8 %in_buf_26_3_V_load to i16
  %in_buf_26_4_V_addr_1 = getelementptr [128 x i8]* %in_buf_26_4_V, i64 0, i64 %tmp_14_mid2
  %in_buf_26_4_V_load = load i8* %in_buf_26_4_V_addr_1, align 1
  %lhs_V_211_mid2 = zext i8 %in_buf_26_4_V_load to i16
  %in_buf_26_5_V_addr_1 = getelementptr [128 x i8]* %in_buf_26_5_V, i64 0, i64 %tmp_14_mid2
  %in_buf_26_5_V_load = load i8* %in_buf_26_5_V_addr_1, align 1
  %lhs_V_212_mid2 = zext i8 %in_buf_26_5_V_load to i16
  %in_buf_26_6_V_addr_1 = getelementptr [128 x i8]* %in_buf_26_6_V, i64 0, i64 %tmp_14_mid2
  %in_buf_26_6_V_load = load i8* %in_buf_26_6_V_addr_1, align 1
  %lhs_V_213_mid2 = zext i8 %in_buf_26_6_V_load to i16
  %in_buf_26_7_V_addr_1 = getelementptr [128 x i8]* %in_buf_26_7_V, i64 0, i64 %tmp_14_mid2
  %in_buf_26_7_V_load = load i8* %in_buf_26_7_V_addr_1, align 1
  %lhs_V_214_mid2 = zext i8 %in_buf_26_7_V_load to i16
  %in_buf_27_0_V_addr_1 = getelementptr [128 x i8]* %in_buf_27_0_V, i64 0, i64 %tmp_14_mid2
  %in_buf_27_0_V_load = load i8* %in_buf_27_0_V_addr_1, align 1
  %lhs_V_215_mid2 = zext i8 %in_buf_27_0_V_load to i16
  %in_buf_27_1_V_addr_1 = getelementptr [128 x i8]* %in_buf_27_1_V, i64 0, i64 %tmp_14_mid2
  %in_buf_27_1_V_load = load i8* %in_buf_27_1_V_addr_1, align 1
  %lhs_V_216_mid2 = zext i8 %in_buf_27_1_V_load to i16
  %in_buf_27_2_V_addr_1 = getelementptr [128 x i8]* %in_buf_27_2_V, i64 0, i64 %tmp_14_mid2
  %in_buf_27_2_V_load = load i8* %in_buf_27_2_V_addr_1, align 1
  %lhs_V_217_mid2 = zext i8 %in_buf_27_2_V_load to i16
  %in_buf_27_3_V_addr_1 = getelementptr [128 x i8]* %in_buf_27_3_V, i64 0, i64 %tmp_14_mid2
  %in_buf_27_3_V_load = load i8* %in_buf_27_3_V_addr_1, align 1
  %lhs_V_218_mid2 = zext i8 %in_buf_27_3_V_load to i16
  %in_buf_27_4_V_addr_1 = getelementptr [128 x i8]* %in_buf_27_4_V, i64 0, i64 %tmp_14_mid2
  %in_buf_27_4_V_load = load i8* %in_buf_27_4_V_addr_1, align 1
  %lhs_V_219_mid2 = zext i8 %in_buf_27_4_V_load to i16
  %in_buf_27_5_V_addr_1 = getelementptr [128 x i8]* %in_buf_27_5_V, i64 0, i64 %tmp_14_mid2
  %in_buf_27_5_V_load = load i8* %in_buf_27_5_V_addr_1, align 1
  %lhs_V_220_mid2 = zext i8 %in_buf_27_5_V_load to i16
  %in_buf_27_6_V_addr_1 = getelementptr [128 x i8]* %in_buf_27_6_V, i64 0, i64 %tmp_14_mid2
  %in_buf_27_6_V_load = load i8* %in_buf_27_6_V_addr_1, align 1
  %lhs_V_221_mid2 = zext i8 %in_buf_27_6_V_load to i16
  %in_buf_27_7_V_addr_1 = getelementptr [128 x i8]* %in_buf_27_7_V, i64 0, i64 %tmp_14_mid2
  %in_buf_27_7_V_load = load i8* %in_buf_27_7_V_addr_1, align 1
  %lhs_V_222_mid2 = zext i8 %in_buf_27_7_V_load to i16
  %in_buf_28_0_V_addr_1 = getelementptr [128 x i8]* %in_buf_28_0_V, i64 0, i64 %tmp_14_mid2
  %in_buf_28_0_V_load = load i8* %in_buf_28_0_V_addr_1, align 1
  %lhs_V_223_mid2 = zext i8 %in_buf_28_0_V_load to i16
  %in_buf_28_1_V_addr_1 = getelementptr [128 x i8]* %in_buf_28_1_V, i64 0, i64 %tmp_14_mid2
  %in_buf_28_1_V_load = load i8* %in_buf_28_1_V_addr_1, align 1
  %lhs_V_224_mid2 = zext i8 %in_buf_28_1_V_load to i16
  %in_buf_28_2_V_addr_1 = getelementptr [128 x i8]* %in_buf_28_2_V, i64 0, i64 %tmp_14_mid2
  %in_buf_28_2_V_load = load i8* %in_buf_28_2_V_addr_1, align 1
  %lhs_V_225_mid2 = zext i8 %in_buf_28_2_V_load to i16
  %in_buf_28_3_V_addr_1 = getelementptr [128 x i8]* %in_buf_28_3_V, i64 0, i64 %tmp_14_mid2
  %in_buf_28_3_V_load = load i8* %in_buf_28_3_V_addr_1, align 1
  %lhs_V_226_mid2 = zext i8 %in_buf_28_3_V_load to i16
  %in_buf_28_4_V_addr_1 = getelementptr [128 x i8]* %in_buf_28_4_V, i64 0, i64 %tmp_14_mid2
  %in_buf_28_4_V_load = load i8* %in_buf_28_4_V_addr_1, align 1
  %lhs_V_227_mid2 = zext i8 %in_buf_28_4_V_load to i16
  %in_buf_28_5_V_addr_1 = getelementptr [128 x i8]* %in_buf_28_5_V, i64 0, i64 %tmp_14_mid2
  %in_buf_28_5_V_load = load i8* %in_buf_28_5_V_addr_1, align 1
  %lhs_V_228_mid2 = zext i8 %in_buf_28_5_V_load to i16
  %in_buf_28_6_V_addr_1 = getelementptr [128 x i8]* %in_buf_28_6_V, i64 0, i64 %tmp_14_mid2
  %in_buf_28_6_V_load = load i8* %in_buf_28_6_V_addr_1, align 1
  %lhs_V_229_mid2 = zext i8 %in_buf_28_6_V_load to i16
  %in_buf_28_7_V_addr_1 = getelementptr [128 x i8]* %in_buf_28_7_V, i64 0, i64 %tmp_14_mid2
  %in_buf_28_7_V_load = load i8* %in_buf_28_7_V_addr_1, align 1
  %lhs_V_230_mid2 = zext i8 %in_buf_28_7_V_load to i16
  %in_buf_29_0_V_addr_1 = getelementptr [128 x i8]* %in_buf_29_0_V, i64 0, i64 %tmp_14_mid2
  %in_buf_29_0_V_load = load i8* %in_buf_29_0_V_addr_1, align 1
  %lhs_V_231_mid2 = zext i8 %in_buf_29_0_V_load to i16
  %in_buf_29_1_V_addr_1 = getelementptr [128 x i8]* %in_buf_29_1_V, i64 0, i64 %tmp_14_mid2
  %in_buf_29_1_V_load = load i8* %in_buf_29_1_V_addr_1, align 1
  %lhs_V_232_mid2 = zext i8 %in_buf_29_1_V_load to i16
  %in_buf_29_2_V_addr_1 = getelementptr [128 x i8]* %in_buf_29_2_V, i64 0, i64 %tmp_14_mid2
  %in_buf_29_2_V_load = load i8* %in_buf_29_2_V_addr_1, align 1
  %lhs_V_233_mid2 = zext i8 %in_buf_29_2_V_load to i16
  %in_buf_29_3_V_addr_1 = getelementptr [128 x i8]* %in_buf_29_3_V, i64 0, i64 %tmp_14_mid2
  %in_buf_29_3_V_load = load i8* %in_buf_29_3_V_addr_1, align 1
  %lhs_V_234_mid2 = zext i8 %in_buf_29_3_V_load to i16
  %in_buf_29_4_V_addr_1 = getelementptr [128 x i8]* %in_buf_29_4_V, i64 0, i64 %tmp_14_mid2
  %in_buf_29_4_V_load = load i8* %in_buf_29_4_V_addr_1, align 1
  %lhs_V_235_mid2 = zext i8 %in_buf_29_4_V_load to i16
  %in_buf_29_5_V_addr_1 = getelementptr [128 x i8]* %in_buf_29_5_V, i64 0, i64 %tmp_14_mid2
  %in_buf_29_5_V_load = load i8* %in_buf_29_5_V_addr_1, align 1
  %lhs_V_236_mid2 = zext i8 %in_buf_29_5_V_load to i16
  %in_buf_29_6_V_addr_1 = getelementptr [128 x i8]* %in_buf_29_6_V, i64 0, i64 %tmp_14_mid2
  %in_buf_29_6_V_load = load i8* %in_buf_29_6_V_addr_1, align 1
  %lhs_V_237_mid2 = zext i8 %in_buf_29_6_V_load to i16
  %in_buf_29_7_V_addr_1 = getelementptr [128 x i8]* %in_buf_29_7_V, i64 0, i64 %tmp_14_mid2
  %in_buf_29_7_V_load = load i8* %in_buf_29_7_V_addr_1, align 1
  %lhs_V_238_mid2 = zext i8 %in_buf_29_7_V_load to i16
  %in_buf_30_0_V_addr_1 = getelementptr [128 x i8]* %in_buf_30_0_V, i64 0, i64 %tmp_14_mid2
  %in_buf_30_0_V_load = load i8* %in_buf_30_0_V_addr_1, align 1
  %lhs_V_239_mid2 = zext i8 %in_buf_30_0_V_load to i16
  %in_buf_30_1_V_addr_1 = getelementptr [128 x i8]* %in_buf_30_1_V, i64 0, i64 %tmp_14_mid2
  %in_buf_30_1_V_load = load i8* %in_buf_30_1_V_addr_1, align 1
  %lhs_V_240_mid2 = zext i8 %in_buf_30_1_V_load to i16
  %in_buf_30_2_V_addr_1 = getelementptr [128 x i8]* %in_buf_30_2_V, i64 0, i64 %tmp_14_mid2
  %in_buf_30_2_V_load = load i8* %in_buf_30_2_V_addr_1, align 1
  %lhs_V_241_mid2 = zext i8 %in_buf_30_2_V_load to i16
  %in_buf_30_3_V_addr_1 = getelementptr [128 x i8]* %in_buf_30_3_V, i64 0, i64 %tmp_14_mid2
  %in_buf_30_3_V_load = load i8* %in_buf_30_3_V_addr_1, align 1
  %lhs_V_242_mid2 = zext i8 %in_buf_30_3_V_load to i16
  %in_buf_30_4_V_addr_1 = getelementptr [128 x i8]* %in_buf_30_4_V, i64 0, i64 %tmp_14_mid2
  %in_buf_30_4_V_load = load i8* %in_buf_30_4_V_addr_1, align 1
  %lhs_V_243_mid2 = zext i8 %in_buf_30_4_V_load to i16
  %in_buf_30_5_V_addr_1 = getelementptr [128 x i8]* %in_buf_30_5_V, i64 0, i64 %tmp_14_mid2
  %in_buf_30_5_V_load = load i8* %in_buf_30_5_V_addr_1, align 1
  %lhs_V_244_mid2 = zext i8 %in_buf_30_5_V_load to i16
  %in_buf_30_6_V_addr_1 = getelementptr [128 x i8]* %in_buf_30_6_V, i64 0, i64 %tmp_14_mid2
  %in_buf_30_6_V_load = load i8* %in_buf_30_6_V_addr_1, align 1
  %lhs_V_245_mid2 = zext i8 %in_buf_30_6_V_load to i16
  %in_buf_30_7_V_addr_1 = getelementptr [128 x i8]* %in_buf_30_7_V, i64 0, i64 %tmp_14_mid2
  %in_buf_30_7_V_load = load i8* %in_buf_30_7_V_addr_1, align 1
  %lhs_V_246_mid2 = zext i8 %in_buf_30_7_V_load to i16
  %in_buf_31_0_V_addr_1 = getelementptr [128 x i8]* %in_buf_31_0_V, i64 0, i64 %tmp_14_mid2
  %in_buf_31_0_V_load = load i8* %in_buf_31_0_V_addr_1, align 1
  %lhs_V_247_mid2 = zext i8 %in_buf_31_0_V_load to i16
  %in_buf_31_1_V_addr_1 = getelementptr [128 x i8]* %in_buf_31_1_V, i64 0, i64 %tmp_14_mid2
  %in_buf_31_1_V_load = load i8* %in_buf_31_1_V_addr_1, align 1
  %lhs_V_248_mid2 = zext i8 %in_buf_31_1_V_load to i16
  %in_buf_31_2_V_addr_1 = getelementptr [128 x i8]* %in_buf_31_2_V, i64 0, i64 %tmp_14_mid2
  %in_buf_31_2_V_load = load i8* %in_buf_31_2_V_addr_1, align 1
  %lhs_V_249_mid2 = zext i8 %in_buf_31_2_V_load to i16
  %in_buf_31_3_V_addr_1 = getelementptr [128 x i8]* %in_buf_31_3_V, i64 0, i64 %tmp_14_mid2
  %in_buf_31_3_V_load = load i8* %in_buf_31_3_V_addr_1, align 1
  %lhs_V_250_mid2 = zext i8 %in_buf_31_3_V_load to i16
  %in_buf_31_4_V_addr_1 = getelementptr [128 x i8]* %in_buf_31_4_V, i64 0, i64 %tmp_14_mid2
  %in_buf_31_4_V_load = load i8* %in_buf_31_4_V_addr_1, align 1
  %lhs_V_251_mid2 = zext i8 %in_buf_31_4_V_load to i16
  %in_buf_31_5_V_addr_1 = getelementptr [128 x i8]* %in_buf_31_5_V, i64 0, i64 %tmp_14_mid2
  %in_buf_31_5_V_load = load i8* %in_buf_31_5_V_addr_1, align 1
  %lhs_V_252_mid2 = zext i8 %in_buf_31_5_V_load to i16
  %in_buf_31_6_V_addr_1 = getelementptr [128 x i8]* %in_buf_31_6_V, i64 0, i64 %tmp_14_mid2
  %in_buf_31_6_V_load = load i8* %in_buf_31_6_V_addr_1, align 1
  %lhs_V_253_mid2 = zext i8 %in_buf_31_6_V_load to i16
  %in_buf_31_7_V_addr_1 = getelementptr [128 x i8]* %in_buf_31_7_V, i64 0, i64 %tmp_14_mid2
  %in_buf_31_7_V_load = load i8* %in_buf_31_7_V_addr_1, align 1
  %lhs_V_254_mid2 = zext i8 %in_buf_31_7_V_load to i16
  call void (...)* @_ssdm_op_SpecLoopName([3 x i8]* @p_str14) nounwind
  %tmp_16 = call i32 (...)* @_ssdm_op_SpecRegionBegin([3 x i8]* @p_str14)
  call void (...)* @_ssdm_op_SpecPipeline(i32 1, i32 1, i32 1, i32 0, [1 x i8]* @p_str1) nounwind
  %tmp_41 = zext i4 %j3_mid2 to i64
  %offset_buf_V_addr_2 = getelementptr [10 x i32]* %offset_buf_V, i64 0, i64 %tmp_41
  %tmp_V = load i32* %offset_buf_V_addr_2, align 4
  %weight_buf_0_0_V_a_1 = getelementptr [10 x i8]* %weight_buf_0_0_V, i64 0, i64 %tmp_41
  %weight_buf_0_0_V_l = load i8* %weight_buf_0_0_V_a_1, align 1
  %rhs_V = sext i8 %weight_buf_0_0_V_l to i16
  %r_V = mul i16 %rhs_V, %lhs_V_mid2
  %tmp_43_cast = sext i16 %r_V to i17
  %weight_buf_0_1_V_a_1 = getelementptr [10 x i8]* %weight_buf_0_1_V, i64 0, i64 %tmp_41
  %weight_buf_0_1_V_l = load i8* %weight_buf_0_1_V_a_1, align 1
  %rhs_V_1 = sext i8 %weight_buf_0_1_V_l to i16
  %r_V_1 = mul i16 %rhs_V_1, %lhs_V_1_mid2
  %tmp_79_1_cast = sext i16 %r_V_1 to i17
  %weight_buf_0_2_V_a_1 = getelementptr [10 x i8]* %weight_buf_0_2_V, i64 0, i64 %tmp_41
  %weight_buf_0_2_V_l = load i8* %weight_buf_0_2_V_a_1, align 1
  %rhs_V_2 = sext i8 %weight_buf_0_2_V_l to i16
  %r_V_2 = mul i16 %rhs_V_2, %lhs_V_2_mid2
  %tmp_79_2_cast = sext i16 %r_V_2 to i17
  %weight_buf_0_3_V_a_1 = getelementptr [10 x i8]* %weight_buf_0_3_V, i64 0, i64 %tmp_41
  %weight_buf_0_3_V_l = load i8* %weight_buf_0_3_V_a_1, align 1
  %rhs_V_3 = sext i8 %weight_buf_0_3_V_l to i16
  %r_V_3 = mul i16 %rhs_V_3, %lhs_V_3_mid2
  %tmp_79_3_cast = sext i16 %r_V_3 to i17
  %weight_buf_0_4_V_a_1 = getelementptr [10 x i8]* %weight_buf_0_4_V, i64 0, i64 %tmp_41
  %weight_buf_0_4_V_l = load i8* %weight_buf_0_4_V_a_1, align 1
  %rhs_V_4 = sext i8 %weight_buf_0_4_V_l to i16
  %r_V_4 = mul i16 %rhs_V_4, %lhs_V_4_mid2
  %tmp_79_4_cast = sext i16 %r_V_4 to i17
  %weight_buf_0_5_V_a_1 = getelementptr [10 x i8]* %weight_buf_0_5_V, i64 0, i64 %tmp_41
  %weight_buf_0_5_V_l = load i8* %weight_buf_0_5_V_a_1, align 1
  %rhs_V_5 = sext i8 %weight_buf_0_5_V_l to i16
  %r_V_5 = mul i16 %rhs_V_5, %lhs_V_5_mid2
  %tmp_79_5_cast = sext i16 %r_V_5 to i17
  %weight_buf_0_6_V_a_1 = getelementptr [10 x i8]* %weight_buf_0_6_V, i64 0, i64 %tmp_41
  %weight_buf_0_6_V_l = load i8* %weight_buf_0_6_V_a_1, align 1
  %rhs_V_6 = sext i8 %weight_buf_0_6_V_l to i16
  %r_V_6 = mul i16 %rhs_V_6, %lhs_V_6_mid2
  %tmp_79_6_cast = sext i16 %r_V_6 to i17
  %weight_buf_0_7_V_a_1 = getelementptr [10 x i8]* %weight_buf_0_7_V, i64 0, i64 %tmp_41
  %weight_buf_0_7_V_l = load i8* %weight_buf_0_7_V_a_1, align 1
  %rhs_V_7 = sext i8 %weight_buf_0_7_V_l to i16
  %r_V_7 = mul i16 %rhs_V_7, %lhs_V_7_mid2
  %tmp_79_7_cast = sext i16 %r_V_7 to i17
  %weight_buf_1_0_V_a_1 = getelementptr [10 x i8]* %weight_buf_1_0_V, i64 0, i64 %tmp_41
  %weight_buf_1_0_V_l = load i8* %weight_buf_1_0_V_a_1, align 1
  %rhs_V_8 = sext i8 %weight_buf_1_0_V_l to i16
  %r_V_8 = mul i16 %rhs_V_8, %lhs_V_8_mid2
  %tmp_79_8_cast = sext i16 %r_V_8 to i17
  %weight_buf_1_1_V_a_1 = getelementptr [10 x i8]* %weight_buf_1_1_V, i64 0, i64 %tmp_41
  %weight_buf_1_1_V_l = load i8* %weight_buf_1_1_V_a_1, align 1
  %rhs_V_9 = sext i8 %weight_buf_1_1_V_l to i16
  %r_V_9 = mul i16 %rhs_V_9, %lhs_V_9_mid2
  %tmp_79_9_cast = sext i16 %r_V_9 to i17
  %weight_buf_1_2_V_a_1 = getelementptr [10 x i8]* %weight_buf_1_2_V, i64 0, i64 %tmp_41
  %weight_buf_1_2_V_l = load i8* %weight_buf_1_2_V_a_1, align 1
  %rhs_V_s = sext i8 %weight_buf_1_2_V_l to i16
  %r_V_s = mul i16 %rhs_V_s, %lhs_V_mid2_21
  %tmp_79_cast = sext i16 %r_V_s to i17
  %weight_buf_1_3_V_a_1 = getelementptr [10 x i8]* %weight_buf_1_3_V, i64 0, i64 %tmp_41
  %weight_buf_1_3_V_l = load i8* %weight_buf_1_3_V_a_1, align 1
  %rhs_V_10 = sext i8 %weight_buf_1_3_V_l to i16
  %r_V_10 = mul i16 %rhs_V_10, %lhs_V_10_mid2
  %tmp_79_10_cast = sext i16 %r_V_10 to i17
  %weight_buf_1_4_V_a_1 = getelementptr [10 x i8]* %weight_buf_1_4_V, i64 0, i64 %tmp_41
  %weight_buf_1_4_V_l = load i8* %weight_buf_1_4_V_a_1, align 1
  %rhs_V_11 = sext i8 %weight_buf_1_4_V_l to i16
  %r_V_11 = mul i16 %rhs_V_11, %lhs_V_11_mid2
  %tmp_79_11_cast = sext i16 %r_V_11 to i17
  %weight_buf_1_5_V_a_1 = getelementptr [10 x i8]* %weight_buf_1_5_V, i64 0, i64 %tmp_41
  %weight_buf_1_5_V_l = load i8* %weight_buf_1_5_V_a_1, align 1
  %rhs_V_12 = sext i8 %weight_buf_1_5_V_l to i16
  %r_V_12 = mul i16 %rhs_V_12, %lhs_V_12_mid2
  %tmp_79_12_cast = sext i16 %r_V_12 to i17
  %weight_buf_1_6_V_a_1 = getelementptr [10 x i8]* %weight_buf_1_6_V, i64 0, i64 %tmp_41
  %weight_buf_1_6_V_l = load i8* %weight_buf_1_6_V_a_1, align 1
  %rhs_V_13 = sext i8 %weight_buf_1_6_V_l to i16
  %r_V_13 = mul i16 %rhs_V_13, %lhs_V_13_mid2
  %tmp_79_13_cast = sext i16 %r_V_13 to i17
  %weight_buf_1_7_V_a_1 = getelementptr [10 x i8]* %weight_buf_1_7_V, i64 0, i64 %tmp_41
  %weight_buf_1_7_V_l = load i8* %weight_buf_1_7_V_a_1, align 1
  %rhs_V_14 = sext i8 %weight_buf_1_7_V_l to i16
  %r_V_14 = mul i16 %rhs_V_14, %lhs_V_14_mid2
  %tmp_79_14_cast = sext i16 %r_V_14 to i17
  %weight_buf_2_0_V_a_1 = getelementptr [10 x i8]* %weight_buf_2_0_V, i64 0, i64 %tmp_41
  %weight_buf_2_0_V_l = load i8* %weight_buf_2_0_V_a_1, align 1
  %rhs_V_15 = sext i8 %weight_buf_2_0_V_l to i16
  %r_V_15 = mul i16 %rhs_V_15, %lhs_V_15_mid2
  %tmp_79_15_cast = sext i16 %r_V_15 to i17
  %weight_buf_2_1_V_a_1 = getelementptr [10 x i8]* %weight_buf_2_1_V, i64 0, i64 %tmp_41
  %weight_buf_2_1_V_l = load i8* %weight_buf_2_1_V_a_1, align 1
  %rhs_V_16 = sext i8 %weight_buf_2_1_V_l to i16
  %r_V_16 = mul i16 %rhs_V_16, %lhs_V_16_mid2
  %tmp_79_16_cast = sext i16 %r_V_16 to i17
  %weight_buf_2_2_V_a_1 = getelementptr [10 x i8]* %weight_buf_2_2_V, i64 0, i64 %tmp_41
  %weight_buf_2_2_V_l = load i8* %weight_buf_2_2_V_a_1, align 1
  %rhs_V_17 = sext i8 %weight_buf_2_2_V_l to i16
  %r_V_17 = mul i16 %rhs_V_17, %lhs_V_17_mid2
  %tmp_79_17_cast = sext i16 %r_V_17 to i17
  %weight_buf_2_3_V_a_1 = getelementptr [10 x i8]* %weight_buf_2_3_V, i64 0, i64 %tmp_41
  %weight_buf_2_3_V_l = load i8* %weight_buf_2_3_V_a_1, align 1
  %rhs_V_18 = sext i8 %weight_buf_2_3_V_l to i16
  %r_V_18 = mul i16 %rhs_V_18, %lhs_V_18_mid2
  %tmp_79_18_cast = sext i16 %r_V_18 to i17
  %weight_buf_2_4_V_a_1 = getelementptr [10 x i8]* %weight_buf_2_4_V, i64 0, i64 %tmp_41
  %weight_buf_2_4_V_l = load i8* %weight_buf_2_4_V_a_1, align 1
  %rhs_V_19 = sext i8 %weight_buf_2_4_V_l to i16
  %r_V_19 = mul i16 %rhs_V_19, %lhs_V_19_mid2
  %tmp_79_19_cast = sext i16 %r_V_19 to i17
  %weight_buf_2_5_V_a_1 = getelementptr [10 x i8]* %weight_buf_2_5_V, i64 0, i64 %tmp_41
  %weight_buf_2_5_V_l = load i8* %weight_buf_2_5_V_a_1, align 1
  %rhs_V_20 = sext i8 %weight_buf_2_5_V_l to i16
  %r_V_20 = mul i16 %rhs_V_20, %lhs_V_20_mid2
  %tmp_79_20_cast = sext i16 %r_V_20 to i17
  %weight_buf_2_6_V_a_1 = getelementptr [10 x i8]* %weight_buf_2_6_V, i64 0, i64 %tmp_41
  %weight_buf_2_6_V_l = load i8* %weight_buf_2_6_V_a_1, align 1
  %rhs_V_21 = sext i8 %weight_buf_2_6_V_l to i16
  %r_V_21 = mul i16 %rhs_V_21, %lhs_V_21_mid2
  %tmp_79_21_cast = sext i16 %r_V_21 to i17
  %weight_buf_2_7_V_a_1 = getelementptr [10 x i8]* %weight_buf_2_7_V, i64 0, i64 %tmp_41
  %weight_buf_2_7_V_l = load i8* %weight_buf_2_7_V_a_1, align 1
  %rhs_V_22 = sext i8 %weight_buf_2_7_V_l to i16
  %r_V_22 = mul i16 %rhs_V_22, %lhs_V_22_mid2
  %tmp_79_22_cast = sext i16 %r_V_22 to i17
  %weight_buf_3_0_V_a_1 = getelementptr [10 x i8]* %weight_buf_3_0_V, i64 0, i64 %tmp_41
  %weight_buf_3_0_V_l = load i8* %weight_buf_3_0_V_a_1, align 1
  %rhs_V_23 = sext i8 %weight_buf_3_0_V_l to i16
  %r_V_23 = mul i16 %rhs_V_23, %lhs_V_23_mid2
  %tmp_79_23_cast = sext i16 %r_V_23 to i17
  %weight_buf_3_1_V_a_1 = getelementptr [10 x i8]* %weight_buf_3_1_V, i64 0, i64 %tmp_41
  %weight_buf_3_1_V_l = load i8* %weight_buf_3_1_V_a_1, align 1
  %rhs_V_24 = sext i8 %weight_buf_3_1_V_l to i16
  %r_V_24 = mul i16 %rhs_V_24, %lhs_V_24_mid2
  %tmp_79_24_cast = sext i16 %r_V_24 to i17
  %weight_buf_3_2_V_a_1 = getelementptr [10 x i8]* %weight_buf_3_2_V, i64 0, i64 %tmp_41
  %weight_buf_3_2_V_l = load i8* %weight_buf_3_2_V_a_1, align 1
  %rhs_V_25 = sext i8 %weight_buf_3_2_V_l to i16
  %r_V_25 = mul i16 %rhs_V_25, %lhs_V_25_mid2
  %tmp_79_25_cast = sext i16 %r_V_25 to i17
  %weight_buf_3_3_V_a_1 = getelementptr [10 x i8]* %weight_buf_3_3_V, i64 0, i64 %tmp_41
  %weight_buf_3_3_V_l = load i8* %weight_buf_3_3_V_a_1, align 1
  %rhs_V_26 = sext i8 %weight_buf_3_3_V_l to i16
  %r_V_26 = mul i16 %rhs_V_26, %lhs_V_26_mid2
  %tmp_79_26_cast = sext i16 %r_V_26 to i17
  %weight_buf_3_4_V_a_1 = getelementptr [10 x i8]* %weight_buf_3_4_V, i64 0, i64 %tmp_41
  %weight_buf_3_4_V_l = load i8* %weight_buf_3_4_V_a_1, align 1
  %rhs_V_27 = sext i8 %weight_buf_3_4_V_l to i16
  %r_V_27 = mul i16 %rhs_V_27, %lhs_V_27_mid2
  %tmp_79_27_cast = sext i16 %r_V_27 to i17
  %weight_buf_3_5_V_a_1 = getelementptr [10 x i8]* %weight_buf_3_5_V, i64 0, i64 %tmp_41
  %weight_buf_3_5_V_l = load i8* %weight_buf_3_5_V_a_1, align 1
  %rhs_V_28 = sext i8 %weight_buf_3_5_V_l to i16
  %r_V_28 = mul i16 %rhs_V_28, %lhs_V_28_mid2
  %tmp_79_28_cast = sext i16 %r_V_28 to i17
  %weight_buf_3_6_V_a_1 = getelementptr [10 x i8]* %weight_buf_3_6_V, i64 0, i64 %tmp_41
  %weight_buf_3_6_V_l = load i8* %weight_buf_3_6_V_a_1, align 1
  %rhs_V_29 = sext i8 %weight_buf_3_6_V_l to i16
  %r_V_29 = mul i16 %rhs_V_29, %lhs_V_29_mid2
  %tmp_79_29_cast = sext i16 %r_V_29 to i17
  %weight_buf_3_7_V_a_1 = getelementptr [10 x i8]* %weight_buf_3_7_V, i64 0, i64 %tmp_41
  %weight_buf_3_7_V_l = load i8* %weight_buf_3_7_V_a_1, align 1
  %rhs_V_30 = sext i8 %weight_buf_3_7_V_l to i16
  %r_V_30 = mul i16 %rhs_V_30, %lhs_V_30_mid2
  %tmp_79_30_cast = sext i16 %r_V_30 to i17
  %weight_buf_4_0_V_a_1 = getelementptr [10 x i8]* %weight_buf_4_0_V, i64 0, i64 %tmp_41
  %weight_buf_4_0_V_l = load i8* %weight_buf_4_0_V_a_1, align 1
  %rhs_V_31 = sext i8 %weight_buf_4_0_V_l to i16
  %r_V_31 = mul i16 %rhs_V_31, %lhs_V_31_mid2
  %tmp_79_31_cast = sext i16 %r_V_31 to i17
  %weight_buf_4_1_V_a_1 = getelementptr [10 x i8]* %weight_buf_4_1_V, i64 0, i64 %tmp_41
  %weight_buf_4_1_V_l = load i8* %weight_buf_4_1_V_a_1, align 1
  %rhs_V_32 = sext i8 %weight_buf_4_1_V_l to i16
  %r_V_32 = mul i16 %rhs_V_32, %lhs_V_32_mid2
  %tmp_79_32_cast = sext i16 %r_V_32 to i17
  %weight_buf_4_2_V_a_1 = getelementptr [10 x i8]* %weight_buf_4_2_V, i64 0, i64 %tmp_41
  %weight_buf_4_2_V_l = load i8* %weight_buf_4_2_V_a_1, align 1
  %rhs_V_33 = sext i8 %weight_buf_4_2_V_l to i16
  %r_V_33 = mul i16 %rhs_V_33, %lhs_V_33_mid2
  %tmp_79_33_cast = sext i16 %r_V_33 to i17
  %weight_buf_4_3_V_a_1 = getelementptr [10 x i8]* %weight_buf_4_3_V, i64 0, i64 %tmp_41
  %weight_buf_4_3_V_l = load i8* %weight_buf_4_3_V_a_1, align 1
  %rhs_V_34 = sext i8 %weight_buf_4_3_V_l to i16
  %r_V_34 = mul i16 %rhs_V_34, %lhs_V_34_mid2
  %tmp_79_34_cast = sext i16 %r_V_34 to i17
  %weight_buf_4_4_V_a_1 = getelementptr [10 x i8]* %weight_buf_4_4_V, i64 0, i64 %tmp_41
  %weight_buf_4_4_V_l = load i8* %weight_buf_4_4_V_a_1, align 1
  %rhs_V_35 = sext i8 %weight_buf_4_4_V_l to i16
  %r_V_35 = mul i16 %rhs_V_35, %lhs_V_35_mid2
  %tmp_79_35_cast = sext i16 %r_V_35 to i17
  %weight_buf_4_5_V_a_1 = getelementptr [10 x i8]* %weight_buf_4_5_V, i64 0, i64 %tmp_41
  %weight_buf_4_5_V_l = load i8* %weight_buf_4_5_V_a_1, align 1
  %rhs_V_36 = sext i8 %weight_buf_4_5_V_l to i16
  %r_V_36 = mul i16 %rhs_V_36, %lhs_V_36_mid2
  %tmp_79_36_cast = sext i16 %r_V_36 to i17
  %weight_buf_4_6_V_a_1 = getelementptr [10 x i8]* %weight_buf_4_6_V, i64 0, i64 %tmp_41
  %weight_buf_4_6_V_l = load i8* %weight_buf_4_6_V_a_1, align 1
  %rhs_V_37 = sext i8 %weight_buf_4_6_V_l to i16
  %r_V_37 = mul i16 %rhs_V_37, %lhs_V_37_mid2
  %tmp_79_37_cast = sext i16 %r_V_37 to i17
  %weight_buf_4_7_V_a_1 = getelementptr [10 x i8]* %weight_buf_4_7_V, i64 0, i64 %tmp_41
  %weight_buf_4_7_V_l = load i8* %weight_buf_4_7_V_a_1, align 1
  %rhs_V_38 = sext i8 %weight_buf_4_7_V_l to i16
  %r_V_38 = mul i16 %rhs_V_38, %lhs_V_38_mid2
  %tmp_79_38_cast = sext i16 %r_V_38 to i17
  %weight_buf_5_0_V_a_1 = getelementptr [10 x i8]* %weight_buf_5_0_V, i64 0, i64 %tmp_41
  %weight_buf_5_0_V_l = load i8* %weight_buf_5_0_V_a_1, align 1
  %rhs_V_39 = sext i8 %weight_buf_5_0_V_l to i16
  %r_V_39 = mul i16 %rhs_V_39, %lhs_V_39_mid2
  %tmp_79_39_cast = sext i16 %r_V_39 to i17
  %weight_buf_5_1_V_a_1 = getelementptr [10 x i8]* %weight_buf_5_1_V, i64 0, i64 %tmp_41
  %weight_buf_5_1_V_l = load i8* %weight_buf_5_1_V_a_1, align 1
  %rhs_V_40 = sext i8 %weight_buf_5_1_V_l to i16
  %r_V_40 = mul i16 %rhs_V_40, %lhs_V_40_mid2
  %tmp_79_40_cast = sext i16 %r_V_40 to i17
  %weight_buf_5_2_V_a_1 = getelementptr [10 x i8]* %weight_buf_5_2_V, i64 0, i64 %tmp_41
  %weight_buf_5_2_V_l = load i8* %weight_buf_5_2_V_a_1, align 1
  %rhs_V_41 = sext i8 %weight_buf_5_2_V_l to i16
  %r_V_41 = mul i16 %rhs_V_41, %lhs_V_41_mid2
  %tmp_79_41_cast = sext i16 %r_V_41 to i17
  %weight_buf_5_3_V_a_1 = getelementptr [10 x i8]* %weight_buf_5_3_V, i64 0, i64 %tmp_41
  %weight_buf_5_3_V_l = load i8* %weight_buf_5_3_V_a_1, align 1
  %rhs_V_42 = sext i8 %weight_buf_5_3_V_l to i16
  %r_V_42 = mul i16 %rhs_V_42, %lhs_V_42_mid2
  %tmp_79_42_cast = sext i16 %r_V_42 to i17
  %weight_buf_5_4_V_a_1 = getelementptr [10 x i8]* %weight_buf_5_4_V, i64 0, i64 %tmp_41
  %weight_buf_5_4_V_l = load i8* %weight_buf_5_4_V_a_1, align 1
  %rhs_V_43 = sext i8 %weight_buf_5_4_V_l to i16
  %r_V_43 = mul i16 %rhs_V_43, %lhs_V_43_mid2
  %tmp_79_43_cast = sext i16 %r_V_43 to i17
  %weight_buf_5_5_V_a_1 = getelementptr [10 x i8]* %weight_buf_5_5_V, i64 0, i64 %tmp_41
  %weight_buf_5_5_V_l = load i8* %weight_buf_5_5_V_a_1, align 1
  %rhs_V_44 = sext i8 %weight_buf_5_5_V_l to i16
  %r_V_44 = mul i16 %rhs_V_44, %lhs_V_44_mid2
  %tmp_79_44_cast = sext i16 %r_V_44 to i17
  %weight_buf_5_6_V_a_1 = getelementptr [10 x i8]* %weight_buf_5_6_V, i64 0, i64 %tmp_41
  %weight_buf_5_6_V_l = load i8* %weight_buf_5_6_V_a_1, align 1
  %rhs_V_45 = sext i8 %weight_buf_5_6_V_l to i16
  %r_V_45 = mul i16 %rhs_V_45, %lhs_V_45_mid2
  %tmp_79_45_cast = sext i16 %r_V_45 to i17
  %weight_buf_5_7_V_a_1 = getelementptr [10 x i8]* %weight_buf_5_7_V, i64 0, i64 %tmp_41
  %weight_buf_5_7_V_l = load i8* %weight_buf_5_7_V_a_1, align 1
  %rhs_V_46 = sext i8 %weight_buf_5_7_V_l to i16
  %r_V_46 = mul i16 %rhs_V_46, %lhs_V_46_mid2
  %tmp_79_46_cast = sext i16 %r_V_46 to i17
  %weight_buf_6_0_V_a_1 = getelementptr [10 x i8]* %weight_buf_6_0_V, i64 0, i64 %tmp_41
  %weight_buf_6_0_V_l = load i8* %weight_buf_6_0_V_a_1, align 1
  %rhs_V_47 = sext i8 %weight_buf_6_0_V_l to i16
  %r_V_47 = mul i16 %rhs_V_47, %lhs_V_47_mid2
  %tmp_79_47_cast = sext i16 %r_V_47 to i17
  %weight_buf_6_1_V_a_1 = getelementptr [10 x i8]* %weight_buf_6_1_V, i64 0, i64 %tmp_41
  %weight_buf_6_1_V_l = load i8* %weight_buf_6_1_V_a_1, align 1
  %rhs_V_48 = sext i8 %weight_buf_6_1_V_l to i16
  %r_V_48 = mul i16 %rhs_V_48, %lhs_V_48_mid2
  %tmp_79_48_cast = sext i16 %r_V_48 to i17
  %weight_buf_6_2_V_a_1 = getelementptr [10 x i8]* %weight_buf_6_2_V, i64 0, i64 %tmp_41
  %weight_buf_6_2_V_l = load i8* %weight_buf_6_2_V_a_1, align 1
  %rhs_V_49 = sext i8 %weight_buf_6_2_V_l to i16
  %r_V_49 = mul i16 %rhs_V_49, %lhs_V_49_mid2
  %tmp_79_49_cast = sext i16 %r_V_49 to i17
  %weight_buf_6_3_V_a_1 = getelementptr [10 x i8]* %weight_buf_6_3_V, i64 0, i64 %tmp_41
  %weight_buf_6_3_V_l = load i8* %weight_buf_6_3_V_a_1, align 1
  %rhs_V_50 = sext i8 %weight_buf_6_3_V_l to i16
  %r_V_50 = mul i16 %rhs_V_50, %lhs_V_50_mid2
  %tmp_79_50_cast = sext i16 %r_V_50 to i17
  %weight_buf_6_4_V_a_1 = getelementptr [10 x i8]* %weight_buf_6_4_V, i64 0, i64 %tmp_41
  %weight_buf_6_4_V_l = load i8* %weight_buf_6_4_V_a_1, align 1
  %rhs_V_51 = sext i8 %weight_buf_6_4_V_l to i16
  %r_V_51 = mul i16 %rhs_V_51, %lhs_V_51_mid2
  %tmp_79_51_cast = sext i16 %r_V_51 to i17
  %weight_buf_6_5_V_a_1 = getelementptr [10 x i8]* %weight_buf_6_5_V, i64 0, i64 %tmp_41
  %weight_buf_6_5_V_l = load i8* %weight_buf_6_5_V_a_1, align 1
  %rhs_V_52 = sext i8 %weight_buf_6_5_V_l to i16
  %r_V_52 = mul i16 %rhs_V_52, %lhs_V_52_mid2
  %tmp_79_52_cast = sext i16 %r_V_52 to i17
  %weight_buf_6_6_V_a_1 = getelementptr [10 x i8]* %weight_buf_6_6_V, i64 0, i64 %tmp_41
  %weight_buf_6_6_V_l = load i8* %weight_buf_6_6_V_a_1, align 1
  %rhs_V_53 = sext i8 %weight_buf_6_6_V_l to i16
  %r_V_53 = mul i16 %rhs_V_53, %lhs_V_53_mid2
  %tmp_79_53_cast = sext i16 %r_V_53 to i17
  %weight_buf_6_7_V_a_1 = getelementptr [10 x i8]* %weight_buf_6_7_V, i64 0, i64 %tmp_41
  %weight_buf_6_7_V_l = load i8* %weight_buf_6_7_V_a_1, align 1
  %rhs_V_54 = sext i8 %weight_buf_6_7_V_l to i16
  %r_V_54 = mul i16 %rhs_V_54, %lhs_V_54_mid2
  %tmp_79_54_cast = sext i16 %r_V_54 to i17
  %weight_buf_7_0_V_a_1 = getelementptr [10 x i8]* %weight_buf_7_0_V, i64 0, i64 %tmp_41
  %weight_buf_7_0_V_l = load i8* %weight_buf_7_0_V_a_1, align 1
  %rhs_V_55 = sext i8 %weight_buf_7_0_V_l to i16
  %r_V_55 = mul i16 %rhs_V_55, %lhs_V_55_mid2
  %tmp_79_55_cast = sext i16 %r_V_55 to i17
  %weight_buf_7_1_V_a_1 = getelementptr [10 x i8]* %weight_buf_7_1_V, i64 0, i64 %tmp_41
  %weight_buf_7_1_V_l = load i8* %weight_buf_7_1_V_a_1, align 1
  %rhs_V_56 = sext i8 %weight_buf_7_1_V_l to i16
  %r_V_56 = mul i16 %rhs_V_56, %lhs_V_56_mid2
  %tmp_79_56_cast = sext i16 %r_V_56 to i17
  %weight_buf_7_2_V_a_1 = getelementptr [10 x i8]* %weight_buf_7_2_V, i64 0, i64 %tmp_41
  %weight_buf_7_2_V_l = load i8* %weight_buf_7_2_V_a_1, align 1
  %rhs_V_57 = sext i8 %weight_buf_7_2_V_l to i16
  %r_V_57 = mul i16 %rhs_V_57, %lhs_V_57_mid2
  %tmp_79_57_cast = sext i16 %r_V_57 to i17
  %weight_buf_7_3_V_a_1 = getelementptr [10 x i8]* %weight_buf_7_3_V, i64 0, i64 %tmp_41
  %weight_buf_7_3_V_l = load i8* %weight_buf_7_3_V_a_1, align 1
  %rhs_V_58 = sext i8 %weight_buf_7_3_V_l to i16
  %r_V_58 = mul i16 %rhs_V_58, %lhs_V_58_mid2
  %tmp_79_58_cast = sext i16 %r_V_58 to i17
  %weight_buf_7_4_V_a_1 = getelementptr [10 x i8]* %weight_buf_7_4_V, i64 0, i64 %tmp_41
  %weight_buf_7_4_V_l = load i8* %weight_buf_7_4_V_a_1, align 1
  %rhs_V_59 = sext i8 %weight_buf_7_4_V_l to i16
  %r_V_59 = mul i16 %rhs_V_59, %lhs_V_59_mid2
  %tmp_79_59_cast = sext i16 %r_V_59 to i17
  %weight_buf_7_5_V_a_1 = getelementptr [10 x i8]* %weight_buf_7_5_V, i64 0, i64 %tmp_41
  %weight_buf_7_5_V_l = load i8* %weight_buf_7_5_V_a_1, align 1
  %rhs_V_60 = sext i8 %weight_buf_7_5_V_l to i16
  %r_V_60 = mul i16 %rhs_V_60, %lhs_V_60_mid2
  %tmp_79_60_cast = sext i16 %r_V_60 to i17
  %weight_buf_7_6_V_a_1 = getelementptr [10 x i8]* %weight_buf_7_6_V, i64 0, i64 %tmp_41
  %weight_buf_7_6_V_l = load i8* %weight_buf_7_6_V_a_1, align 1
  %rhs_V_61 = sext i8 %weight_buf_7_6_V_l to i16
  %r_V_61 = mul i16 %rhs_V_61, %lhs_V_61_mid2
  %tmp_79_61_cast = sext i16 %r_V_61 to i17
  %weight_buf_7_7_V_a_1 = getelementptr [10 x i8]* %weight_buf_7_7_V, i64 0, i64 %tmp_41
  %weight_buf_7_7_V_l = load i8* %weight_buf_7_7_V_a_1, align 1
  %rhs_V_62 = sext i8 %weight_buf_7_7_V_l to i16
  %r_V_62 = mul i16 %rhs_V_62, %lhs_V_62_mid2
  %tmp_79_62_cast = sext i16 %r_V_62 to i17
  %weight_buf_8_0_V_a_1 = getelementptr [10 x i8]* %weight_buf_8_0_V, i64 0, i64 %tmp_41
  %weight_buf_8_0_V_l = load i8* %weight_buf_8_0_V_a_1, align 1
  %rhs_V_63 = sext i8 %weight_buf_8_0_V_l to i16
  %r_V_63 = mul i16 %rhs_V_63, %lhs_V_63_mid2
  %tmp_79_63_cast = sext i16 %r_V_63 to i17
  %weight_buf_8_1_V_a_1 = getelementptr [10 x i8]* %weight_buf_8_1_V, i64 0, i64 %tmp_41
  %weight_buf_8_1_V_l = load i8* %weight_buf_8_1_V_a_1, align 1
  %rhs_V_64 = sext i8 %weight_buf_8_1_V_l to i16
  %r_V_64 = mul i16 %rhs_V_64, %lhs_V_64_mid2
  %tmp_79_64_cast = sext i16 %r_V_64 to i17
  %weight_buf_8_2_V_a_1 = getelementptr [10 x i8]* %weight_buf_8_2_V, i64 0, i64 %tmp_41
  %weight_buf_8_2_V_l = load i8* %weight_buf_8_2_V_a_1, align 1
  %rhs_V_65 = sext i8 %weight_buf_8_2_V_l to i16
  %r_V_65 = mul i16 %rhs_V_65, %lhs_V_65_mid2
  %tmp_79_65_cast = sext i16 %r_V_65 to i17
  %weight_buf_8_3_V_a_1 = getelementptr [10 x i8]* %weight_buf_8_3_V, i64 0, i64 %tmp_41
  %weight_buf_8_3_V_l = load i8* %weight_buf_8_3_V_a_1, align 1
  %rhs_V_66 = sext i8 %weight_buf_8_3_V_l to i16
  %r_V_66 = mul i16 %rhs_V_66, %lhs_V_66_mid2
  %tmp_79_66_cast = sext i16 %r_V_66 to i17
  %weight_buf_8_4_V_a_1 = getelementptr [10 x i8]* %weight_buf_8_4_V, i64 0, i64 %tmp_41
  %weight_buf_8_4_V_l = load i8* %weight_buf_8_4_V_a_1, align 1
  %rhs_V_67 = sext i8 %weight_buf_8_4_V_l to i16
  %r_V_67 = mul i16 %rhs_V_67, %lhs_V_67_mid2
  %tmp_79_67_cast = sext i16 %r_V_67 to i17
  %weight_buf_8_5_V_a_1 = getelementptr [10 x i8]* %weight_buf_8_5_V, i64 0, i64 %tmp_41
  %weight_buf_8_5_V_l = load i8* %weight_buf_8_5_V_a_1, align 1
  %rhs_V_68 = sext i8 %weight_buf_8_5_V_l to i16
  %r_V_68 = mul i16 %rhs_V_68, %lhs_V_68_mid2
  %tmp_79_68_cast = sext i16 %r_V_68 to i17
  %weight_buf_8_6_V_a_1 = getelementptr [10 x i8]* %weight_buf_8_6_V, i64 0, i64 %tmp_41
  %weight_buf_8_6_V_l = load i8* %weight_buf_8_6_V_a_1, align 1
  %rhs_V_69 = sext i8 %weight_buf_8_6_V_l to i16
  %r_V_69 = mul i16 %rhs_V_69, %lhs_V_69_mid2
  %tmp_79_69_cast = sext i16 %r_V_69 to i17
  %weight_buf_8_7_V_a_1 = getelementptr [10 x i8]* %weight_buf_8_7_V, i64 0, i64 %tmp_41
  %weight_buf_8_7_V_l = load i8* %weight_buf_8_7_V_a_1, align 1
  %rhs_V_70 = sext i8 %weight_buf_8_7_V_l to i16
  %r_V_70 = mul i16 %rhs_V_70, %lhs_V_70_mid2
  %tmp_79_70_cast = sext i16 %r_V_70 to i17
  %weight_buf_9_0_V_a_1 = getelementptr [10 x i8]* %weight_buf_9_0_V, i64 0, i64 %tmp_41
  %weight_buf_9_0_V_l = load i8* %weight_buf_9_0_V_a_1, align 1
  %rhs_V_71 = sext i8 %weight_buf_9_0_V_l to i16
  %r_V_71 = mul i16 %rhs_V_71, %lhs_V_71_mid2
  %tmp_79_71_cast = sext i16 %r_V_71 to i17
  %weight_buf_9_1_V_a_1 = getelementptr [10 x i8]* %weight_buf_9_1_V, i64 0, i64 %tmp_41
  %weight_buf_9_1_V_l = load i8* %weight_buf_9_1_V_a_1, align 1
  %rhs_V_72 = sext i8 %weight_buf_9_1_V_l to i16
  %r_V_72 = mul i16 %rhs_V_72, %lhs_V_72_mid2
  %tmp_79_72_cast = sext i16 %r_V_72 to i17
  %weight_buf_9_2_V_a_1 = getelementptr [10 x i8]* %weight_buf_9_2_V, i64 0, i64 %tmp_41
  %weight_buf_9_2_V_l = load i8* %weight_buf_9_2_V_a_1, align 1
  %rhs_V_73 = sext i8 %weight_buf_9_2_V_l to i16
  %r_V_73 = mul i16 %rhs_V_73, %lhs_V_73_mid2
  %tmp_79_73_cast = sext i16 %r_V_73 to i17
  %weight_buf_9_3_V_a_1 = getelementptr [10 x i8]* %weight_buf_9_3_V, i64 0, i64 %tmp_41
  %weight_buf_9_3_V_l = load i8* %weight_buf_9_3_V_a_1, align 1
  %rhs_V_74 = sext i8 %weight_buf_9_3_V_l to i16
  %r_V_74 = mul i16 %rhs_V_74, %lhs_V_74_mid2
  %tmp_79_74_cast = sext i16 %r_V_74 to i17
  %weight_buf_9_4_V_a_1 = getelementptr [10 x i8]* %weight_buf_9_4_V, i64 0, i64 %tmp_41
  %weight_buf_9_4_V_l = load i8* %weight_buf_9_4_V_a_1, align 1
  %rhs_V_75 = sext i8 %weight_buf_9_4_V_l to i16
  %r_V_75 = mul i16 %rhs_V_75, %lhs_V_75_mid2
  %tmp_79_75_cast = sext i16 %r_V_75 to i17
  %weight_buf_9_5_V_a_1 = getelementptr [10 x i8]* %weight_buf_9_5_V, i64 0, i64 %tmp_41
  %weight_buf_9_5_V_l = load i8* %weight_buf_9_5_V_a_1, align 1
  %rhs_V_76 = sext i8 %weight_buf_9_5_V_l to i16
  %r_V_76 = mul i16 %rhs_V_76, %lhs_V_76_mid2
  %tmp_79_76_cast = sext i16 %r_V_76 to i17
  %weight_buf_9_6_V_a_1 = getelementptr [10 x i8]* %weight_buf_9_6_V, i64 0, i64 %tmp_41
  %weight_buf_9_6_V_l = load i8* %weight_buf_9_6_V_a_1, align 1
  %rhs_V_77 = sext i8 %weight_buf_9_6_V_l to i16
  %r_V_77 = mul i16 %rhs_V_77, %lhs_V_77_mid2
  %tmp_79_77_cast = sext i16 %r_V_77 to i17
  %weight_buf_9_7_V_a_1 = getelementptr [10 x i8]* %weight_buf_9_7_V, i64 0, i64 %tmp_41
  %weight_buf_9_7_V_l = load i8* %weight_buf_9_7_V_a_1, align 1
  %rhs_V_78 = sext i8 %weight_buf_9_7_V_l to i16
  %r_V_78 = mul i16 %rhs_V_78, %lhs_V_78_mid2
  %tmp_79_78_cast = sext i16 %r_V_78 to i17
  %weight_buf_10_0_V_1 = getelementptr [10 x i8]* %weight_buf_10_0_V, i64 0, i64 %tmp_41
  %weight_buf_10_0_V_2 = load i8* %weight_buf_10_0_V_1, align 1
  %rhs_V_79 = sext i8 %weight_buf_10_0_V_2 to i16
  %r_V_79 = mul i16 %rhs_V_79, %lhs_V_79_mid2
  %tmp_79_79_cast = sext i16 %r_V_79 to i17
  %weight_buf_10_1_V_1 = getelementptr [10 x i8]* %weight_buf_10_1_V, i64 0, i64 %tmp_41
  %weight_buf_10_1_V_2 = load i8* %weight_buf_10_1_V_1, align 1
  %rhs_V_80 = sext i8 %weight_buf_10_1_V_2 to i16
  %r_V_80 = mul i16 %rhs_V_80, %lhs_V_80_mid2
  %tmp_79_80_cast = sext i16 %r_V_80 to i17
  %weight_buf_10_2_V_1 = getelementptr [10 x i8]* %weight_buf_10_2_V, i64 0, i64 %tmp_41
  %weight_buf_10_2_V_2 = load i8* %weight_buf_10_2_V_1, align 1
  %rhs_V_81 = sext i8 %weight_buf_10_2_V_2 to i16
  %r_V_81 = mul i16 %rhs_V_81, %lhs_V_81_mid2
  %tmp_79_81_cast = sext i16 %r_V_81 to i17
  %weight_buf_10_3_V_1 = getelementptr [10 x i8]* %weight_buf_10_3_V, i64 0, i64 %tmp_41
  %weight_buf_10_3_V_2 = load i8* %weight_buf_10_3_V_1, align 1
  %rhs_V_82 = sext i8 %weight_buf_10_3_V_2 to i16
  %r_V_82 = mul i16 %rhs_V_82, %lhs_V_82_mid2
  %tmp_79_82_cast = sext i16 %r_V_82 to i17
  %weight_buf_10_4_V_1 = getelementptr [10 x i8]* %weight_buf_10_4_V, i64 0, i64 %tmp_41
  %weight_buf_10_4_V_2 = load i8* %weight_buf_10_4_V_1, align 1
  %rhs_V_83 = sext i8 %weight_buf_10_4_V_2 to i16
  %r_V_83 = mul i16 %rhs_V_83, %lhs_V_83_mid2
  %tmp_79_83_cast = sext i16 %r_V_83 to i17
  %weight_buf_10_5_V_1 = getelementptr [10 x i8]* %weight_buf_10_5_V, i64 0, i64 %tmp_41
  %weight_buf_10_5_V_2 = load i8* %weight_buf_10_5_V_1, align 1
  %rhs_V_84 = sext i8 %weight_buf_10_5_V_2 to i16
  %r_V_84 = mul i16 %rhs_V_84, %lhs_V_84_mid2
  %tmp_79_84_cast = sext i16 %r_V_84 to i17
  %weight_buf_10_6_V_1 = getelementptr [10 x i8]* %weight_buf_10_6_V, i64 0, i64 %tmp_41
  %weight_buf_10_6_V_2 = load i8* %weight_buf_10_6_V_1, align 1
  %rhs_V_85 = sext i8 %weight_buf_10_6_V_2 to i16
  %r_V_85 = mul i16 %rhs_V_85, %lhs_V_85_mid2
  %tmp_79_85_cast = sext i16 %r_V_85 to i17
  %weight_buf_10_7_V_1 = getelementptr [10 x i8]* %weight_buf_10_7_V, i64 0, i64 %tmp_41
  %weight_buf_10_7_V_2 = load i8* %weight_buf_10_7_V_1, align 1
  %rhs_V_86 = sext i8 %weight_buf_10_7_V_2 to i16
  %r_V_86 = mul i16 %rhs_V_86, %lhs_V_86_mid2
  %tmp_79_86_cast = sext i16 %r_V_86 to i17
  %weight_buf_11_0_V_1 = getelementptr [10 x i8]* %weight_buf_11_0_V, i64 0, i64 %tmp_41
  %weight_buf_11_0_V_2 = load i8* %weight_buf_11_0_V_1, align 1
  %rhs_V_87 = sext i8 %weight_buf_11_0_V_2 to i16
  %r_V_87 = mul i16 %rhs_V_87, %lhs_V_87_mid2
  %tmp_79_87_cast = sext i16 %r_V_87 to i17
  %weight_buf_11_1_V_1 = getelementptr [10 x i8]* %weight_buf_11_1_V, i64 0, i64 %tmp_41
  %weight_buf_11_1_V_2 = load i8* %weight_buf_11_1_V_1, align 1
  %rhs_V_88 = sext i8 %weight_buf_11_1_V_2 to i16
  %r_V_88 = mul i16 %rhs_V_88, %lhs_V_88_mid2
  %tmp_79_88_cast = sext i16 %r_V_88 to i17
  %weight_buf_11_2_V_1 = getelementptr [10 x i8]* %weight_buf_11_2_V, i64 0, i64 %tmp_41
  %weight_buf_11_2_V_2 = load i8* %weight_buf_11_2_V_1, align 1
  %rhs_V_89 = sext i8 %weight_buf_11_2_V_2 to i16
  %r_V_89 = mul i16 %rhs_V_89, %lhs_V_89_mid2
  %tmp_79_89_cast = sext i16 %r_V_89 to i17
  %weight_buf_11_3_V_1 = getelementptr [10 x i8]* %weight_buf_11_3_V, i64 0, i64 %tmp_41
  %weight_buf_11_3_V_2 = load i8* %weight_buf_11_3_V_1, align 1
  %rhs_V_90 = sext i8 %weight_buf_11_3_V_2 to i16
  %r_V_90 = mul i16 %rhs_V_90, %lhs_V_90_mid2
  %tmp_79_90_cast = sext i16 %r_V_90 to i17
  %weight_buf_11_4_V_1 = getelementptr [10 x i8]* %weight_buf_11_4_V, i64 0, i64 %tmp_41
  %weight_buf_11_4_V_2 = load i8* %weight_buf_11_4_V_1, align 1
  %rhs_V_91 = sext i8 %weight_buf_11_4_V_2 to i16
  %r_V_91 = mul i16 %rhs_V_91, %lhs_V_91_mid2
  %tmp_79_91_cast = sext i16 %r_V_91 to i17
  %weight_buf_11_5_V_1 = getelementptr [10 x i8]* %weight_buf_11_5_V, i64 0, i64 %tmp_41
  %weight_buf_11_5_V_2 = load i8* %weight_buf_11_5_V_1, align 1
  %rhs_V_92 = sext i8 %weight_buf_11_5_V_2 to i16
  %r_V_92 = mul i16 %rhs_V_92, %lhs_V_92_mid2
  %tmp_79_92_cast = sext i16 %r_V_92 to i17
  %weight_buf_11_6_V_1 = getelementptr [10 x i8]* %weight_buf_11_6_V, i64 0, i64 %tmp_41
  %weight_buf_11_6_V_2 = load i8* %weight_buf_11_6_V_1, align 1
  %rhs_V_93 = sext i8 %weight_buf_11_6_V_2 to i16
  %r_V_93 = mul i16 %rhs_V_93, %lhs_V_93_mid2
  %tmp_79_93_cast = sext i16 %r_V_93 to i17
  %weight_buf_11_7_V_1 = getelementptr [10 x i8]* %weight_buf_11_7_V, i64 0, i64 %tmp_41
  %weight_buf_11_7_V_2 = load i8* %weight_buf_11_7_V_1, align 1
  %rhs_V_94 = sext i8 %weight_buf_11_7_V_2 to i16
  %r_V_94 = mul i16 %rhs_V_94, %lhs_V_94_mid2
  %tmp_79_94_cast = sext i16 %r_V_94 to i17
  %weight_buf_12_0_V_1 = getelementptr [10 x i8]* %weight_buf_12_0_V, i64 0, i64 %tmp_41
  %weight_buf_12_0_V_2 = load i8* %weight_buf_12_0_V_1, align 1
  %rhs_V_95 = sext i8 %weight_buf_12_0_V_2 to i16
  %r_V_95 = mul i16 %rhs_V_95, %lhs_V_95_mid2
  %tmp_79_95_cast = sext i16 %r_V_95 to i17
  %weight_buf_12_1_V_1 = getelementptr [10 x i8]* %weight_buf_12_1_V, i64 0, i64 %tmp_41
  %weight_buf_12_1_V_2 = load i8* %weight_buf_12_1_V_1, align 1
  %rhs_V_96 = sext i8 %weight_buf_12_1_V_2 to i16
  %r_V_96 = mul i16 %rhs_V_96, %lhs_V_96_mid2
  %tmp_79_96_cast = sext i16 %r_V_96 to i17
  %weight_buf_12_2_V_1 = getelementptr [10 x i8]* %weight_buf_12_2_V, i64 0, i64 %tmp_41
  %weight_buf_12_2_V_2 = load i8* %weight_buf_12_2_V_1, align 1
  %rhs_V_97 = sext i8 %weight_buf_12_2_V_2 to i16
  %r_V_97 = mul i16 %rhs_V_97, %lhs_V_97_mid2
  %tmp_79_97_cast = sext i16 %r_V_97 to i17
  %weight_buf_12_3_V_1 = getelementptr [10 x i8]* %weight_buf_12_3_V, i64 0, i64 %tmp_41
  %weight_buf_12_3_V_2 = load i8* %weight_buf_12_3_V_1, align 1
  %rhs_V_98 = sext i8 %weight_buf_12_3_V_2 to i16
  %r_V_98 = mul i16 %rhs_V_98, %lhs_V_98_mid2
  %tmp_79_98_cast = sext i16 %r_V_98 to i17
  %weight_buf_12_4_V_1 = getelementptr [10 x i8]* %weight_buf_12_4_V, i64 0, i64 %tmp_41
  %weight_buf_12_4_V_2 = load i8* %weight_buf_12_4_V_1, align 1
  %rhs_V_99 = sext i8 %weight_buf_12_4_V_2 to i16
  %r_V_99 = mul i16 %rhs_V_99, %lhs_V_99_mid2
  %tmp_79_99_cast = sext i16 %r_V_99 to i17
  %weight_buf_12_5_V_1 = getelementptr [10 x i8]* %weight_buf_12_5_V, i64 0, i64 %tmp_41
  %weight_buf_12_5_V_2 = load i8* %weight_buf_12_5_V_1, align 1
  %rhs_V_100 = sext i8 %weight_buf_12_5_V_2 to i16
  %r_V_100 = mul i16 %rhs_V_100, %lhs_V_100_mid2
  %tmp_79_100_cast = sext i16 %r_V_100 to i17
  %weight_buf_12_6_V_1 = getelementptr [10 x i8]* %weight_buf_12_6_V, i64 0, i64 %tmp_41
  %weight_buf_12_6_V_2 = load i8* %weight_buf_12_6_V_1, align 1
  %rhs_V_101 = sext i8 %weight_buf_12_6_V_2 to i16
  %r_V_101 = mul i16 %rhs_V_101, %lhs_V_101_mid2
  %tmp_79_101_cast = sext i16 %r_V_101 to i17
  %weight_buf_12_7_V_1 = getelementptr [10 x i8]* %weight_buf_12_7_V, i64 0, i64 %tmp_41
  %weight_buf_12_7_V_2 = load i8* %weight_buf_12_7_V_1, align 1
  %rhs_V_102 = sext i8 %weight_buf_12_7_V_2 to i16
  %r_V_102 = mul i16 %rhs_V_102, %lhs_V_102_mid2
  %tmp_79_102_cast = sext i16 %r_V_102 to i17
  %weight_buf_13_0_V_1 = getelementptr [10 x i8]* %weight_buf_13_0_V, i64 0, i64 %tmp_41
  %weight_buf_13_0_V_2 = load i8* %weight_buf_13_0_V_1, align 1
  %rhs_V_103 = sext i8 %weight_buf_13_0_V_2 to i16
  %r_V_103 = mul i16 %rhs_V_103, %lhs_V_103_mid2
  %tmp_79_103_cast = sext i16 %r_V_103 to i17
  %weight_buf_13_1_V_1 = getelementptr [10 x i8]* %weight_buf_13_1_V, i64 0, i64 %tmp_41
  %weight_buf_13_1_V_2 = load i8* %weight_buf_13_1_V_1, align 1
  %rhs_V_104 = sext i8 %weight_buf_13_1_V_2 to i16
  %r_V_104 = mul i16 %rhs_V_104, %lhs_V_104_mid2
  %tmp_79_104_cast = sext i16 %r_V_104 to i17
  %weight_buf_13_2_V_1 = getelementptr [10 x i8]* %weight_buf_13_2_V, i64 0, i64 %tmp_41
  %weight_buf_13_2_V_2 = load i8* %weight_buf_13_2_V_1, align 1
  %rhs_V_105 = sext i8 %weight_buf_13_2_V_2 to i16
  %r_V_105 = mul i16 %rhs_V_105, %lhs_V_105_mid2
  %tmp_79_105_cast = sext i16 %r_V_105 to i17
  %weight_buf_13_3_V_1 = getelementptr [10 x i8]* %weight_buf_13_3_V, i64 0, i64 %tmp_41
  %weight_buf_13_3_V_2 = load i8* %weight_buf_13_3_V_1, align 1
  %rhs_V_106 = sext i8 %weight_buf_13_3_V_2 to i16
  %r_V_106 = mul i16 %rhs_V_106, %lhs_V_106_mid2
  %tmp_79_106_cast = sext i16 %r_V_106 to i17
  %weight_buf_13_4_V_1 = getelementptr [10 x i8]* %weight_buf_13_4_V, i64 0, i64 %tmp_41
  %weight_buf_13_4_V_2 = load i8* %weight_buf_13_4_V_1, align 1
  %rhs_V_107 = sext i8 %weight_buf_13_4_V_2 to i16
  %r_V_107 = mul i16 %rhs_V_107, %lhs_V_107_mid2
  %tmp_79_107_cast = sext i16 %r_V_107 to i17
  %weight_buf_13_5_V_1 = getelementptr [10 x i8]* %weight_buf_13_5_V, i64 0, i64 %tmp_41
  %weight_buf_13_5_V_2 = load i8* %weight_buf_13_5_V_1, align 1
  %rhs_V_108 = sext i8 %weight_buf_13_5_V_2 to i16
  %r_V_108 = mul i16 %rhs_V_108, %lhs_V_108_mid2
  %tmp_79_108_cast = sext i16 %r_V_108 to i17
  %weight_buf_13_6_V_1 = getelementptr [10 x i8]* %weight_buf_13_6_V, i64 0, i64 %tmp_41
  %weight_buf_13_6_V_2 = load i8* %weight_buf_13_6_V_1, align 1
  %rhs_V_109 = sext i8 %weight_buf_13_6_V_2 to i16
  %r_V_109 = mul i16 %rhs_V_109, %lhs_V_109_mid2
  %tmp_79_109_cast = sext i16 %r_V_109 to i17
  %weight_buf_13_7_V_1 = getelementptr [10 x i8]* %weight_buf_13_7_V, i64 0, i64 %tmp_41
  %weight_buf_13_7_V_2 = load i8* %weight_buf_13_7_V_1, align 1
  %rhs_V_110 = sext i8 %weight_buf_13_7_V_2 to i16
  %r_V_110 = mul i16 %rhs_V_110, %lhs_V_110_mid2
  %tmp_79_110_cast = sext i16 %r_V_110 to i17
  %weight_buf_14_0_V_1 = getelementptr [10 x i8]* %weight_buf_14_0_V, i64 0, i64 %tmp_41
  %weight_buf_14_0_V_2 = load i8* %weight_buf_14_0_V_1, align 1
  %rhs_V_111 = sext i8 %weight_buf_14_0_V_2 to i16
  %r_V_111 = mul i16 %rhs_V_111, %lhs_V_111_mid2
  %tmp_79_111_cast = sext i16 %r_V_111 to i17
  %weight_buf_14_1_V_1 = getelementptr [10 x i8]* %weight_buf_14_1_V, i64 0, i64 %tmp_41
  %weight_buf_14_1_V_2 = load i8* %weight_buf_14_1_V_1, align 1
  %rhs_V_112 = sext i8 %weight_buf_14_1_V_2 to i16
  %r_V_112 = mul i16 %rhs_V_112, %lhs_V_112_mid2
  %tmp_79_112_cast = sext i16 %r_V_112 to i17
  %weight_buf_14_2_V_1 = getelementptr [10 x i8]* %weight_buf_14_2_V, i64 0, i64 %tmp_41
  %weight_buf_14_2_V_2 = load i8* %weight_buf_14_2_V_1, align 1
  %rhs_V_113 = sext i8 %weight_buf_14_2_V_2 to i16
  %r_V_113 = mul i16 %rhs_V_113, %lhs_V_113_mid2
  %tmp_79_113_cast = sext i16 %r_V_113 to i17
  %weight_buf_14_3_V_1 = getelementptr [10 x i8]* %weight_buf_14_3_V, i64 0, i64 %tmp_41
  %weight_buf_14_3_V_2 = load i8* %weight_buf_14_3_V_1, align 1
  %rhs_V_114 = sext i8 %weight_buf_14_3_V_2 to i16
  %r_V_114 = mul i16 %rhs_V_114, %lhs_V_114_mid2
  %tmp_79_114_cast = sext i16 %r_V_114 to i17
  %weight_buf_14_4_V_1 = getelementptr [10 x i8]* %weight_buf_14_4_V, i64 0, i64 %tmp_41
  %weight_buf_14_4_V_2 = load i8* %weight_buf_14_4_V_1, align 1
  %rhs_V_115 = sext i8 %weight_buf_14_4_V_2 to i16
  %r_V_115 = mul i16 %rhs_V_115, %lhs_V_115_mid2
  %tmp_79_115_cast = sext i16 %r_V_115 to i17
  %weight_buf_14_5_V_1 = getelementptr [10 x i8]* %weight_buf_14_5_V, i64 0, i64 %tmp_41
  %weight_buf_14_5_V_2 = load i8* %weight_buf_14_5_V_1, align 1
  %rhs_V_116 = sext i8 %weight_buf_14_5_V_2 to i16
  %r_V_116 = mul i16 %rhs_V_116, %lhs_V_116_mid2
  %tmp_79_116_cast = sext i16 %r_V_116 to i17
  %weight_buf_14_6_V_1 = getelementptr [10 x i8]* %weight_buf_14_6_V, i64 0, i64 %tmp_41
  %weight_buf_14_6_V_2 = load i8* %weight_buf_14_6_V_1, align 1
  %rhs_V_117 = sext i8 %weight_buf_14_6_V_2 to i16
  %r_V_117 = mul i16 %rhs_V_117, %lhs_V_117_mid2
  %tmp_79_117_cast = sext i16 %r_V_117 to i17
  %weight_buf_14_7_V_1 = getelementptr [10 x i8]* %weight_buf_14_7_V, i64 0, i64 %tmp_41
  %weight_buf_14_7_V_2 = load i8* %weight_buf_14_7_V_1, align 1
  %rhs_V_118 = sext i8 %weight_buf_14_7_V_2 to i16
  %r_V_118 = mul i16 %rhs_V_118, %lhs_V_118_mid2
  %tmp_79_118_cast = sext i16 %r_V_118 to i17
  %weight_buf_15_0_V_1 = getelementptr [10 x i8]* %weight_buf_15_0_V, i64 0, i64 %tmp_41
  %weight_buf_15_0_V_2 = load i8* %weight_buf_15_0_V_1, align 1
  %rhs_V_119 = sext i8 %weight_buf_15_0_V_2 to i16
  %r_V_119 = mul i16 %rhs_V_119, %lhs_V_119_mid2
  %tmp_79_119_cast = sext i16 %r_V_119 to i17
  %weight_buf_15_1_V_1 = getelementptr [10 x i8]* %weight_buf_15_1_V, i64 0, i64 %tmp_41
  %weight_buf_15_1_V_2 = load i8* %weight_buf_15_1_V_1, align 1
  %rhs_V_120 = sext i8 %weight_buf_15_1_V_2 to i16
  %r_V_120 = mul i16 %rhs_V_120, %lhs_V_120_mid2
  %tmp_79_120_cast = sext i16 %r_V_120 to i17
  %weight_buf_15_2_V_1 = getelementptr [10 x i8]* %weight_buf_15_2_V, i64 0, i64 %tmp_41
  %weight_buf_15_2_V_2 = load i8* %weight_buf_15_2_V_1, align 1
  %rhs_V_121 = sext i8 %weight_buf_15_2_V_2 to i16
  %r_V_121 = mul i16 %rhs_V_121, %lhs_V_121_mid2
  %tmp_79_121_cast = sext i16 %r_V_121 to i17
  %weight_buf_15_3_V_1 = getelementptr [10 x i8]* %weight_buf_15_3_V, i64 0, i64 %tmp_41
  %weight_buf_15_3_V_2 = load i8* %weight_buf_15_3_V_1, align 1
  %rhs_V_122 = sext i8 %weight_buf_15_3_V_2 to i16
  %r_V_122 = mul i16 %rhs_V_122, %lhs_V_122_mid2
  %tmp_79_122_cast = sext i16 %r_V_122 to i17
  %weight_buf_15_4_V_1 = getelementptr [10 x i8]* %weight_buf_15_4_V, i64 0, i64 %tmp_41
  %weight_buf_15_4_V_2 = load i8* %weight_buf_15_4_V_1, align 1
  %rhs_V_123 = sext i8 %weight_buf_15_4_V_2 to i16
  %r_V_123 = mul i16 %rhs_V_123, %lhs_V_123_mid2
  %tmp_79_123_cast = sext i16 %r_V_123 to i17
  %weight_buf_15_5_V_1 = getelementptr [10 x i8]* %weight_buf_15_5_V, i64 0, i64 %tmp_41
  %weight_buf_15_5_V_2 = load i8* %weight_buf_15_5_V_1, align 1
  %rhs_V_124 = sext i8 %weight_buf_15_5_V_2 to i16
  %r_V_124 = mul i16 %rhs_V_124, %lhs_V_124_mid2
  %tmp_79_124_cast = sext i16 %r_V_124 to i17
  %weight_buf_15_6_V_1 = getelementptr [10 x i8]* %weight_buf_15_6_V, i64 0, i64 %tmp_41
  %weight_buf_15_6_V_2 = load i8* %weight_buf_15_6_V_1, align 1
  %rhs_V_125 = sext i8 %weight_buf_15_6_V_2 to i16
  %r_V_125 = mul i16 %rhs_V_125, %lhs_V_125_mid2
  %tmp_79_125_cast = sext i16 %r_V_125 to i18
  %weight_buf_15_7_V_1 = getelementptr [10 x i8]* %weight_buf_15_7_V, i64 0, i64 %tmp_41
  %weight_buf_15_7_V_2 = load i8* %weight_buf_15_7_V_1, align 1
  %rhs_V_126 = sext i8 %weight_buf_15_7_V_2 to i16
  %r_V_126 = mul i16 %rhs_V_126, %lhs_V_126_mid2
  %tmp_79_126_cast = sext i16 %r_V_126 to i17
  %weight_buf_16_0_V_1 = getelementptr [10 x i8]* %weight_buf_16_0_V, i64 0, i64 %tmp_41
  %weight_buf_16_0_V_2 = load i8* %weight_buf_16_0_V_1, align 1
  %rhs_V_127 = sext i8 %weight_buf_16_0_V_2 to i16
  %r_V_127 = mul i16 %rhs_V_127, %lhs_V_127_mid2
  %tmp_79_127_cast = sext i16 %r_V_127 to i17
  %weight_buf_16_1_V_1 = getelementptr [10 x i8]* %weight_buf_16_1_V, i64 0, i64 %tmp_41
  %weight_buf_16_1_V_2 = load i8* %weight_buf_16_1_V_1, align 1
  %rhs_V_128 = sext i8 %weight_buf_16_1_V_2 to i16
  %r_V_128 = mul i16 %rhs_V_128, %lhs_V_128_mid2
  %tmp_79_128_cast = sext i16 %r_V_128 to i17
  %weight_buf_16_2_V_1 = getelementptr [10 x i8]* %weight_buf_16_2_V, i64 0, i64 %tmp_41
  %weight_buf_16_2_V_2 = load i8* %weight_buf_16_2_V_1, align 1
  %rhs_V_129 = sext i8 %weight_buf_16_2_V_2 to i16
  %r_V_129 = mul i16 %rhs_V_129, %lhs_V_129_mid2
  %tmp_79_129_cast = sext i16 %r_V_129 to i17
  %weight_buf_16_3_V_1 = getelementptr [10 x i8]* %weight_buf_16_3_V, i64 0, i64 %tmp_41
  %weight_buf_16_3_V_2 = load i8* %weight_buf_16_3_V_1, align 1
  %rhs_V_130 = sext i8 %weight_buf_16_3_V_2 to i16
  %r_V_130 = mul i16 %rhs_V_130, %lhs_V_130_mid2
  %tmp_79_130_cast = sext i16 %r_V_130 to i17
  %weight_buf_16_4_V_1 = getelementptr [10 x i8]* %weight_buf_16_4_V, i64 0, i64 %tmp_41
  %weight_buf_16_4_V_2 = load i8* %weight_buf_16_4_V_1, align 1
  %rhs_V_131 = sext i8 %weight_buf_16_4_V_2 to i16
  %r_V_131 = mul i16 %rhs_V_131, %lhs_V_131_mid2
  %tmp_79_131_cast = sext i16 %r_V_131 to i17
  %weight_buf_16_5_V_1 = getelementptr [10 x i8]* %weight_buf_16_5_V, i64 0, i64 %tmp_41
  %weight_buf_16_5_V_2 = load i8* %weight_buf_16_5_V_1, align 1
  %rhs_V_132 = sext i8 %weight_buf_16_5_V_2 to i16
  %r_V_132 = mul i16 %rhs_V_132, %lhs_V_132_mid2
  %tmp_79_132_cast = sext i16 %r_V_132 to i17
  %weight_buf_16_6_V_1 = getelementptr [10 x i8]* %weight_buf_16_6_V, i64 0, i64 %tmp_41
  %weight_buf_16_6_V_2 = load i8* %weight_buf_16_6_V_1, align 1
  %rhs_V_133 = sext i8 %weight_buf_16_6_V_2 to i16
  %r_V_133 = mul i16 %rhs_V_133, %lhs_V_133_mid2
  %tmp_79_133_cast = sext i16 %r_V_133 to i17
  %weight_buf_16_7_V_1 = getelementptr [10 x i8]* %weight_buf_16_7_V, i64 0, i64 %tmp_41
  %weight_buf_16_7_V_2 = load i8* %weight_buf_16_7_V_1, align 1
  %rhs_V_134 = sext i8 %weight_buf_16_7_V_2 to i16
  %r_V_134 = mul i16 %rhs_V_134, %lhs_V_134_mid2
  %tmp_79_134_cast = sext i16 %r_V_134 to i17
  %weight_buf_17_0_V_1 = getelementptr [10 x i8]* %weight_buf_17_0_V, i64 0, i64 %tmp_41
  %weight_buf_17_0_V_2 = load i8* %weight_buf_17_0_V_1, align 1
  %rhs_V_135 = sext i8 %weight_buf_17_0_V_2 to i16
  %r_V_135 = mul i16 %rhs_V_135, %lhs_V_135_mid2
  %tmp_79_135_cast = sext i16 %r_V_135 to i17
  %weight_buf_17_1_V_1 = getelementptr [10 x i8]* %weight_buf_17_1_V, i64 0, i64 %tmp_41
  %weight_buf_17_1_V_2 = load i8* %weight_buf_17_1_V_1, align 1
  %rhs_V_136 = sext i8 %weight_buf_17_1_V_2 to i16
  %r_V_136 = mul i16 %rhs_V_136, %lhs_V_136_mid2
  %tmp_79_136_cast = sext i16 %r_V_136 to i17
  %weight_buf_17_2_V_1 = getelementptr [10 x i8]* %weight_buf_17_2_V, i64 0, i64 %tmp_41
  %weight_buf_17_2_V_2 = load i8* %weight_buf_17_2_V_1, align 1
  %rhs_V_137 = sext i8 %weight_buf_17_2_V_2 to i16
  %r_V_137 = mul i16 %rhs_V_137, %lhs_V_137_mid2
  %tmp_79_137_cast = sext i16 %r_V_137 to i17
  %weight_buf_17_3_V_1 = getelementptr [10 x i8]* %weight_buf_17_3_V, i64 0, i64 %tmp_41
  %weight_buf_17_3_V_2 = load i8* %weight_buf_17_3_V_1, align 1
  %rhs_V_138 = sext i8 %weight_buf_17_3_V_2 to i16
  %r_V_138 = mul i16 %rhs_V_138, %lhs_V_138_mid2
  %tmp_79_138_cast = sext i16 %r_V_138 to i17
  %weight_buf_17_4_V_1 = getelementptr [10 x i8]* %weight_buf_17_4_V, i64 0, i64 %tmp_41
  %weight_buf_17_4_V_2 = load i8* %weight_buf_17_4_V_1, align 1
  %rhs_V_139 = sext i8 %weight_buf_17_4_V_2 to i16
  %r_V_139 = mul i16 %rhs_V_139, %lhs_V_139_mid2
  %tmp_79_139_cast = sext i16 %r_V_139 to i17
  %weight_buf_17_5_V_1 = getelementptr [10 x i8]* %weight_buf_17_5_V, i64 0, i64 %tmp_41
  %weight_buf_17_5_V_2 = load i8* %weight_buf_17_5_V_1, align 1
  %rhs_V_140 = sext i8 %weight_buf_17_5_V_2 to i16
  %r_V_140 = mul i16 %rhs_V_140, %lhs_V_140_mid2
  %tmp_79_140_cast = sext i16 %r_V_140 to i17
  %weight_buf_17_6_V_1 = getelementptr [10 x i8]* %weight_buf_17_6_V, i64 0, i64 %tmp_41
  %weight_buf_17_6_V_2 = load i8* %weight_buf_17_6_V_1, align 1
  %rhs_V_141 = sext i8 %weight_buf_17_6_V_2 to i16
  %r_V_141 = mul i16 %rhs_V_141, %lhs_V_141_mid2
  %tmp_79_141_cast = sext i16 %r_V_141 to i17
  %weight_buf_17_7_V_1 = getelementptr [10 x i8]* %weight_buf_17_7_V, i64 0, i64 %tmp_41
  %weight_buf_17_7_V_2 = load i8* %weight_buf_17_7_V_1, align 1
  %rhs_V_142 = sext i8 %weight_buf_17_7_V_2 to i16
  %r_V_142 = mul i16 %rhs_V_142, %lhs_V_142_mid2
  %tmp_79_142_cast = sext i16 %r_V_142 to i17
  %weight_buf_18_0_V_1 = getelementptr [10 x i8]* %weight_buf_18_0_V, i64 0, i64 %tmp_41
  %weight_buf_18_0_V_2 = load i8* %weight_buf_18_0_V_1, align 1
  %rhs_V_143 = sext i8 %weight_buf_18_0_V_2 to i16
  %r_V_143 = mul i16 %rhs_V_143, %lhs_V_143_mid2
  %tmp_79_143_cast = sext i16 %r_V_143 to i17
  %weight_buf_18_1_V_1 = getelementptr [10 x i8]* %weight_buf_18_1_V, i64 0, i64 %tmp_41
  %weight_buf_18_1_V_2 = load i8* %weight_buf_18_1_V_1, align 1
  %rhs_V_144 = sext i8 %weight_buf_18_1_V_2 to i16
  %r_V_144 = mul i16 %rhs_V_144, %lhs_V_144_mid2
  %tmp_79_144_cast = sext i16 %r_V_144 to i17
  %weight_buf_18_2_V_1 = getelementptr [10 x i8]* %weight_buf_18_2_V, i64 0, i64 %tmp_41
  %weight_buf_18_2_V_2 = load i8* %weight_buf_18_2_V_1, align 1
  %rhs_V_145 = sext i8 %weight_buf_18_2_V_2 to i16
  %r_V_145 = mul i16 %rhs_V_145, %lhs_V_145_mid2
  %tmp_79_145_cast = sext i16 %r_V_145 to i17
  %weight_buf_18_3_V_1 = getelementptr [10 x i8]* %weight_buf_18_3_V, i64 0, i64 %tmp_41
  %weight_buf_18_3_V_2 = load i8* %weight_buf_18_3_V_1, align 1
  %rhs_V_146 = sext i8 %weight_buf_18_3_V_2 to i16
  %r_V_146 = mul i16 %rhs_V_146, %lhs_V_146_mid2
  %tmp_79_146_cast = sext i16 %r_V_146 to i17
  %weight_buf_18_4_V_1 = getelementptr [10 x i8]* %weight_buf_18_4_V, i64 0, i64 %tmp_41
  %weight_buf_18_4_V_2 = load i8* %weight_buf_18_4_V_1, align 1
  %rhs_V_147 = sext i8 %weight_buf_18_4_V_2 to i16
  %r_V_147 = mul i16 %rhs_V_147, %lhs_V_147_mid2
  %tmp_79_147_cast = sext i16 %r_V_147 to i17
  %weight_buf_18_5_V_1 = getelementptr [10 x i8]* %weight_buf_18_5_V, i64 0, i64 %tmp_41
  %weight_buf_18_5_V_2 = load i8* %weight_buf_18_5_V_1, align 1
  %rhs_V_148 = sext i8 %weight_buf_18_5_V_2 to i16
  %r_V_148 = mul i16 %rhs_V_148, %lhs_V_148_mid2
  %tmp_79_148_cast = sext i16 %r_V_148 to i17
  %weight_buf_18_6_V_1 = getelementptr [10 x i8]* %weight_buf_18_6_V, i64 0, i64 %tmp_41
  %weight_buf_18_6_V_2 = load i8* %weight_buf_18_6_V_1, align 1
  %rhs_V_149 = sext i8 %weight_buf_18_6_V_2 to i16
  %r_V_149 = mul i16 %rhs_V_149, %lhs_V_149_mid2
  %tmp_79_149_cast = sext i16 %r_V_149 to i17
  %weight_buf_18_7_V_1 = getelementptr [10 x i8]* %weight_buf_18_7_V, i64 0, i64 %tmp_41
  %weight_buf_18_7_V_2 = load i8* %weight_buf_18_7_V_1, align 1
  %rhs_V_150 = sext i8 %weight_buf_18_7_V_2 to i16
  %r_V_150 = mul i16 %rhs_V_150, %lhs_V_150_mid2
  %tmp_79_150_cast = sext i16 %r_V_150 to i17
  %weight_buf_19_0_V_1 = getelementptr [10 x i8]* %weight_buf_19_0_V, i64 0, i64 %tmp_41
  %weight_buf_19_0_V_2 = load i8* %weight_buf_19_0_V_1, align 1
  %rhs_V_151 = sext i8 %weight_buf_19_0_V_2 to i16
  %r_V_151 = mul i16 %rhs_V_151, %lhs_V_151_mid2
  %tmp_79_151_cast = sext i16 %r_V_151 to i17
  %weight_buf_19_1_V_1 = getelementptr [10 x i8]* %weight_buf_19_1_V, i64 0, i64 %tmp_41
  %weight_buf_19_1_V_2 = load i8* %weight_buf_19_1_V_1, align 1
  %rhs_V_152 = sext i8 %weight_buf_19_1_V_2 to i16
  %r_V_152 = mul i16 %rhs_V_152, %lhs_V_152_mid2
  %tmp_79_152_cast = sext i16 %r_V_152 to i17
  %weight_buf_19_2_V_1 = getelementptr [10 x i8]* %weight_buf_19_2_V, i64 0, i64 %tmp_41
  %weight_buf_19_2_V_2 = load i8* %weight_buf_19_2_V_1, align 1
  %rhs_V_153 = sext i8 %weight_buf_19_2_V_2 to i16
  %r_V_153 = mul i16 %rhs_V_153, %lhs_V_153_mid2
  %tmp_79_153_cast = sext i16 %r_V_153 to i17
  %weight_buf_19_3_V_1 = getelementptr [10 x i8]* %weight_buf_19_3_V, i64 0, i64 %tmp_41
  %weight_buf_19_3_V_2 = load i8* %weight_buf_19_3_V_1, align 1
  %rhs_V_154 = sext i8 %weight_buf_19_3_V_2 to i16
  %r_V_154 = mul i16 %rhs_V_154, %lhs_V_154_mid2
  %tmp_79_154_cast = sext i16 %r_V_154 to i17
  %weight_buf_19_4_V_1 = getelementptr [10 x i8]* %weight_buf_19_4_V, i64 0, i64 %tmp_41
  %weight_buf_19_4_V_2 = load i8* %weight_buf_19_4_V_1, align 1
  %rhs_V_155 = sext i8 %weight_buf_19_4_V_2 to i16
  %r_V_155 = mul i16 %rhs_V_155, %lhs_V_155_mid2
  %tmp_79_155_cast = sext i16 %r_V_155 to i17
  %weight_buf_19_5_V_1 = getelementptr [10 x i8]* %weight_buf_19_5_V, i64 0, i64 %tmp_41
  %weight_buf_19_5_V_2 = load i8* %weight_buf_19_5_V_1, align 1
  %rhs_V_156 = sext i8 %weight_buf_19_5_V_2 to i16
  %r_V_156 = mul i16 %rhs_V_156, %lhs_V_156_mid2
  %tmp_79_156_cast = sext i16 %r_V_156 to i17
  %weight_buf_19_6_V_1 = getelementptr [10 x i8]* %weight_buf_19_6_V, i64 0, i64 %tmp_41
  %weight_buf_19_6_V_2 = load i8* %weight_buf_19_6_V_1, align 1
  %rhs_V_157 = sext i8 %weight_buf_19_6_V_2 to i16
  %r_V_157 = mul i16 %rhs_V_157, %lhs_V_157_mid2
  %tmp_79_157_cast = sext i16 %r_V_157 to i17
  %weight_buf_19_7_V_1 = getelementptr [10 x i8]* %weight_buf_19_7_V, i64 0, i64 %tmp_41
  %weight_buf_19_7_V_2 = load i8* %weight_buf_19_7_V_1, align 1
  %rhs_V_158 = sext i8 %weight_buf_19_7_V_2 to i16
  %r_V_158 = mul i16 %rhs_V_158, %lhs_V_158_mid2
  %tmp_79_158_cast = sext i16 %r_V_158 to i17
  %weight_buf_20_0_V_1 = getelementptr [10 x i8]* %weight_buf_20_0_V, i64 0, i64 %tmp_41
  %weight_buf_20_0_V_2 = load i8* %weight_buf_20_0_V_1, align 1
  %rhs_V_159 = sext i8 %weight_buf_20_0_V_2 to i16
  %r_V_159 = mul i16 %rhs_V_159, %lhs_V_159_mid2
  %tmp_79_159_cast = sext i16 %r_V_159 to i17
  %weight_buf_20_1_V_1 = getelementptr [10 x i8]* %weight_buf_20_1_V, i64 0, i64 %tmp_41
  %weight_buf_20_1_V_2 = load i8* %weight_buf_20_1_V_1, align 1
  %rhs_V_160 = sext i8 %weight_buf_20_1_V_2 to i16
  %r_V_160 = mul i16 %rhs_V_160, %lhs_V_160_mid2
  %tmp_79_160_cast = sext i16 %r_V_160 to i17
  %weight_buf_20_2_V_1 = getelementptr [10 x i8]* %weight_buf_20_2_V, i64 0, i64 %tmp_41
  %weight_buf_20_2_V_2 = load i8* %weight_buf_20_2_V_1, align 1
  %rhs_V_161 = sext i8 %weight_buf_20_2_V_2 to i16
  %r_V_161 = mul i16 %rhs_V_161, %lhs_V_161_mid2
  %tmp_79_161_cast = sext i16 %r_V_161 to i17
  %weight_buf_20_3_V_1 = getelementptr [10 x i8]* %weight_buf_20_3_V, i64 0, i64 %tmp_41
  %weight_buf_20_3_V_2 = load i8* %weight_buf_20_3_V_1, align 1
  %rhs_V_162 = sext i8 %weight_buf_20_3_V_2 to i16
  %r_V_162 = mul i16 %rhs_V_162, %lhs_V_162_mid2
  %tmp_79_162_cast = sext i16 %r_V_162 to i17
  %weight_buf_20_4_V_1 = getelementptr [10 x i8]* %weight_buf_20_4_V, i64 0, i64 %tmp_41
  %weight_buf_20_4_V_2 = load i8* %weight_buf_20_4_V_1, align 1
  %rhs_V_163 = sext i8 %weight_buf_20_4_V_2 to i16
  %r_V_163 = mul i16 %rhs_V_163, %lhs_V_163_mid2
  %tmp_79_163_cast = sext i16 %r_V_163 to i17
  %weight_buf_20_5_V_1 = getelementptr [10 x i8]* %weight_buf_20_5_V, i64 0, i64 %tmp_41
  %weight_buf_20_5_V_2 = load i8* %weight_buf_20_5_V_1, align 1
  %rhs_V_164 = sext i8 %weight_buf_20_5_V_2 to i16
  %r_V_164 = mul i16 %rhs_V_164, %lhs_V_164_mid2
  %tmp_79_164_cast = sext i16 %r_V_164 to i17
  %weight_buf_20_6_V_1 = getelementptr [10 x i8]* %weight_buf_20_6_V, i64 0, i64 %tmp_41
  %weight_buf_20_6_V_2 = load i8* %weight_buf_20_6_V_1, align 1
  %rhs_V_165 = sext i8 %weight_buf_20_6_V_2 to i16
  %r_V_165 = mul i16 %rhs_V_165, %lhs_V_165_mid2
  %tmp_79_165_cast = sext i16 %r_V_165 to i17
  %weight_buf_20_7_V_1 = getelementptr [10 x i8]* %weight_buf_20_7_V, i64 0, i64 %tmp_41
  %weight_buf_20_7_V_2 = load i8* %weight_buf_20_7_V_1, align 1
  %rhs_V_166 = sext i8 %weight_buf_20_7_V_2 to i16
  %r_V_166 = mul i16 %rhs_V_166, %lhs_V_166_mid2
  %tmp_79_166_cast = sext i16 %r_V_166 to i17
  %weight_buf_21_0_V_1 = getelementptr [10 x i8]* %weight_buf_21_0_V, i64 0, i64 %tmp_41
  %weight_buf_21_0_V_2 = load i8* %weight_buf_21_0_V_1, align 1
  %rhs_V_167 = sext i8 %weight_buf_21_0_V_2 to i16
  %r_V_167 = mul i16 %rhs_V_167, %lhs_V_167_mid2
  %tmp_79_167_cast = sext i16 %r_V_167 to i17
  %weight_buf_21_1_V_1 = getelementptr [10 x i8]* %weight_buf_21_1_V, i64 0, i64 %tmp_41
  %weight_buf_21_1_V_2 = load i8* %weight_buf_21_1_V_1, align 1
  %rhs_V_168 = sext i8 %weight_buf_21_1_V_2 to i16
  %r_V_168 = mul i16 %rhs_V_168, %lhs_V_168_mid2
  %tmp_79_168_cast = sext i16 %r_V_168 to i17
  %weight_buf_21_2_V_1 = getelementptr [10 x i8]* %weight_buf_21_2_V, i64 0, i64 %tmp_41
  %weight_buf_21_2_V_2 = load i8* %weight_buf_21_2_V_1, align 1
  %rhs_V_169 = sext i8 %weight_buf_21_2_V_2 to i16
  %r_V_169 = mul i16 %rhs_V_169, %lhs_V_169_mid2
  %tmp_79_169_cast = sext i16 %r_V_169 to i17
  %weight_buf_21_3_V_1 = getelementptr [10 x i8]* %weight_buf_21_3_V, i64 0, i64 %tmp_41
  %weight_buf_21_3_V_2 = load i8* %weight_buf_21_3_V_1, align 1
  %rhs_V_170 = sext i8 %weight_buf_21_3_V_2 to i16
  %r_V_170 = mul i16 %rhs_V_170, %lhs_V_170_mid2
  %tmp_79_170_cast = sext i16 %r_V_170 to i17
  %weight_buf_21_4_V_1 = getelementptr [10 x i8]* %weight_buf_21_4_V, i64 0, i64 %tmp_41
  %weight_buf_21_4_V_2 = load i8* %weight_buf_21_4_V_1, align 1
  %rhs_V_171 = sext i8 %weight_buf_21_4_V_2 to i16
  %r_V_171 = mul i16 %rhs_V_171, %lhs_V_171_mid2
  %tmp_79_171_cast = sext i16 %r_V_171 to i17
  %weight_buf_21_5_V_1 = getelementptr [10 x i8]* %weight_buf_21_5_V, i64 0, i64 %tmp_41
  %weight_buf_21_5_V_2 = load i8* %weight_buf_21_5_V_1, align 1
  %rhs_V_172 = sext i8 %weight_buf_21_5_V_2 to i16
  %r_V_172 = mul i16 %rhs_V_172, %lhs_V_172_mid2
  %tmp_79_172_cast = sext i16 %r_V_172 to i17
  %weight_buf_21_6_V_1 = getelementptr [10 x i8]* %weight_buf_21_6_V, i64 0, i64 %tmp_41
  %weight_buf_21_6_V_2 = load i8* %weight_buf_21_6_V_1, align 1
  %rhs_V_173 = sext i8 %weight_buf_21_6_V_2 to i16
  %r_V_173 = mul i16 %rhs_V_173, %lhs_V_173_mid2
  %tmp_79_173_cast = sext i16 %r_V_173 to i17
  %weight_buf_21_7_V_1 = getelementptr [10 x i8]* %weight_buf_21_7_V, i64 0, i64 %tmp_41
  %weight_buf_21_7_V_2 = load i8* %weight_buf_21_7_V_1, align 1
  %rhs_V_174 = sext i8 %weight_buf_21_7_V_2 to i16
  %r_V_174 = mul i16 %rhs_V_174, %lhs_V_174_mid2
  %tmp_79_174_cast = sext i16 %r_V_174 to i17
  %weight_buf_22_0_V_1 = getelementptr [10 x i8]* %weight_buf_22_0_V, i64 0, i64 %tmp_41
  %weight_buf_22_0_V_2 = load i8* %weight_buf_22_0_V_1, align 1
  %rhs_V_175 = sext i8 %weight_buf_22_0_V_2 to i16
  %r_V_175 = mul i16 %rhs_V_175, %lhs_V_175_mid2
  %tmp_79_175_cast = sext i16 %r_V_175 to i17
  %weight_buf_22_1_V_1 = getelementptr [10 x i8]* %weight_buf_22_1_V, i64 0, i64 %tmp_41
  %weight_buf_22_1_V_2 = load i8* %weight_buf_22_1_V_1, align 1
  %rhs_V_176 = sext i8 %weight_buf_22_1_V_2 to i16
  %r_V_176 = mul i16 %rhs_V_176, %lhs_V_176_mid2
  %tmp_79_176_cast = sext i16 %r_V_176 to i17
  %weight_buf_22_2_V_1 = getelementptr [10 x i8]* %weight_buf_22_2_V, i64 0, i64 %tmp_41
  %weight_buf_22_2_V_2 = load i8* %weight_buf_22_2_V_1, align 1
  %rhs_V_177 = sext i8 %weight_buf_22_2_V_2 to i16
  %r_V_177 = mul i16 %rhs_V_177, %lhs_V_177_mid2
  %tmp_79_177_cast = sext i16 %r_V_177 to i17
  %weight_buf_22_3_V_1 = getelementptr [10 x i8]* %weight_buf_22_3_V, i64 0, i64 %tmp_41
  %weight_buf_22_3_V_2 = load i8* %weight_buf_22_3_V_1, align 1
  %rhs_V_178 = sext i8 %weight_buf_22_3_V_2 to i16
  %r_V_178 = mul i16 %rhs_V_178, %lhs_V_178_mid2
  %tmp_79_178_cast = sext i16 %r_V_178 to i17
  %weight_buf_22_4_V_1 = getelementptr [10 x i8]* %weight_buf_22_4_V, i64 0, i64 %tmp_41
  %weight_buf_22_4_V_2 = load i8* %weight_buf_22_4_V_1, align 1
  %rhs_V_179 = sext i8 %weight_buf_22_4_V_2 to i16
  %r_V_179 = mul i16 %rhs_V_179, %lhs_V_179_mid2
  %tmp_79_179_cast = sext i16 %r_V_179 to i17
  %weight_buf_22_5_V_1 = getelementptr [10 x i8]* %weight_buf_22_5_V, i64 0, i64 %tmp_41
  %weight_buf_22_5_V_2 = load i8* %weight_buf_22_5_V_1, align 1
  %rhs_V_180 = sext i8 %weight_buf_22_5_V_2 to i16
  %r_V_180 = mul i16 %rhs_V_180, %lhs_V_180_mid2
  %tmp_79_180_cast = sext i16 %r_V_180 to i17
  %weight_buf_22_6_V_1 = getelementptr [10 x i8]* %weight_buf_22_6_V, i64 0, i64 %tmp_41
  %weight_buf_22_6_V_2 = load i8* %weight_buf_22_6_V_1, align 1
  %rhs_V_181 = sext i8 %weight_buf_22_6_V_2 to i16
  %r_V_181 = mul i16 %rhs_V_181, %lhs_V_181_mid2
  %tmp_79_181_cast = sext i16 %r_V_181 to i17
  %weight_buf_22_7_V_1 = getelementptr [10 x i8]* %weight_buf_22_7_V, i64 0, i64 %tmp_41
  %weight_buf_22_7_V_2 = load i8* %weight_buf_22_7_V_1, align 1
  %rhs_V_182 = sext i8 %weight_buf_22_7_V_2 to i16
  %r_V_182 = mul i16 %rhs_V_182, %lhs_V_182_mid2
  %tmp_79_182_cast = sext i16 %r_V_182 to i17
  %weight_buf_23_0_V_1 = getelementptr [10 x i8]* %weight_buf_23_0_V, i64 0, i64 %tmp_41
  %weight_buf_23_0_V_2 = load i8* %weight_buf_23_0_V_1, align 1
  %rhs_V_183 = sext i8 %weight_buf_23_0_V_2 to i16
  %r_V_183 = mul i16 %rhs_V_183, %lhs_V_183_mid2
  %tmp_79_183_cast = sext i16 %r_V_183 to i17
  %weight_buf_23_1_V_1 = getelementptr [10 x i8]* %weight_buf_23_1_V, i64 0, i64 %tmp_41
  %weight_buf_23_1_V_2 = load i8* %weight_buf_23_1_V_1, align 1
  %rhs_V_184 = sext i8 %weight_buf_23_1_V_2 to i16
  %r_V_184 = mul i16 %rhs_V_184, %lhs_V_184_mid2
  %tmp_79_184_cast = sext i16 %r_V_184 to i17
  %weight_buf_23_2_V_1 = getelementptr [10 x i8]* %weight_buf_23_2_V, i64 0, i64 %tmp_41
  %weight_buf_23_2_V_2 = load i8* %weight_buf_23_2_V_1, align 1
  %rhs_V_185 = sext i8 %weight_buf_23_2_V_2 to i16
  %r_V_185 = mul i16 %rhs_V_185, %lhs_V_185_mid2
  %tmp_79_185_cast = sext i16 %r_V_185 to i17
  %weight_buf_23_3_V_1 = getelementptr [10 x i8]* %weight_buf_23_3_V, i64 0, i64 %tmp_41
  %weight_buf_23_3_V_2 = load i8* %weight_buf_23_3_V_1, align 1
  %rhs_V_186 = sext i8 %weight_buf_23_3_V_2 to i16
  %r_V_186 = mul i16 %rhs_V_186, %lhs_V_186_mid2
  %tmp_79_186_cast = sext i16 %r_V_186 to i17
  %weight_buf_23_4_V_1 = getelementptr [10 x i8]* %weight_buf_23_4_V, i64 0, i64 %tmp_41
  %weight_buf_23_4_V_2 = load i8* %weight_buf_23_4_V_1, align 1
  %rhs_V_187 = sext i8 %weight_buf_23_4_V_2 to i16
  %r_V_187 = mul i16 %rhs_V_187, %lhs_V_187_mid2
  %tmp_79_187_cast = sext i16 %r_V_187 to i17
  %weight_buf_23_5_V_1 = getelementptr [10 x i8]* %weight_buf_23_5_V, i64 0, i64 %tmp_41
  %weight_buf_23_5_V_2 = load i8* %weight_buf_23_5_V_1, align 1
  %rhs_V_188 = sext i8 %weight_buf_23_5_V_2 to i16
  %r_V_188 = mul i16 %rhs_V_188, %lhs_V_188_mid2
  %tmp_79_188_cast = sext i16 %r_V_188 to i17
  %weight_buf_23_6_V_1 = getelementptr [10 x i8]* %weight_buf_23_6_V, i64 0, i64 %tmp_41
  %weight_buf_23_6_V_2 = load i8* %weight_buf_23_6_V_1, align 1
  %rhs_V_189 = sext i8 %weight_buf_23_6_V_2 to i16
  %r_V_189 = mul i16 %rhs_V_189, %lhs_V_189_mid2
  %tmp_79_189_cast = sext i16 %r_V_189 to i17
  %weight_buf_23_7_V_1 = getelementptr [10 x i8]* %weight_buf_23_7_V, i64 0, i64 %tmp_41
  %weight_buf_23_7_V_2 = load i8* %weight_buf_23_7_V_1, align 1
  %rhs_V_190 = sext i8 %weight_buf_23_7_V_2 to i16
  %r_V_190 = mul i16 %rhs_V_190, %lhs_V_190_mid2
  %tmp_79_190_cast = sext i16 %r_V_190 to i17
  %weight_buf_24_0_V_1 = getelementptr [10 x i8]* %weight_buf_24_0_V, i64 0, i64 %tmp_41
  %weight_buf_24_0_V_2 = load i8* %weight_buf_24_0_V_1, align 1
  %rhs_V_191 = sext i8 %weight_buf_24_0_V_2 to i16
  %r_V_191 = mul i16 %rhs_V_191, %lhs_V_191_mid2
  %tmp_79_191_cast = sext i16 %r_V_191 to i17
  %weight_buf_24_1_V_1 = getelementptr [10 x i8]* %weight_buf_24_1_V, i64 0, i64 %tmp_41
  %weight_buf_24_1_V_2 = load i8* %weight_buf_24_1_V_1, align 1
  %rhs_V_192 = sext i8 %weight_buf_24_1_V_2 to i16
  %r_V_192 = mul i16 %rhs_V_192, %lhs_V_192_mid2
  %tmp_79_192_cast = sext i16 %r_V_192 to i17
  %weight_buf_24_2_V_1 = getelementptr [10 x i8]* %weight_buf_24_2_V, i64 0, i64 %tmp_41
  %weight_buf_24_2_V_2 = load i8* %weight_buf_24_2_V_1, align 1
  %rhs_V_193 = sext i8 %weight_buf_24_2_V_2 to i16
  %r_V_193 = mul i16 %rhs_V_193, %lhs_V_193_mid2
  %tmp_79_193_cast = sext i16 %r_V_193 to i17
  %weight_buf_24_3_V_1 = getelementptr [10 x i8]* %weight_buf_24_3_V, i64 0, i64 %tmp_41
  %weight_buf_24_3_V_2 = load i8* %weight_buf_24_3_V_1, align 1
  %rhs_V_194 = sext i8 %weight_buf_24_3_V_2 to i16
  %r_V_194 = mul i16 %rhs_V_194, %lhs_V_194_mid2
  %tmp_79_194_cast = sext i16 %r_V_194 to i17
  %weight_buf_24_4_V_1 = getelementptr [10 x i8]* %weight_buf_24_4_V, i64 0, i64 %tmp_41
  %weight_buf_24_4_V_2 = load i8* %weight_buf_24_4_V_1, align 1
  %rhs_V_195 = sext i8 %weight_buf_24_4_V_2 to i16
  %r_V_195 = mul i16 %rhs_V_195, %lhs_V_195_mid2
  %tmp_79_195_cast = sext i16 %r_V_195 to i17
  %weight_buf_24_5_V_1 = getelementptr [10 x i8]* %weight_buf_24_5_V, i64 0, i64 %tmp_41
  %weight_buf_24_5_V_2 = load i8* %weight_buf_24_5_V_1, align 1
  %rhs_V_196 = sext i8 %weight_buf_24_5_V_2 to i16
  %r_V_196 = mul i16 %rhs_V_196, %lhs_V_196_mid2
  %tmp_79_196_cast = sext i16 %r_V_196 to i17
  %weight_buf_24_6_V_1 = getelementptr [10 x i8]* %weight_buf_24_6_V, i64 0, i64 %tmp_41
  %weight_buf_24_6_V_2 = load i8* %weight_buf_24_6_V_1, align 1
  %rhs_V_197 = sext i8 %weight_buf_24_6_V_2 to i16
  %r_V_197 = mul i16 %rhs_V_197, %lhs_V_197_mid2
  %tmp_79_197_cast = sext i16 %r_V_197 to i17
  %weight_buf_24_7_V_1 = getelementptr [10 x i8]* %weight_buf_24_7_V, i64 0, i64 %tmp_41
  %weight_buf_24_7_V_2 = load i8* %weight_buf_24_7_V_1, align 1
  %rhs_V_198 = sext i8 %weight_buf_24_7_V_2 to i16
  %r_V_198 = mul i16 %rhs_V_198, %lhs_V_198_mid2
  %tmp_79_198_cast = sext i16 %r_V_198 to i17
  %weight_buf_25_0_V_1 = getelementptr [10 x i8]* %weight_buf_25_0_V, i64 0, i64 %tmp_41
  %weight_buf_25_0_V_2 = load i8* %weight_buf_25_0_V_1, align 1
  %rhs_V_199 = sext i8 %weight_buf_25_0_V_2 to i16
  %r_V_199 = mul i16 %rhs_V_199, %lhs_V_199_mid2
  %tmp_79_199_cast = sext i16 %r_V_199 to i17
  %weight_buf_25_1_V_1 = getelementptr [10 x i8]* %weight_buf_25_1_V, i64 0, i64 %tmp_41
  %weight_buf_25_1_V_2 = load i8* %weight_buf_25_1_V_1, align 1
  %rhs_V_200 = sext i8 %weight_buf_25_1_V_2 to i16
  %r_V_200 = mul i16 %rhs_V_200, %lhs_V_200_mid2
  %tmp_79_200_cast = sext i16 %r_V_200 to i17
  %weight_buf_25_2_V_1 = getelementptr [10 x i8]* %weight_buf_25_2_V, i64 0, i64 %tmp_41
  %weight_buf_25_2_V_2 = load i8* %weight_buf_25_2_V_1, align 1
  %rhs_V_201 = sext i8 %weight_buf_25_2_V_2 to i16
  %r_V_201 = mul i16 %rhs_V_201, %lhs_V_201_mid2
  %tmp_79_201_cast = sext i16 %r_V_201 to i17
  %weight_buf_25_3_V_1 = getelementptr [10 x i8]* %weight_buf_25_3_V, i64 0, i64 %tmp_41
  %weight_buf_25_3_V_2 = load i8* %weight_buf_25_3_V_1, align 1
  %rhs_V_202 = sext i8 %weight_buf_25_3_V_2 to i16
  %r_V_202 = mul i16 %rhs_V_202, %lhs_V_202_mid2
  %tmp_79_202_cast = sext i16 %r_V_202 to i17
  %weight_buf_25_4_V_1 = getelementptr [10 x i8]* %weight_buf_25_4_V, i64 0, i64 %tmp_41
  %weight_buf_25_4_V_2 = load i8* %weight_buf_25_4_V_1, align 1
  %rhs_V_203 = sext i8 %weight_buf_25_4_V_2 to i16
  %r_V_203 = mul i16 %rhs_V_203, %lhs_V_203_mid2
  %tmp_79_203_cast = sext i16 %r_V_203 to i17
  %weight_buf_25_5_V_1 = getelementptr [10 x i8]* %weight_buf_25_5_V, i64 0, i64 %tmp_41
  %weight_buf_25_5_V_2 = load i8* %weight_buf_25_5_V_1, align 1
  %rhs_V_204 = sext i8 %weight_buf_25_5_V_2 to i16
  %r_V_204 = mul i16 %rhs_V_204, %lhs_V_204_mid2
  %tmp_79_204_cast = sext i16 %r_V_204 to i17
  %weight_buf_25_6_V_1 = getelementptr [10 x i8]* %weight_buf_25_6_V, i64 0, i64 %tmp_41
  %weight_buf_25_6_V_2 = load i8* %weight_buf_25_6_V_1, align 1
  %rhs_V_205 = sext i8 %weight_buf_25_6_V_2 to i16
  %r_V_205 = mul i16 %rhs_V_205, %lhs_V_205_mid2
  %tmp_79_205_cast = sext i16 %r_V_205 to i17
  %weight_buf_25_7_V_1 = getelementptr [10 x i8]* %weight_buf_25_7_V, i64 0, i64 %tmp_41
  %weight_buf_25_7_V_2 = load i8* %weight_buf_25_7_V_1, align 1
  %rhs_V_206 = sext i8 %weight_buf_25_7_V_2 to i16
  %r_V_206 = mul i16 %rhs_V_206, %lhs_V_206_mid2
  %tmp_79_206_cast = sext i16 %r_V_206 to i17
  %weight_buf_26_0_V_1 = getelementptr [10 x i8]* %weight_buf_26_0_V, i64 0, i64 %tmp_41
  %weight_buf_26_0_V_2 = load i8* %weight_buf_26_0_V_1, align 1
  %rhs_V_207 = sext i8 %weight_buf_26_0_V_2 to i16
  %r_V_207 = mul i16 %rhs_V_207, %lhs_V_207_mid2
  %tmp_79_207_cast = sext i16 %r_V_207 to i17
  %weight_buf_26_1_V_1 = getelementptr [10 x i8]* %weight_buf_26_1_V, i64 0, i64 %tmp_41
  %weight_buf_26_1_V_2 = load i8* %weight_buf_26_1_V_1, align 1
  %rhs_V_208 = sext i8 %weight_buf_26_1_V_2 to i16
  %r_V_208 = mul i16 %rhs_V_208, %lhs_V_208_mid2
  %tmp_79_208_cast = sext i16 %r_V_208 to i17
  %weight_buf_26_2_V_1 = getelementptr [10 x i8]* %weight_buf_26_2_V, i64 0, i64 %tmp_41
  %weight_buf_26_2_V_2 = load i8* %weight_buf_26_2_V_1, align 1
  %rhs_V_209 = sext i8 %weight_buf_26_2_V_2 to i16
  %r_V_209 = mul i16 %rhs_V_209, %lhs_V_209_mid2
  %tmp_79_209_cast = sext i16 %r_V_209 to i17
  %weight_buf_26_3_V_1 = getelementptr [10 x i8]* %weight_buf_26_3_V, i64 0, i64 %tmp_41
  %weight_buf_26_3_V_2 = load i8* %weight_buf_26_3_V_1, align 1
  %rhs_V_210 = sext i8 %weight_buf_26_3_V_2 to i16
  %r_V_210 = mul i16 %rhs_V_210, %lhs_V_210_mid2
  %tmp_79_210_cast = sext i16 %r_V_210 to i17
  %weight_buf_26_4_V_1 = getelementptr [10 x i8]* %weight_buf_26_4_V, i64 0, i64 %tmp_41
  %weight_buf_26_4_V_2 = load i8* %weight_buf_26_4_V_1, align 1
  %rhs_V_211 = sext i8 %weight_buf_26_4_V_2 to i16
  %r_V_211 = mul i16 %rhs_V_211, %lhs_V_211_mid2
  %tmp_79_211_cast = sext i16 %r_V_211 to i17
  %weight_buf_26_5_V_1 = getelementptr [10 x i8]* %weight_buf_26_5_V, i64 0, i64 %tmp_41
  %weight_buf_26_5_V_2 = load i8* %weight_buf_26_5_V_1, align 1
  %rhs_V_212 = sext i8 %weight_buf_26_5_V_2 to i16
  %r_V_212 = mul i16 %rhs_V_212, %lhs_V_212_mid2
  %tmp_79_212_cast = sext i16 %r_V_212 to i17
  %weight_buf_26_6_V_1 = getelementptr [10 x i8]* %weight_buf_26_6_V, i64 0, i64 %tmp_41
  %weight_buf_26_6_V_2 = load i8* %weight_buf_26_6_V_1, align 1
  %rhs_V_213 = sext i8 %weight_buf_26_6_V_2 to i16
  %r_V_213 = mul i16 %rhs_V_213, %lhs_V_213_mid2
  %tmp_79_213_cast = sext i16 %r_V_213 to i17
  %weight_buf_26_7_V_1 = getelementptr [10 x i8]* %weight_buf_26_7_V, i64 0, i64 %tmp_41
  %weight_buf_26_7_V_2 = load i8* %weight_buf_26_7_V_1, align 1
  %rhs_V_214 = sext i8 %weight_buf_26_7_V_2 to i16
  %r_V_214 = mul i16 %rhs_V_214, %lhs_V_214_mid2
  %tmp_79_214_cast = sext i16 %r_V_214 to i17
  %weight_buf_27_0_V_1 = getelementptr [10 x i8]* %weight_buf_27_0_V, i64 0, i64 %tmp_41
  %weight_buf_27_0_V_2 = load i8* %weight_buf_27_0_V_1, align 1
  %rhs_V_215 = sext i8 %weight_buf_27_0_V_2 to i16
  %r_V_215 = mul i16 %rhs_V_215, %lhs_V_215_mid2
  %tmp_79_215_cast = sext i16 %r_V_215 to i17
  %weight_buf_27_1_V_1 = getelementptr [10 x i8]* %weight_buf_27_1_V, i64 0, i64 %tmp_41
  %weight_buf_27_1_V_2 = load i8* %weight_buf_27_1_V_1, align 1
  %rhs_V_216 = sext i8 %weight_buf_27_1_V_2 to i16
  %r_V_216 = mul i16 %rhs_V_216, %lhs_V_216_mid2
  %tmp_79_216_cast = sext i16 %r_V_216 to i17
  %weight_buf_27_2_V_1 = getelementptr [10 x i8]* %weight_buf_27_2_V, i64 0, i64 %tmp_41
  %weight_buf_27_2_V_2 = load i8* %weight_buf_27_2_V_1, align 1
  %rhs_V_217 = sext i8 %weight_buf_27_2_V_2 to i16
  %r_V_217 = mul i16 %rhs_V_217, %lhs_V_217_mid2
  %tmp_79_217_cast = sext i16 %r_V_217 to i17
  %weight_buf_27_3_V_1 = getelementptr [10 x i8]* %weight_buf_27_3_V, i64 0, i64 %tmp_41
  %weight_buf_27_3_V_2 = load i8* %weight_buf_27_3_V_1, align 1
  %rhs_V_218 = sext i8 %weight_buf_27_3_V_2 to i16
  %r_V_218 = mul i16 %rhs_V_218, %lhs_V_218_mid2
  %tmp_79_218_cast = sext i16 %r_V_218 to i17
  %weight_buf_27_4_V_1 = getelementptr [10 x i8]* %weight_buf_27_4_V, i64 0, i64 %tmp_41
  %weight_buf_27_4_V_2 = load i8* %weight_buf_27_4_V_1, align 1
  %rhs_V_219 = sext i8 %weight_buf_27_4_V_2 to i16
  %r_V_219 = mul i16 %rhs_V_219, %lhs_V_219_mid2
  %tmp_79_219_cast = sext i16 %r_V_219 to i17
  %weight_buf_27_5_V_1 = getelementptr [10 x i8]* %weight_buf_27_5_V, i64 0, i64 %tmp_41
  %weight_buf_27_5_V_2 = load i8* %weight_buf_27_5_V_1, align 1
  %rhs_V_220 = sext i8 %weight_buf_27_5_V_2 to i16
  %r_V_220 = mul i16 %rhs_V_220, %lhs_V_220_mid2
  %tmp_79_220_cast = sext i16 %r_V_220 to i17
  %weight_buf_27_6_V_1 = getelementptr [10 x i8]* %weight_buf_27_6_V, i64 0, i64 %tmp_41
  %weight_buf_27_6_V_2 = load i8* %weight_buf_27_6_V_1, align 1
  %rhs_V_221 = sext i8 %weight_buf_27_6_V_2 to i16
  %r_V_221 = mul i16 %rhs_V_221, %lhs_V_221_mid2
  %tmp_79_221_cast = sext i16 %r_V_221 to i17
  %weight_buf_27_7_V_1 = getelementptr [10 x i8]* %weight_buf_27_7_V, i64 0, i64 %tmp_41
  %weight_buf_27_7_V_2 = load i8* %weight_buf_27_7_V_1, align 1
  %rhs_V_222 = sext i8 %weight_buf_27_7_V_2 to i16
  %r_V_222 = mul i16 %rhs_V_222, %lhs_V_222_mid2
  %tmp_79_222_cast = sext i16 %r_V_222 to i17
  %weight_buf_28_0_V_1 = getelementptr [10 x i8]* %weight_buf_28_0_V, i64 0, i64 %tmp_41
  %weight_buf_28_0_V_2 = load i8* %weight_buf_28_0_V_1, align 1
  %rhs_V_223 = sext i8 %weight_buf_28_0_V_2 to i16
  %r_V_223 = mul i16 %rhs_V_223, %lhs_V_223_mid2
  %tmp_79_223_cast = sext i16 %r_V_223 to i17
  %weight_buf_28_1_V_1 = getelementptr [10 x i8]* %weight_buf_28_1_V, i64 0, i64 %tmp_41
  %weight_buf_28_1_V_2 = load i8* %weight_buf_28_1_V_1, align 1
  %rhs_V_224 = sext i8 %weight_buf_28_1_V_2 to i16
  %r_V_224 = mul i16 %rhs_V_224, %lhs_V_224_mid2
  %tmp_79_224_cast = sext i16 %r_V_224 to i17
  %weight_buf_28_2_V_1 = getelementptr [10 x i8]* %weight_buf_28_2_V, i64 0, i64 %tmp_41
  %weight_buf_28_2_V_2 = load i8* %weight_buf_28_2_V_1, align 1
  %rhs_V_225 = sext i8 %weight_buf_28_2_V_2 to i16
  %r_V_225 = mul i16 %rhs_V_225, %lhs_V_225_mid2
  %tmp_79_225_cast = sext i16 %r_V_225 to i17
  %weight_buf_28_3_V_1 = getelementptr [10 x i8]* %weight_buf_28_3_V, i64 0, i64 %tmp_41
  %weight_buf_28_3_V_2 = load i8* %weight_buf_28_3_V_1, align 1
  %rhs_V_226 = sext i8 %weight_buf_28_3_V_2 to i16
  %r_V_226 = mul i16 %rhs_V_226, %lhs_V_226_mid2
  %tmp_79_226_cast = sext i16 %r_V_226 to i17
  %weight_buf_28_4_V_1 = getelementptr [10 x i8]* %weight_buf_28_4_V, i64 0, i64 %tmp_41
  %weight_buf_28_4_V_2 = load i8* %weight_buf_28_4_V_1, align 1
  %rhs_V_227 = sext i8 %weight_buf_28_4_V_2 to i16
  %r_V_227 = mul i16 %rhs_V_227, %lhs_V_227_mid2
  %tmp_79_227_cast = sext i16 %r_V_227 to i17
  %weight_buf_28_5_V_1 = getelementptr [10 x i8]* %weight_buf_28_5_V, i64 0, i64 %tmp_41
  %weight_buf_28_5_V_2 = load i8* %weight_buf_28_5_V_1, align 1
  %rhs_V_228 = sext i8 %weight_buf_28_5_V_2 to i16
  %r_V_228 = mul i16 %rhs_V_228, %lhs_V_228_mid2
  %tmp_79_228_cast = sext i16 %r_V_228 to i17
  %weight_buf_28_6_V_1 = getelementptr [10 x i8]* %weight_buf_28_6_V, i64 0, i64 %tmp_41
  %weight_buf_28_6_V_2 = load i8* %weight_buf_28_6_V_1, align 1
  %rhs_V_229 = sext i8 %weight_buf_28_6_V_2 to i16
  %r_V_229 = mul i16 %rhs_V_229, %lhs_V_229_mid2
  %tmp_79_229_cast = sext i16 %r_V_229 to i17
  %weight_buf_28_7_V_1 = getelementptr [10 x i8]* %weight_buf_28_7_V, i64 0, i64 %tmp_41
  %weight_buf_28_7_V_2 = load i8* %weight_buf_28_7_V_1, align 1
  %rhs_V_230 = sext i8 %weight_buf_28_7_V_2 to i16
  %r_V_230 = mul i16 %rhs_V_230, %lhs_V_230_mid2
  %tmp_79_230_cast = sext i16 %r_V_230 to i17
  %weight_buf_29_0_V_1 = getelementptr [10 x i8]* %weight_buf_29_0_V, i64 0, i64 %tmp_41
  %weight_buf_29_0_V_2 = load i8* %weight_buf_29_0_V_1, align 1
  %rhs_V_231 = sext i8 %weight_buf_29_0_V_2 to i16
  %r_V_231 = mul i16 %rhs_V_231, %lhs_V_231_mid2
  %tmp_79_231_cast = sext i16 %r_V_231 to i17
  %weight_buf_29_1_V_1 = getelementptr [10 x i8]* %weight_buf_29_1_V, i64 0, i64 %tmp_41
  %weight_buf_29_1_V_2 = load i8* %weight_buf_29_1_V_1, align 1
  %rhs_V_232 = sext i8 %weight_buf_29_1_V_2 to i16
  %r_V_232 = mul i16 %rhs_V_232, %lhs_V_232_mid2
  %tmp_79_232_cast = sext i16 %r_V_232 to i17
  %weight_buf_29_2_V_1 = getelementptr [10 x i8]* %weight_buf_29_2_V, i64 0, i64 %tmp_41
  %weight_buf_29_2_V_2 = load i8* %weight_buf_29_2_V_1, align 1
  %rhs_V_233 = sext i8 %weight_buf_29_2_V_2 to i16
  %r_V_233 = mul i16 %rhs_V_233, %lhs_V_233_mid2
  %tmp_79_233_cast = sext i16 %r_V_233 to i17
  %weight_buf_29_3_V_1 = getelementptr [10 x i8]* %weight_buf_29_3_V, i64 0, i64 %tmp_41
  %weight_buf_29_3_V_2 = load i8* %weight_buf_29_3_V_1, align 1
  %rhs_V_234 = sext i8 %weight_buf_29_3_V_2 to i16
  %r_V_234 = mul i16 %rhs_V_234, %lhs_V_234_mid2
  %tmp_79_234_cast = sext i16 %r_V_234 to i17
  %weight_buf_29_4_V_1 = getelementptr [10 x i8]* %weight_buf_29_4_V, i64 0, i64 %tmp_41
  %weight_buf_29_4_V_2 = load i8* %weight_buf_29_4_V_1, align 1
  %rhs_V_235 = sext i8 %weight_buf_29_4_V_2 to i16
  %r_V_235 = mul i16 %rhs_V_235, %lhs_V_235_mid2
  %tmp_79_235_cast = sext i16 %r_V_235 to i17
  %weight_buf_29_5_V_1 = getelementptr [10 x i8]* %weight_buf_29_5_V, i64 0, i64 %tmp_41
  %weight_buf_29_5_V_2 = load i8* %weight_buf_29_5_V_1, align 1
  %rhs_V_236 = sext i8 %weight_buf_29_5_V_2 to i16
  %r_V_236 = mul i16 %rhs_V_236, %lhs_V_236_mid2
  %tmp_79_236_cast = sext i16 %r_V_236 to i17
  %weight_buf_29_6_V_1 = getelementptr [10 x i8]* %weight_buf_29_6_V, i64 0, i64 %tmp_41
  %weight_buf_29_6_V_2 = load i8* %weight_buf_29_6_V_1, align 1
  %rhs_V_237 = sext i8 %weight_buf_29_6_V_2 to i16
  %r_V_237 = mul i16 %rhs_V_237, %lhs_V_237_mid2
  %tmp_79_237_cast = sext i16 %r_V_237 to i17
  %weight_buf_29_7_V_1 = getelementptr [10 x i8]* %weight_buf_29_7_V, i64 0, i64 %tmp_41
  %weight_buf_29_7_V_2 = load i8* %weight_buf_29_7_V_1, align 1
  %rhs_V_238 = sext i8 %weight_buf_29_7_V_2 to i16
  %r_V_238 = mul i16 %rhs_V_238, %lhs_V_238_mid2
  %tmp_79_238_cast = sext i16 %r_V_238 to i17
  %weight_buf_30_0_V_1 = getelementptr [10 x i8]* %weight_buf_30_0_V, i64 0, i64 %tmp_41
  %weight_buf_30_0_V_2 = load i8* %weight_buf_30_0_V_1, align 1
  %rhs_V_239 = sext i8 %weight_buf_30_0_V_2 to i16
  %r_V_239 = mul i16 %rhs_V_239, %lhs_V_239_mid2
  %tmp_79_239_cast = sext i16 %r_V_239 to i17
  %weight_buf_30_1_V_1 = getelementptr [10 x i8]* %weight_buf_30_1_V, i64 0, i64 %tmp_41
  %weight_buf_30_1_V_2 = load i8* %weight_buf_30_1_V_1, align 1
  %rhs_V_240 = sext i8 %weight_buf_30_1_V_2 to i16
  %r_V_240 = mul i16 %rhs_V_240, %lhs_V_240_mid2
  %tmp_79_240_cast = sext i16 %r_V_240 to i17
  %weight_buf_30_2_V_1 = getelementptr [10 x i8]* %weight_buf_30_2_V, i64 0, i64 %tmp_41
  %weight_buf_30_2_V_2 = load i8* %weight_buf_30_2_V_1, align 1
  %rhs_V_241 = sext i8 %weight_buf_30_2_V_2 to i16
  %r_V_241 = mul i16 %rhs_V_241, %lhs_V_241_mid2
  %tmp_79_241_cast = sext i16 %r_V_241 to i17
  %weight_buf_30_3_V_1 = getelementptr [10 x i8]* %weight_buf_30_3_V, i64 0, i64 %tmp_41
  %weight_buf_30_3_V_2 = load i8* %weight_buf_30_3_V_1, align 1
  %rhs_V_242 = sext i8 %weight_buf_30_3_V_2 to i16
  %r_V_242 = mul i16 %rhs_V_242, %lhs_V_242_mid2
  %tmp_79_242_cast = sext i16 %r_V_242 to i17
  %weight_buf_30_4_V_1 = getelementptr [10 x i8]* %weight_buf_30_4_V, i64 0, i64 %tmp_41
  %weight_buf_30_4_V_2 = load i8* %weight_buf_30_4_V_1, align 1
  %rhs_V_243 = sext i8 %weight_buf_30_4_V_2 to i16
  %r_V_243 = mul i16 %rhs_V_243, %lhs_V_243_mid2
  %tmp_79_243_cast = sext i16 %r_V_243 to i17
  %weight_buf_30_5_V_1 = getelementptr [10 x i8]* %weight_buf_30_5_V, i64 0, i64 %tmp_41
  %weight_buf_30_5_V_2 = load i8* %weight_buf_30_5_V_1, align 1
  %rhs_V_244 = sext i8 %weight_buf_30_5_V_2 to i16
  %r_V_244 = mul i16 %rhs_V_244, %lhs_V_244_mid2
  %tmp_79_244_cast = sext i16 %r_V_244 to i17
  %weight_buf_30_6_V_1 = getelementptr [10 x i8]* %weight_buf_30_6_V, i64 0, i64 %tmp_41
  %weight_buf_30_6_V_2 = load i8* %weight_buf_30_6_V_1, align 1
  %rhs_V_245 = sext i8 %weight_buf_30_6_V_2 to i16
  %r_V_245 = mul i16 %rhs_V_245, %lhs_V_245_mid2
  %tmp_79_245_cast = sext i16 %r_V_245 to i17
  %weight_buf_30_7_V_1 = getelementptr [10 x i8]* %weight_buf_30_7_V, i64 0, i64 %tmp_41
  %weight_buf_30_7_V_2 = load i8* %weight_buf_30_7_V_1, align 1
  %rhs_V_246 = sext i8 %weight_buf_30_7_V_2 to i16
  %r_V_246 = mul i16 %rhs_V_246, %lhs_V_246_mid2
  %tmp_79_246_cast = sext i16 %r_V_246 to i17
  %weight_buf_31_0_V_1 = getelementptr [10 x i8]* %weight_buf_31_0_V, i64 0, i64 %tmp_41
  %weight_buf_31_0_V_2 = load i8* %weight_buf_31_0_V_1, align 1
  %rhs_V_247 = sext i8 %weight_buf_31_0_V_2 to i16
  %r_V_247 = mul i16 %rhs_V_247, %lhs_V_247_mid2
  %tmp_79_247_cast = sext i16 %r_V_247 to i17
  %weight_buf_31_1_V_1 = getelementptr [10 x i8]* %weight_buf_31_1_V, i64 0, i64 %tmp_41
  %weight_buf_31_1_V_2 = load i8* %weight_buf_31_1_V_1, align 1
  %rhs_V_248 = sext i8 %weight_buf_31_1_V_2 to i16
  %r_V_248 = mul i16 %rhs_V_248, %lhs_V_248_mid2
  %tmp_79_248_cast = sext i16 %r_V_248 to i17
  %weight_buf_31_2_V_1 = getelementptr [10 x i8]* %weight_buf_31_2_V, i64 0, i64 %tmp_41
  %weight_buf_31_2_V_2 = load i8* %weight_buf_31_2_V_1, align 1
  %rhs_V_249 = sext i8 %weight_buf_31_2_V_2 to i16
  %r_V_249 = mul i16 %rhs_V_249, %lhs_V_249_mid2
  %tmp_79_249_cast = sext i16 %r_V_249 to i17
  %weight_buf_31_3_V_1 = getelementptr [10 x i8]* %weight_buf_31_3_V, i64 0, i64 %tmp_41
  %weight_buf_31_3_V_2 = load i8* %weight_buf_31_3_V_1, align 1
  %rhs_V_250 = sext i8 %weight_buf_31_3_V_2 to i16
  %r_V_250 = mul i16 %rhs_V_250, %lhs_V_250_mid2
  %tmp_79_250_cast = sext i16 %r_V_250 to i17
  %weight_buf_31_4_V_1 = getelementptr [10 x i8]* %weight_buf_31_4_V, i64 0, i64 %tmp_41
  %weight_buf_31_4_V_2 = load i8* %weight_buf_31_4_V_1, align 1
  %rhs_V_251 = sext i8 %weight_buf_31_4_V_2 to i16
  %r_V_251 = mul i16 %rhs_V_251, %lhs_V_251_mid2
  %tmp_79_251_cast = sext i16 %r_V_251 to i17
  %weight_buf_31_5_V_1 = getelementptr [10 x i8]* %weight_buf_31_5_V, i64 0, i64 %tmp_41
  %weight_buf_31_5_V_2 = load i8* %weight_buf_31_5_V_1, align 1
  %rhs_V_252 = sext i8 %weight_buf_31_5_V_2 to i16
  %r_V_252 = mul i16 %rhs_V_252, %lhs_V_252_mid2
  %tmp_79_s = sext i16 %r_V_252 to i32
  %weight_buf_31_6_V_1 = getelementptr [10 x i8]* %weight_buf_31_6_V, i64 0, i64 %tmp_41
  %weight_buf_31_6_V_2 = load i8* %weight_buf_31_6_V_1, align 1
  %rhs_V_253 = sext i8 %weight_buf_31_6_V_2 to i16
  %r_V_253 = mul i16 %rhs_V_253, %lhs_V_253_mid2
  %tmp_79_253_cast = sext i16 %r_V_253 to i17
  %weight_buf_31_7_V_1 = getelementptr [10 x i8]* %weight_buf_31_7_V, i64 0, i64 %tmp_41
  %weight_buf_31_7_V_2 = load i8* %weight_buf_31_7_V_1, align 1
  %rhs_V_254 = sext i8 %weight_buf_31_7_V_2 to i16
  %r_V_254 = mul i16 %rhs_V_254, %lhs_V_254_mid2
  %tmp_79_254_cast = sext i16 %r_V_254 to i17
  %tmp1 = add i32 %tmp_79_s, %tmp_V
  %tmp2 = add i17 %tmp_79_251_cast, %tmp_79_253_cast
  %tmp448_cast = sext i17 %tmp2 to i32
  %tmp3 = add i32 %tmp1, %tmp448_cast
  %tmp4 = add i17 %tmp_79_247_cast, %tmp_79_250_cast
  %tmp450_cast = sext i17 %tmp4 to i18
  %tmp5 = add i17 %tmp_79_249_cast, %tmp_79_246_cast
  %tmp451_cast = sext i17 %tmp5 to i18
  %tmp6 = add i18 %tmp450_cast, %tmp451_cast
  %tmp449_cast = sext i18 %tmp6 to i32
  %tmp7 = add i32 %tmp3, %tmp449_cast
  %tmp8 = add i17 %tmp_79_239_cast, %tmp_79_248_cast
  %tmp454_cast = sext i17 %tmp8 to i18
  %tmp9 = add i17 %tmp_79_241_cast, %tmp_79_238_cast
  %tmp455_cast = sext i17 %tmp9 to i18
  %tmp10 = add i18 %tmp454_cast, %tmp455_cast
  %tmp453_cast = sext i18 %tmp10 to i19
  %tmp11 = add i17 %tmp_79_243_cast, %tmp_79_240_cast
  %tmp457_cast = sext i17 %tmp11 to i18
  %tmp12 = add i17 %tmp_79_245_cast, %tmp_79_242_cast
  %tmp458_cast = sext i17 %tmp12 to i18
  %tmp13 = add i18 %tmp457_cast, %tmp458_cast
  %tmp456_cast = sext i18 %tmp13 to i19
  %tmp14 = add i19 %tmp453_cast, %tmp456_cast
  %tmp452_cast = sext i19 %tmp14 to i32
  %tmp15 = add i32 %tmp7, %tmp452_cast
  %tmp16 = add i17 %tmp_79_223_cast, %tmp_79_244_cast
  %tmp462_cast = sext i17 %tmp16 to i18
  %tmp17 = add i17 %tmp_79_225_cast, %tmp_79_222_cast
  %tmp463_cast = sext i17 %tmp17 to i18
  %tmp18 = add i18 %tmp462_cast, %tmp463_cast
  %tmp461_cast = sext i18 %tmp18 to i19
  %tmp19 = add i17 %tmp_79_227_cast, %tmp_79_224_cast
  %tmp465_cast = sext i17 %tmp19 to i18
  %tmp20 = add i17 %tmp_79_229_cast, %tmp_79_226_cast
  %tmp466_cast = sext i17 %tmp20 to i18
  %tmp21 = add i18 %tmp465_cast, %tmp466_cast
  %tmp464_cast = sext i18 %tmp21 to i19
  %tmp22 = add i19 %tmp461_cast, %tmp464_cast
  %tmp460_cast = sext i19 %tmp22 to i20
  %tmp23 = add i17 %tmp_79_231_cast, %tmp_79_228_cast
  %tmp469_cast = sext i17 %tmp23 to i18
  %tmp24 = add i17 %tmp_79_233_cast, %tmp_79_230_cast
  %tmp470_cast = sext i17 %tmp24 to i18
  %tmp25 = add i18 %tmp469_cast, %tmp470_cast
  %tmp468_cast = sext i18 %tmp25 to i19
  %tmp26 = add i17 %tmp_79_235_cast, %tmp_79_232_cast
  %tmp472_cast = sext i17 %tmp26 to i18
  %tmp27 = add i17 %tmp_79_237_cast, %tmp_79_234_cast
  %tmp473_cast = sext i17 %tmp27 to i18
  %tmp28 = add i18 %tmp472_cast, %tmp473_cast
  %tmp471_cast = sext i18 %tmp28 to i19
  %tmp29 = add i19 %tmp468_cast, %tmp471_cast
  %tmp467_cast = sext i19 %tmp29 to i20
  %tmp30 = add i20 %tmp460_cast, %tmp467_cast
  %tmp459_cast = sext i20 %tmp30 to i32
  %tmp31 = add i32 %tmp15, %tmp459_cast
  %tmp32 = add i17 %tmp_79_191_cast, %tmp_79_236_cast
  %tmp478_cast = sext i17 %tmp32 to i18
  %tmp33 = add i17 %tmp_79_193_cast, %tmp_79_190_cast
  %tmp479_cast = sext i17 %tmp33 to i18
  %tmp34 = add i18 %tmp478_cast, %tmp479_cast
  %tmp477_cast = sext i18 %tmp34 to i19
  %tmp35 = add i17 %tmp_79_195_cast, %tmp_79_192_cast
  %tmp481_cast = sext i17 %tmp35 to i18
  %tmp36 = add i17 %tmp_79_197_cast, %tmp_79_194_cast
  %tmp482_cast = sext i17 %tmp36 to i18
  %tmp37 = add i18 %tmp481_cast, %tmp482_cast
  %tmp480_cast = sext i18 %tmp37 to i19
  %tmp38 = add i19 %tmp477_cast, %tmp480_cast
  %tmp476_cast = sext i19 %tmp38 to i20
  %tmp39 = add i17 %tmp_79_199_cast, %tmp_79_196_cast
  %tmp485_cast = sext i17 %tmp39 to i18
  %tmp40 = add i17 %tmp_79_201_cast, %tmp_79_198_cast
  %tmp486_cast = sext i17 %tmp40 to i18
  %tmp41 = add i18 %tmp485_cast, %tmp486_cast
  %tmp484_cast = sext i18 %tmp41 to i19
  %tmp42 = add i17 %tmp_79_203_cast, %tmp_79_200_cast
  %tmp488_cast = sext i17 %tmp42 to i18
  %tmp43 = add i17 %tmp_79_205_cast, %tmp_79_202_cast
  %tmp489_cast = sext i17 %tmp43 to i18
  %tmp44 = add i18 %tmp488_cast, %tmp489_cast
  %tmp487_cast = sext i18 %tmp44 to i19
  %tmp45 = add i19 %tmp484_cast, %tmp487_cast
  %tmp483_cast = sext i19 %tmp45 to i20
  %tmp46 = add i20 %tmp476_cast, %tmp483_cast
  %tmp475_cast = sext i20 %tmp46 to i21
  %tmp47 = add i17 %tmp_79_207_cast, %tmp_79_204_cast
  %tmp493_cast = sext i17 %tmp47 to i18
  %tmp48 = add i17 %tmp_79_209_cast, %tmp_79_206_cast
  %tmp494_cast = sext i17 %tmp48 to i18
  %tmp49 = add i18 %tmp493_cast, %tmp494_cast
  %tmp492_cast = sext i18 %tmp49 to i19
  %tmp50 = add i17 %tmp_79_211_cast, %tmp_79_208_cast
  %tmp496_cast = sext i17 %tmp50 to i18
  %tmp51 = add i17 %tmp_79_213_cast, %tmp_79_210_cast
  %tmp497_cast = sext i17 %tmp51 to i18
  %tmp52 = add i18 %tmp496_cast, %tmp497_cast
  %tmp495_cast = sext i18 %tmp52 to i19
  %tmp53 = add i19 %tmp492_cast, %tmp495_cast
  %tmp491_cast = sext i19 %tmp53 to i20
  %tmp54 = add i17 %tmp_79_215_cast, %tmp_79_212_cast
  %tmp500_cast = sext i17 %tmp54 to i18
  %tmp55 = add i17 %tmp_79_217_cast, %tmp_79_214_cast
  %tmp501_cast = sext i17 %tmp55 to i18
  %tmp56 = add i18 %tmp500_cast, %tmp501_cast
  %tmp499_cast = sext i18 %tmp56 to i19
  %tmp57 = add i17 %tmp_79_219_cast, %tmp_79_216_cast
  %tmp503_cast = sext i17 %tmp57 to i18
  %tmp58 = add i17 %tmp_79_221_cast, %tmp_79_218_cast
  %tmp504_cast = sext i17 %tmp58 to i18
  %tmp59 = add i18 %tmp503_cast, %tmp504_cast
  %tmp502_cast = sext i18 %tmp59 to i19
  %tmp60 = add i19 %tmp499_cast, %tmp502_cast
  %tmp498_cast = sext i19 %tmp60 to i20
  %tmp61 = add i20 %tmp491_cast, %tmp498_cast
  %tmp490_cast = sext i20 %tmp61 to i21
  %tmp62 = add i21 %tmp475_cast, %tmp490_cast
  %tmp474_cast = sext i21 %tmp62 to i32
  %tmp63 = add i32 %tmp31, %tmp474_cast
  %tmp64 = add i17 %tmp_79_127_cast, %tmp_79_220_cast
  %tmp510_cast = sext i17 %tmp64 to i18
  %tmp65 = add i17 %tmp_79_129_cast, %tmp_79_126_cast
  %tmp511_cast = sext i17 %tmp65 to i18
  %tmp66 = add i18 %tmp510_cast, %tmp511_cast
  %tmp509_cast = sext i18 %tmp66 to i19
  %tmp67 = add i17 %tmp_79_131_cast, %tmp_79_128_cast
  %tmp513_cast = sext i17 %tmp67 to i18
  %tmp68 = add i17 %tmp_79_133_cast, %tmp_79_130_cast
  %tmp514_cast = sext i17 %tmp68 to i18
  %tmp69 = add i18 %tmp513_cast, %tmp514_cast
  %tmp512_cast = sext i18 %tmp69 to i19
  %tmp70 = add i19 %tmp509_cast, %tmp512_cast
  %tmp508_cast = sext i19 %tmp70 to i20
  %tmp71 = add i17 %tmp_79_135_cast, %tmp_79_132_cast
  %tmp517_cast = sext i17 %tmp71 to i18
  %tmp72 = add i17 %tmp_79_137_cast, %tmp_79_134_cast
  %tmp518_cast = sext i17 %tmp72 to i18
  %tmp73 = add i18 %tmp517_cast, %tmp518_cast
  %tmp516_cast = sext i18 %tmp73 to i19
  %tmp74 = add i17 %tmp_79_139_cast, %tmp_79_136_cast
  %tmp520_cast = sext i17 %tmp74 to i18
  %tmp75 = add i17 %tmp_79_141_cast, %tmp_79_138_cast
  %tmp521_cast = sext i17 %tmp75 to i18
  %tmp76 = add i18 %tmp520_cast, %tmp521_cast
  %tmp519_cast = sext i18 %tmp76 to i19
  %tmp77 = add i19 %tmp516_cast, %tmp519_cast
  %tmp515_cast = sext i19 %tmp77 to i20
  %tmp78 = add i20 %tmp508_cast, %tmp515_cast
  %tmp507_cast = sext i20 %tmp78 to i21
  %tmp79 = add i17 %tmp_79_143_cast, %tmp_79_140_cast
  %tmp525_cast = sext i17 %tmp79 to i18
  %tmp80 = add i17 %tmp_79_145_cast, %tmp_79_142_cast
  %tmp526_cast = sext i17 %tmp80 to i18
  %tmp81 = add i18 %tmp525_cast, %tmp526_cast
  %tmp524_cast = sext i18 %tmp81 to i19
  %tmp82 = add i17 %tmp_79_147_cast, %tmp_79_144_cast
  %tmp528_cast = sext i17 %tmp82 to i18
  %tmp83 = add i17 %tmp_79_149_cast, %tmp_79_146_cast
  %tmp529_cast = sext i17 %tmp83 to i18
  %tmp84 = add i18 %tmp528_cast, %tmp529_cast
  %tmp527_cast = sext i18 %tmp84 to i19
  %tmp85 = add i19 %tmp524_cast, %tmp527_cast
  %tmp523_cast = sext i19 %tmp85 to i20
  %tmp86 = add i17 %tmp_79_151_cast, %tmp_79_148_cast
  %tmp532_cast = sext i17 %tmp86 to i18
  %tmp87 = add i17 %tmp_79_153_cast, %tmp_79_150_cast
  %tmp533_cast = sext i17 %tmp87 to i18
  %tmp88 = add i18 %tmp532_cast, %tmp533_cast
  %tmp531_cast = sext i18 %tmp88 to i19
  %tmp89 = add i17 %tmp_79_155_cast, %tmp_79_152_cast
  %tmp535_cast = sext i17 %tmp89 to i18
  %tmp90 = add i17 %tmp_79_157_cast, %tmp_79_154_cast
  %tmp536_cast = sext i17 %tmp90 to i18
  %tmp91 = add i18 %tmp535_cast, %tmp536_cast
  %tmp534_cast = sext i18 %tmp91 to i19
  %tmp92 = add i19 %tmp531_cast, %tmp534_cast
  %tmp530_cast = sext i19 %tmp92 to i20
  %tmp93 = add i20 %tmp523_cast, %tmp530_cast
  %tmp522_cast = sext i20 %tmp93 to i21
  %tmp94 = add i21 %tmp507_cast, %tmp522_cast
  %tmp506_cast = sext i21 %tmp94 to i22
  %tmp95 = add i17 %tmp_79_159_cast, %tmp_79_156_cast
  %tmp541_cast = sext i17 %tmp95 to i18
  %tmp96 = add i17 %tmp_79_161_cast, %tmp_79_158_cast
  %tmp542_cast = sext i17 %tmp96 to i18
  %tmp97 = add i18 %tmp541_cast, %tmp542_cast
  %tmp540_cast = sext i18 %tmp97 to i19
  %tmp98 = add i17 %tmp_79_163_cast, %tmp_79_160_cast
  %tmp544_cast = sext i17 %tmp98 to i18
  %tmp99 = add i17 %tmp_79_165_cast, %tmp_79_162_cast
  %tmp545_cast = sext i17 %tmp99 to i18
  %tmp100 = add i18 %tmp544_cast, %tmp545_cast
  %tmp543_cast = sext i18 %tmp100 to i19
  %tmp101 = add i19 %tmp540_cast, %tmp543_cast
  %tmp539_cast = sext i19 %tmp101 to i20
  %tmp102 = add i17 %tmp_79_167_cast, %tmp_79_164_cast
  %tmp548_cast = sext i17 %tmp102 to i18
  %tmp103 = add i17 %tmp_79_169_cast, %tmp_79_166_cast
  %tmp549_cast = sext i17 %tmp103 to i18
  %tmp104 = add i18 %tmp548_cast, %tmp549_cast
  %tmp547_cast = sext i18 %tmp104 to i19
  %tmp105 = add i17 %tmp_79_171_cast, %tmp_79_168_cast
  %tmp551_cast = sext i17 %tmp105 to i18
  %tmp106 = add i17 %tmp_79_173_cast, %tmp_79_170_cast
  %tmp552_cast = sext i17 %tmp106 to i18
  %tmp107 = add i18 %tmp551_cast, %tmp552_cast
  %tmp550_cast = sext i18 %tmp107 to i19
  %tmp108 = add i19 %tmp547_cast, %tmp550_cast
  %tmp546_cast = sext i19 %tmp108 to i20
  %tmp109 = add i20 %tmp539_cast, %tmp546_cast
  %tmp538_cast = sext i20 %tmp109 to i21
  %tmp110 = add i17 %tmp_79_175_cast, %tmp_79_172_cast
  %tmp556_cast = sext i17 %tmp110 to i18
  %tmp111 = add i17 %tmp_79_177_cast, %tmp_79_174_cast
  %tmp557_cast = sext i17 %tmp111 to i18
  %tmp112 = add i18 %tmp556_cast, %tmp557_cast
  %tmp555_cast = sext i18 %tmp112 to i19
  %tmp113 = add i17 %tmp_79_179_cast, %tmp_79_176_cast
  %tmp559_cast = sext i17 %tmp113 to i18
  %tmp114 = add i17 %tmp_79_181_cast, %tmp_79_178_cast
  %tmp560_cast = sext i17 %tmp114 to i18
  %tmp115 = add i18 %tmp559_cast, %tmp560_cast
  %tmp558_cast = sext i18 %tmp115 to i19
  %tmp116 = add i19 %tmp555_cast, %tmp558_cast
  %tmp554_cast = sext i19 %tmp116 to i20
  %tmp117 = add i17 %tmp_79_183_cast, %tmp_79_180_cast
  %tmp563_cast = sext i17 %tmp117 to i18
  %tmp118 = add i17 %tmp_79_185_cast, %tmp_79_182_cast
  %tmp564_cast = sext i17 %tmp118 to i18
  %tmp119 = add i18 %tmp563_cast, %tmp564_cast
  %tmp562_cast = sext i18 %tmp119 to i19
  %tmp120 = add i17 %tmp_79_187_cast, %tmp_79_184_cast
  %tmp566_cast = sext i17 %tmp120 to i18
  %tmp121 = add i17 %tmp_79_189_cast, %tmp_79_186_cast
  %tmp567_cast = sext i17 %tmp121 to i18
  %tmp122 = add i18 %tmp566_cast, %tmp567_cast
  %tmp565_cast = sext i18 %tmp122 to i19
  %tmp123 = add i19 %tmp562_cast, %tmp565_cast
  %tmp561_cast = sext i19 %tmp123 to i20
  %tmp124 = add i20 %tmp554_cast, %tmp561_cast
  %tmp553_cast = sext i20 %tmp124 to i21
  %tmp125 = add i21 %tmp538_cast, %tmp553_cast
  %tmp537_cast = sext i21 %tmp125 to i22
  %tmp126 = add i22 %tmp506_cast, %tmp537_cast
  %tmp505_cast = sext i22 %tmp126 to i32
  %tmp127 = add i32 %tmp63, %tmp505_cast
  %tmp128 = add i17 %tmp_43_cast, %tmp_79_188_cast
  %tmp574_cast = sext i17 %tmp128 to i18
  %tmp129 = add i17 %tmp_79_1_cast, %tmp_79_2_cast
  %tmp575_cast = sext i17 %tmp129 to i18
  %tmp130 = add i18 %tmp574_cast, %tmp575_cast
  %tmp573_cast = sext i18 %tmp130 to i19
  %tmp131 = add i17 %tmp_79_3_cast, %tmp_79_4_cast
  %tmp577_cast = sext i17 %tmp131 to i18
  %tmp132 = add i17 %tmp_79_5_cast, %tmp_79_6_cast
  %tmp578_cast = sext i17 %tmp132 to i18
  %tmp133 = add i18 %tmp577_cast, %tmp578_cast
  %tmp576_cast = sext i18 %tmp133 to i19
  %tmp134 = add i19 %tmp573_cast, %tmp576_cast
  %tmp572_cast = sext i19 %tmp134 to i20
  %tmp135 = add i17 %tmp_79_7_cast, %tmp_79_8_cast
  %tmp581_cast = sext i17 %tmp135 to i18
  %tmp136 = add i17 %tmp_79_9_cast, %tmp_79_cast
  %tmp582_cast = sext i17 %tmp136 to i18
  %tmp137 = add i18 %tmp581_cast, %tmp582_cast
  %tmp580_cast = sext i18 %tmp137 to i19
  %tmp138 = add i17 %tmp_79_10_cast, %tmp_79_11_cast
  %tmp584_cast = sext i17 %tmp138 to i18
  %tmp139 = add i17 %tmp_79_12_cast, %tmp_79_13_cast
  %tmp585_cast = sext i17 %tmp139 to i18
  %tmp140 = add i18 %tmp584_cast, %tmp585_cast
  %tmp583_cast = sext i18 %tmp140 to i19
  %tmp141 = add i19 %tmp580_cast, %tmp583_cast
  %tmp579_cast = sext i19 %tmp141 to i20
  %tmp142 = add i20 %tmp572_cast, %tmp579_cast
  %tmp571_cast = sext i20 %tmp142 to i21
  %tmp143 = add i17 %tmp_79_14_cast, %tmp_79_15_cast
  %tmp589_cast = sext i17 %tmp143 to i18
  %tmp144 = add i17 %tmp_79_16_cast, %tmp_79_17_cast
  %tmp590_cast = sext i17 %tmp144 to i18
  %tmp145 = add i18 %tmp589_cast, %tmp590_cast
  %tmp588_cast = sext i18 %tmp145 to i19
  %tmp146 = add i17 %tmp_79_18_cast, %tmp_79_19_cast
  %tmp592_cast = sext i17 %tmp146 to i18
  %tmp147 = add i17 %tmp_79_20_cast, %tmp_79_21_cast
  %tmp593_cast = sext i17 %tmp147 to i18
  %tmp148 = add i18 %tmp592_cast, %tmp593_cast
  %tmp591_cast = sext i18 %tmp148 to i19
  %tmp149 = add i19 %tmp588_cast, %tmp591_cast
  %tmp587_cast = sext i19 %tmp149 to i20
  %tmp150 = add i17 %tmp_79_22_cast, %tmp_79_23_cast
  %tmp596_cast = sext i17 %tmp150 to i18
  %tmp151 = add i17 %tmp_79_24_cast, %tmp_79_25_cast
  %tmp597_cast = sext i17 %tmp151 to i18
  %tmp152 = add i18 %tmp596_cast, %tmp597_cast
  %tmp595_cast = sext i18 %tmp152 to i19
  %tmp153 = add i17 %tmp_79_26_cast, %tmp_79_27_cast
  %tmp599_cast = sext i17 %tmp153 to i18
  %tmp154 = add i17 %tmp_79_28_cast, %tmp_79_29_cast
  %tmp600_cast = sext i17 %tmp154 to i18
  %tmp155 = add i18 %tmp599_cast, %tmp600_cast
  %tmp598_cast = sext i18 %tmp155 to i19
  %tmp156 = add i19 %tmp595_cast, %tmp598_cast
  %tmp594_cast = sext i19 %tmp156 to i20
  %tmp157 = add i20 %tmp587_cast, %tmp594_cast
  %tmp586_cast = sext i20 %tmp157 to i21
  %tmp158 = add i21 %tmp571_cast, %tmp586_cast
  %tmp570_cast = sext i21 %tmp158 to i22
  %tmp159 = add i17 %tmp_79_30_cast, %tmp_79_31_cast
  %tmp605_cast = sext i17 %tmp159 to i18
  %tmp160 = add i17 %tmp_79_32_cast, %tmp_79_33_cast
  %tmp606_cast = sext i17 %tmp160 to i18
  %tmp161 = add i18 %tmp605_cast, %tmp606_cast
  %tmp604_cast = sext i18 %tmp161 to i19
  %tmp162 = add i17 %tmp_79_34_cast, %tmp_79_35_cast
  %tmp608_cast = sext i17 %tmp162 to i18
  %tmp163 = add i17 %tmp_79_36_cast, %tmp_79_37_cast
  %tmp609_cast = sext i17 %tmp163 to i18
  %tmp164 = add i18 %tmp608_cast, %tmp609_cast
  %tmp607_cast = sext i18 %tmp164 to i19
  %tmp165 = add i19 %tmp604_cast, %tmp607_cast
  %tmp603_cast = sext i19 %tmp165 to i20
  %tmp166 = add i17 %tmp_79_38_cast, %tmp_79_39_cast
  %tmp612_cast = sext i17 %tmp166 to i18
  %tmp167 = add i17 %tmp_79_40_cast, %tmp_79_41_cast
  %tmp613_cast = sext i17 %tmp167 to i18
  %tmp168 = add i18 %tmp612_cast, %tmp613_cast
  %tmp611_cast = sext i18 %tmp168 to i19
  %tmp169 = add i17 %tmp_79_42_cast, %tmp_79_43_cast
  %tmp615_cast = sext i17 %tmp169 to i18
  %tmp170 = add i17 %tmp_79_44_cast, %tmp_79_45_cast
  %tmp616_cast = sext i17 %tmp170 to i18
  %tmp171 = add i18 %tmp615_cast, %tmp616_cast
  %tmp614_cast = sext i18 %tmp171 to i19
  %tmp172 = add i19 %tmp611_cast, %tmp614_cast
  %tmp610_cast = sext i19 %tmp172 to i20
  %tmp173 = add i20 %tmp603_cast, %tmp610_cast
  %tmp602_cast = sext i20 %tmp173 to i21
  %tmp174 = add i17 %tmp_79_46_cast, %tmp_79_47_cast
  %tmp620_cast = sext i17 %tmp174 to i18
  %tmp175 = add i17 %tmp_79_48_cast, %tmp_79_49_cast
  %tmp621_cast = sext i17 %tmp175 to i18
  %tmp176 = add i18 %tmp620_cast, %tmp621_cast
  %tmp619_cast = sext i18 %tmp176 to i19
  %tmp177 = add i17 %tmp_79_50_cast, %tmp_79_51_cast
  %tmp623_cast = sext i17 %tmp177 to i18
  %tmp178 = add i17 %tmp_79_52_cast, %tmp_79_53_cast
  %tmp624_cast = sext i17 %tmp178 to i18
  %tmp179 = add i18 %tmp623_cast, %tmp624_cast
  %tmp622_cast = sext i18 %tmp179 to i19
  %tmp180 = add i19 %tmp619_cast, %tmp622_cast
  %tmp618_cast = sext i19 %tmp180 to i20
  %tmp181 = add i17 %tmp_79_54_cast, %tmp_79_55_cast
  %tmp627_cast = sext i17 %tmp181 to i18
  %tmp182 = add i17 %tmp_79_56_cast, %tmp_79_57_cast
  %tmp628_cast = sext i17 %tmp182 to i18
  %tmp183 = add i18 %tmp627_cast, %tmp628_cast
  %tmp626_cast = sext i18 %tmp183 to i19
  %tmp184 = add i17 %tmp_79_58_cast, %tmp_79_59_cast
  %tmp630_cast = sext i17 %tmp184 to i18
  %tmp185 = add i17 %tmp_79_60_cast, %tmp_79_61_cast
  %tmp631_cast = sext i17 %tmp185 to i18
  %tmp186 = add i18 %tmp630_cast, %tmp631_cast
  %tmp629_cast = sext i18 %tmp186 to i19
  %tmp187 = add i19 %tmp626_cast, %tmp629_cast
  %tmp625_cast = sext i19 %tmp187 to i20
  %tmp188 = add i20 %tmp618_cast, %tmp625_cast
  %tmp617_cast = sext i20 %tmp188 to i21
  %tmp189 = add i21 %tmp602_cast, %tmp617_cast
  %tmp601_cast = sext i21 %tmp189 to i22
  %tmp190 = add i22 %tmp570_cast, %tmp601_cast
  %tmp569_cast = sext i22 %tmp190 to i24
  %tmp191 = add i17 %tmp_79_62_cast, %tmp_79_63_cast
  %tmp637_cast = sext i17 %tmp191 to i18
  %tmp192 = add i17 %tmp_79_64_cast, %tmp_79_65_cast
  %tmp638_cast = sext i17 %tmp192 to i18
  %tmp193 = add i18 %tmp637_cast, %tmp638_cast
  %tmp636_cast = sext i18 %tmp193 to i19
  %tmp194 = add i17 %tmp_79_66_cast, %tmp_79_67_cast
  %tmp640_cast = sext i17 %tmp194 to i18
  %tmp195 = add i17 %tmp_79_68_cast, %tmp_79_69_cast
  %tmp641_cast = sext i17 %tmp195 to i18
  %tmp196 = add i18 %tmp640_cast, %tmp641_cast
  %tmp639_cast = sext i18 %tmp196 to i19
  %tmp197 = add i19 %tmp636_cast, %tmp639_cast
  %tmp635_cast = sext i19 %tmp197 to i20
  %tmp198 = add i17 %tmp_79_70_cast, %tmp_79_71_cast
  %tmp644_cast = sext i17 %tmp198 to i18
  %tmp199 = add i17 %tmp_79_72_cast, %tmp_79_73_cast
  %tmp645_cast = sext i17 %tmp199 to i18
  %tmp200 = add i18 %tmp644_cast, %tmp645_cast
  %tmp643_cast = sext i18 %tmp200 to i19
  %tmp201 = add i17 %tmp_79_74_cast, %tmp_79_75_cast
  %tmp647_cast = sext i17 %tmp201 to i18
  %tmp202 = add i17 %tmp_79_76_cast, %tmp_79_77_cast
  %tmp648_cast = sext i17 %tmp202 to i18
  %tmp203 = add i18 %tmp647_cast, %tmp648_cast
  %tmp646_cast = sext i18 %tmp203 to i19
  %tmp204 = add i19 %tmp643_cast, %tmp646_cast
  %tmp642_cast = sext i19 %tmp204 to i20
  %tmp205 = add i20 %tmp635_cast, %tmp642_cast
  %tmp634_cast = sext i20 %tmp205 to i21
  %tmp206 = add i17 %tmp_79_78_cast, %tmp_79_79_cast
  %tmp652_cast = sext i17 %tmp206 to i18
  %tmp207 = add i17 %tmp_79_80_cast, %tmp_79_81_cast
  %tmp653_cast = sext i17 %tmp207 to i18
  %tmp208 = add i18 %tmp652_cast, %tmp653_cast
  %tmp651_cast = sext i18 %tmp208 to i19
  %tmp209 = add i17 %tmp_79_82_cast, %tmp_79_83_cast
  %tmp655_cast = sext i17 %tmp209 to i18
  %tmp210 = add i17 %tmp_79_84_cast, %tmp_79_85_cast
  %tmp656_cast = sext i17 %tmp210 to i18
  %tmp211 = add i18 %tmp655_cast, %tmp656_cast
  %tmp654_cast = sext i18 %tmp211 to i19
  %tmp212 = add i19 %tmp651_cast, %tmp654_cast
  %tmp650_cast = sext i19 %tmp212 to i20
  %tmp213 = add i17 %tmp_79_86_cast, %tmp_79_87_cast
  %tmp659_cast = sext i17 %tmp213 to i18
  %tmp214 = add i17 %tmp_79_88_cast, %tmp_79_89_cast
  %tmp660_cast = sext i17 %tmp214 to i18
  %tmp215 = add i18 %tmp659_cast, %tmp660_cast
  %tmp658_cast = sext i18 %tmp215 to i19
  %tmp216 = add i17 %tmp_79_90_cast, %tmp_79_91_cast
  %tmp662_cast = sext i17 %tmp216 to i18
  %tmp217 = add i17 %tmp_79_92_cast, %tmp_79_93_cast
  %tmp663_cast = sext i17 %tmp217 to i18
  %tmp218 = add i18 %tmp662_cast, %tmp663_cast
  %tmp661_cast = sext i18 %tmp218 to i19
  %tmp219 = add i19 %tmp658_cast, %tmp661_cast
  %tmp657_cast = sext i19 %tmp219 to i20
  %tmp220 = add i20 %tmp650_cast, %tmp657_cast
  %tmp649_cast = sext i20 %tmp220 to i21
  %tmp221 = add i21 %tmp634_cast, %tmp649_cast
  %tmp633_cast = sext i21 %tmp221 to i23
  %tmp222 = add i17 %tmp_79_94_cast, %tmp_79_95_cast
  %tmp668_cast = sext i17 %tmp222 to i18
  %tmp223 = add i17 %tmp_79_96_cast, %tmp_79_97_cast
  %tmp669_cast = sext i17 %tmp223 to i18
  %tmp224 = add i18 %tmp668_cast, %tmp669_cast
  %tmp667_cast = sext i18 %tmp224 to i19
  %tmp225 = add i17 %tmp_79_98_cast, %tmp_79_99_cast
  %tmp671_cast = sext i17 %tmp225 to i18
  %tmp226 = add i17 %tmp_79_100_cast, %tmp_79_101_cast
  %tmp672_cast = sext i17 %tmp226 to i18
  %tmp227 = add i18 %tmp671_cast, %tmp672_cast
  %tmp670_cast = sext i18 %tmp227 to i19
  %tmp228 = add i19 %tmp667_cast, %tmp670_cast
  %tmp666_cast = sext i19 %tmp228 to i20
  %tmp229 = add i17 %tmp_79_102_cast, %tmp_79_103_cast
  %tmp675_cast = sext i17 %tmp229 to i18
  %tmp230 = add i17 %tmp_79_104_cast, %tmp_79_105_cast
  %tmp676_cast = sext i17 %tmp230 to i18
  %tmp231 = add i18 %tmp675_cast, %tmp676_cast
  %tmp674_cast = sext i18 %tmp231 to i19
  %tmp232 = add i17 %tmp_79_106_cast, %tmp_79_107_cast
  %tmp678_cast = sext i17 %tmp232 to i18
  %tmp233 = add i17 %tmp_79_108_cast, %tmp_79_109_cast
  %tmp679_cast = sext i17 %tmp233 to i18
  %tmp234 = add i18 %tmp678_cast, %tmp679_cast
  %tmp677_cast = sext i18 %tmp234 to i19
  %tmp235 = add i19 %tmp674_cast, %tmp677_cast
  %tmp673_cast = sext i19 %tmp235 to i20
  %tmp236 = add i20 %tmp666_cast, %tmp673_cast
  %tmp665_cast = sext i20 %tmp236 to i22
  %tmp237 = add i17 %tmp_79_110_cast, %tmp_79_111_cast
  %tmp683_cast = sext i17 %tmp237 to i18
  %tmp238 = add i17 %tmp_79_112_cast, %tmp_79_113_cast
  %tmp684_cast = sext i17 %tmp238 to i18
  %tmp239 = add i18 %tmp683_cast, %tmp684_cast
  %tmp682_cast = sext i18 %tmp239 to i19
  %tmp240 = add i17 %tmp_79_114_cast, %tmp_79_115_cast
  %tmp686_cast = sext i17 %tmp240 to i18
  %tmp241 = add i17 %tmp_79_116_cast, %tmp_79_117_cast
  %tmp687_cast = sext i17 %tmp241 to i18
  %tmp242 = add i18 %tmp686_cast, %tmp687_cast
  %tmp685_cast = sext i18 %tmp242 to i19
  %tmp243 = add i19 %tmp682_cast, %tmp685_cast
  %tmp681_cast = sext i19 %tmp243 to i21
  %tmp244 = add i17 %tmp_79_118_cast, %tmp_79_119_cast
  %tmp690_cast = sext i17 %tmp244 to i18
  %tmp245 = add i17 %tmp_79_120_cast, %tmp_79_121_cast
  %tmp691_cast = sext i17 %tmp245 to i18
  %tmp246 = add i18 %tmp690_cast, %tmp691_cast
  %tmp689_cast = sext i18 %tmp246 to i20
  %tmp247 = add i17 %tmp_79_122_cast, %tmp_79_123_cast
  %tmp693_cast = sext i17 %tmp247 to i19
  %tmp248 = add i17 %tmp_79_254_cast, %tmp_79_124_cast
  %tmp695_cast = sext i17 %tmp248 to i18
  %tmp249 = add i18 %tmp_79_125_cast, %tmp695_cast
  %tmp694_cast = sext i18 %tmp249 to i19
  %tmp250 = add i19 %tmp693_cast, %tmp694_cast
  %tmp692_cast = sext i19 %tmp250 to i20
  %tmp251 = add i20 %tmp689_cast, %tmp692_cast
  %tmp688_cast = sext i20 %tmp251 to i21
  %tmp252 = add i21 %tmp681_cast, %tmp688_cast
  %tmp680_cast = sext i21 %tmp252 to i22
  %tmp253 = add i22 %tmp665_cast, %tmp680_cast
  %tmp664_cast = sext i22 %tmp253 to i23
  %tmp254 = add i23 %tmp633_cast, %tmp664_cast
  %tmp632_cast = sext i23 %tmp254 to i24
  %tmp255 = add i24 %tmp569_cast, %tmp632_cast
  %tmp568_cast = sext i24 %tmp255 to i32
  %out_tmp_0_V = add i32 %tmp127, %tmp568_cast
  %sel_tmp = icmp eq i4 %j3_mid2, -8
  %sel_tmp2 = icmp eq i4 %j3_mid2, 7
  %sel_tmp4 = icmp eq i4 %j3_mid2, 6
  %sel_tmp6 = icmp eq i4 %j3_mid2, 5
  %sel_tmp8 = icmp eq i4 %j3_mid2, 4
  %sel_tmp7 = icmp eq i4 %j3_mid2, 3
  %sel_tmp9 = icmp eq i4 %j3_mid2, 2
  %sel_tmp10 = icmp eq i4 %j3_mid2, 1
  %sel_tmp11 = icmp eq i4 %j3_mid2, 0
  %or_cond = or i1 %sel_tmp11, %sel_tmp10
  %or_cond2 = or i1 %sel_tmp9, %sel_tmp7
  %or_cond3 = or i1 %sel_tmp8, %sel_tmp6
  %or_cond4 = or i1 %sel_tmp4, %sel_tmp2
  %newSel3 = select i1 %sel_tmp, i32 %out_tmp_9_V_17_load, i32 %out_tmp_0_V
  %or_cond5 = or i1 %or_cond, %or_cond2
  %or_cond6 = or i1 %or_cond3, %or_cond4
  %or_cond7 = or i1 %or_cond5, %or_cond6
  %out_tmp_9_V_2 = select i1 %or_cond7, i32 %out_tmp_9_V_17_load, i32 %newSel3
  %newSel5 = select i1 %sel_tmp, i32 %out_tmp_0_V, i32 %out_tmp_9_V_16_load
  %out_tmp_9_V_3 = select i1 %or_cond7, i32 %out_tmp_9_V_16_load, i32 %newSel5
  %newSel7 = select i1 %sel_tmp4, i32 %out_tmp_9_V_15_load, i32 %out_tmp_0_V
  %newSel8 = select i1 %or_cond3, i32 %out_tmp_9_V_15_load, i32 %newSel7
  %newSel9 = select i1 %or_cond5, i32 %out_tmp_9_V_15_load, i32 %newSel8
  %out_tmp_9_V_5 = select i1 %or_cond7, i32 %newSel9, i32 %out_tmp_9_V_15_load
  %newSel2 = select i1 %sel_tmp4, i32 %out_tmp_0_V, i32 %out_tmp_9_V_14_load
  %newSel4 = select i1 %or_cond3, i32 %out_tmp_9_V_14_load, i32 %newSel2
  %out_tmp_9_V_7 = select i1 %or_cond5, i32 %out_tmp_9_V_14_load, i32 %newSel4
  %newSel6 = select i1 %sel_tmp8, i32 %out_tmp_9_V_12_load, i32 %out_tmp_0_V
  %newSel10 = select i1 %or_cond3, i32 %newSel6, i32 %out_tmp_9_V_12_load
  %out_tmp_9_V_9 = select i1 %or_cond5, i32 %out_tmp_9_V_12_load, i32 %newSel10
  %newSel11 = select i1 %sel_tmp8, i32 %out_tmp_0_V, i32 %out_tmp_9_V_10_load
  %out_tmp_9_V_19 = select i1 %or_cond5, i32 %out_tmp_9_V_10_load, i32 %newSel11
  %newSel12 = select i1 %sel_tmp9, i32 %out_tmp_9_V_8_load, i32 %out_tmp_0_V
  %newSel13 = select i1 %or_cond, i32 %out_tmp_9_V_8_load, i32 %newSel12
  %out_tmp_9_V_20 = select i1 %or_cond5, i32 %newSel13, i32 %out_tmp_9_V_8_load
  %newSel14 = select i1 %sel_tmp9, i32 %out_tmp_0_V, i32 %out_tmp_9_V_6_load
  %out_tmp_9_V_21 = select i1 %or_cond, i32 %out_tmp_9_V_6_load, i32 %newSel14
  %out_tmp_9_V_22 = select i1 %sel_tmp10, i32 %out_tmp_0_V, i32 %out_tmp_9_V_4_load
  %out_tmp_9_V_23 = select i1 %sel_tmp11, i32 %out_tmp_9_V_4_load, i32 %out_tmp_9_V_22
  %out_tmp_9_V_24 = select i1 %sel_tmp11, i32 %out_tmp_0_V, i32 %out_tmp_9_V_1_load
  %empty_22 = call i32 (...)* @_ssdm_op_SpecRegionEnd([3 x i8]* @p_str14, i32 %tmp_16)
  %j_3 = add i4 %j3_mid2, 1
  %ifzero = icmp eq i4 %j_3, -6
  br i1 %ifzero, label %ifTrue, label %ifFalse

; <label>:14                                      ; preds = %.preheader.preheader
  %os_idx_2 = add i11 %os_idx, 16
  br label %15

; <label>:15                                      ; preds = %16, %14
  %os_idx_1 = phi i11 [ %os_idx, %14 ], [ %tmp_33, %16 ]
  %i5 = phi i8 [ 0, %14 ], [ %i_4, %16 ]
  %exitcond = icmp eq i11 %os_idx_1, %indvars_iv
  br i1 %exitcond, label %17, label %16

; <label>:16                                      ; preds = %15
  %tmp_257 = trunc i8 %i5 to i7
  %empty_23 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  call void (...)* @_ssdm_op_SpecLoopName([10 x i8]* @p_str16) nounwind
  %tmp_17 = call i32 (...)* @_ssdm_op_SpecRegionBegin([10 x i8]* @p_str16)
  call void (...)* @_ssdm_op_SpecPipeline(i32 1, i32 1, i32 1, i32 0, [1 x i8]* @p_str1) nounwind
  %tmp_18 = zext i8 %i5 to i64
  %out_buf_V_addr_1 = getelementptr [128 x i4]* %out_buf_V, i64 0, i64 %tmp_18
  %out_buf_V_load = load i4* %out_buf_V_addr_1, align 1
  %extLd = zext i4 %out_buf_V_load to i8
  %tmp_19 = or i7 %tmp_257, 1
  %tmp_20 = zext i7 %tmp_19 to i64
  %out_buf_V_addr_2 = getelementptr [128 x i4]* %out_buf_V, i64 0, i64 %tmp_20
  %out_buf_V_load_1 = load i4* %out_buf_V_addr_2, align 1
  %extLd1 = zext i4 %out_buf_V_load_1 to i8
  %tmp_21 = or i7 %tmp_257, 2
  %tmp_22 = zext i7 %tmp_21 to i64
  %out_buf_V_addr_3 = getelementptr [128 x i4]* %out_buf_V, i64 0, i64 %tmp_22
  %out_buf_V_load_2 = load i4* %out_buf_V_addr_3, align 1
  %extLd2 = zext i4 %out_buf_V_load_2 to i8
  %tmp_23 = or i7 %tmp_257, 3
  %tmp_24 = zext i7 %tmp_23 to i64
  %out_buf_V_addr_4 = getelementptr [128 x i4]* %out_buf_V, i64 0, i64 %tmp_24
  %out_buf_V_load_3 = load i4* %out_buf_V_addr_4, align 1
  %extLd3 = zext i4 %out_buf_V_load_3 to i8
  %tmp_25 = or i7 %tmp_257, 4
  %tmp_26 = zext i7 %tmp_25 to i64
  %out_buf_V_addr_5 = getelementptr [128 x i4]* %out_buf_V, i64 0, i64 %tmp_26
  %out_buf_V_load_4 = load i4* %out_buf_V_addr_5, align 1
  %extLd4 = zext i4 %out_buf_V_load_4 to i8
  %tmp_27 = or i7 %tmp_257, 5
  %tmp_28 = zext i7 %tmp_27 to i64
  %out_buf_V_addr_6 = getelementptr [128 x i4]* %out_buf_V, i64 0, i64 %tmp_28
  %out_buf_V_load_5 = load i4* %out_buf_V_addr_6, align 1
  %extLd5 = zext i4 %out_buf_V_load_5 to i8
  %tmp_29 = or i7 %tmp_257, 6
  %tmp_30 = zext i7 %tmp_29 to i64
  %out_buf_V_addr_7 = getelementptr [128 x i4]* %out_buf_V, i64 0, i64 %tmp_30
  %out_buf_V_load_6 = load i4* %out_buf_V_addr_7, align 1
  %extLd6 = zext i4 %out_buf_V_load_6 to i8
  %tmp_31 = or i7 %tmp_257, 7
  %tmp_32 = zext i7 %tmp_31 to i64
  %out_buf_V_addr_8 = getelementptr [128 x i4]* %out_buf_V, i64 0, i64 %tmp_32
  %out_buf_V_load_7 = load i4* %out_buf_V_addr_8, align 1
  %tmp_258 = call i60 @_ssdm_op_BitConcatenate.i60.i4.i8.i8.i8.i8.i8.i8.i8(i4 %out_buf_V_load_7, i8 %extLd6, i8 %extLd5, i8 %extLd4, i8 %extLd3, i8 %extLd2, i8 %extLd1, i8 %extLd)
  %p_Result_s_24 = zext i60 %tmp_258 to i64
  %tmp_33 = add i11 1, %os_idx_1
  %last_assign = icmp eq i11 %tmp_33, 1023
  call void @_ssdm_op_Write.axis.volatile.i64P.i8P.i8P.i4P.i1P.i5P.i5P(i64* %out_stream_data_V, i8* %out_stream_keep_V, i8* %out_stream_strb_V, i4* %out_stream_user_V, i1* %out_stream_last_V, i5* %out_stream_id_V, i5* %out_stream_dest_V, i64 %p_Result_s_24, i8 -1, i8 -1, i4 0, i1 %last_assign, i5 0, i5 0)
  %empty_25 = call i32 (...)* @_ssdm_op_SpecRegionEnd([10 x i8]* @p_str16, i32 %tmp_17)
  %i_4 = add i8 8, %i5
  br label %15

; <label>:17                                      ; preds = %15
  %empty_26 = call i32 (...)* @_ssdm_op_SpecRegionEnd([3 x i8]* @p_str10, i32 %tmp_5)
  %t_1 = add i14 %t, 128
  %indvars_iv_next = add i11 %indvars_iv, 16
  br label %.preheader951

; <label>:18                                      ; preds = %.preheader951
  ret void

branch224:                                        ; preds = %11
  store i8 %tmp_256, i8* %in_buf_0_0_V_addr, align 8
  store i8 %p_Result_s, i8* %in_buf_0_1_V_addr, align 1
  store i8 %p_Result_2, i8* %in_buf_0_2_V_addr, align 2
  store i8 %p_Result_10, i8* %in_buf_0_3_V_addr, align 1
  store i8 %p_Result_11, i8* %in_buf_0_4_V_addr, align 4
  store i8 %p_Result_12, i8* %in_buf_0_5_V_addr, align 1
  store i8 %p_Result_13, i8* %in_buf_0_6_V_addr, align 2
  store i8 %p_Result_14, i8* %in_buf_0_7_V_addr, align 1
  br label %12

branch225:                                        ; preds = %11
  store i8 %tmp_256, i8* %in_buf_1_0_V_addr, align 8
  store i8 %p_Result_s, i8* %in_buf_1_1_V_addr, align 1
  store i8 %p_Result_2, i8* %in_buf_1_2_V_addr, align 2
  store i8 %p_Result_10, i8* %in_buf_1_3_V_addr, align 1
  store i8 %p_Result_11, i8* %in_buf_1_4_V_addr, align 4
  store i8 %p_Result_12, i8* %in_buf_1_5_V_addr, align 1
  store i8 %p_Result_13, i8* %in_buf_1_6_V_addr, align 2
  store i8 %p_Result_14, i8* %in_buf_1_7_V_addr, align 1
  br label %12

branch226:                                        ; preds = %11
  store i8 %tmp_256, i8* %in_buf_2_0_V_addr, align 8
  store i8 %p_Result_s, i8* %in_buf_2_1_V_addr, align 1
  store i8 %p_Result_2, i8* %in_buf_2_2_V_addr, align 2
  store i8 %p_Result_10, i8* %in_buf_2_3_V_addr, align 1
  store i8 %p_Result_11, i8* %in_buf_2_4_V_addr, align 4
  store i8 %p_Result_12, i8* %in_buf_2_5_V_addr, align 1
  store i8 %p_Result_13, i8* %in_buf_2_6_V_addr, align 2
  store i8 %p_Result_14, i8* %in_buf_2_7_V_addr, align 1
  br label %12

branch227:                                        ; preds = %11
  store i8 %tmp_256, i8* %in_buf_3_0_V_addr, align 8
  store i8 %p_Result_s, i8* %in_buf_3_1_V_addr, align 1
  store i8 %p_Result_2, i8* %in_buf_3_2_V_addr, align 2
  store i8 %p_Result_10, i8* %in_buf_3_3_V_addr, align 1
  store i8 %p_Result_11, i8* %in_buf_3_4_V_addr, align 4
  store i8 %p_Result_12, i8* %in_buf_3_5_V_addr, align 1
  store i8 %p_Result_13, i8* %in_buf_3_6_V_addr, align 2
  store i8 %p_Result_14, i8* %in_buf_3_7_V_addr, align 1
  br label %12

branch228:                                        ; preds = %11
  store i8 %tmp_256, i8* %in_buf_4_0_V_addr, align 8
  store i8 %p_Result_s, i8* %in_buf_4_1_V_addr, align 1
  store i8 %p_Result_2, i8* %in_buf_4_2_V_addr, align 2
  store i8 %p_Result_10, i8* %in_buf_4_3_V_addr, align 1
  store i8 %p_Result_11, i8* %in_buf_4_4_V_addr, align 4
  store i8 %p_Result_12, i8* %in_buf_4_5_V_addr, align 1
  store i8 %p_Result_13, i8* %in_buf_4_6_V_addr, align 2
  store i8 %p_Result_14, i8* %in_buf_4_7_V_addr, align 1
  br label %12

branch229:                                        ; preds = %11
  store i8 %tmp_256, i8* %in_buf_5_0_V_addr, align 8
  store i8 %p_Result_s, i8* %in_buf_5_1_V_addr, align 1
  store i8 %p_Result_2, i8* %in_buf_5_2_V_addr, align 2
  store i8 %p_Result_10, i8* %in_buf_5_3_V_addr, align 1
  store i8 %p_Result_11, i8* %in_buf_5_4_V_addr, align 4
  store i8 %p_Result_12, i8* %in_buf_5_5_V_addr, align 1
  store i8 %p_Result_13, i8* %in_buf_5_6_V_addr, align 2
  store i8 %p_Result_14, i8* %in_buf_5_7_V_addr, align 1
  br label %12

branch230:                                        ; preds = %11
  store i8 %tmp_256, i8* %in_buf_6_0_V_addr, align 8
  store i8 %p_Result_s, i8* %in_buf_6_1_V_addr, align 1
  store i8 %p_Result_2, i8* %in_buf_6_2_V_addr, align 2
  store i8 %p_Result_10, i8* %in_buf_6_3_V_addr, align 1
  store i8 %p_Result_11, i8* %in_buf_6_4_V_addr, align 4
  store i8 %p_Result_12, i8* %in_buf_6_5_V_addr, align 1
  store i8 %p_Result_13, i8* %in_buf_6_6_V_addr, align 2
  store i8 %p_Result_14, i8* %in_buf_6_7_V_addr, align 1
  br label %12

branch231:                                        ; preds = %11
  store i8 %tmp_256, i8* %in_buf_7_0_V_addr, align 8
  store i8 %p_Result_s, i8* %in_buf_7_1_V_addr, align 1
  store i8 %p_Result_2, i8* %in_buf_7_2_V_addr, align 2
  store i8 %p_Result_10, i8* %in_buf_7_3_V_addr, align 1
  store i8 %p_Result_11, i8* %in_buf_7_4_V_addr, align 4
  store i8 %p_Result_12, i8* %in_buf_7_5_V_addr, align 1
  store i8 %p_Result_13, i8* %in_buf_7_6_V_addr, align 2
  store i8 %p_Result_14, i8* %in_buf_7_7_V_addr, align 1
  br label %12

branch232:                                        ; preds = %11
  store i8 %tmp_256, i8* %in_buf_8_0_V_addr, align 8
  store i8 %p_Result_s, i8* %in_buf_8_1_V_addr, align 1
  store i8 %p_Result_2, i8* %in_buf_8_2_V_addr, align 2
  store i8 %p_Result_10, i8* %in_buf_8_3_V_addr, align 1
  store i8 %p_Result_11, i8* %in_buf_8_4_V_addr, align 4
  store i8 %p_Result_12, i8* %in_buf_8_5_V_addr, align 1
  store i8 %p_Result_13, i8* %in_buf_8_6_V_addr, align 2
  store i8 %p_Result_14, i8* %in_buf_8_7_V_addr, align 1
  br label %12

branch233:                                        ; preds = %11
  store i8 %tmp_256, i8* %in_buf_9_0_V_addr, align 8
  store i8 %p_Result_s, i8* %in_buf_9_1_V_addr, align 1
  store i8 %p_Result_2, i8* %in_buf_9_2_V_addr, align 2
  store i8 %p_Result_10, i8* %in_buf_9_3_V_addr, align 1
  store i8 %p_Result_11, i8* %in_buf_9_4_V_addr, align 4
  store i8 %p_Result_12, i8* %in_buf_9_5_V_addr, align 1
  store i8 %p_Result_13, i8* %in_buf_9_6_V_addr, align 2
  store i8 %p_Result_14, i8* %in_buf_9_7_V_addr, align 1
  br label %12

branch234:                                        ; preds = %11
  store i8 %tmp_256, i8* %in_buf_10_0_V_addr, align 8
  store i8 %p_Result_s, i8* %in_buf_10_1_V_addr, align 1
  store i8 %p_Result_2, i8* %in_buf_10_2_V_addr, align 2
  store i8 %p_Result_10, i8* %in_buf_10_3_V_addr, align 1
  store i8 %p_Result_11, i8* %in_buf_10_4_V_addr, align 4
  store i8 %p_Result_12, i8* %in_buf_10_5_V_addr, align 1
  store i8 %p_Result_13, i8* %in_buf_10_6_V_addr, align 2
  store i8 %p_Result_14, i8* %in_buf_10_7_V_addr, align 1
  br label %12

branch235:                                        ; preds = %11
  store i8 %tmp_256, i8* %in_buf_11_0_V_addr, align 8
  store i8 %p_Result_s, i8* %in_buf_11_1_V_addr, align 1
  store i8 %p_Result_2, i8* %in_buf_11_2_V_addr, align 2
  store i8 %p_Result_10, i8* %in_buf_11_3_V_addr, align 1
  store i8 %p_Result_11, i8* %in_buf_11_4_V_addr, align 4
  store i8 %p_Result_12, i8* %in_buf_11_5_V_addr, align 1
  store i8 %p_Result_13, i8* %in_buf_11_6_V_addr, align 2
  store i8 %p_Result_14, i8* %in_buf_11_7_V_addr, align 1
  br label %12

branch236:                                        ; preds = %11
  store i8 %tmp_256, i8* %in_buf_12_0_V_addr, align 8
  store i8 %p_Result_s, i8* %in_buf_12_1_V_addr, align 1
  store i8 %p_Result_2, i8* %in_buf_12_2_V_addr, align 2
  store i8 %p_Result_10, i8* %in_buf_12_3_V_addr, align 1
  store i8 %p_Result_11, i8* %in_buf_12_4_V_addr, align 4
  store i8 %p_Result_12, i8* %in_buf_12_5_V_addr, align 1
  store i8 %p_Result_13, i8* %in_buf_12_6_V_addr, align 2
  store i8 %p_Result_14, i8* %in_buf_12_7_V_addr, align 1
  br label %12

branch237:                                        ; preds = %11
  store i8 %tmp_256, i8* %in_buf_13_0_V_addr, align 8
  store i8 %p_Result_s, i8* %in_buf_13_1_V_addr, align 1
  store i8 %p_Result_2, i8* %in_buf_13_2_V_addr, align 2
  store i8 %p_Result_10, i8* %in_buf_13_3_V_addr, align 1
  store i8 %p_Result_11, i8* %in_buf_13_4_V_addr, align 4
  store i8 %p_Result_12, i8* %in_buf_13_5_V_addr, align 1
  store i8 %p_Result_13, i8* %in_buf_13_6_V_addr, align 2
  store i8 %p_Result_14, i8* %in_buf_13_7_V_addr, align 1
  br label %12

branch238:                                        ; preds = %11
  store i8 %tmp_256, i8* %in_buf_14_0_V_addr, align 8
  store i8 %p_Result_s, i8* %in_buf_14_1_V_addr, align 1
  store i8 %p_Result_2, i8* %in_buf_14_2_V_addr, align 2
  store i8 %p_Result_10, i8* %in_buf_14_3_V_addr, align 1
  store i8 %p_Result_11, i8* %in_buf_14_4_V_addr, align 4
  store i8 %p_Result_12, i8* %in_buf_14_5_V_addr, align 1
  store i8 %p_Result_13, i8* %in_buf_14_6_V_addr, align 2
  store i8 %p_Result_14, i8* %in_buf_14_7_V_addr, align 1
  br label %12

branch239:                                        ; preds = %11
  store i8 %tmp_256, i8* %in_buf_15_0_V_addr, align 8
  store i8 %p_Result_s, i8* %in_buf_15_1_V_addr, align 1
  store i8 %p_Result_2, i8* %in_buf_15_2_V_addr, align 2
  store i8 %p_Result_10, i8* %in_buf_15_3_V_addr, align 1
  store i8 %p_Result_11, i8* %in_buf_15_4_V_addr, align 4
  store i8 %p_Result_12, i8* %in_buf_15_5_V_addr, align 1
  store i8 %p_Result_13, i8* %in_buf_15_6_V_addr, align 2
  store i8 %p_Result_14, i8* %in_buf_15_7_V_addr, align 1
  br label %12

branch240:                                        ; preds = %11
  store i8 %tmp_256, i8* %in_buf_16_0_V_addr, align 8
  store i8 %p_Result_s, i8* %in_buf_16_1_V_addr, align 1
  store i8 %p_Result_2, i8* %in_buf_16_2_V_addr, align 2
  store i8 %p_Result_10, i8* %in_buf_16_3_V_addr, align 1
  store i8 %p_Result_11, i8* %in_buf_16_4_V_addr, align 4
  store i8 %p_Result_12, i8* %in_buf_16_5_V_addr, align 1
  store i8 %p_Result_13, i8* %in_buf_16_6_V_addr, align 2
  store i8 %p_Result_14, i8* %in_buf_16_7_V_addr, align 1
  br label %12

branch241:                                        ; preds = %11
  store i8 %tmp_256, i8* %in_buf_17_0_V_addr, align 8
  store i8 %p_Result_s, i8* %in_buf_17_1_V_addr, align 1
  store i8 %p_Result_2, i8* %in_buf_17_2_V_addr, align 2
  store i8 %p_Result_10, i8* %in_buf_17_3_V_addr, align 1
  store i8 %p_Result_11, i8* %in_buf_17_4_V_addr, align 4
  store i8 %p_Result_12, i8* %in_buf_17_5_V_addr, align 1
  store i8 %p_Result_13, i8* %in_buf_17_6_V_addr, align 2
  store i8 %p_Result_14, i8* %in_buf_17_7_V_addr, align 1
  br label %12

branch242:                                        ; preds = %11
  store i8 %tmp_256, i8* %in_buf_18_0_V_addr, align 8
  store i8 %p_Result_s, i8* %in_buf_18_1_V_addr, align 1
  store i8 %p_Result_2, i8* %in_buf_18_2_V_addr, align 2
  store i8 %p_Result_10, i8* %in_buf_18_3_V_addr, align 1
  store i8 %p_Result_11, i8* %in_buf_18_4_V_addr, align 4
  store i8 %p_Result_12, i8* %in_buf_18_5_V_addr, align 1
  store i8 %p_Result_13, i8* %in_buf_18_6_V_addr, align 2
  store i8 %p_Result_14, i8* %in_buf_18_7_V_addr, align 1
  br label %12

branch243:                                        ; preds = %11
  store i8 %tmp_256, i8* %in_buf_19_0_V_addr, align 8
  store i8 %p_Result_s, i8* %in_buf_19_1_V_addr, align 1
  store i8 %p_Result_2, i8* %in_buf_19_2_V_addr, align 2
  store i8 %p_Result_10, i8* %in_buf_19_3_V_addr, align 1
  store i8 %p_Result_11, i8* %in_buf_19_4_V_addr, align 4
  store i8 %p_Result_12, i8* %in_buf_19_5_V_addr, align 1
  store i8 %p_Result_13, i8* %in_buf_19_6_V_addr, align 2
  store i8 %p_Result_14, i8* %in_buf_19_7_V_addr, align 1
  br label %12

branch244:                                        ; preds = %11
  store i8 %tmp_256, i8* %in_buf_20_0_V_addr, align 8
  store i8 %p_Result_s, i8* %in_buf_20_1_V_addr, align 1
  store i8 %p_Result_2, i8* %in_buf_20_2_V_addr, align 2
  store i8 %p_Result_10, i8* %in_buf_20_3_V_addr, align 1
  store i8 %p_Result_11, i8* %in_buf_20_4_V_addr, align 4
  store i8 %p_Result_12, i8* %in_buf_20_5_V_addr, align 1
  store i8 %p_Result_13, i8* %in_buf_20_6_V_addr, align 2
  store i8 %p_Result_14, i8* %in_buf_20_7_V_addr, align 1
  br label %12

branch245:                                        ; preds = %11
  store i8 %tmp_256, i8* %in_buf_21_0_V_addr, align 8
  store i8 %p_Result_s, i8* %in_buf_21_1_V_addr, align 1
  store i8 %p_Result_2, i8* %in_buf_21_2_V_addr, align 2
  store i8 %p_Result_10, i8* %in_buf_21_3_V_addr, align 1
  store i8 %p_Result_11, i8* %in_buf_21_4_V_addr, align 4
  store i8 %p_Result_12, i8* %in_buf_21_5_V_addr, align 1
  store i8 %p_Result_13, i8* %in_buf_21_6_V_addr, align 2
  store i8 %p_Result_14, i8* %in_buf_21_7_V_addr, align 1
  br label %12

branch246:                                        ; preds = %11
  store i8 %tmp_256, i8* %in_buf_22_0_V_addr, align 8
  store i8 %p_Result_s, i8* %in_buf_22_1_V_addr, align 1
  store i8 %p_Result_2, i8* %in_buf_22_2_V_addr, align 2
  store i8 %p_Result_10, i8* %in_buf_22_3_V_addr, align 1
  store i8 %p_Result_11, i8* %in_buf_22_4_V_addr, align 4
  store i8 %p_Result_12, i8* %in_buf_22_5_V_addr, align 1
  store i8 %p_Result_13, i8* %in_buf_22_6_V_addr, align 2
  store i8 %p_Result_14, i8* %in_buf_22_7_V_addr, align 1
  br label %12

branch247:                                        ; preds = %11
  store i8 %tmp_256, i8* %in_buf_23_0_V_addr, align 8
  store i8 %p_Result_s, i8* %in_buf_23_1_V_addr, align 1
  store i8 %p_Result_2, i8* %in_buf_23_2_V_addr, align 2
  store i8 %p_Result_10, i8* %in_buf_23_3_V_addr, align 1
  store i8 %p_Result_11, i8* %in_buf_23_4_V_addr, align 4
  store i8 %p_Result_12, i8* %in_buf_23_5_V_addr, align 1
  store i8 %p_Result_13, i8* %in_buf_23_6_V_addr, align 2
  store i8 %p_Result_14, i8* %in_buf_23_7_V_addr, align 1
  br label %12

branch248:                                        ; preds = %11
  store i8 %tmp_256, i8* %in_buf_24_0_V_addr, align 8
  store i8 %p_Result_s, i8* %in_buf_24_1_V_addr, align 1
  store i8 %p_Result_2, i8* %in_buf_24_2_V_addr, align 2
  store i8 %p_Result_10, i8* %in_buf_24_3_V_addr, align 1
  store i8 %p_Result_11, i8* %in_buf_24_4_V_addr, align 4
  store i8 %p_Result_12, i8* %in_buf_24_5_V_addr, align 1
  store i8 %p_Result_13, i8* %in_buf_24_6_V_addr, align 2
  store i8 %p_Result_14, i8* %in_buf_24_7_V_addr, align 1
  br label %12

branch249:                                        ; preds = %11
  store i8 %tmp_256, i8* %in_buf_25_0_V_addr, align 8
  store i8 %p_Result_s, i8* %in_buf_25_1_V_addr, align 1
  store i8 %p_Result_2, i8* %in_buf_25_2_V_addr, align 2
  store i8 %p_Result_10, i8* %in_buf_25_3_V_addr, align 1
  store i8 %p_Result_11, i8* %in_buf_25_4_V_addr, align 4
  store i8 %p_Result_12, i8* %in_buf_25_5_V_addr, align 1
  store i8 %p_Result_13, i8* %in_buf_25_6_V_addr, align 2
  store i8 %p_Result_14, i8* %in_buf_25_7_V_addr, align 1
  br label %12

branch250:                                        ; preds = %11
  store i8 %tmp_256, i8* %in_buf_26_0_V_addr, align 8
  store i8 %p_Result_s, i8* %in_buf_26_1_V_addr, align 1
  store i8 %p_Result_2, i8* %in_buf_26_2_V_addr, align 2
  store i8 %p_Result_10, i8* %in_buf_26_3_V_addr, align 1
  store i8 %p_Result_11, i8* %in_buf_26_4_V_addr, align 4
  store i8 %p_Result_12, i8* %in_buf_26_5_V_addr, align 1
  store i8 %p_Result_13, i8* %in_buf_26_6_V_addr, align 2
  store i8 %p_Result_14, i8* %in_buf_26_7_V_addr, align 1
  br label %12

branch251:                                        ; preds = %11
  store i8 %tmp_256, i8* %in_buf_27_0_V_addr, align 8
  store i8 %p_Result_s, i8* %in_buf_27_1_V_addr, align 1
  store i8 %p_Result_2, i8* %in_buf_27_2_V_addr, align 2
  store i8 %p_Result_10, i8* %in_buf_27_3_V_addr, align 1
  store i8 %p_Result_11, i8* %in_buf_27_4_V_addr, align 4
  store i8 %p_Result_12, i8* %in_buf_27_5_V_addr, align 1
  store i8 %p_Result_13, i8* %in_buf_27_6_V_addr, align 2
  store i8 %p_Result_14, i8* %in_buf_27_7_V_addr, align 1
  br label %12

branch252:                                        ; preds = %11
  store i8 %tmp_256, i8* %in_buf_28_0_V_addr, align 8
  store i8 %p_Result_s, i8* %in_buf_28_1_V_addr, align 1
  store i8 %p_Result_2, i8* %in_buf_28_2_V_addr, align 2
  store i8 %p_Result_10, i8* %in_buf_28_3_V_addr, align 1
  store i8 %p_Result_11, i8* %in_buf_28_4_V_addr, align 4
  store i8 %p_Result_12, i8* %in_buf_28_5_V_addr, align 1
  store i8 %p_Result_13, i8* %in_buf_28_6_V_addr, align 2
  store i8 %p_Result_14, i8* %in_buf_28_7_V_addr, align 1
  br label %12

branch253:                                        ; preds = %11
  store i8 %tmp_256, i8* %in_buf_29_0_V_addr, align 8
  store i8 %p_Result_s, i8* %in_buf_29_1_V_addr, align 1
  store i8 %p_Result_2, i8* %in_buf_29_2_V_addr, align 2
  store i8 %p_Result_10, i8* %in_buf_29_3_V_addr, align 1
  store i8 %p_Result_11, i8* %in_buf_29_4_V_addr, align 4
  store i8 %p_Result_12, i8* %in_buf_29_5_V_addr, align 1
  store i8 %p_Result_13, i8* %in_buf_29_6_V_addr, align 2
  store i8 %p_Result_14, i8* %in_buf_29_7_V_addr, align 1
  br label %12

branch254:                                        ; preds = %11
  store i8 %tmp_256, i8* %in_buf_30_0_V_addr, align 8
  store i8 %p_Result_s, i8* %in_buf_30_1_V_addr, align 1
  store i8 %p_Result_2, i8* %in_buf_30_2_V_addr, align 2
  store i8 %p_Result_10, i8* %in_buf_30_3_V_addr, align 1
  store i8 %p_Result_11, i8* %in_buf_30_4_V_addr, align 4
  store i8 %p_Result_12, i8* %in_buf_30_5_V_addr, align 1
  store i8 %p_Result_13, i8* %in_buf_30_6_V_addr, align 2
  store i8 %p_Result_14, i8* %in_buf_30_7_V_addr, align 1
  br label %12

branch255:                                        ; preds = %11
  store i8 %tmp_256, i8* %in_buf_31_0_V_addr, align 8
  store i8 %p_Result_s, i8* %in_buf_31_1_V_addr, align 1
  store i8 %p_Result_2, i8* %in_buf_31_2_V_addr, align 2
  store i8 %p_Result_10, i8* %in_buf_31_3_V_addr, align 1
  store i8 %p_Result_11, i8* %in_buf_31_4_V_addr, align 4
  store i8 %p_Result_12, i8* %in_buf_31_5_V_addr, align 1
  store i8 %p_Result_13, i8* %in_buf_31_6_V_addr, align 2
  store i8 %p_Result_14, i8* %in_buf_31_7_V_addr, align 1
  br label %12

branch480:                                        ; preds = %4
  store i8 %tmp_14, i8* %weight_buf_0_0_V_a, align 8
  store i8 %p_Result_3, i8* %weight_buf_0_1_V_a, align 1
  store i8 %p_Result_4, i8* %weight_buf_0_2_V_a, align 2
  store i8 %p_Result_5, i8* %weight_buf_0_3_V_a, align 1
  store i8 %p_Result_6, i8* %weight_buf_0_4_V_a, align 4
  store i8 %p_Result_7, i8* %weight_buf_0_5_V_a, align 1
  store i8 %p_Result_8, i8* %weight_buf_0_6_V_a, align 2
  store i8 %p_Result_9, i8* %weight_buf_0_7_V_a, align 1
  br label %5

branch481:                                        ; preds = %4
  store i8 %tmp_14, i8* %weight_buf_1_0_V_a, align 8
  store i8 %p_Result_3, i8* %weight_buf_1_1_V_a, align 1
  store i8 %p_Result_4, i8* %weight_buf_1_2_V_a, align 2
  store i8 %p_Result_5, i8* %weight_buf_1_3_V_a, align 1
  store i8 %p_Result_6, i8* %weight_buf_1_4_V_a, align 4
  store i8 %p_Result_7, i8* %weight_buf_1_5_V_a, align 1
  store i8 %p_Result_8, i8* %weight_buf_1_6_V_a, align 2
  store i8 %p_Result_9, i8* %weight_buf_1_7_V_a, align 1
  br label %5

branch482:                                        ; preds = %4
  store i8 %tmp_14, i8* %weight_buf_2_0_V_a, align 8
  store i8 %p_Result_3, i8* %weight_buf_2_1_V_a, align 1
  store i8 %p_Result_4, i8* %weight_buf_2_2_V_a, align 2
  store i8 %p_Result_5, i8* %weight_buf_2_3_V_a, align 1
  store i8 %p_Result_6, i8* %weight_buf_2_4_V_a, align 4
  store i8 %p_Result_7, i8* %weight_buf_2_5_V_a, align 1
  store i8 %p_Result_8, i8* %weight_buf_2_6_V_a, align 2
  store i8 %p_Result_9, i8* %weight_buf_2_7_V_a, align 1
  br label %5

branch483:                                        ; preds = %4
  store i8 %tmp_14, i8* %weight_buf_3_0_V_a, align 8
  store i8 %p_Result_3, i8* %weight_buf_3_1_V_a, align 1
  store i8 %p_Result_4, i8* %weight_buf_3_2_V_a, align 2
  store i8 %p_Result_5, i8* %weight_buf_3_3_V_a, align 1
  store i8 %p_Result_6, i8* %weight_buf_3_4_V_a, align 4
  store i8 %p_Result_7, i8* %weight_buf_3_5_V_a, align 1
  store i8 %p_Result_8, i8* %weight_buf_3_6_V_a, align 2
  store i8 %p_Result_9, i8* %weight_buf_3_7_V_a, align 1
  br label %5

branch484:                                        ; preds = %4
  store i8 %tmp_14, i8* %weight_buf_4_0_V_a, align 8
  store i8 %p_Result_3, i8* %weight_buf_4_1_V_a, align 1
  store i8 %p_Result_4, i8* %weight_buf_4_2_V_a, align 2
  store i8 %p_Result_5, i8* %weight_buf_4_3_V_a, align 1
  store i8 %p_Result_6, i8* %weight_buf_4_4_V_a, align 4
  store i8 %p_Result_7, i8* %weight_buf_4_5_V_a, align 1
  store i8 %p_Result_8, i8* %weight_buf_4_6_V_a, align 2
  store i8 %p_Result_9, i8* %weight_buf_4_7_V_a, align 1
  br label %5

branch485:                                        ; preds = %4
  store i8 %tmp_14, i8* %weight_buf_5_0_V_a, align 8
  store i8 %p_Result_3, i8* %weight_buf_5_1_V_a, align 1
  store i8 %p_Result_4, i8* %weight_buf_5_2_V_a, align 2
  store i8 %p_Result_5, i8* %weight_buf_5_3_V_a, align 1
  store i8 %p_Result_6, i8* %weight_buf_5_4_V_a, align 4
  store i8 %p_Result_7, i8* %weight_buf_5_5_V_a, align 1
  store i8 %p_Result_8, i8* %weight_buf_5_6_V_a, align 2
  store i8 %p_Result_9, i8* %weight_buf_5_7_V_a, align 1
  br label %5

branch486:                                        ; preds = %4
  store i8 %tmp_14, i8* %weight_buf_6_0_V_a, align 8
  store i8 %p_Result_3, i8* %weight_buf_6_1_V_a, align 1
  store i8 %p_Result_4, i8* %weight_buf_6_2_V_a, align 2
  store i8 %p_Result_5, i8* %weight_buf_6_3_V_a, align 1
  store i8 %p_Result_6, i8* %weight_buf_6_4_V_a, align 4
  store i8 %p_Result_7, i8* %weight_buf_6_5_V_a, align 1
  store i8 %p_Result_8, i8* %weight_buf_6_6_V_a, align 2
  store i8 %p_Result_9, i8* %weight_buf_6_7_V_a, align 1
  br label %5

branch487:                                        ; preds = %4
  store i8 %tmp_14, i8* %weight_buf_7_0_V_a, align 8
  store i8 %p_Result_3, i8* %weight_buf_7_1_V_a, align 1
  store i8 %p_Result_4, i8* %weight_buf_7_2_V_a, align 2
  store i8 %p_Result_5, i8* %weight_buf_7_3_V_a, align 1
  store i8 %p_Result_6, i8* %weight_buf_7_4_V_a, align 4
  store i8 %p_Result_7, i8* %weight_buf_7_5_V_a, align 1
  store i8 %p_Result_8, i8* %weight_buf_7_6_V_a, align 2
  store i8 %p_Result_9, i8* %weight_buf_7_7_V_a, align 1
  br label %5

branch488:                                        ; preds = %4
  store i8 %tmp_14, i8* %weight_buf_8_0_V_a, align 8
  store i8 %p_Result_3, i8* %weight_buf_8_1_V_a, align 1
  store i8 %p_Result_4, i8* %weight_buf_8_2_V_a, align 2
  store i8 %p_Result_5, i8* %weight_buf_8_3_V_a, align 1
  store i8 %p_Result_6, i8* %weight_buf_8_4_V_a, align 4
  store i8 %p_Result_7, i8* %weight_buf_8_5_V_a, align 1
  store i8 %p_Result_8, i8* %weight_buf_8_6_V_a, align 2
  store i8 %p_Result_9, i8* %weight_buf_8_7_V_a, align 1
  br label %5

branch489:                                        ; preds = %4
  store i8 %tmp_14, i8* %weight_buf_9_0_V_a, align 8
  store i8 %p_Result_3, i8* %weight_buf_9_1_V_a, align 1
  store i8 %p_Result_4, i8* %weight_buf_9_2_V_a, align 2
  store i8 %p_Result_5, i8* %weight_buf_9_3_V_a, align 1
  store i8 %p_Result_6, i8* %weight_buf_9_4_V_a, align 4
  store i8 %p_Result_7, i8* %weight_buf_9_5_V_a, align 1
  store i8 %p_Result_8, i8* %weight_buf_9_6_V_a, align 2
  store i8 %p_Result_9, i8* %weight_buf_9_7_V_a, align 1
  br label %5

branch490:                                        ; preds = %4
  store i8 %tmp_14, i8* %weight_buf_10_0_V_s, align 8
  store i8 %p_Result_3, i8* %weight_buf_10_1_V_s, align 1
  store i8 %p_Result_4, i8* %weight_buf_10_2_V_s, align 2
  store i8 %p_Result_5, i8* %weight_buf_10_3_V_s, align 1
  store i8 %p_Result_6, i8* %weight_buf_10_4_V_s, align 4
  store i8 %p_Result_7, i8* %weight_buf_10_5_V_s, align 1
  store i8 %p_Result_8, i8* %weight_buf_10_6_V_s, align 2
  store i8 %p_Result_9, i8* %weight_buf_10_7_V_s, align 1
  br label %5

branch491:                                        ; preds = %4
  store i8 %tmp_14, i8* %weight_buf_11_0_V_s, align 8
  store i8 %p_Result_3, i8* %weight_buf_11_1_V_s, align 1
  store i8 %p_Result_4, i8* %weight_buf_11_2_V_s, align 2
  store i8 %p_Result_5, i8* %weight_buf_11_3_V_s, align 1
  store i8 %p_Result_6, i8* %weight_buf_11_4_V_s, align 4
  store i8 %p_Result_7, i8* %weight_buf_11_5_V_s, align 1
  store i8 %p_Result_8, i8* %weight_buf_11_6_V_s, align 2
  store i8 %p_Result_9, i8* %weight_buf_11_7_V_s, align 1
  br label %5

branch492:                                        ; preds = %4
  store i8 %tmp_14, i8* %weight_buf_12_0_V_s, align 8
  store i8 %p_Result_3, i8* %weight_buf_12_1_V_s, align 1
  store i8 %p_Result_4, i8* %weight_buf_12_2_V_s, align 2
  store i8 %p_Result_5, i8* %weight_buf_12_3_V_s, align 1
  store i8 %p_Result_6, i8* %weight_buf_12_4_V_s, align 4
  store i8 %p_Result_7, i8* %weight_buf_12_5_V_s, align 1
  store i8 %p_Result_8, i8* %weight_buf_12_6_V_s, align 2
  store i8 %p_Result_9, i8* %weight_buf_12_7_V_s, align 1
  br label %5

branch493:                                        ; preds = %4
  store i8 %tmp_14, i8* %weight_buf_13_0_V_s, align 8
  store i8 %p_Result_3, i8* %weight_buf_13_1_V_s, align 1
  store i8 %p_Result_4, i8* %weight_buf_13_2_V_s, align 2
  store i8 %p_Result_5, i8* %weight_buf_13_3_V_s, align 1
  store i8 %p_Result_6, i8* %weight_buf_13_4_V_s, align 4
  store i8 %p_Result_7, i8* %weight_buf_13_5_V_s, align 1
  store i8 %p_Result_8, i8* %weight_buf_13_6_V_s, align 2
  store i8 %p_Result_9, i8* %weight_buf_13_7_V_s, align 1
  br label %5

branch494:                                        ; preds = %4
  store i8 %tmp_14, i8* %weight_buf_14_0_V_s, align 8
  store i8 %p_Result_3, i8* %weight_buf_14_1_V_s, align 1
  store i8 %p_Result_4, i8* %weight_buf_14_2_V_s, align 2
  store i8 %p_Result_5, i8* %weight_buf_14_3_V_s, align 1
  store i8 %p_Result_6, i8* %weight_buf_14_4_V_s, align 4
  store i8 %p_Result_7, i8* %weight_buf_14_5_V_s, align 1
  store i8 %p_Result_8, i8* %weight_buf_14_6_V_s, align 2
  store i8 %p_Result_9, i8* %weight_buf_14_7_V_s, align 1
  br label %5

branch495:                                        ; preds = %4
  store i8 %tmp_14, i8* %weight_buf_15_0_V_s, align 8
  store i8 %p_Result_3, i8* %weight_buf_15_1_V_s, align 1
  store i8 %p_Result_4, i8* %weight_buf_15_2_V_s, align 2
  store i8 %p_Result_5, i8* %weight_buf_15_3_V_s, align 1
  store i8 %p_Result_6, i8* %weight_buf_15_4_V_s, align 4
  store i8 %p_Result_7, i8* %weight_buf_15_5_V_s, align 1
  store i8 %p_Result_8, i8* %weight_buf_15_6_V_s, align 2
  store i8 %p_Result_9, i8* %weight_buf_15_7_V_s, align 1
  br label %5

branch496:                                        ; preds = %4
  store i8 %tmp_14, i8* %weight_buf_16_0_V_s, align 8
  store i8 %p_Result_3, i8* %weight_buf_16_1_V_s, align 1
  store i8 %p_Result_4, i8* %weight_buf_16_2_V_s, align 2
  store i8 %p_Result_5, i8* %weight_buf_16_3_V_s, align 1
  store i8 %p_Result_6, i8* %weight_buf_16_4_V_s, align 4
  store i8 %p_Result_7, i8* %weight_buf_16_5_V_s, align 1
  store i8 %p_Result_8, i8* %weight_buf_16_6_V_s, align 2
  store i8 %p_Result_9, i8* %weight_buf_16_7_V_s, align 1
  br label %5

branch497:                                        ; preds = %4
  store i8 %tmp_14, i8* %weight_buf_17_0_V_s, align 8
  store i8 %p_Result_3, i8* %weight_buf_17_1_V_s, align 1
  store i8 %p_Result_4, i8* %weight_buf_17_2_V_s, align 2
  store i8 %p_Result_5, i8* %weight_buf_17_3_V_s, align 1
  store i8 %p_Result_6, i8* %weight_buf_17_4_V_s, align 4
  store i8 %p_Result_7, i8* %weight_buf_17_5_V_s, align 1
  store i8 %p_Result_8, i8* %weight_buf_17_6_V_s, align 2
  store i8 %p_Result_9, i8* %weight_buf_17_7_V_s, align 1
  br label %5

branch498:                                        ; preds = %4
  store i8 %tmp_14, i8* %weight_buf_18_0_V_s, align 8
  store i8 %p_Result_3, i8* %weight_buf_18_1_V_s, align 1
  store i8 %p_Result_4, i8* %weight_buf_18_2_V_s, align 2
  store i8 %p_Result_5, i8* %weight_buf_18_3_V_s, align 1
  store i8 %p_Result_6, i8* %weight_buf_18_4_V_s, align 4
  store i8 %p_Result_7, i8* %weight_buf_18_5_V_s, align 1
  store i8 %p_Result_8, i8* %weight_buf_18_6_V_s, align 2
  store i8 %p_Result_9, i8* %weight_buf_18_7_V_s, align 1
  br label %5

branch499:                                        ; preds = %4
  store i8 %tmp_14, i8* %weight_buf_19_0_V_s, align 8
  store i8 %p_Result_3, i8* %weight_buf_19_1_V_s, align 1
  store i8 %p_Result_4, i8* %weight_buf_19_2_V_s, align 2
  store i8 %p_Result_5, i8* %weight_buf_19_3_V_s, align 1
  store i8 %p_Result_6, i8* %weight_buf_19_4_V_s, align 4
  store i8 %p_Result_7, i8* %weight_buf_19_5_V_s, align 1
  store i8 %p_Result_8, i8* %weight_buf_19_6_V_s, align 2
  store i8 %p_Result_9, i8* %weight_buf_19_7_V_s, align 1
  br label %5

branch500:                                        ; preds = %4
  store i8 %tmp_14, i8* %weight_buf_20_0_V_s, align 8
  store i8 %p_Result_3, i8* %weight_buf_20_1_V_s, align 1
  store i8 %p_Result_4, i8* %weight_buf_20_2_V_s, align 2
  store i8 %p_Result_5, i8* %weight_buf_20_3_V_s, align 1
  store i8 %p_Result_6, i8* %weight_buf_20_4_V_s, align 4
  store i8 %p_Result_7, i8* %weight_buf_20_5_V_s, align 1
  store i8 %p_Result_8, i8* %weight_buf_20_6_V_s, align 2
  store i8 %p_Result_9, i8* %weight_buf_20_7_V_s, align 1
  br label %5

branch501:                                        ; preds = %4
  store i8 %tmp_14, i8* %weight_buf_21_0_V_s, align 8
  store i8 %p_Result_3, i8* %weight_buf_21_1_V_s, align 1
  store i8 %p_Result_4, i8* %weight_buf_21_2_V_s, align 2
  store i8 %p_Result_5, i8* %weight_buf_21_3_V_s, align 1
  store i8 %p_Result_6, i8* %weight_buf_21_4_V_s, align 4
  store i8 %p_Result_7, i8* %weight_buf_21_5_V_s, align 1
  store i8 %p_Result_8, i8* %weight_buf_21_6_V_s, align 2
  store i8 %p_Result_9, i8* %weight_buf_21_7_V_s, align 1
  br label %5

branch502:                                        ; preds = %4
  store i8 %tmp_14, i8* %weight_buf_22_0_V_s, align 8
  store i8 %p_Result_3, i8* %weight_buf_22_1_V_s, align 1
  store i8 %p_Result_4, i8* %weight_buf_22_2_V_s, align 2
  store i8 %p_Result_5, i8* %weight_buf_22_3_V_s, align 1
  store i8 %p_Result_6, i8* %weight_buf_22_4_V_s, align 4
  store i8 %p_Result_7, i8* %weight_buf_22_5_V_s, align 1
  store i8 %p_Result_8, i8* %weight_buf_22_6_V_s, align 2
  store i8 %p_Result_9, i8* %weight_buf_22_7_V_s, align 1
  br label %5

branch503:                                        ; preds = %4
  store i8 %tmp_14, i8* %weight_buf_23_0_V_s, align 8
  store i8 %p_Result_3, i8* %weight_buf_23_1_V_s, align 1
  store i8 %p_Result_4, i8* %weight_buf_23_2_V_s, align 2
  store i8 %p_Result_5, i8* %weight_buf_23_3_V_s, align 1
  store i8 %p_Result_6, i8* %weight_buf_23_4_V_s, align 4
  store i8 %p_Result_7, i8* %weight_buf_23_5_V_s, align 1
  store i8 %p_Result_8, i8* %weight_buf_23_6_V_s, align 2
  store i8 %p_Result_9, i8* %weight_buf_23_7_V_s, align 1
  br label %5

branch504:                                        ; preds = %4
  store i8 %tmp_14, i8* %weight_buf_24_0_V_s, align 8
  store i8 %p_Result_3, i8* %weight_buf_24_1_V_s, align 1
  store i8 %p_Result_4, i8* %weight_buf_24_2_V_s, align 2
  store i8 %p_Result_5, i8* %weight_buf_24_3_V_s, align 1
  store i8 %p_Result_6, i8* %weight_buf_24_4_V_s, align 4
  store i8 %p_Result_7, i8* %weight_buf_24_5_V_s, align 1
  store i8 %p_Result_8, i8* %weight_buf_24_6_V_s, align 2
  store i8 %p_Result_9, i8* %weight_buf_24_7_V_s, align 1
  br label %5

branch505:                                        ; preds = %4
  store i8 %tmp_14, i8* %weight_buf_25_0_V_s, align 8
  store i8 %p_Result_3, i8* %weight_buf_25_1_V_s, align 1
  store i8 %p_Result_4, i8* %weight_buf_25_2_V_s, align 2
  store i8 %p_Result_5, i8* %weight_buf_25_3_V_s, align 1
  store i8 %p_Result_6, i8* %weight_buf_25_4_V_s, align 4
  store i8 %p_Result_7, i8* %weight_buf_25_5_V_s, align 1
  store i8 %p_Result_8, i8* %weight_buf_25_6_V_s, align 2
  store i8 %p_Result_9, i8* %weight_buf_25_7_V_s, align 1
  br label %5

branch506:                                        ; preds = %4
  store i8 %tmp_14, i8* %weight_buf_26_0_V_s, align 8
  store i8 %p_Result_3, i8* %weight_buf_26_1_V_s, align 1
  store i8 %p_Result_4, i8* %weight_buf_26_2_V_s, align 2
  store i8 %p_Result_5, i8* %weight_buf_26_3_V_s, align 1
  store i8 %p_Result_6, i8* %weight_buf_26_4_V_s, align 4
  store i8 %p_Result_7, i8* %weight_buf_26_5_V_s, align 1
  store i8 %p_Result_8, i8* %weight_buf_26_6_V_s, align 2
  store i8 %p_Result_9, i8* %weight_buf_26_7_V_s, align 1
  br label %5

branch507:                                        ; preds = %4
  store i8 %tmp_14, i8* %weight_buf_27_0_V_s, align 8
  store i8 %p_Result_3, i8* %weight_buf_27_1_V_s, align 1
  store i8 %p_Result_4, i8* %weight_buf_27_2_V_s, align 2
  store i8 %p_Result_5, i8* %weight_buf_27_3_V_s, align 1
  store i8 %p_Result_6, i8* %weight_buf_27_4_V_s, align 4
  store i8 %p_Result_7, i8* %weight_buf_27_5_V_s, align 1
  store i8 %p_Result_8, i8* %weight_buf_27_6_V_s, align 2
  store i8 %p_Result_9, i8* %weight_buf_27_7_V_s, align 1
  br label %5

branch508:                                        ; preds = %4
  store i8 %tmp_14, i8* %weight_buf_28_0_V_s, align 8
  store i8 %p_Result_3, i8* %weight_buf_28_1_V_s, align 1
  store i8 %p_Result_4, i8* %weight_buf_28_2_V_s, align 2
  store i8 %p_Result_5, i8* %weight_buf_28_3_V_s, align 1
  store i8 %p_Result_6, i8* %weight_buf_28_4_V_s, align 4
  store i8 %p_Result_7, i8* %weight_buf_28_5_V_s, align 1
  store i8 %p_Result_8, i8* %weight_buf_28_6_V_s, align 2
  store i8 %p_Result_9, i8* %weight_buf_28_7_V_s, align 1
  br label %5

branch509:                                        ; preds = %4
  store i8 %tmp_14, i8* %weight_buf_29_0_V_s, align 8
  store i8 %p_Result_3, i8* %weight_buf_29_1_V_s, align 1
  store i8 %p_Result_4, i8* %weight_buf_29_2_V_s, align 2
  store i8 %p_Result_5, i8* %weight_buf_29_3_V_s, align 1
  store i8 %p_Result_6, i8* %weight_buf_29_4_V_s, align 4
  store i8 %p_Result_7, i8* %weight_buf_29_5_V_s, align 1
  store i8 %p_Result_8, i8* %weight_buf_29_6_V_s, align 2
  store i8 %p_Result_9, i8* %weight_buf_29_7_V_s, align 1
  br label %5

branch510:                                        ; preds = %4
  store i8 %tmp_14, i8* %weight_buf_30_0_V_s, align 8
  store i8 %p_Result_3, i8* %weight_buf_30_1_V_s, align 1
  store i8 %p_Result_4, i8* %weight_buf_30_2_V_s, align 2
  store i8 %p_Result_5, i8* %weight_buf_30_3_V_s, align 1
  store i8 %p_Result_6, i8* %weight_buf_30_4_V_s, align 4
  store i8 %p_Result_7, i8* %weight_buf_30_5_V_s, align 1
  store i8 %p_Result_8, i8* %weight_buf_30_6_V_s, align 2
  store i8 %p_Result_9, i8* %weight_buf_30_7_V_s, align 1
  br label %5

branch511:                                        ; preds = %4
  store i8 %tmp_14, i8* %weight_buf_31_0_V_s, align 8
  store i8 %p_Result_3, i8* %weight_buf_31_1_V_s, align 1
  store i8 %p_Result_4, i8* %weight_buf_31_2_V_s, align 2
  store i8 %p_Result_5, i8* %weight_buf_31_3_V_s, align 1
  store i8 %p_Result_6, i8* %weight_buf_31_4_V_s, align 4
  store i8 %p_Result_7, i8* %weight_buf_31_5_V_s, align 1
  store i8 %p_Result_8, i8* %weight_buf_31_6_V_s, align 2
  store i8 %p_Result_9, i8* %weight_buf_31_7_V_s, align 1
  br label %5
}

declare i9 @llvm.part.select.i9(i9, i32, i32) nounwind readnone

declare i64 @llvm.part.select.i64(i64, i32, i32) nounwind readnone

declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

declare void @llvm.dbg.declare(metadata, metadata) nounwind readnone

define weak void @_ssdm_op_Write.axis.volatile.i64P.i8P.i8P.i4P.i1P.i5P.i5P(i64*, i8*, i8*, i4*, i1*, i5*, i5*, i64, i8, i8, i4, i1, i5, i5) {
entry:
  store i64 %7, i64* %0
  store i8 %8, i8* %1
  store i8 %9, i8* %2
  store i4 %10, i4* %3
  store i1 %11, i1* %4
  store i5 %12, i5* %5
  store i5 %13, i5* %6
  ret void
}

define weak void @_ssdm_op_SpecTopModule(...) {
entry:
  ret void
}

define weak i32 @_ssdm_op_SpecRegionEnd(...) {
entry:
  ret i32 0
}

define weak i32 @_ssdm_op_SpecRegionBegin(...) {
entry:
  ret i32 0
}

define weak void @_ssdm_op_SpecPipeline(...) nounwind {
entry:
  ret void
}

define weak i32 @_ssdm_op_SpecLoopTripCount(...) {
entry:
  ret i32 0
}

define weak void @_ssdm_op_SpecLoopName(...) nounwind {
entry:
  ret void
}

define weak void @_ssdm_op_SpecInterface(...) nounwind {
entry:
  ret void
}

define weak void @_ssdm_op_SpecBitsMap(...) {
entry:
  ret void
}

define weak { i64, i8, i8, i4, i1, i5, i5 } @_ssdm_op_Read.axis.volatile.i64P.i8P.i8P.i4P.i1P.i5P.i5P(i64*, i8*, i8*, i4*, i1*, i5*, i5*) {
entry:
  %empty = load i64* %0
  %empty_27 = load i8* %1
  %empty_28 = load i8* %2
  %empty_29 = load i4* %3
  %empty_30 = load i1* %4
  %empty_31 = load i5* %5
  %empty_32 = load i5* %6
  %mrv_0 = insertvalue { i64, i8, i8, i4, i1, i5, i5 } undef, i64 %empty, 0
  %mrv1 = insertvalue { i64, i8, i8, i4, i1, i5, i5 } %mrv_0, i8 %empty_27, 1
  %mrv2 = insertvalue { i64, i8, i8, i4, i1, i5, i5 } %mrv1, i8 %empty_28, 2
  %mrv3 = insertvalue { i64, i8, i8, i4, i1, i5, i5 } %mrv2, i4 %empty_29, 3
  %mrv4 = insertvalue { i64, i8, i8, i4, i1, i5, i5 } %mrv3, i1 %empty_30, 4
  %mrv5 = insertvalue { i64, i8, i8, i4, i1, i5, i5 } %mrv4, i5 %empty_31, 5
  %mrv6 = insertvalue { i64, i8, i8, i4, i1, i5, i5 } %mrv5, i5 %empty_32, 6
  ret { i64, i8, i8, i4, i1, i5, i5 } %mrv6
}

define weak i8 @_ssdm_op_PartSelect.i8.i64.i32.i32(i64, i32, i32) nounwind readnone {
entry:
  %empty = call i64 @llvm.part.select.i64(i64 %0, i32 %1, i32 %2)
  %empty_33 = trunc i64 %empty to i8
  ret i8 %empty_33
}

declare i7 @_ssdm_op_PartSelect.i7.i8.i32.i32(i8, i32, i32) nounwind readnone

define weak i6 @_ssdm_op_PartSelect.i6.i9.i32.i32(i9, i32, i32) nounwind readnone {
entry:
  %empty = call i9 @llvm.part.select.i9(i9 %0, i32 %1, i32 %2)
  %empty_34 = trunc i9 %empty to i6
  ret i6 %empty_34
}

define weak i32 @_ssdm_op_PartSelect.i32.i64.i32.i32(i64, i32, i32) nounwind readnone {
entry:
  %empty = call i64 @llvm.part.select.i64(i64 %0, i32 %1, i32 %2)
  %empty_35 = trunc i64 %empty to i32
  ret i32 %empty_35
}

define weak i32 @_ssdm_op_Mux.ap_auto.16i32.i4(i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i4) {
entry:
  switch i4 %16, label %case15 [
    i4 0, label %case0
    i4 1, label %case1
    i4 2, label %case2
    i4 3, label %case3
    i4 4, label %case4
    i4 5, label %case5
    i4 6, label %case6
    i4 7, label %case7
    i4 -8, label %case8
    i4 -7, label %case9
    i4 -6, label %case10
    i4 -5, label %case11
    i4 -4, label %case12
    i4 -3, label %case13
    i4 -2, label %case14
  ]

case0:                                            ; preds = %case15, %case14, %case13, %case12, %case11, %case10, %case9, %case8, %case7, %case6, %case5, %case4, %case3, %case2, %case1, %entry
  %merge = phi i32 [ %0, %entry ], [ %1, %case1 ], [ %2, %case2 ], [ %3, %case3 ], [ %4, %case4 ], [ %5, %case5 ], [ %6, %case6 ], [ %7, %case7 ], [ %8, %case8 ], [ %9, %case9 ], [ %10, %case10 ], [ %11, %case11 ], [ %12, %case12 ], [ %13, %case13 ], [ %14, %case14 ], [ %15, %case15 ]
  ret i32 %merge

case1:                                            ; preds = %entry
  br label %case0

case2:                                            ; preds = %entry
  br label %case0

case3:                                            ; preds = %entry
  br label %case0

case4:                                            ; preds = %entry
  br label %case0

case5:                                            ; preds = %entry
  br label %case0

case6:                                            ; preds = %entry
  br label %case0

case7:                                            ; preds = %entry
  br label %case0

case8:                                            ; preds = %entry
  br label %case0

case9:                                            ; preds = %entry
  br label %case0

case10:                                           ; preds = %entry
  br label %case0

case11:                                           ; preds = %entry
  br label %case0

case12:                                           ; preds = %entry
  br label %case0

case13:                                           ; preds = %entry
  br label %case0

case14:                                           ; preds = %entry
  br label %case0

case15:                                           ; preds = %entry
  br label %case0
}

define weak i1 @_ssdm_op_BitSelect.i1.i14.i32(i14, i32) nounwind readnone {
entry:
  %empty = trunc i32 %1 to i14
  %empty_36 = shl i14 1, %empty
  %empty_37 = and i14 %0, %empty_36
  %empty_38 = icmp ne i14 %empty_37, 0
  ret i1 %empty_38
}

define weak i60 @_ssdm_op_BitConcatenate.i60.i4.i8.i8.i8.i8.i8.i8.i8(i4, i8, i8, i8, i8, i8, i8, i8) nounwind readnone {
entry:
  %empty = zext i8 %6 to i16
  %empty_39 = zext i8 %7 to i16
  %empty_40 = shl i16 %empty, 8
  %empty_41 = or i16 %empty_40, %empty_39
  %empty_42 = zext i8 %5 to i24
  %empty_43 = zext i16 %empty_41 to i24
  %empty_44 = shl i24 %empty_42, 16
  %empty_45 = or i24 %empty_44, %empty_43
  %empty_46 = zext i8 %4 to i32
  %empty_47 = zext i24 %empty_45 to i32
  %empty_48 = shl i32 %empty_46, 24
  %empty_49 = or i32 %empty_48, %empty_47
  %empty_50 = zext i8 %3 to i40
  %empty_51 = zext i32 %empty_49 to i40
  %empty_52 = shl i40 %empty_50, 32
  %empty_53 = or i40 %empty_52, %empty_51
  %empty_54 = zext i8 %2 to i48
  %empty_55 = zext i40 %empty_53 to i48
  %empty_56 = shl i48 %empty_54, 40
  %empty_57 = or i48 %empty_56, %empty_55
  %empty_58 = zext i8 %1 to i56
  %empty_59 = zext i48 %empty_57 to i56
  %empty_60 = shl i56 %empty_58, 48
  %empty_61 = or i56 %empty_60, %empty_59
  %empty_62 = zext i4 %0 to i60
  %empty_63 = zext i56 %empty_61 to i60
  %empty_64 = shl i60 %empty_62, 56
  %empty_65 = or i60 %empty_64, %empty_63
  ret i60 %empty_65
}

declare void @_GLOBAL__I_a() nounwind section ".text.startup"

!opencl.kernels = !{!0, !7, !13, !17, !17, !20, !20, !17, !17, !20, !20, !17, !17, !20, !20, !26, !26, !20, !20, !20, !28, !31, !33, !35, !20, !37, !39, !39, !41, !44, !44, !20, !20, !20, !17, !17, !20, !20, !50, !52, !52, !20, !20, !54, !20, !20, !20, !57, !57, !58, !58, !60, !20, !20, !20, !62, !62, !39, !39, !64, !64, !64, !20, !20, !67, !64, !64, !64, !20, !69, !64, !64, !64, !71, !41, !73, !73, !26, !26, !20, !20, !20, !20, !20, !20, !20, !20, !20, !20, !20, !20, !20, !20, !20, !20, !20, !75}
!hls.encrypted.func = !{}
!llvm.map.gv = !{!78}

!0 = metadata !{null, metadata !1, metadata !2, metadata !3, metadata !4, metadata !5, metadata !6}
!1 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1}
!2 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none"}
!3 = metadata !{metadata !"kernel_arg_type", metadata !"AXI_VAL*", metadata !"AXI_VAL*"}
!4 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !""}
!5 = metadata !{metadata !"kernel_arg_name", metadata !"in_stream", metadata !"out_stream"}
!6 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!7 = metadata !{null, metadata !8, metadata !9, metadata !10, metadata !11, metadata !12, metadata !6}
!8 = metadata !{metadata !"kernel_arg_addr_space", i32 0}
!9 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none"}
!10 = metadata !{metadata !"kernel_arg_type", metadata !"const AXI_VAL &"}
!11 = metadata !{metadata !"kernel_arg_type_qual", metadata !""}
!12 = metadata !{metadata !"kernel_arg_name", metadata !"e"}
!13 = metadata !{null, metadata !14, metadata !2, metadata !15, metadata !4, metadata !16, metadata !6}
!14 = metadata !{metadata !"kernel_arg_addr_space", i32 0, i32 0}
!15 = metadata !{metadata !"kernel_arg_type", metadata !"const axi_T &", metadata !"_Bool"}
!16 = metadata !{metadata !"kernel_arg_name", metadata !"v", metadata !"last"}
!17 = metadata !{null, metadata !8, metadata !9, metadata !18, metadata !11, metadata !19, metadata !6}
!18 = metadata !{metadata !"kernel_arg_type", metadata !"int"}
!19 = metadata !{metadata !"kernel_arg_name", metadata !"val"}
!20 = metadata !{null, metadata !21, metadata !22, metadata !23, metadata !24, metadata !25, metadata !6}
!21 = metadata !{metadata !"kernel_arg_addr_space"}
!22 = metadata !{metadata !"kernel_arg_access_qual"}
!23 = metadata !{metadata !"kernel_arg_type"}
!24 = metadata !{metadata !"kernel_arg_type_qual"}
!25 = metadata !{metadata !"kernel_arg_name"}
!26 = metadata !{null, metadata !8, metadata !9, metadata !27, metadata !11, metadata !19, metadata !6}
!27 = metadata !{metadata !"kernel_arg_type", metadata !"ulong long"}
!28 = metadata !{null, metadata !8, metadata !9, metadata !29, metadata !11, metadata !30, metadata !6}
!29 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_uint<5> &"}
!30 = metadata !{metadata !"kernel_arg_name", metadata !"op2"}
!31 = metadata !{null, metadata !8, metadata !9, metadata !32, metadata !11, metadata !30, metadata !6}
!32 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_uint<1> &"}
!33 = metadata !{null, metadata !8, metadata !9, metadata !34, metadata !11, metadata !30, metadata !6}
!34 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_uint<4> &"}
!35 = metadata !{null, metadata !8, metadata !9, metadata !36, metadata !11, metadata !30, metadata !6}
!36 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_uint<64> &"}
!37 = metadata !{null, metadata !8, metadata !9, metadata !38, metadata !11, metadata !19, metadata !6}
!38 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<8, false> &"}
!39 = metadata !{null, metadata !8, metadata !9, metadata !38, metadata !11, metadata !40, metadata !6}
!40 = metadata !{metadata !"kernel_arg_name", metadata !"op"}
!41 = metadata !{null, metadata !14, metadata !2, metadata !42, metadata !4, metadata !43, metadata !6}
!42 = metadata !{metadata !"kernel_arg_type", metadata !"int", metadata !"int"}
!43 = metadata !{metadata !"kernel_arg_name", metadata !"Hi", metadata !"Lo"}
!44 = metadata !{null, metadata !45, metadata !46, metadata !47, metadata !48, metadata !49, metadata !6}
!45 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 0, i32 0}
!46 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none", metadata !"none"}
!47 = metadata !{metadata !"kernel_arg_type", metadata !"ap_int_base<64, false>*", metadata !"int", metadata !"int"}
!48 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !"", metadata !""}
!49 = metadata !{metadata !"kernel_arg_name", metadata !"bv", metadata !"h", metadata !"l"}
!50 = metadata !{null, metadata !8, metadata !9, metadata !51, metadata !11, metadata !30, metadata !6}
!51 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<32, true> &"}
!52 = metadata !{null, metadata !8, metadata !9, metadata !53, metadata !11, metadata !40, metadata !6}
!53 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<33, true> &"}
!54 = metadata !{null, metadata !14, metadata !2, metadata !55, metadata !4, metadata !56, metadata !6}
!55 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<32, true> &", metadata !"const ap_int_base<32, true> &"}
!56 = metadata !{metadata !"kernel_arg_name", metadata !"op", metadata !"op2"}
!57 = metadata !{null, metadata !8, metadata !9, metadata !51, metadata !11, metadata !40, metadata !6}
!58 = metadata !{null, metadata !8, metadata !9, metadata !59, metadata !11, metadata !40, metadata !6}
!59 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<16, true> &"}
!60 = metadata !{null, metadata !14, metadata !2, metadata !61, metadata !4, metadata !56, metadata !6}
!61 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<8, false> &", metadata !"const ap_int_base<8, true> &"}
!62 = metadata !{null, metadata !8, metadata !9, metadata !63, metadata !11, metadata !40, metadata !6}
!63 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<8, true> &"}
!64 = metadata !{null, metadata !8, metadata !9, metadata !65, metadata !11, metadata !66, metadata !6}
!65 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_range_ref<64, true> &"}
!66 = metadata !{metadata !"kernel_arg_name", metadata !"ref"}
!67 = metadata !{null, metadata !8, metadata !9, metadata !68, metadata !11, metadata !30, metadata !6}
!68 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_uint<8> &"}
!69 = metadata !{null, metadata !8, metadata !9, metadata !70, metadata !11, metadata !30, metadata !6}
!70 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int<8> &"}
!71 = metadata !{null, metadata !8, metadata !9, metadata !72, metadata !11, metadata !30, metadata !6}
!72 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int<32> &"}
!73 = metadata !{null, metadata !45, metadata !46, metadata !74, metadata !48, metadata !49, metadata !6}
!74 = metadata !{metadata !"kernel_arg_type", metadata !"ap_int_base<64, true>*", metadata !"int", metadata !"int"}
!75 = metadata !{null, metadata !8, metadata !9, metadata !76, metadata !11, metadata !77, metadata !6}
!76 = metadata !{metadata !"kernel_arg_type", metadata !"const struct ap_axiu<64, 4, 5, 5> &"}
!77 = metadata !{metadata !"kernel_arg_name", metadata !""}
!78 = metadata !{metadata !79, [1 x i32]* @llvm_global_ctors_0}
!79 = metadata !{metadata !80}
!80 = metadata !{i32 0, i32 31, metadata !81}
!81 = metadata !{metadata !82}
!82 = metadata !{metadata !"llvm.global_ctors.0", metadata !83, metadata !"", i32 0, i32 31}
!83 = metadata !{metadata !84}
!84 = metadata !{i32 0, i32 0, i32 1}
!85 = metadata !{metadata !86}
!86 = metadata !{i32 0, i32 63, metadata !87}
!87 = metadata !{metadata !88}
!88 = metadata !{metadata !"in_stream.data.V", metadata !89, metadata !"uint64", i32 0, i32 63}
!89 = metadata !{metadata !90}
!90 = metadata !{i32 0, i32 262468, i32 1}
!91 = metadata !{metadata !92}
!92 = metadata !{i32 0, i32 7, metadata !93}
!93 = metadata !{metadata !94}
!94 = metadata !{metadata !"in_stream.keep.V", metadata !89, metadata !"uint8", i32 0, i32 7}
!95 = metadata !{metadata !96}
!96 = metadata !{i32 0, i32 7, metadata !97}
!97 = metadata !{metadata !98}
!98 = metadata !{metadata !"in_stream.strb.V", metadata !89, metadata !"uint8", i32 0, i32 7}
!99 = metadata !{metadata !100}
!100 = metadata !{i32 0, i32 3, metadata !101}
!101 = metadata !{metadata !102}
!102 = metadata !{metadata !"in_stream.user.V", metadata !89, metadata !"uint4", i32 0, i32 3}
!103 = metadata !{metadata !104}
!104 = metadata !{i32 0, i32 0, metadata !105}
!105 = metadata !{metadata !106}
!106 = metadata !{metadata !"in_stream.last.V", metadata !89, metadata !"uint1", i32 0, i32 0}
!107 = metadata !{metadata !108}
!108 = metadata !{i32 0, i32 4, metadata !109}
!109 = metadata !{metadata !110}
!110 = metadata !{metadata !"in_stream.id.V", metadata !89, metadata !"uint5", i32 0, i32 4}
!111 = metadata !{metadata !112}
!112 = metadata !{i32 0, i32 4, metadata !113}
!113 = metadata !{metadata !114}
!114 = metadata !{metadata !"in_stream.dest.V", metadata !89, metadata !"uint5", i32 0, i32 4}
!115 = metadata !{metadata !116}
!116 = metadata !{i32 0, i32 63, metadata !117}
!117 = metadata !{metadata !118}
!118 = metadata !{metadata !"out_stream.data.V", metadata !119, metadata !"uint64", i32 0, i32 63}
!119 = metadata !{metadata !120}
!120 = metadata !{i32 0, i32 1023, i32 1}
!121 = metadata !{metadata !122}
!122 = metadata !{i32 0, i32 7, metadata !123}
!123 = metadata !{metadata !124}
!124 = metadata !{metadata !"out_stream.keep.V", metadata !119, metadata !"uint8", i32 0, i32 7}
!125 = metadata !{metadata !126}
!126 = metadata !{i32 0, i32 7, metadata !127}
!127 = metadata !{metadata !128}
!128 = metadata !{metadata !"out_stream.strb.V", metadata !119, metadata !"uint8", i32 0, i32 7}
!129 = metadata !{metadata !130}
!130 = metadata !{i32 0, i32 3, metadata !131}
!131 = metadata !{metadata !132}
!132 = metadata !{metadata !"out_stream.user.V", metadata !119, metadata !"uint4", i32 0, i32 3}
!133 = metadata !{metadata !134}
!134 = metadata !{i32 0, i32 0, metadata !135}
!135 = metadata !{metadata !136}
!136 = metadata !{metadata !"out_stream.last.V", metadata !119, metadata !"uint1", i32 0, i32 0}
!137 = metadata !{metadata !138}
!138 = metadata !{i32 0, i32 4, metadata !139}
!139 = metadata !{metadata !140}
!140 = metadata !{metadata !"out_stream.id.V", metadata !119, metadata !"uint5", i32 0, i32 4}
!141 = metadata !{metadata !142}
!142 = metadata !{i32 0, i32 4, metadata !143}
!143 = metadata !{metadata !144}
!144 = metadata !{metadata !"out_stream.dest.V", metadata !119, metadata !"uint5", i32 0, i32 4}
