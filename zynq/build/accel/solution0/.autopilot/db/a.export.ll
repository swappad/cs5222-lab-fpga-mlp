; ModuleID = '/home/krueger/cs5222/projects/project2/cs5222-lab-fpga-mlp/zynq/build/accel/solution0/.autopilot/db/a.o.2.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@mmult_hw_str = internal unnamed_addr constant [9 x i8] c"mmult_hw\00"
@llvm_global_ctors_1 = appending global [1 x void ()*] [void ()* @_GLOBAL__I_a]
@llvm_global_ctors_0 = appending global [1 x i32] [i32 65535]
@L1_L2_str = internal unnamed_addr constant [6 x i8] c"L1_L2\00"
@p_str9 = private unnamed_addr constant [3 x i8] c"LT\00", align 1
@p_str8 = private unnamed_addr constant [9 x i8] c"LOAD_W_2\00", align 1
@p_str7 = private unnamed_addr constant [9 x i8] c"LOAD_W_1\00", align 1
@p_str6 = private unnamed_addr constant [11 x i8] c"LOAD_OFF_1\00", align 1
@p_str4 = private unnamed_addr constant [5 x i8] c"both\00", align 1
@p_str3 = private unnamed_addr constant [5 x i8] c"axis\00", align 1
@p_str2 = private unnamed_addr constant [12 x i8] c"CONTROL_BUS\00", align 1
@p_str16 = private unnamed_addr constant [10 x i8] c"STORE_O_2\00", align 1
@p_str15 = private unnamed_addr constant [10 x i8] c"STORE_O_1\00", align 1
@p_str13 = private unnamed_addr constant [3 x i8] c"L2\00", align 1
@p_str11 = private unnamed_addr constant [9 x i8] c"LOAD_I_2\00", align 1
@p_str10 = private unnamed_addr constant [9 x i8] c"LOAD_I_1\00", align 1
@p_str1 = private unnamed_addr constant [1 x i8] zeroinitializer, align 1
@p_str = private unnamed_addr constant [10 x i8] c"s_axilite\00", align 1

define void @mmult_hw(i64* %in_stream_data_V, i8* %in_stream_keep_V, i8* %in_stream_strb_V, i4* %in_stream_user_V, i1* %in_stream_last_V, i5* %in_stream_id_V, i5* %in_stream_dest_V, i64* %out_stream_data_V, i8* %out_stream_keep_V, i8* %out_stream_strb_V, i4* %out_stream_user_V, i1* %out_stream_last_V, i5* %out_stream_id_V, i5* %out_stream_dest_V) {
arrayctor.loop1.preheader:
  call void (...)* @_ssdm_op_SpecBitsMap(i64* %in_stream_data_V), !map !69
  call void (...)* @_ssdm_op_SpecBitsMap(i8* %in_stream_keep_V), !map !75
  call void (...)* @_ssdm_op_SpecBitsMap(i8* %in_stream_strb_V), !map !79
  call void (...)* @_ssdm_op_SpecBitsMap(i4* %in_stream_user_V), !map !83
  call void (...)* @_ssdm_op_SpecBitsMap(i1* %in_stream_last_V), !map !87
  call void (...)* @_ssdm_op_SpecBitsMap(i5* %in_stream_id_V), !map !91
  call void (...)* @_ssdm_op_SpecBitsMap(i5* %in_stream_dest_V), !map !95
  call void (...)* @_ssdm_op_SpecBitsMap(i64* %out_stream_data_V), !map !99
  call void (...)* @_ssdm_op_SpecBitsMap(i8* %out_stream_keep_V), !map !105
  call void (...)* @_ssdm_op_SpecBitsMap(i8* %out_stream_strb_V), !map !109
  call void (...)* @_ssdm_op_SpecBitsMap(i4* %out_stream_user_V), !map !113
  call void (...)* @_ssdm_op_SpecBitsMap(i1* %out_stream_last_V), !map !117
  call void (...)* @_ssdm_op_SpecBitsMap(i5* %out_stream_id_V), !map !121
  call void (...)* @_ssdm_op_SpecBitsMap(i5* %out_stream_dest_V), !map !125
  call void (...)* @_ssdm_op_SpecTopModule([9 x i8]* @mmult_hw_str) nounwind
  %offset_buf_V = alloca [10 x i32], align 4
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
  %in_buf_0_0_V = alloca [64 x i8], align 1
  %in_buf_0_1_V = alloca [64 x i8], align 1
  %in_buf_0_2_V = alloca [64 x i8], align 1
  %in_buf_0_3_V = alloca [64 x i8], align 1
  %in_buf_0_4_V = alloca [64 x i8], align 1
  %in_buf_0_5_V = alloca [64 x i8], align 1
  %in_buf_0_6_V = alloca [64 x i8], align 1
  %in_buf_0_7_V = alloca [64 x i8], align 1
  %in_buf_1_0_V = alloca [64 x i8], align 1
  %in_buf_1_1_V = alloca [64 x i8], align 1
  %in_buf_1_2_V = alloca [64 x i8], align 1
  %in_buf_1_3_V = alloca [64 x i8], align 1
  %in_buf_1_4_V = alloca [64 x i8], align 1
  %in_buf_1_5_V = alloca [64 x i8], align 1
  %in_buf_1_6_V = alloca [64 x i8], align 1
  %in_buf_1_7_V = alloca [64 x i8], align 1
  %in_buf_2_0_V = alloca [64 x i8], align 1
  %in_buf_2_1_V = alloca [64 x i8], align 1
  %in_buf_2_2_V = alloca [64 x i8], align 1
  %in_buf_2_3_V = alloca [64 x i8], align 1
  %in_buf_2_4_V = alloca [64 x i8], align 1
  %in_buf_2_5_V = alloca [64 x i8], align 1
  %in_buf_2_6_V = alloca [64 x i8], align 1
  %in_buf_2_7_V = alloca [64 x i8], align 1
  %in_buf_3_0_V = alloca [64 x i8], align 1
  %in_buf_3_1_V = alloca [64 x i8], align 1
  %in_buf_3_2_V = alloca [64 x i8], align 1
  %in_buf_3_3_V = alloca [64 x i8], align 1
  %in_buf_3_4_V = alloca [64 x i8], align 1
  %in_buf_3_5_V = alloca [64 x i8], align 1
  %in_buf_3_6_V = alloca [64 x i8], align 1
  %in_buf_3_7_V = alloca [64 x i8], align 1
  %in_buf_4_0_V = alloca [64 x i8], align 1
  %in_buf_4_1_V = alloca [64 x i8], align 1
  %in_buf_4_2_V = alloca [64 x i8], align 1
  %in_buf_4_3_V = alloca [64 x i8], align 1
  %in_buf_4_4_V = alloca [64 x i8], align 1
  %in_buf_4_5_V = alloca [64 x i8], align 1
  %in_buf_4_6_V = alloca [64 x i8], align 1
  %in_buf_4_7_V = alloca [64 x i8], align 1
  %in_buf_5_0_V = alloca [64 x i8], align 1
  %in_buf_5_1_V = alloca [64 x i8], align 1
  %in_buf_5_2_V = alloca [64 x i8], align 1
  %in_buf_5_3_V = alloca [64 x i8], align 1
  %in_buf_5_4_V = alloca [64 x i8], align 1
  %in_buf_5_5_V = alloca [64 x i8], align 1
  %in_buf_5_6_V = alloca [64 x i8], align 1
  %in_buf_5_7_V = alloca [64 x i8], align 1
  %in_buf_6_0_V = alloca [64 x i8], align 1
  %in_buf_6_1_V = alloca [64 x i8], align 1
  %in_buf_6_2_V = alloca [64 x i8], align 1
  %in_buf_6_3_V = alloca [64 x i8], align 1
  %in_buf_6_4_V = alloca [64 x i8], align 1
  %in_buf_6_5_V = alloca [64 x i8], align 1
  %in_buf_6_6_V = alloca [64 x i8], align 1
  %in_buf_6_7_V = alloca [64 x i8], align 1
  %in_buf_7_0_V = alloca [64 x i8], align 1
  %in_buf_7_1_V = alloca [64 x i8], align 1
  %in_buf_7_2_V = alloca [64 x i8], align 1
  %in_buf_7_3_V = alloca [64 x i8], align 1
  %in_buf_7_4_V = alloca [64 x i8], align 1
  %in_buf_7_5_V = alloca [64 x i8], align 1
  %in_buf_7_6_V = alloca [64 x i8], align 1
  %in_buf_7_7_V = alloca [64 x i8], align 1
  %in_buf_8_0_V = alloca [64 x i8], align 1
  %in_buf_8_1_V = alloca [64 x i8], align 1
  %in_buf_8_2_V = alloca [64 x i8], align 1
  %in_buf_8_3_V = alloca [64 x i8], align 1
  %in_buf_8_4_V = alloca [64 x i8], align 1
  %in_buf_8_5_V = alloca [64 x i8], align 1
  %in_buf_8_6_V = alloca [64 x i8], align 1
  %in_buf_8_7_V = alloca [64 x i8], align 1
  %in_buf_9_0_V = alloca [64 x i8], align 1
  %in_buf_9_1_V = alloca [64 x i8], align 1
  %in_buf_9_2_V = alloca [64 x i8], align 1
  %in_buf_9_3_V = alloca [64 x i8], align 1
  %in_buf_9_4_V = alloca [64 x i8], align 1
  %in_buf_9_5_V = alloca [64 x i8], align 1
  %in_buf_9_6_V = alloca [64 x i8], align 1
  %in_buf_9_7_V = alloca [64 x i8], align 1
  %in_buf_10_0_V = alloca [64 x i8], align 1
  %in_buf_10_1_V = alloca [64 x i8], align 1
  %in_buf_10_2_V = alloca [64 x i8], align 1
  %in_buf_10_3_V = alloca [64 x i8], align 1
  %in_buf_10_4_V = alloca [64 x i8], align 1
  %in_buf_10_5_V = alloca [64 x i8], align 1
  %in_buf_10_6_V = alloca [64 x i8], align 1
  %in_buf_10_7_V = alloca [64 x i8], align 1
  %in_buf_11_0_V = alloca [64 x i8], align 1
  %in_buf_11_1_V = alloca [64 x i8], align 1
  %in_buf_11_2_V = alloca [64 x i8], align 1
  %in_buf_11_3_V = alloca [64 x i8], align 1
  %in_buf_11_4_V = alloca [64 x i8], align 1
  %in_buf_11_5_V = alloca [64 x i8], align 1
  %in_buf_11_6_V = alloca [64 x i8], align 1
  %in_buf_11_7_V = alloca [64 x i8], align 1
  %in_buf_12_0_V = alloca [64 x i8], align 1
  %in_buf_12_1_V = alloca [64 x i8], align 1
  %in_buf_12_2_V = alloca [64 x i8], align 1
  %in_buf_12_3_V = alloca [64 x i8], align 1
  %in_buf_12_4_V = alloca [64 x i8], align 1
  %in_buf_12_5_V = alloca [64 x i8], align 1
  %in_buf_12_6_V = alloca [64 x i8], align 1
  %in_buf_12_7_V = alloca [64 x i8], align 1
  %in_buf_13_0_V = alloca [64 x i8], align 1
  %in_buf_13_1_V = alloca [64 x i8], align 1
  %in_buf_13_2_V = alloca [64 x i8], align 1
  %in_buf_13_3_V = alloca [64 x i8], align 1
  %in_buf_13_4_V = alloca [64 x i8], align 1
  %in_buf_13_5_V = alloca [64 x i8], align 1
  %in_buf_13_6_V = alloca [64 x i8], align 1
  %in_buf_13_7_V = alloca [64 x i8], align 1
  %in_buf_14_0_V = alloca [64 x i8], align 1
  %in_buf_14_1_V = alloca [64 x i8], align 1
  %in_buf_14_2_V = alloca [64 x i8], align 1
  %in_buf_14_3_V = alloca [64 x i8], align 1
  %in_buf_14_4_V = alloca [64 x i8], align 1
  %in_buf_14_5_V = alloca [64 x i8], align 1
  %in_buf_14_6_V = alloca [64 x i8], align 1
  %in_buf_14_7_V = alloca [64 x i8], align 1
  %in_buf_15_0_V = alloca [64 x i8], align 1
  %in_buf_15_1_V = alloca [64 x i8], align 1
  %in_buf_15_2_V = alloca [64 x i8], align 1
  %in_buf_15_3_V = alloca [64 x i8], align 1
  %in_buf_15_4_V = alloca [64 x i8], align 1
  %in_buf_15_5_V = alloca [64 x i8], align 1
  %in_buf_15_6_V = alloca [64 x i8], align 1
  %in_buf_15_7_V = alloca [64 x i8], align 1
  %in_buf_16_0_V = alloca [64 x i8], align 1
  %in_buf_16_1_V = alloca [64 x i8], align 1
  %in_buf_16_2_V = alloca [64 x i8], align 1
  %in_buf_16_3_V = alloca [64 x i8], align 1
  %in_buf_16_4_V = alloca [64 x i8], align 1
  %in_buf_16_5_V = alloca [64 x i8], align 1
  %in_buf_16_6_V = alloca [64 x i8], align 1
  %in_buf_16_7_V = alloca [64 x i8], align 1
  %in_buf_17_0_V = alloca [64 x i8], align 1
  %in_buf_17_1_V = alloca [64 x i8], align 1
  %in_buf_17_2_V = alloca [64 x i8], align 1
  %in_buf_17_3_V = alloca [64 x i8], align 1
  %in_buf_17_4_V = alloca [64 x i8], align 1
  %in_buf_17_5_V = alloca [64 x i8], align 1
  %in_buf_17_6_V = alloca [64 x i8], align 1
  %in_buf_17_7_V = alloca [64 x i8], align 1
  %in_buf_18_0_V = alloca [64 x i8], align 1
  %in_buf_18_1_V = alloca [64 x i8], align 1
  %in_buf_18_2_V = alloca [64 x i8], align 1
  %in_buf_18_3_V = alloca [64 x i8], align 1
  %in_buf_18_4_V = alloca [64 x i8], align 1
  %in_buf_18_5_V = alloca [64 x i8], align 1
  %in_buf_18_6_V = alloca [64 x i8], align 1
  %in_buf_18_7_V = alloca [64 x i8], align 1
  %in_buf_19_0_V = alloca [64 x i8], align 1
  %in_buf_19_1_V = alloca [64 x i8], align 1
  %in_buf_19_2_V = alloca [64 x i8], align 1
  %in_buf_19_3_V = alloca [64 x i8], align 1
  %in_buf_19_4_V = alloca [64 x i8], align 1
  %in_buf_19_5_V = alloca [64 x i8], align 1
  %in_buf_19_6_V = alloca [64 x i8], align 1
  %in_buf_19_7_V = alloca [64 x i8], align 1
  %in_buf_20_0_V = alloca [64 x i8], align 1
  %in_buf_20_1_V = alloca [64 x i8], align 1
  %in_buf_20_2_V = alloca [64 x i8], align 1
  %in_buf_20_3_V = alloca [64 x i8], align 1
  %in_buf_20_4_V = alloca [64 x i8], align 1
  %in_buf_20_5_V = alloca [64 x i8], align 1
  %in_buf_20_6_V = alloca [64 x i8], align 1
  %in_buf_20_7_V = alloca [64 x i8], align 1
  %in_buf_21_0_V = alloca [64 x i8], align 1
  %in_buf_21_1_V = alloca [64 x i8], align 1
  %in_buf_21_2_V = alloca [64 x i8], align 1
  %in_buf_21_3_V = alloca [64 x i8], align 1
  %in_buf_21_4_V = alloca [64 x i8], align 1
  %in_buf_21_5_V = alloca [64 x i8], align 1
  %in_buf_21_6_V = alloca [64 x i8], align 1
  %in_buf_21_7_V = alloca [64 x i8], align 1
  %in_buf_22_0_V = alloca [64 x i8], align 1
  %in_buf_22_1_V = alloca [64 x i8], align 1
  %in_buf_22_2_V = alloca [64 x i8], align 1
  %in_buf_22_3_V = alloca [64 x i8], align 1
  %in_buf_22_4_V = alloca [64 x i8], align 1
  %in_buf_22_5_V = alloca [64 x i8], align 1
  %in_buf_22_6_V = alloca [64 x i8], align 1
  %in_buf_22_7_V = alloca [64 x i8], align 1
  %in_buf_23_0_V = alloca [64 x i8], align 1
  %in_buf_23_1_V = alloca [64 x i8], align 1
  %in_buf_23_2_V = alloca [64 x i8], align 1
  %in_buf_23_3_V = alloca [64 x i8], align 1
  %in_buf_23_4_V = alloca [64 x i8], align 1
  %in_buf_23_5_V = alloca [64 x i8], align 1
  %in_buf_23_6_V = alloca [64 x i8], align 1
  %in_buf_23_7_V = alloca [64 x i8], align 1
  %in_buf_24_0_V = alloca [64 x i8], align 1
  %in_buf_24_1_V = alloca [64 x i8], align 1
  %in_buf_24_2_V = alloca [64 x i8], align 1
  %in_buf_24_3_V = alloca [64 x i8], align 1
  %in_buf_24_4_V = alloca [64 x i8], align 1
  %in_buf_24_5_V = alloca [64 x i8], align 1
  %in_buf_24_6_V = alloca [64 x i8], align 1
  %in_buf_24_7_V = alloca [64 x i8], align 1
  %in_buf_25_0_V = alloca [64 x i8], align 1
  %in_buf_25_1_V = alloca [64 x i8], align 1
  %in_buf_25_2_V = alloca [64 x i8], align 1
  %in_buf_25_3_V = alloca [64 x i8], align 1
  %in_buf_25_4_V = alloca [64 x i8], align 1
  %in_buf_25_5_V = alloca [64 x i8], align 1
  %in_buf_25_6_V = alloca [64 x i8], align 1
  %in_buf_25_7_V = alloca [64 x i8], align 1
  %in_buf_26_0_V = alloca [64 x i8], align 1
  %in_buf_26_1_V = alloca [64 x i8], align 1
  %in_buf_26_2_V = alloca [64 x i8], align 1
  %in_buf_26_3_V = alloca [64 x i8], align 1
  %in_buf_26_4_V = alloca [64 x i8], align 1
  %in_buf_26_5_V = alloca [64 x i8], align 1
  %in_buf_26_6_V = alloca [64 x i8], align 1
  %in_buf_26_7_V = alloca [64 x i8], align 1
  %in_buf_27_0_V = alloca [64 x i8], align 1
  %in_buf_27_1_V = alloca [64 x i8], align 1
  %in_buf_27_2_V = alloca [64 x i8], align 1
  %in_buf_27_3_V = alloca [64 x i8], align 1
  %in_buf_27_4_V = alloca [64 x i8], align 1
  %in_buf_27_5_V = alloca [64 x i8], align 1
  %in_buf_27_6_V = alloca [64 x i8], align 1
  %in_buf_27_7_V = alloca [64 x i8], align 1
  %in_buf_28_0_V = alloca [64 x i8], align 1
  %in_buf_28_1_V = alloca [64 x i8], align 1
  %in_buf_28_2_V = alloca [64 x i8], align 1
  %in_buf_28_3_V = alloca [64 x i8], align 1
  %in_buf_28_4_V = alloca [64 x i8], align 1
  %in_buf_28_5_V = alloca [64 x i8], align 1
  %in_buf_28_6_V = alloca [64 x i8], align 1
  %in_buf_28_7_V = alloca [64 x i8], align 1
  %in_buf_29_0_V = alloca [64 x i8], align 1
  %in_buf_29_1_V = alloca [64 x i8], align 1
  %in_buf_29_2_V = alloca [64 x i8], align 1
  %in_buf_29_3_V = alloca [64 x i8], align 1
  %in_buf_29_4_V = alloca [64 x i8], align 1
  %in_buf_29_5_V = alloca [64 x i8], align 1
  %in_buf_29_6_V = alloca [64 x i8], align 1
  %in_buf_29_7_V = alloca [64 x i8], align 1
  %in_buf_30_0_V = alloca [64 x i8], align 1
  %in_buf_30_1_V = alloca [64 x i8], align 1
  %in_buf_30_2_V = alloca [64 x i8], align 1
  %in_buf_30_3_V = alloca [64 x i8], align 1
  %in_buf_30_4_V = alloca [64 x i8], align 1
  %in_buf_30_5_V = alloca [64 x i8], align 1
  %in_buf_30_6_V = alloca [64 x i8], align 1
  %in_buf_30_7_V = alloca [64 x i8], align 1
  %in_buf_31_0_V = alloca [64 x i8], align 1
  %in_buf_31_1_V = alloca [64 x i8], align 1
  %in_buf_31_2_V = alloca [64 x i8], align 1
  %in_buf_31_3_V = alloca [64 x i8], align 1
  %in_buf_31_4_V = alloca [64 x i8], align 1
  %in_buf_31_5_V = alloca [64 x i8], align 1
  %in_buf_31_6_V = alloca [64 x i8], align 1
  %in_buf_31_7_V = alloca [64 x i8], align 1
  %out_buf_V = alloca [640 x i32], align 4
  call void (...)* @_ssdm_op_SpecInterface(i32 0, [10 x i8]* @p_str, i32 0, i32 0, [1 x i8]* @p_str1, i32 0, i32 0, [12 x i8]* @p_str2, [1 x i8]* @p_str1, [1 x i8]* @p_str1, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1) nounwind
  call void (...)* @_ssdm_op_SpecInterface(i64* %in_stream_data_V, i8* %in_stream_keep_V, i8* %in_stream_strb_V, i4* %in_stream_user_V, i1* %in_stream_last_V, i5* %in_stream_id_V, i5* %in_stream_dest_V, [5 x i8]* @p_str3, i32 1, i32 1, [5 x i8]* @p_str4, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1, [1 x i8]* @p_str1, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1)
  call void (...)* @_ssdm_op_SpecInterface(i64* %out_stream_data_V, i8* %out_stream_keep_V, i8* %out_stream_strb_V, i4* %out_stream_user_V, i1* %out_stream_last_V, i5* %out_stream_id_V, i5* %out_stream_dest_V, [5 x i8]* @p_str3, i32 1, i32 1, [5 x i8]* @p_str4, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1, [1 x i8]* @p_str1, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1)
  br label %.preheader270

.preheader270:                                    ; preds = %0, %arrayctor.loop1.preheader
  %is_idx = phi i3 [ 0, %arrayctor.loop1.preheader ], [ %tmp_2, %0 ]
  %i = phi i4 [ 0, %arrayctor.loop1.preheader ], [ %i_1, %0 ]
  %exitcond1 = icmp eq i3 %is_idx, -3
  %tmp_2 = add i3 %is_idx, 1
  br i1 %exitcond1, label %.preheader269.preheader, label %0

.preheader269.preheader:                          ; preds = %.preheader270
  br label %.preheader269

; <label>:0                                       ; preds = %.preheader270
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 5, i64 5, i64 5)
  call void (...)* @_ssdm_op_SpecLoopName([11 x i8]* @p_str6) nounwind
  %tmp = call i32 (...)* @_ssdm_op_SpecRegionBegin([11 x i8]* @p_str6)
  call void (...)* @_ssdm_op_SpecPipeline(i32 1, i32 1, i32 1, i32 0, [1 x i8]* @p_str1) nounwind
  %empty_7 = call { i64, i8, i8, i4, i1, i5, i5 } @_ssdm_op_Read.axis.volatile.i64P.i8P.i8P.i4P.i1P.i5P.i5P(i64* %in_stream_data_V, i8* %in_stream_keep_V, i8* %in_stream_strb_V, i4* %in_stream_user_V, i1* %in_stream_last_V, i5* %in_stream_id_V, i5* %in_stream_dest_V)
  %ret = extractvalue { i64, i8, i8, i4, i1, i5, i5 } %empty_7, 0
  %tmp_4 = zext i4 %i to i64
  %tmp_8 = trunc i64 %ret to i32
  %offset_buf_V_addr = getelementptr [10 x i32]* %offset_buf_V, i64 0, i64 %tmp_4
  store i32 %tmp_8, i32* %offset_buf_V_addr, align 8
  %tmp_5 = or i4 %i, 1
  %tmp_6 = zext i4 %tmp_5 to i64
  %val_assign_1 = call i32 @_ssdm_op_PartSelect.i32.i64.i32.i32(i64 %ret, i32 32, i32 63)
  %offset_buf_V_addr_1 = getelementptr [10 x i32]* %offset_buf_V, i64 0, i64 %tmp_6
  store i32 %val_assign_1, i32* %offset_buf_V_addr_1, align 4
  %empty_8 = call i32 (...)* @_ssdm_op_SpecRegionEnd([11 x i8]* @p_str6, i32 %tmp)
  %i_1 = add i4 2, %i
  br label %.preheader270

.preheader269:                                    ; preds = %.preheader269.preheader, %5
  %indvars_iv1 = phi i9 [ %indvars_iv_next1, %5 ], [ 37, %.preheader269.preheader ]
  %is_idx_1 = phi i9 [ %tmp_s, %5 ], [ 5, %.preheader269.preheader ]
  %i2 = phi i4 [ %i_2, %5 ], [ 0, %.preheader269.preheader ]
  %exitcond2 = icmp eq i4 %i2, -6
  %i_2 = add i4 %i2, 1
  br i1 %exitcond2, label %.preheader268.preheader, label %1

.preheader268.preheader:                          ; preds = %.preheader269
  br label %.preheader268

; <label>:1                                       ; preds = %.preheader269
  %empty_9 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 10, i64 10, i64 10)
  call void (...)* @_ssdm_op_SpecLoopName([9 x i8]* @p_str7) nounwind
  %tmp_3 = call i32 (...)* @_ssdm_op_SpecRegionBegin([9 x i8]* @p_str7)
  %tmp_s = add i9 %is_idx_1, 32
  %tmp_1 = zext i4 %i2 to i64
  %weight_buf_0_0_V_a = getelementptr [10 x i8]* %weight_buf_0_0_V, i64 0, i64 %tmp_1
  %weight_buf_1_0_V_a = getelementptr [10 x i8]* %weight_buf_1_0_V, i64 0, i64 %tmp_1
  %weight_buf_2_0_V_a = getelementptr [10 x i8]* %weight_buf_2_0_V, i64 0, i64 %tmp_1
  %weight_buf_3_0_V_a = getelementptr [10 x i8]* %weight_buf_3_0_V, i64 0, i64 %tmp_1
  %weight_buf_4_0_V_a = getelementptr [10 x i8]* %weight_buf_4_0_V, i64 0, i64 %tmp_1
  %weight_buf_5_0_V_a = getelementptr [10 x i8]* %weight_buf_5_0_V, i64 0, i64 %tmp_1
  %weight_buf_6_0_V_a = getelementptr [10 x i8]* %weight_buf_6_0_V, i64 0, i64 %tmp_1
  %weight_buf_7_0_V_a = getelementptr [10 x i8]* %weight_buf_7_0_V, i64 0, i64 %tmp_1
  %weight_buf_8_0_V_a = getelementptr [10 x i8]* %weight_buf_8_0_V, i64 0, i64 %tmp_1
  %weight_buf_9_0_V_a = getelementptr [10 x i8]* %weight_buf_9_0_V, i64 0, i64 %tmp_1
  %weight_buf_10_0_V_s = getelementptr [10 x i8]* %weight_buf_10_0_V, i64 0, i64 %tmp_1
  %weight_buf_11_0_V_s = getelementptr [10 x i8]* %weight_buf_11_0_V, i64 0, i64 %tmp_1
  %weight_buf_12_0_V_s = getelementptr [10 x i8]* %weight_buf_12_0_V, i64 0, i64 %tmp_1
  %weight_buf_13_0_V_s = getelementptr [10 x i8]* %weight_buf_13_0_V, i64 0, i64 %tmp_1
  %weight_buf_14_0_V_s = getelementptr [10 x i8]* %weight_buf_14_0_V, i64 0, i64 %tmp_1
  %weight_buf_15_0_V_s = getelementptr [10 x i8]* %weight_buf_15_0_V, i64 0, i64 %tmp_1
  %weight_buf_16_0_V_s = getelementptr [10 x i8]* %weight_buf_16_0_V, i64 0, i64 %tmp_1
  %weight_buf_17_0_V_s = getelementptr [10 x i8]* %weight_buf_17_0_V, i64 0, i64 %tmp_1
  %weight_buf_18_0_V_s = getelementptr [10 x i8]* %weight_buf_18_0_V, i64 0, i64 %tmp_1
  %weight_buf_19_0_V_s = getelementptr [10 x i8]* %weight_buf_19_0_V, i64 0, i64 %tmp_1
  %weight_buf_20_0_V_s = getelementptr [10 x i8]* %weight_buf_20_0_V, i64 0, i64 %tmp_1
  %weight_buf_21_0_V_s = getelementptr [10 x i8]* %weight_buf_21_0_V, i64 0, i64 %tmp_1
  %weight_buf_22_0_V_s = getelementptr [10 x i8]* %weight_buf_22_0_V, i64 0, i64 %tmp_1
  %weight_buf_23_0_V_s = getelementptr [10 x i8]* %weight_buf_23_0_V, i64 0, i64 %tmp_1
  %weight_buf_24_0_V_s = getelementptr [10 x i8]* %weight_buf_24_0_V, i64 0, i64 %tmp_1
  %weight_buf_25_0_V_s = getelementptr [10 x i8]* %weight_buf_25_0_V, i64 0, i64 %tmp_1
  %weight_buf_26_0_V_s = getelementptr [10 x i8]* %weight_buf_26_0_V, i64 0, i64 %tmp_1
  %weight_buf_27_0_V_s = getelementptr [10 x i8]* %weight_buf_27_0_V, i64 0, i64 %tmp_1
  %weight_buf_28_0_V_s = getelementptr [10 x i8]* %weight_buf_28_0_V, i64 0, i64 %tmp_1
  %weight_buf_29_0_V_s = getelementptr [10 x i8]* %weight_buf_29_0_V, i64 0, i64 %tmp_1
  %weight_buf_30_0_V_s = getelementptr [10 x i8]* %weight_buf_30_0_V, i64 0, i64 %tmp_1
  %weight_buf_31_0_V_s = getelementptr [10 x i8]* %weight_buf_31_0_V, i64 0, i64 %tmp_1
  %weight_buf_0_1_V_a = getelementptr [10 x i8]* %weight_buf_0_1_V, i64 0, i64 %tmp_1
  %weight_buf_1_1_V_a = getelementptr [10 x i8]* %weight_buf_1_1_V, i64 0, i64 %tmp_1
  %weight_buf_2_1_V_a = getelementptr [10 x i8]* %weight_buf_2_1_V, i64 0, i64 %tmp_1
  %weight_buf_3_1_V_a = getelementptr [10 x i8]* %weight_buf_3_1_V, i64 0, i64 %tmp_1
  %weight_buf_4_1_V_a = getelementptr [10 x i8]* %weight_buf_4_1_V, i64 0, i64 %tmp_1
  %weight_buf_5_1_V_a = getelementptr [10 x i8]* %weight_buf_5_1_V, i64 0, i64 %tmp_1
  %weight_buf_6_1_V_a = getelementptr [10 x i8]* %weight_buf_6_1_V, i64 0, i64 %tmp_1
  %weight_buf_7_1_V_a = getelementptr [10 x i8]* %weight_buf_7_1_V, i64 0, i64 %tmp_1
  %weight_buf_8_1_V_a = getelementptr [10 x i8]* %weight_buf_8_1_V, i64 0, i64 %tmp_1
  %weight_buf_9_1_V_a = getelementptr [10 x i8]* %weight_buf_9_1_V, i64 0, i64 %tmp_1
  %weight_buf_10_1_V_s = getelementptr [10 x i8]* %weight_buf_10_1_V, i64 0, i64 %tmp_1
  %weight_buf_11_1_V_s = getelementptr [10 x i8]* %weight_buf_11_1_V, i64 0, i64 %tmp_1
  %weight_buf_12_1_V_s = getelementptr [10 x i8]* %weight_buf_12_1_V, i64 0, i64 %tmp_1
  %weight_buf_13_1_V_s = getelementptr [10 x i8]* %weight_buf_13_1_V, i64 0, i64 %tmp_1
  %weight_buf_14_1_V_s = getelementptr [10 x i8]* %weight_buf_14_1_V, i64 0, i64 %tmp_1
  %weight_buf_15_1_V_s = getelementptr [10 x i8]* %weight_buf_15_1_V, i64 0, i64 %tmp_1
  %weight_buf_16_1_V_s = getelementptr [10 x i8]* %weight_buf_16_1_V, i64 0, i64 %tmp_1
  %weight_buf_17_1_V_s = getelementptr [10 x i8]* %weight_buf_17_1_V, i64 0, i64 %tmp_1
  %weight_buf_18_1_V_s = getelementptr [10 x i8]* %weight_buf_18_1_V, i64 0, i64 %tmp_1
  %weight_buf_19_1_V_s = getelementptr [10 x i8]* %weight_buf_19_1_V, i64 0, i64 %tmp_1
  %weight_buf_20_1_V_s = getelementptr [10 x i8]* %weight_buf_20_1_V, i64 0, i64 %tmp_1
  %weight_buf_21_1_V_s = getelementptr [10 x i8]* %weight_buf_21_1_V, i64 0, i64 %tmp_1
  %weight_buf_22_1_V_s = getelementptr [10 x i8]* %weight_buf_22_1_V, i64 0, i64 %tmp_1
  %weight_buf_23_1_V_s = getelementptr [10 x i8]* %weight_buf_23_1_V, i64 0, i64 %tmp_1
  %weight_buf_24_1_V_s = getelementptr [10 x i8]* %weight_buf_24_1_V, i64 0, i64 %tmp_1
  %weight_buf_25_1_V_s = getelementptr [10 x i8]* %weight_buf_25_1_V, i64 0, i64 %tmp_1
  %weight_buf_26_1_V_s = getelementptr [10 x i8]* %weight_buf_26_1_V, i64 0, i64 %tmp_1
  %weight_buf_27_1_V_s = getelementptr [10 x i8]* %weight_buf_27_1_V, i64 0, i64 %tmp_1
  %weight_buf_28_1_V_s = getelementptr [10 x i8]* %weight_buf_28_1_V, i64 0, i64 %tmp_1
  %weight_buf_29_1_V_s = getelementptr [10 x i8]* %weight_buf_29_1_V, i64 0, i64 %tmp_1
  %weight_buf_30_1_V_s = getelementptr [10 x i8]* %weight_buf_30_1_V, i64 0, i64 %tmp_1
  %weight_buf_31_1_V_s = getelementptr [10 x i8]* %weight_buf_31_1_V, i64 0, i64 %tmp_1
  %weight_buf_0_2_V_a = getelementptr [10 x i8]* %weight_buf_0_2_V, i64 0, i64 %tmp_1
  %weight_buf_1_2_V_a = getelementptr [10 x i8]* %weight_buf_1_2_V, i64 0, i64 %tmp_1
  %weight_buf_2_2_V_a = getelementptr [10 x i8]* %weight_buf_2_2_V, i64 0, i64 %tmp_1
  %weight_buf_3_2_V_a = getelementptr [10 x i8]* %weight_buf_3_2_V, i64 0, i64 %tmp_1
  %weight_buf_4_2_V_a = getelementptr [10 x i8]* %weight_buf_4_2_V, i64 0, i64 %tmp_1
  %weight_buf_5_2_V_a = getelementptr [10 x i8]* %weight_buf_5_2_V, i64 0, i64 %tmp_1
  %weight_buf_6_2_V_a = getelementptr [10 x i8]* %weight_buf_6_2_V, i64 0, i64 %tmp_1
  %weight_buf_7_2_V_a = getelementptr [10 x i8]* %weight_buf_7_2_V, i64 0, i64 %tmp_1
  %weight_buf_8_2_V_a = getelementptr [10 x i8]* %weight_buf_8_2_V, i64 0, i64 %tmp_1
  %weight_buf_9_2_V_a = getelementptr [10 x i8]* %weight_buf_9_2_V, i64 0, i64 %tmp_1
  %weight_buf_10_2_V_s = getelementptr [10 x i8]* %weight_buf_10_2_V, i64 0, i64 %tmp_1
  %weight_buf_11_2_V_s = getelementptr [10 x i8]* %weight_buf_11_2_V, i64 0, i64 %tmp_1
  %weight_buf_12_2_V_s = getelementptr [10 x i8]* %weight_buf_12_2_V, i64 0, i64 %tmp_1
  %weight_buf_13_2_V_s = getelementptr [10 x i8]* %weight_buf_13_2_V, i64 0, i64 %tmp_1
  %weight_buf_14_2_V_s = getelementptr [10 x i8]* %weight_buf_14_2_V, i64 0, i64 %tmp_1
  %weight_buf_15_2_V_s = getelementptr [10 x i8]* %weight_buf_15_2_V, i64 0, i64 %tmp_1
  %weight_buf_16_2_V_s = getelementptr [10 x i8]* %weight_buf_16_2_V, i64 0, i64 %tmp_1
  %weight_buf_17_2_V_s = getelementptr [10 x i8]* %weight_buf_17_2_V, i64 0, i64 %tmp_1
  %weight_buf_18_2_V_s = getelementptr [10 x i8]* %weight_buf_18_2_V, i64 0, i64 %tmp_1
  %weight_buf_19_2_V_s = getelementptr [10 x i8]* %weight_buf_19_2_V, i64 0, i64 %tmp_1
  %weight_buf_20_2_V_s = getelementptr [10 x i8]* %weight_buf_20_2_V, i64 0, i64 %tmp_1
  %weight_buf_21_2_V_s = getelementptr [10 x i8]* %weight_buf_21_2_V, i64 0, i64 %tmp_1
  %weight_buf_22_2_V_s = getelementptr [10 x i8]* %weight_buf_22_2_V, i64 0, i64 %tmp_1
  %weight_buf_23_2_V_s = getelementptr [10 x i8]* %weight_buf_23_2_V, i64 0, i64 %tmp_1
  %weight_buf_24_2_V_s = getelementptr [10 x i8]* %weight_buf_24_2_V, i64 0, i64 %tmp_1
  %weight_buf_25_2_V_s = getelementptr [10 x i8]* %weight_buf_25_2_V, i64 0, i64 %tmp_1
  %weight_buf_26_2_V_s = getelementptr [10 x i8]* %weight_buf_26_2_V, i64 0, i64 %tmp_1
  %weight_buf_27_2_V_s = getelementptr [10 x i8]* %weight_buf_27_2_V, i64 0, i64 %tmp_1
  %weight_buf_28_2_V_s = getelementptr [10 x i8]* %weight_buf_28_2_V, i64 0, i64 %tmp_1
  %weight_buf_29_2_V_s = getelementptr [10 x i8]* %weight_buf_29_2_V, i64 0, i64 %tmp_1
  %weight_buf_30_2_V_s = getelementptr [10 x i8]* %weight_buf_30_2_V, i64 0, i64 %tmp_1
  %weight_buf_31_2_V_s = getelementptr [10 x i8]* %weight_buf_31_2_V, i64 0, i64 %tmp_1
  %weight_buf_0_3_V_a = getelementptr [10 x i8]* %weight_buf_0_3_V, i64 0, i64 %tmp_1
  %weight_buf_1_3_V_a = getelementptr [10 x i8]* %weight_buf_1_3_V, i64 0, i64 %tmp_1
  %weight_buf_2_3_V_a = getelementptr [10 x i8]* %weight_buf_2_3_V, i64 0, i64 %tmp_1
  %weight_buf_3_3_V_a = getelementptr [10 x i8]* %weight_buf_3_3_V, i64 0, i64 %tmp_1
  %weight_buf_4_3_V_a = getelementptr [10 x i8]* %weight_buf_4_3_V, i64 0, i64 %tmp_1
  %weight_buf_5_3_V_a = getelementptr [10 x i8]* %weight_buf_5_3_V, i64 0, i64 %tmp_1
  %weight_buf_6_3_V_a = getelementptr [10 x i8]* %weight_buf_6_3_V, i64 0, i64 %tmp_1
  %weight_buf_7_3_V_a = getelementptr [10 x i8]* %weight_buf_7_3_V, i64 0, i64 %tmp_1
  %weight_buf_8_3_V_a = getelementptr [10 x i8]* %weight_buf_8_3_V, i64 0, i64 %tmp_1
  %weight_buf_9_3_V_a = getelementptr [10 x i8]* %weight_buf_9_3_V, i64 0, i64 %tmp_1
  %weight_buf_10_3_V_s = getelementptr [10 x i8]* %weight_buf_10_3_V, i64 0, i64 %tmp_1
  %weight_buf_11_3_V_s = getelementptr [10 x i8]* %weight_buf_11_3_V, i64 0, i64 %tmp_1
  %weight_buf_12_3_V_s = getelementptr [10 x i8]* %weight_buf_12_3_V, i64 0, i64 %tmp_1
  %weight_buf_13_3_V_s = getelementptr [10 x i8]* %weight_buf_13_3_V, i64 0, i64 %tmp_1
  %weight_buf_14_3_V_s = getelementptr [10 x i8]* %weight_buf_14_3_V, i64 0, i64 %tmp_1
  %weight_buf_15_3_V_s = getelementptr [10 x i8]* %weight_buf_15_3_V, i64 0, i64 %tmp_1
  %weight_buf_16_3_V_s = getelementptr [10 x i8]* %weight_buf_16_3_V, i64 0, i64 %tmp_1
  %weight_buf_17_3_V_s = getelementptr [10 x i8]* %weight_buf_17_3_V, i64 0, i64 %tmp_1
  %weight_buf_18_3_V_s = getelementptr [10 x i8]* %weight_buf_18_3_V, i64 0, i64 %tmp_1
  %weight_buf_19_3_V_s = getelementptr [10 x i8]* %weight_buf_19_3_V, i64 0, i64 %tmp_1
  %weight_buf_20_3_V_s = getelementptr [10 x i8]* %weight_buf_20_3_V, i64 0, i64 %tmp_1
  %weight_buf_21_3_V_s = getelementptr [10 x i8]* %weight_buf_21_3_V, i64 0, i64 %tmp_1
  %weight_buf_22_3_V_s = getelementptr [10 x i8]* %weight_buf_22_3_V, i64 0, i64 %tmp_1
  %weight_buf_23_3_V_s = getelementptr [10 x i8]* %weight_buf_23_3_V, i64 0, i64 %tmp_1
  %weight_buf_24_3_V_s = getelementptr [10 x i8]* %weight_buf_24_3_V, i64 0, i64 %tmp_1
  %weight_buf_25_3_V_s = getelementptr [10 x i8]* %weight_buf_25_3_V, i64 0, i64 %tmp_1
  %weight_buf_26_3_V_s = getelementptr [10 x i8]* %weight_buf_26_3_V, i64 0, i64 %tmp_1
  %weight_buf_27_3_V_s = getelementptr [10 x i8]* %weight_buf_27_3_V, i64 0, i64 %tmp_1
  %weight_buf_28_3_V_s = getelementptr [10 x i8]* %weight_buf_28_3_V, i64 0, i64 %tmp_1
  %weight_buf_29_3_V_s = getelementptr [10 x i8]* %weight_buf_29_3_V, i64 0, i64 %tmp_1
  %weight_buf_30_3_V_s = getelementptr [10 x i8]* %weight_buf_30_3_V, i64 0, i64 %tmp_1
  %weight_buf_31_3_V_s = getelementptr [10 x i8]* %weight_buf_31_3_V, i64 0, i64 %tmp_1
  %weight_buf_0_4_V_a = getelementptr [10 x i8]* %weight_buf_0_4_V, i64 0, i64 %tmp_1
  %weight_buf_1_4_V_a = getelementptr [10 x i8]* %weight_buf_1_4_V, i64 0, i64 %tmp_1
  %weight_buf_2_4_V_a = getelementptr [10 x i8]* %weight_buf_2_4_V, i64 0, i64 %tmp_1
  %weight_buf_3_4_V_a = getelementptr [10 x i8]* %weight_buf_3_4_V, i64 0, i64 %tmp_1
  %weight_buf_4_4_V_a = getelementptr [10 x i8]* %weight_buf_4_4_V, i64 0, i64 %tmp_1
  %weight_buf_5_4_V_a = getelementptr [10 x i8]* %weight_buf_5_4_V, i64 0, i64 %tmp_1
  %weight_buf_6_4_V_a = getelementptr [10 x i8]* %weight_buf_6_4_V, i64 0, i64 %tmp_1
  %weight_buf_7_4_V_a = getelementptr [10 x i8]* %weight_buf_7_4_V, i64 0, i64 %tmp_1
  %weight_buf_8_4_V_a = getelementptr [10 x i8]* %weight_buf_8_4_V, i64 0, i64 %tmp_1
  %weight_buf_9_4_V_a = getelementptr [10 x i8]* %weight_buf_9_4_V, i64 0, i64 %tmp_1
  %weight_buf_10_4_V_s = getelementptr [10 x i8]* %weight_buf_10_4_V, i64 0, i64 %tmp_1
  %weight_buf_11_4_V_s = getelementptr [10 x i8]* %weight_buf_11_4_V, i64 0, i64 %tmp_1
  %weight_buf_12_4_V_s = getelementptr [10 x i8]* %weight_buf_12_4_V, i64 0, i64 %tmp_1
  %weight_buf_13_4_V_s = getelementptr [10 x i8]* %weight_buf_13_4_V, i64 0, i64 %tmp_1
  %weight_buf_14_4_V_s = getelementptr [10 x i8]* %weight_buf_14_4_V, i64 0, i64 %tmp_1
  %weight_buf_15_4_V_s = getelementptr [10 x i8]* %weight_buf_15_4_V, i64 0, i64 %tmp_1
  %weight_buf_16_4_V_s = getelementptr [10 x i8]* %weight_buf_16_4_V, i64 0, i64 %tmp_1
  %weight_buf_17_4_V_s = getelementptr [10 x i8]* %weight_buf_17_4_V, i64 0, i64 %tmp_1
  %weight_buf_18_4_V_s = getelementptr [10 x i8]* %weight_buf_18_4_V, i64 0, i64 %tmp_1
  %weight_buf_19_4_V_s = getelementptr [10 x i8]* %weight_buf_19_4_V, i64 0, i64 %tmp_1
  %weight_buf_20_4_V_s = getelementptr [10 x i8]* %weight_buf_20_4_V, i64 0, i64 %tmp_1
  %weight_buf_21_4_V_s = getelementptr [10 x i8]* %weight_buf_21_4_V, i64 0, i64 %tmp_1
  %weight_buf_22_4_V_s = getelementptr [10 x i8]* %weight_buf_22_4_V, i64 0, i64 %tmp_1
  %weight_buf_23_4_V_s = getelementptr [10 x i8]* %weight_buf_23_4_V, i64 0, i64 %tmp_1
  %weight_buf_24_4_V_s = getelementptr [10 x i8]* %weight_buf_24_4_V, i64 0, i64 %tmp_1
  %weight_buf_25_4_V_s = getelementptr [10 x i8]* %weight_buf_25_4_V, i64 0, i64 %tmp_1
  %weight_buf_26_4_V_s = getelementptr [10 x i8]* %weight_buf_26_4_V, i64 0, i64 %tmp_1
  %weight_buf_27_4_V_s = getelementptr [10 x i8]* %weight_buf_27_4_V, i64 0, i64 %tmp_1
  %weight_buf_28_4_V_s = getelementptr [10 x i8]* %weight_buf_28_4_V, i64 0, i64 %tmp_1
  %weight_buf_29_4_V_s = getelementptr [10 x i8]* %weight_buf_29_4_V, i64 0, i64 %tmp_1
  %weight_buf_30_4_V_s = getelementptr [10 x i8]* %weight_buf_30_4_V, i64 0, i64 %tmp_1
  %weight_buf_31_4_V_s = getelementptr [10 x i8]* %weight_buf_31_4_V, i64 0, i64 %tmp_1
  %weight_buf_0_5_V_a = getelementptr [10 x i8]* %weight_buf_0_5_V, i64 0, i64 %tmp_1
  %weight_buf_1_5_V_a = getelementptr [10 x i8]* %weight_buf_1_5_V, i64 0, i64 %tmp_1
  %weight_buf_2_5_V_a = getelementptr [10 x i8]* %weight_buf_2_5_V, i64 0, i64 %tmp_1
  %weight_buf_3_5_V_a = getelementptr [10 x i8]* %weight_buf_3_5_V, i64 0, i64 %tmp_1
  %weight_buf_4_5_V_a = getelementptr [10 x i8]* %weight_buf_4_5_V, i64 0, i64 %tmp_1
  %weight_buf_5_5_V_a = getelementptr [10 x i8]* %weight_buf_5_5_V, i64 0, i64 %tmp_1
  %weight_buf_6_5_V_a = getelementptr [10 x i8]* %weight_buf_6_5_V, i64 0, i64 %tmp_1
  %weight_buf_7_5_V_a = getelementptr [10 x i8]* %weight_buf_7_5_V, i64 0, i64 %tmp_1
  %weight_buf_8_5_V_a = getelementptr [10 x i8]* %weight_buf_8_5_V, i64 0, i64 %tmp_1
  %weight_buf_9_5_V_a = getelementptr [10 x i8]* %weight_buf_9_5_V, i64 0, i64 %tmp_1
  %weight_buf_10_5_V_s = getelementptr [10 x i8]* %weight_buf_10_5_V, i64 0, i64 %tmp_1
  %weight_buf_11_5_V_s = getelementptr [10 x i8]* %weight_buf_11_5_V, i64 0, i64 %tmp_1
  %weight_buf_12_5_V_s = getelementptr [10 x i8]* %weight_buf_12_5_V, i64 0, i64 %tmp_1
  %weight_buf_13_5_V_s = getelementptr [10 x i8]* %weight_buf_13_5_V, i64 0, i64 %tmp_1
  %weight_buf_14_5_V_s = getelementptr [10 x i8]* %weight_buf_14_5_V, i64 0, i64 %tmp_1
  %weight_buf_15_5_V_s = getelementptr [10 x i8]* %weight_buf_15_5_V, i64 0, i64 %tmp_1
  %weight_buf_16_5_V_s = getelementptr [10 x i8]* %weight_buf_16_5_V, i64 0, i64 %tmp_1
  %weight_buf_17_5_V_s = getelementptr [10 x i8]* %weight_buf_17_5_V, i64 0, i64 %tmp_1
  %weight_buf_18_5_V_s = getelementptr [10 x i8]* %weight_buf_18_5_V, i64 0, i64 %tmp_1
  %weight_buf_19_5_V_s = getelementptr [10 x i8]* %weight_buf_19_5_V, i64 0, i64 %tmp_1
  %weight_buf_20_5_V_s = getelementptr [10 x i8]* %weight_buf_20_5_V, i64 0, i64 %tmp_1
  %weight_buf_21_5_V_s = getelementptr [10 x i8]* %weight_buf_21_5_V, i64 0, i64 %tmp_1
  %weight_buf_22_5_V_s = getelementptr [10 x i8]* %weight_buf_22_5_V, i64 0, i64 %tmp_1
  %weight_buf_23_5_V_s = getelementptr [10 x i8]* %weight_buf_23_5_V, i64 0, i64 %tmp_1
  %weight_buf_24_5_V_s = getelementptr [10 x i8]* %weight_buf_24_5_V, i64 0, i64 %tmp_1
  %weight_buf_25_5_V_s = getelementptr [10 x i8]* %weight_buf_25_5_V, i64 0, i64 %tmp_1
  %weight_buf_26_5_V_s = getelementptr [10 x i8]* %weight_buf_26_5_V, i64 0, i64 %tmp_1
  %weight_buf_27_5_V_s = getelementptr [10 x i8]* %weight_buf_27_5_V, i64 0, i64 %tmp_1
  %weight_buf_28_5_V_s = getelementptr [10 x i8]* %weight_buf_28_5_V, i64 0, i64 %tmp_1
  %weight_buf_29_5_V_s = getelementptr [10 x i8]* %weight_buf_29_5_V, i64 0, i64 %tmp_1
  %weight_buf_30_5_V_s = getelementptr [10 x i8]* %weight_buf_30_5_V, i64 0, i64 %tmp_1
  %weight_buf_31_5_V_s = getelementptr [10 x i8]* %weight_buf_31_5_V, i64 0, i64 %tmp_1
  %weight_buf_0_6_V_a = getelementptr [10 x i8]* %weight_buf_0_6_V, i64 0, i64 %tmp_1
  %weight_buf_1_6_V_a = getelementptr [10 x i8]* %weight_buf_1_6_V, i64 0, i64 %tmp_1
  %weight_buf_2_6_V_a = getelementptr [10 x i8]* %weight_buf_2_6_V, i64 0, i64 %tmp_1
  %weight_buf_3_6_V_a = getelementptr [10 x i8]* %weight_buf_3_6_V, i64 0, i64 %tmp_1
  %weight_buf_4_6_V_a = getelementptr [10 x i8]* %weight_buf_4_6_V, i64 0, i64 %tmp_1
  %weight_buf_5_6_V_a = getelementptr [10 x i8]* %weight_buf_5_6_V, i64 0, i64 %tmp_1
  %weight_buf_6_6_V_a = getelementptr [10 x i8]* %weight_buf_6_6_V, i64 0, i64 %tmp_1
  %weight_buf_7_6_V_a = getelementptr [10 x i8]* %weight_buf_7_6_V, i64 0, i64 %tmp_1
  %weight_buf_8_6_V_a = getelementptr [10 x i8]* %weight_buf_8_6_V, i64 0, i64 %tmp_1
  %weight_buf_9_6_V_a = getelementptr [10 x i8]* %weight_buf_9_6_V, i64 0, i64 %tmp_1
  %weight_buf_10_6_V_s = getelementptr [10 x i8]* %weight_buf_10_6_V, i64 0, i64 %tmp_1
  %weight_buf_11_6_V_s = getelementptr [10 x i8]* %weight_buf_11_6_V, i64 0, i64 %tmp_1
  %weight_buf_12_6_V_s = getelementptr [10 x i8]* %weight_buf_12_6_V, i64 0, i64 %tmp_1
  %weight_buf_13_6_V_s = getelementptr [10 x i8]* %weight_buf_13_6_V, i64 0, i64 %tmp_1
  %weight_buf_14_6_V_s = getelementptr [10 x i8]* %weight_buf_14_6_V, i64 0, i64 %tmp_1
  %weight_buf_15_6_V_s = getelementptr [10 x i8]* %weight_buf_15_6_V, i64 0, i64 %tmp_1
  %weight_buf_16_6_V_s = getelementptr [10 x i8]* %weight_buf_16_6_V, i64 0, i64 %tmp_1
  %weight_buf_17_6_V_s = getelementptr [10 x i8]* %weight_buf_17_6_V, i64 0, i64 %tmp_1
  %weight_buf_18_6_V_s = getelementptr [10 x i8]* %weight_buf_18_6_V, i64 0, i64 %tmp_1
  %weight_buf_19_6_V_s = getelementptr [10 x i8]* %weight_buf_19_6_V, i64 0, i64 %tmp_1
  %weight_buf_20_6_V_s = getelementptr [10 x i8]* %weight_buf_20_6_V, i64 0, i64 %tmp_1
  %weight_buf_21_6_V_s = getelementptr [10 x i8]* %weight_buf_21_6_V, i64 0, i64 %tmp_1
  %weight_buf_22_6_V_s = getelementptr [10 x i8]* %weight_buf_22_6_V, i64 0, i64 %tmp_1
  %weight_buf_23_6_V_s = getelementptr [10 x i8]* %weight_buf_23_6_V, i64 0, i64 %tmp_1
  %weight_buf_24_6_V_s = getelementptr [10 x i8]* %weight_buf_24_6_V, i64 0, i64 %tmp_1
  %weight_buf_25_6_V_s = getelementptr [10 x i8]* %weight_buf_25_6_V, i64 0, i64 %tmp_1
  %weight_buf_26_6_V_s = getelementptr [10 x i8]* %weight_buf_26_6_V, i64 0, i64 %tmp_1
  %weight_buf_27_6_V_s = getelementptr [10 x i8]* %weight_buf_27_6_V, i64 0, i64 %tmp_1
  %weight_buf_28_6_V_s = getelementptr [10 x i8]* %weight_buf_28_6_V, i64 0, i64 %tmp_1
  %weight_buf_29_6_V_s = getelementptr [10 x i8]* %weight_buf_29_6_V, i64 0, i64 %tmp_1
  %weight_buf_30_6_V_s = getelementptr [10 x i8]* %weight_buf_30_6_V, i64 0, i64 %tmp_1
  %weight_buf_31_6_V_s = getelementptr [10 x i8]* %weight_buf_31_6_V, i64 0, i64 %tmp_1
  %weight_buf_0_7_V_a = getelementptr [10 x i8]* %weight_buf_0_7_V, i64 0, i64 %tmp_1
  %weight_buf_1_7_V_a = getelementptr [10 x i8]* %weight_buf_1_7_V, i64 0, i64 %tmp_1
  %weight_buf_2_7_V_a = getelementptr [10 x i8]* %weight_buf_2_7_V, i64 0, i64 %tmp_1
  %weight_buf_3_7_V_a = getelementptr [10 x i8]* %weight_buf_3_7_V, i64 0, i64 %tmp_1
  %weight_buf_4_7_V_a = getelementptr [10 x i8]* %weight_buf_4_7_V, i64 0, i64 %tmp_1
  %weight_buf_5_7_V_a = getelementptr [10 x i8]* %weight_buf_5_7_V, i64 0, i64 %tmp_1
  %weight_buf_6_7_V_a = getelementptr [10 x i8]* %weight_buf_6_7_V, i64 0, i64 %tmp_1
  %weight_buf_7_7_V_a = getelementptr [10 x i8]* %weight_buf_7_7_V, i64 0, i64 %tmp_1
  %weight_buf_8_7_V_a = getelementptr [10 x i8]* %weight_buf_8_7_V, i64 0, i64 %tmp_1
  %weight_buf_9_7_V_a = getelementptr [10 x i8]* %weight_buf_9_7_V, i64 0, i64 %tmp_1
  %weight_buf_10_7_V_s = getelementptr [10 x i8]* %weight_buf_10_7_V, i64 0, i64 %tmp_1
  %weight_buf_11_7_V_s = getelementptr [10 x i8]* %weight_buf_11_7_V, i64 0, i64 %tmp_1
  %weight_buf_12_7_V_s = getelementptr [10 x i8]* %weight_buf_12_7_V, i64 0, i64 %tmp_1
  %weight_buf_13_7_V_s = getelementptr [10 x i8]* %weight_buf_13_7_V, i64 0, i64 %tmp_1
  %weight_buf_14_7_V_s = getelementptr [10 x i8]* %weight_buf_14_7_V, i64 0, i64 %tmp_1
  %weight_buf_15_7_V_s = getelementptr [10 x i8]* %weight_buf_15_7_V, i64 0, i64 %tmp_1
  %weight_buf_16_7_V_s = getelementptr [10 x i8]* %weight_buf_16_7_V, i64 0, i64 %tmp_1
  %weight_buf_17_7_V_s = getelementptr [10 x i8]* %weight_buf_17_7_V, i64 0, i64 %tmp_1
  %weight_buf_18_7_V_s = getelementptr [10 x i8]* %weight_buf_18_7_V, i64 0, i64 %tmp_1
  %weight_buf_19_7_V_s = getelementptr [10 x i8]* %weight_buf_19_7_V, i64 0, i64 %tmp_1
  %weight_buf_20_7_V_s = getelementptr [10 x i8]* %weight_buf_20_7_V, i64 0, i64 %tmp_1
  %weight_buf_21_7_V_s = getelementptr [10 x i8]* %weight_buf_21_7_V, i64 0, i64 %tmp_1
  %weight_buf_22_7_V_s = getelementptr [10 x i8]* %weight_buf_22_7_V, i64 0, i64 %tmp_1
  %weight_buf_23_7_V_s = getelementptr [10 x i8]* %weight_buf_23_7_V, i64 0, i64 %tmp_1
  %weight_buf_24_7_V_s = getelementptr [10 x i8]* %weight_buf_24_7_V, i64 0, i64 %tmp_1
  %weight_buf_25_7_V_s = getelementptr [10 x i8]* %weight_buf_25_7_V, i64 0, i64 %tmp_1
  %weight_buf_26_7_V_s = getelementptr [10 x i8]* %weight_buf_26_7_V, i64 0, i64 %tmp_1
  %weight_buf_27_7_V_s = getelementptr [10 x i8]* %weight_buf_27_7_V, i64 0, i64 %tmp_1
  %weight_buf_28_7_V_s = getelementptr [10 x i8]* %weight_buf_28_7_V, i64 0, i64 %tmp_1
  %weight_buf_29_7_V_s = getelementptr [10 x i8]* %weight_buf_29_7_V, i64 0, i64 %tmp_1
  %weight_buf_30_7_V_s = getelementptr [10 x i8]* %weight_buf_30_7_V, i64 0, i64 %tmp_1
  %weight_buf_31_7_V_s = getelementptr [10 x i8]* %weight_buf_31_7_V, i64 0, i64 %tmp_1
  br label %2

; <label>:2                                       ; preds = %4, %1
  %is_idx_2 = phi i9 [ %is_idx_1, %1 ], [ %tmp_9, %4 ]
  %j = phi i9 [ 0, %1 ], [ %j_1, %4 ]
  %exitcond3 = icmp eq i9 %is_idx_2, %indvars_iv1
  br i1 %exitcond3, label %5, label %3

; <label>:3                                       ; preds = %2
  %empty_10 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32)
  call void (...)* @_ssdm_op_SpecLoopName([9 x i8]* @p_str8) nounwind
  %tmp_10 = call i32 (...)* @_ssdm_op_SpecRegionBegin([9 x i8]* @p_str8)
  call void (...)* @_ssdm_op_SpecPipeline(i32 1, i32 1, i32 1, i32 0, [1 x i8]* @p_str1) nounwind
  %tmp_9 = add i9 1, %is_idx_2
  %empty_11 = call { i64, i8, i8, i4, i1, i5, i5 } @_ssdm_op_Read.axis.volatile.i64P.i8P.i8P.i4P.i1P.i5P.i5P(i64* %in_stream_data_V, i8* %in_stream_keep_V, i8* %in_stream_strb_V, i4* %in_stream_user_V, i1* %in_stream_last_V, i5* %in_stream_id_V, i5* %in_stream_dest_V)
  %ret_1 = extractvalue { i64, i8, i8, i4, i1, i5, i5 } %empty_11, 0
  %tmp_15 = trunc i64 %ret_1 to i8
  %arrayNo_cast_cast = call i6 @_ssdm_op_PartSelect.i6.i9.i32.i32(i9 %j, i32 3, i32 8)
  %val_assign_3 = call i8 @_ssdm_op_PartSelect.i8.i64.i32.i32(i64 %ret_1, i32 8, i32 15)
  %val_assign_4 = call i8 @_ssdm_op_PartSelect.i8.i64.i32.i32(i64 %ret_1, i32 16, i32 23)
  %val_assign_5 = call i8 @_ssdm_op_PartSelect.i8.i64.i32.i32(i64 %ret_1, i32 24, i32 31)
  %val_assign_6 = call i8 @_ssdm_op_PartSelect.i8.i64.i32.i32(i64 %ret_1, i32 32, i32 39)
  %val_assign_7 = call i8 @_ssdm_op_PartSelect.i8.i64.i32.i32(i64 %ret_1, i32 40, i32 47)
  %val_assign_8 = call i8 @_ssdm_op_PartSelect.i8.i64.i32.i32(i64 %ret_1, i32 48, i32 55)
  %val_assign_9 = call i8 @_ssdm_op_PartSelect.i8.i64.i32.i32(i64 %ret_1, i32 56, i32 63)
  switch i6 %arrayNo_cast_cast, label %branch255 [
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

; <label>:4                                       ; preds = %branch255, %branch254, %branch253, %branch252, %branch251, %branch250, %branch249, %branch248, %branch247, %branch246, %branch245, %branch244, %branch243, %branch242, %branch241, %branch240, %branch239, %branch238, %branch237, %branch236, %branch235, %branch234, %branch233, %branch232, %branch231, %branch230, %branch229, %branch228, %branch227, %branch226, %branch225, %branch224
  %empty_12 = call i32 (...)* @_ssdm_op_SpecRegionEnd([9 x i8]* @p_str8, i32 %tmp_10)
  %j_1 = add i9 %j, 8
  br label %2

; <label>:5                                       ; preds = %2
  %empty_13 = call i32 (...)* @_ssdm_op_SpecRegionEnd([9 x i8]* @p_str7, i32 %tmp_3)
  %indvars_iv_next1 = add i9 %indvars_iv1, 32
  br label %.preheader269

.preheader268:                                    ; preds = %.preheader268.preheader, %19
  %is_idx_3 = phi i19 [ %is_idx_4, %19 ], [ 325, %.preheader268.preheader ]
  %os_idx = phi i16 [ %os_idx_3, %19 ], [ 0, %.preheader268.preheader ]
  %t = phi i14 [ %t_1, %19 ], [ 0, %.preheader268.preheader ]
  %tmp_13 = call i1 @_ssdm_op_BitSelect.i1.i14.i32(i14 %t, i32 13)
  br i1 %tmp_13, label %20, label %6

; <label>:6                                       ; preds = %.preheader268
  %empty_14 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 128, i64 128, i64 128)
  call void (...)* @_ssdm_op_SpecLoopName([3 x i8]* @p_str9) nounwind
  %tmp_7 = call i32 (...)* @_ssdm_op_SpecRegionBegin([3 x i8]* @p_str9)
  %is_idx_4 = add i19 %is_idx_3, 2048
  br label %7

; <label>:7                                       ; preds = %12, %6
  %indvars_iv257_in = phi i19 [ %is_idx_3, %6 ], [ %is_idx_6, %12 ]
  %i3 = phi i7 [ 0, %6 ], [ %i_3, %12 ]
  %exitcond4 = icmp eq i7 %i3, -64
  %i_3 = add i7 %i3, 1
  br i1 %exitcond4, label %.preheader.preheader.preheader, label %8

.preheader.preheader.preheader:                   ; preds = %7
  br label %.preheader.preheader

; <label>:8                                       ; preds = %7
  %is_idx_6 = add i19 %indvars_iv257_in, 32
  %empty_15 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 64, i64 64, i64 64)
  call void (...)* @_ssdm_op_SpecLoopName([9 x i8]* @p_str10) nounwind
  %tmp_11 = call i32 (...)* @_ssdm_op_SpecRegionBegin([9 x i8]* @p_str10)
  %tmp_12 = zext i7 %i3 to i64
  %in_buf_0_0_V_addr = getelementptr [64 x i8]* %in_buf_0_0_V, i64 0, i64 %tmp_12
  %in_buf_1_0_V_addr = getelementptr [64 x i8]* %in_buf_1_0_V, i64 0, i64 %tmp_12
  %in_buf_2_0_V_addr = getelementptr [64 x i8]* %in_buf_2_0_V, i64 0, i64 %tmp_12
  %in_buf_3_0_V_addr = getelementptr [64 x i8]* %in_buf_3_0_V, i64 0, i64 %tmp_12
  %in_buf_4_0_V_addr = getelementptr [64 x i8]* %in_buf_4_0_V, i64 0, i64 %tmp_12
  %in_buf_5_0_V_addr = getelementptr [64 x i8]* %in_buf_5_0_V, i64 0, i64 %tmp_12
  %in_buf_6_0_V_addr = getelementptr [64 x i8]* %in_buf_6_0_V, i64 0, i64 %tmp_12
  %in_buf_7_0_V_addr = getelementptr [64 x i8]* %in_buf_7_0_V, i64 0, i64 %tmp_12
  %in_buf_8_0_V_addr = getelementptr [64 x i8]* %in_buf_8_0_V, i64 0, i64 %tmp_12
  %in_buf_9_0_V_addr = getelementptr [64 x i8]* %in_buf_9_0_V, i64 0, i64 %tmp_12
  %in_buf_10_0_V_addr = getelementptr [64 x i8]* %in_buf_10_0_V, i64 0, i64 %tmp_12
  %in_buf_11_0_V_addr = getelementptr [64 x i8]* %in_buf_11_0_V, i64 0, i64 %tmp_12
  %in_buf_12_0_V_addr = getelementptr [64 x i8]* %in_buf_12_0_V, i64 0, i64 %tmp_12
  %in_buf_13_0_V_addr = getelementptr [64 x i8]* %in_buf_13_0_V, i64 0, i64 %tmp_12
  %in_buf_14_0_V_addr = getelementptr [64 x i8]* %in_buf_14_0_V, i64 0, i64 %tmp_12
  %in_buf_15_0_V_addr = getelementptr [64 x i8]* %in_buf_15_0_V, i64 0, i64 %tmp_12
  %in_buf_16_0_V_addr = getelementptr [64 x i8]* %in_buf_16_0_V, i64 0, i64 %tmp_12
  %in_buf_17_0_V_addr = getelementptr [64 x i8]* %in_buf_17_0_V, i64 0, i64 %tmp_12
  %in_buf_18_0_V_addr = getelementptr [64 x i8]* %in_buf_18_0_V, i64 0, i64 %tmp_12
  %in_buf_19_0_V_addr = getelementptr [64 x i8]* %in_buf_19_0_V, i64 0, i64 %tmp_12
  %in_buf_20_0_V_addr = getelementptr [64 x i8]* %in_buf_20_0_V, i64 0, i64 %tmp_12
  %in_buf_21_0_V_addr = getelementptr [64 x i8]* %in_buf_21_0_V, i64 0, i64 %tmp_12
  %in_buf_22_0_V_addr = getelementptr [64 x i8]* %in_buf_22_0_V, i64 0, i64 %tmp_12
  %in_buf_23_0_V_addr = getelementptr [64 x i8]* %in_buf_23_0_V, i64 0, i64 %tmp_12
  %in_buf_24_0_V_addr = getelementptr [64 x i8]* %in_buf_24_0_V, i64 0, i64 %tmp_12
  %in_buf_25_0_V_addr = getelementptr [64 x i8]* %in_buf_25_0_V, i64 0, i64 %tmp_12
  %in_buf_26_0_V_addr = getelementptr [64 x i8]* %in_buf_26_0_V, i64 0, i64 %tmp_12
  %in_buf_27_0_V_addr = getelementptr [64 x i8]* %in_buf_27_0_V, i64 0, i64 %tmp_12
  %in_buf_28_0_V_addr = getelementptr [64 x i8]* %in_buf_28_0_V, i64 0, i64 %tmp_12
  %in_buf_29_0_V_addr = getelementptr [64 x i8]* %in_buf_29_0_V, i64 0, i64 %tmp_12
  %in_buf_30_0_V_addr = getelementptr [64 x i8]* %in_buf_30_0_V, i64 0, i64 %tmp_12
  %in_buf_31_0_V_addr = getelementptr [64 x i8]* %in_buf_31_0_V, i64 0, i64 %tmp_12
  %in_buf_0_1_V_addr = getelementptr [64 x i8]* %in_buf_0_1_V, i64 0, i64 %tmp_12
  %in_buf_1_1_V_addr = getelementptr [64 x i8]* %in_buf_1_1_V, i64 0, i64 %tmp_12
  %in_buf_2_1_V_addr = getelementptr [64 x i8]* %in_buf_2_1_V, i64 0, i64 %tmp_12
  %in_buf_3_1_V_addr = getelementptr [64 x i8]* %in_buf_3_1_V, i64 0, i64 %tmp_12
  %in_buf_4_1_V_addr = getelementptr [64 x i8]* %in_buf_4_1_V, i64 0, i64 %tmp_12
  %in_buf_5_1_V_addr = getelementptr [64 x i8]* %in_buf_5_1_V, i64 0, i64 %tmp_12
  %in_buf_6_1_V_addr = getelementptr [64 x i8]* %in_buf_6_1_V, i64 0, i64 %tmp_12
  %in_buf_7_1_V_addr = getelementptr [64 x i8]* %in_buf_7_1_V, i64 0, i64 %tmp_12
  %in_buf_8_1_V_addr = getelementptr [64 x i8]* %in_buf_8_1_V, i64 0, i64 %tmp_12
  %in_buf_9_1_V_addr = getelementptr [64 x i8]* %in_buf_9_1_V, i64 0, i64 %tmp_12
  %in_buf_10_1_V_addr = getelementptr [64 x i8]* %in_buf_10_1_V, i64 0, i64 %tmp_12
  %in_buf_11_1_V_addr = getelementptr [64 x i8]* %in_buf_11_1_V, i64 0, i64 %tmp_12
  %in_buf_12_1_V_addr = getelementptr [64 x i8]* %in_buf_12_1_V, i64 0, i64 %tmp_12
  %in_buf_13_1_V_addr = getelementptr [64 x i8]* %in_buf_13_1_V, i64 0, i64 %tmp_12
  %in_buf_14_1_V_addr = getelementptr [64 x i8]* %in_buf_14_1_V, i64 0, i64 %tmp_12
  %in_buf_15_1_V_addr = getelementptr [64 x i8]* %in_buf_15_1_V, i64 0, i64 %tmp_12
  %in_buf_16_1_V_addr = getelementptr [64 x i8]* %in_buf_16_1_V, i64 0, i64 %tmp_12
  %in_buf_17_1_V_addr = getelementptr [64 x i8]* %in_buf_17_1_V, i64 0, i64 %tmp_12
  %in_buf_18_1_V_addr = getelementptr [64 x i8]* %in_buf_18_1_V, i64 0, i64 %tmp_12
  %in_buf_19_1_V_addr = getelementptr [64 x i8]* %in_buf_19_1_V, i64 0, i64 %tmp_12
  %in_buf_20_1_V_addr = getelementptr [64 x i8]* %in_buf_20_1_V, i64 0, i64 %tmp_12
  %in_buf_21_1_V_addr = getelementptr [64 x i8]* %in_buf_21_1_V, i64 0, i64 %tmp_12
  %in_buf_22_1_V_addr = getelementptr [64 x i8]* %in_buf_22_1_V, i64 0, i64 %tmp_12
  %in_buf_23_1_V_addr = getelementptr [64 x i8]* %in_buf_23_1_V, i64 0, i64 %tmp_12
  %in_buf_24_1_V_addr = getelementptr [64 x i8]* %in_buf_24_1_V, i64 0, i64 %tmp_12
  %in_buf_25_1_V_addr = getelementptr [64 x i8]* %in_buf_25_1_V, i64 0, i64 %tmp_12
  %in_buf_26_1_V_addr = getelementptr [64 x i8]* %in_buf_26_1_V, i64 0, i64 %tmp_12
  %in_buf_27_1_V_addr = getelementptr [64 x i8]* %in_buf_27_1_V, i64 0, i64 %tmp_12
  %in_buf_28_1_V_addr = getelementptr [64 x i8]* %in_buf_28_1_V, i64 0, i64 %tmp_12
  %in_buf_29_1_V_addr = getelementptr [64 x i8]* %in_buf_29_1_V, i64 0, i64 %tmp_12
  %in_buf_30_1_V_addr = getelementptr [64 x i8]* %in_buf_30_1_V, i64 0, i64 %tmp_12
  %in_buf_31_1_V_addr = getelementptr [64 x i8]* %in_buf_31_1_V, i64 0, i64 %tmp_12
  %in_buf_0_2_V_addr = getelementptr [64 x i8]* %in_buf_0_2_V, i64 0, i64 %tmp_12
  %in_buf_1_2_V_addr = getelementptr [64 x i8]* %in_buf_1_2_V, i64 0, i64 %tmp_12
  %in_buf_2_2_V_addr = getelementptr [64 x i8]* %in_buf_2_2_V, i64 0, i64 %tmp_12
  %in_buf_3_2_V_addr = getelementptr [64 x i8]* %in_buf_3_2_V, i64 0, i64 %tmp_12
  %in_buf_4_2_V_addr = getelementptr [64 x i8]* %in_buf_4_2_V, i64 0, i64 %tmp_12
  %in_buf_5_2_V_addr = getelementptr [64 x i8]* %in_buf_5_2_V, i64 0, i64 %tmp_12
  %in_buf_6_2_V_addr = getelementptr [64 x i8]* %in_buf_6_2_V, i64 0, i64 %tmp_12
  %in_buf_7_2_V_addr = getelementptr [64 x i8]* %in_buf_7_2_V, i64 0, i64 %tmp_12
  %in_buf_8_2_V_addr = getelementptr [64 x i8]* %in_buf_8_2_V, i64 0, i64 %tmp_12
  %in_buf_9_2_V_addr = getelementptr [64 x i8]* %in_buf_9_2_V, i64 0, i64 %tmp_12
  %in_buf_10_2_V_addr = getelementptr [64 x i8]* %in_buf_10_2_V, i64 0, i64 %tmp_12
  %in_buf_11_2_V_addr = getelementptr [64 x i8]* %in_buf_11_2_V, i64 0, i64 %tmp_12
  %in_buf_12_2_V_addr = getelementptr [64 x i8]* %in_buf_12_2_V, i64 0, i64 %tmp_12
  %in_buf_13_2_V_addr = getelementptr [64 x i8]* %in_buf_13_2_V, i64 0, i64 %tmp_12
  %in_buf_14_2_V_addr = getelementptr [64 x i8]* %in_buf_14_2_V, i64 0, i64 %tmp_12
  %in_buf_15_2_V_addr = getelementptr [64 x i8]* %in_buf_15_2_V, i64 0, i64 %tmp_12
  %in_buf_16_2_V_addr = getelementptr [64 x i8]* %in_buf_16_2_V, i64 0, i64 %tmp_12
  %in_buf_17_2_V_addr = getelementptr [64 x i8]* %in_buf_17_2_V, i64 0, i64 %tmp_12
  %in_buf_18_2_V_addr = getelementptr [64 x i8]* %in_buf_18_2_V, i64 0, i64 %tmp_12
  %in_buf_19_2_V_addr = getelementptr [64 x i8]* %in_buf_19_2_V, i64 0, i64 %tmp_12
  %in_buf_20_2_V_addr = getelementptr [64 x i8]* %in_buf_20_2_V, i64 0, i64 %tmp_12
  %in_buf_21_2_V_addr = getelementptr [64 x i8]* %in_buf_21_2_V, i64 0, i64 %tmp_12
  %in_buf_22_2_V_addr = getelementptr [64 x i8]* %in_buf_22_2_V, i64 0, i64 %tmp_12
  %in_buf_23_2_V_addr = getelementptr [64 x i8]* %in_buf_23_2_V, i64 0, i64 %tmp_12
  %in_buf_24_2_V_addr = getelementptr [64 x i8]* %in_buf_24_2_V, i64 0, i64 %tmp_12
  %in_buf_25_2_V_addr = getelementptr [64 x i8]* %in_buf_25_2_V, i64 0, i64 %tmp_12
  %in_buf_26_2_V_addr = getelementptr [64 x i8]* %in_buf_26_2_V, i64 0, i64 %tmp_12
  %in_buf_27_2_V_addr = getelementptr [64 x i8]* %in_buf_27_2_V, i64 0, i64 %tmp_12
  %in_buf_28_2_V_addr = getelementptr [64 x i8]* %in_buf_28_2_V, i64 0, i64 %tmp_12
  %in_buf_29_2_V_addr = getelementptr [64 x i8]* %in_buf_29_2_V, i64 0, i64 %tmp_12
  %in_buf_30_2_V_addr = getelementptr [64 x i8]* %in_buf_30_2_V, i64 0, i64 %tmp_12
  %in_buf_31_2_V_addr = getelementptr [64 x i8]* %in_buf_31_2_V, i64 0, i64 %tmp_12
  %in_buf_0_3_V_addr = getelementptr [64 x i8]* %in_buf_0_3_V, i64 0, i64 %tmp_12
  %in_buf_1_3_V_addr = getelementptr [64 x i8]* %in_buf_1_3_V, i64 0, i64 %tmp_12
  %in_buf_2_3_V_addr = getelementptr [64 x i8]* %in_buf_2_3_V, i64 0, i64 %tmp_12
  %in_buf_3_3_V_addr = getelementptr [64 x i8]* %in_buf_3_3_V, i64 0, i64 %tmp_12
  %in_buf_4_3_V_addr = getelementptr [64 x i8]* %in_buf_4_3_V, i64 0, i64 %tmp_12
  %in_buf_5_3_V_addr = getelementptr [64 x i8]* %in_buf_5_3_V, i64 0, i64 %tmp_12
  %in_buf_6_3_V_addr = getelementptr [64 x i8]* %in_buf_6_3_V, i64 0, i64 %tmp_12
  %in_buf_7_3_V_addr = getelementptr [64 x i8]* %in_buf_7_3_V, i64 0, i64 %tmp_12
  %in_buf_8_3_V_addr = getelementptr [64 x i8]* %in_buf_8_3_V, i64 0, i64 %tmp_12
  %in_buf_9_3_V_addr = getelementptr [64 x i8]* %in_buf_9_3_V, i64 0, i64 %tmp_12
  %in_buf_10_3_V_addr = getelementptr [64 x i8]* %in_buf_10_3_V, i64 0, i64 %tmp_12
  %in_buf_11_3_V_addr = getelementptr [64 x i8]* %in_buf_11_3_V, i64 0, i64 %tmp_12
  %in_buf_12_3_V_addr = getelementptr [64 x i8]* %in_buf_12_3_V, i64 0, i64 %tmp_12
  %in_buf_13_3_V_addr = getelementptr [64 x i8]* %in_buf_13_3_V, i64 0, i64 %tmp_12
  %in_buf_14_3_V_addr = getelementptr [64 x i8]* %in_buf_14_3_V, i64 0, i64 %tmp_12
  %in_buf_15_3_V_addr = getelementptr [64 x i8]* %in_buf_15_3_V, i64 0, i64 %tmp_12
  %in_buf_16_3_V_addr = getelementptr [64 x i8]* %in_buf_16_3_V, i64 0, i64 %tmp_12
  %in_buf_17_3_V_addr = getelementptr [64 x i8]* %in_buf_17_3_V, i64 0, i64 %tmp_12
  %in_buf_18_3_V_addr = getelementptr [64 x i8]* %in_buf_18_3_V, i64 0, i64 %tmp_12
  %in_buf_19_3_V_addr = getelementptr [64 x i8]* %in_buf_19_3_V, i64 0, i64 %tmp_12
  %in_buf_20_3_V_addr = getelementptr [64 x i8]* %in_buf_20_3_V, i64 0, i64 %tmp_12
  %in_buf_21_3_V_addr = getelementptr [64 x i8]* %in_buf_21_3_V, i64 0, i64 %tmp_12
  %in_buf_22_3_V_addr = getelementptr [64 x i8]* %in_buf_22_3_V, i64 0, i64 %tmp_12
  %in_buf_23_3_V_addr = getelementptr [64 x i8]* %in_buf_23_3_V, i64 0, i64 %tmp_12
  %in_buf_24_3_V_addr = getelementptr [64 x i8]* %in_buf_24_3_V, i64 0, i64 %tmp_12
  %in_buf_25_3_V_addr = getelementptr [64 x i8]* %in_buf_25_3_V, i64 0, i64 %tmp_12
  %in_buf_26_3_V_addr = getelementptr [64 x i8]* %in_buf_26_3_V, i64 0, i64 %tmp_12
  %in_buf_27_3_V_addr = getelementptr [64 x i8]* %in_buf_27_3_V, i64 0, i64 %tmp_12
  %in_buf_28_3_V_addr = getelementptr [64 x i8]* %in_buf_28_3_V, i64 0, i64 %tmp_12
  %in_buf_29_3_V_addr = getelementptr [64 x i8]* %in_buf_29_3_V, i64 0, i64 %tmp_12
  %in_buf_30_3_V_addr = getelementptr [64 x i8]* %in_buf_30_3_V, i64 0, i64 %tmp_12
  %in_buf_31_3_V_addr = getelementptr [64 x i8]* %in_buf_31_3_V, i64 0, i64 %tmp_12
  %in_buf_0_4_V_addr = getelementptr [64 x i8]* %in_buf_0_4_V, i64 0, i64 %tmp_12
  %in_buf_1_4_V_addr = getelementptr [64 x i8]* %in_buf_1_4_V, i64 0, i64 %tmp_12
  %in_buf_2_4_V_addr = getelementptr [64 x i8]* %in_buf_2_4_V, i64 0, i64 %tmp_12
  %in_buf_3_4_V_addr = getelementptr [64 x i8]* %in_buf_3_4_V, i64 0, i64 %tmp_12
  %in_buf_4_4_V_addr = getelementptr [64 x i8]* %in_buf_4_4_V, i64 0, i64 %tmp_12
  %in_buf_5_4_V_addr = getelementptr [64 x i8]* %in_buf_5_4_V, i64 0, i64 %tmp_12
  %in_buf_6_4_V_addr = getelementptr [64 x i8]* %in_buf_6_4_V, i64 0, i64 %tmp_12
  %in_buf_7_4_V_addr = getelementptr [64 x i8]* %in_buf_7_4_V, i64 0, i64 %tmp_12
  %in_buf_8_4_V_addr = getelementptr [64 x i8]* %in_buf_8_4_V, i64 0, i64 %tmp_12
  %in_buf_9_4_V_addr = getelementptr [64 x i8]* %in_buf_9_4_V, i64 0, i64 %tmp_12
  %in_buf_10_4_V_addr = getelementptr [64 x i8]* %in_buf_10_4_V, i64 0, i64 %tmp_12
  %in_buf_11_4_V_addr = getelementptr [64 x i8]* %in_buf_11_4_V, i64 0, i64 %tmp_12
  %in_buf_12_4_V_addr = getelementptr [64 x i8]* %in_buf_12_4_V, i64 0, i64 %tmp_12
  %in_buf_13_4_V_addr = getelementptr [64 x i8]* %in_buf_13_4_V, i64 0, i64 %tmp_12
  %in_buf_14_4_V_addr = getelementptr [64 x i8]* %in_buf_14_4_V, i64 0, i64 %tmp_12
  %in_buf_15_4_V_addr = getelementptr [64 x i8]* %in_buf_15_4_V, i64 0, i64 %tmp_12
  %in_buf_16_4_V_addr = getelementptr [64 x i8]* %in_buf_16_4_V, i64 0, i64 %tmp_12
  %in_buf_17_4_V_addr = getelementptr [64 x i8]* %in_buf_17_4_V, i64 0, i64 %tmp_12
  %in_buf_18_4_V_addr = getelementptr [64 x i8]* %in_buf_18_4_V, i64 0, i64 %tmp_12
  %in_buf_19_4_V_addr = getelementptr [64 x i8]* %in_buf_19_4_V, i64 0, i64 %tmp_12
  %in_buf_20_4_V_addr = getelementptr [64 x i8]* %in_buf_20_4_V, i64 0, i64 %tmp_12
  %in_buf_21_4_V_addr = getelementptr [64 x i8]* %in_buf_21_4_V, i64 0, i64 %tmp_12
  %in_buf_22_4_V_addr = getelementptr [64 x i8]* %in_buf_22_4_V, i64 0, i64 %tmp_12
  %in_buf_23_4_V_addr = getelementptr [64 x i8]* %in_buf_23_4_V, i64 0, i64 %tmp_12
  %in_buf_24_4_V_addr = getelementptr [64 x i8]* %in_buf_24_4_V, i64 0, i64 %tmp_12
  %in_buf_25_4_V_addr = getelementptr [64 x i8]* %in_buf_25_4_V, i64 0, i64 %tmp_12
  %in_buf_26_4_V_addr = getelementptr [64 x i8]* %in_buf_26_4_V, i64 0, i64 %tmp_12
  %in_buf_27_4_V_addr = getelementptr [64 x i8]* %in_buf_27_4_V, i64 0, i64 %tmp_12
  %in_buf_28_4_V_addr = getelementptr [64 x i8]* %in_buf_28_4_V, i64 0, i64 %tmp_12
  %in_buf_29_4_V_addr = getelementptr [64 x i8]* %in_buf_29_4_V, i64 0, i64 %tmp_12
  %in_buf_30_4_V_addr = getelementptr [64 x i8]* %in_buf_30_4_V, i64 0, i64 %tmp_12
  %in_buf_31_4_V_addr = getelementptr [64 x i8]* %in_buf_31_4_V, i64 0, i64 %tmp_12
  %in_buf_0_5_V_addr = getelementptr [64 x i8]* %in_buf_0_5_V, i64 0, i64 %tmp_12
  %in_buf_1_5_V_addr = getelementptr [64 x i8]* %in_buf_1_5_V, i64 0, i64 %tmp_12
  %in_buf_2_5_V_addr = getelementptr [64 x i8]* %in_buf_2_5_V, i64 0, i64 %tmp_12
  %in_buf_3_5_V_addr = getelementptr [64 x i8]* %in_buf_3_5_V, i64 0, i64 %tmp_12
  %in_buf_4_5_V_addr = getelementptr [64 x i8]* %in_buf_4_5_V, i64 0, i64 %tmp_12
  %in_buf_5_5_V_addr = getelementptr [64 x i8]* %in_buf_5_5_V, i64 0, i64 %tmp_12
  %in_buf_6_5_V_addr = getelementptr [64 x i8]* %in_buf_6_5_V, i64 0, i64 %tmp_12
  %in_buf_7_5_V_addr = getelementptr [64 x i8]* %in_buf_7_5_V, i64 0, i64 %tmp_12
  %in_buf_8_5_V_addr = getelementptr [64 x i8]* %in_buf_8_5_V, i64 0, i64 %tmp_12
  %in_buf_9_5_V_addr = getelementptr [64 x i8]* %in_buf_9_5_V, i64 0, i64 %tmp_12
  %in_buf_10_5_V_addr = getelementptr [64 x i8]* %in_buf_10_5_V, i64 0, i64 %tmp_12
  %in_buf_11_5_V_addr = getelementptr [64 x i8]* %in_buf_11_5_V, i64 0, i64 %tmp_12
  %in_buf_12_5_V_addr = getelementptr [64 x i8]* %in_buf_12_5_V, i64 0, i64 %tmp_12
  %in_buf_13_5_V_addr = getelementptr [64 x i8]* %in_buf_13_5_V, i64 0, i64 %tmp_12
  %in_buf_14_5_V_addr = getelementptr [64 x i8]* %in_buf_14_5_V, i64 0, i64 %tmp_12
  %in_buf_15_5_V_addr = getelementptr [64 x i8]* %in_buf_15_5_V, i64 0, i64 %tmp_12
  %in_buf_16_5_V_addr = getelementptr [64 x i8]* %in_buf_16_5_V, i64 0, i64 %tmp_12
  %in_buf_17_5_V_addr = getelementptr [64 x i8]* %in_buf_17_5_V, i64 0, i64 %tmp_12
  %in_buf_18_5_V_addr = getelementptr [64 x i8]* %in_buf_18_5_V, i64 0, i64 %tmp_12
  %in_buf_19_5_V_addr = getelementptr [64 x i8]* %in_buf_19_5_V, i64 0, i64 %tmp_12
  %in_buf_20_5_V_addr = getelementptr [64 x i8]* %in_buf_20_5_V, i64 0, i64 %tmp_12
  %in_buf_21_5_V_addr = getelementptr [64 x i8]* %in_buf_21_5_V, i64 0, i64 %tmp_12
  %in_buf_22_5_V_addr = getelementptr [64 x i8]* %in_buf_22_5_V, i64 0, i64 %tmp_12
  %in_buf_23_5_V_addr = getelementptr [64 x i8]* %in_buf_23_5_V, i64 0, i64 %tmp_12
  %in_buf_24_5_V_addr = getelementptr [64 x i8]* %in_buf_24_5_V, i64 0, i64 %tmp_12
  %in_buf_25_5_V_addr = getelementptr [64 x i8]* %in_buf_25_5_V, i64 0, i64 %tmp_12
  %in_buf_26_5_V_addr = getelementptr [64 x i8]* %in_buf_26_5_V, i64 0, i64 %tmp_12
  %in_buf_27_5_V_addr = getelementptr [64 x i8]* %in_buf_27_5_V, i64 0, i64 %tmp_12
  %in_buf_28_5_V_addr = getelementptr [64 x i8]* %in_buf_28_5_V, i64 0, i64 %tmp_12
  %in_buf_29_5_V_addr = getelementptr [64 x i8]* %in_buf_29_5_V, i64 0, i64 %tmp_12
  %in_buf_30_5_V_addr = getelementptr [64 x i8]* %in_buf_30_5_V, i64 0, i64 %tmp_12
  %in_buf_31_5_V_addr = getelementptr [64 x i8]* %in_buf_31_5_V, i64 0, i64 %tmp_12
  %in_buf_0_6_V_addr = getelementptr [64 x i8]* %in_buf_0_6_V, i64 0, i64 %tmp_12
  %in_buf_1_6_V_addr = getelementptr [64 x i8]* %in_buf_1_6_V, i64 0, i64 %tmp_12
  %in_buf_2_6_V_addr = getelementptr [64 x i8]* %in_buf_2_6_V, i64 0, i64 %tmp_12
  %in_buf_3_6_V_addr = getelementptr [64 x i8]* %in_buf_3_6_V, i64 0, i64 %tmp_12
  %in_buf_4_6_V_addr = getelementptr [64 x i8]* %in_buf_4_6_V, i64 0, i64 %tmp_12
  %in_buf_5_6_V_addr = getelementptr [64 x i8]* %in_buf_5_6_V, i64 0, i64 %tmp_12
  %in_buf_6_6_V_addr = getelementptr [64 x i8]* %in_buf_6_6_V, i64 0, i64 %tmp_12
  %in_buf_7_6_V_addr = getelementptr [64 x i8]* %in_buf_7_6_V, i64 0, i64 %tmp_12
  %in_buf_8_6_V_addr = getelementptr [64 x i8]* %in_buf_8_6_V, i64 0, i64 %tmp_12
  %in_buf_9_6_V_addr = getelementptr [64 x i8]* %in_buf_9_6_V, i64 0, i64 %tmp_12
  %in_buf_10_6_V_addr = getelementptr [64 x i8]* %in_buf_10_6_V, i64 0, i64 %tmp_12
  %in_buf_11_6_V_addr = getelementptr [64 x i8]* %in_buf_11_6_V, i64 0, i64 %tmp_12
  %in_buf_12_6_V_addr = getelementptr [64 x i8]* %in_buf_12_6_V, i64 0, i64 %tmp_12
  %in_buf_13_6_V_addr = getelementptr [64 x i8]* %in_buf_13_6_V, i64 0, i64 %tmp_12
  %in_buf_14_6_V_addr = getelementptr [64 x i8]* %in_buf_14_6_V, i64 0, i64 %tmp_12
  %in_buf_15_6_V_addr = getelementptr [64 x i8]* %in_buf_15_6_V, i64 0, i64 %tmp_12
  %in_buf_16_6_V_addr = getelementptr [64 x i8]* %in_buf_16_6_V, i64 0, i64 %tmp_12
  %in_buf_17_6_V_addr = getelementptr [64 x i8]* %in_buf_17_6_V, i64 0, i64 %tmp_12
  %in_buf_18_6_V_addr = getelementptr [64 x i8]* %in_buf_18_6_V, i64 0, i64 %tmp_12
  %in_buf_19_6_V_addr = getelementptr [64 x i8]* %in_buf_19_6_V, i64 0, i64 %tmp_12
  %in_buf_20_6_V_addr = getelementptr [64 x i8]* %in_buf_20_6_V, i64 0, i64 %tmp_12
  %in_buf_21_6_V_addr = getelementptr [64 x i8]* %in_buf_21_6_V, i64 0, i64 %tmp_12
  %in_buf_22_6_V_addr = getelementptr [64 x i8]* %in_buf_22_6_V, i64 0, i64 %tmp_12
  %in_buf_23_6_V_addr = getelementptr [64 x i8]* %in_buf_23_6_V, i64 0, i64 %tmp_12
  %in_buf_24_6_V_addr = getelementptr [64 x i8]* %in_buf_24_6_V, i64 0, i64 %tmp_12
  %in_buf_25_6_V_addr = getelementptr [64 x i8]* %in_buf_25_6_V, i64 0, i64 %tmp_12
  %in_buf_26_6_V_addr = getelementptr [64 x i8]* %in_buf_26_6_V, i64 0, i64 %tmp_12
  %in_buf_27_6_V_addr = getelementptr [64 x i8]* %in_buf_27_6_V, i64 0, i64 %tmp_12
  %in_buf_28_6_V_addr = getelementptr [64 x i8]* %in_buf_28_6_V, i64 0, i64 %tmp_12
  %in_buf_29_6_V_addr = getelementptr [64 x i8]* %in_buf_29_6_V, i64 0, i64 %tmp_12
  %in_buf_30_6_V_addr = getelementptr [64 x i8]* %in_buf_30_6_V, i64 0, i64 %tmp_12
  %in_buf_31_6_V_addr = getelementptr [64 x i8]* %in_buf_31_6_V, i64 0, i64 %tmp_12
  %in_buf_0_7_V_addr = getelementptr [64 x i8]* %in_buf_0_7_V, i64 0, i64 %tmp_12
  %in_buf_1_7_V_addr = getelementptr [64 x i8]* %in_buf_1_7_V, i64 0, i64 %tmp_12
  %in_buf_2_7_V_addr = getelementptr [64 x i8]* %in_buf_2_7_V, i64 0, i64 %tmp_12
  %in_buf_3_7_V_addr = getelementptr [64 x i8]* %in_buf_3_7_V, i64 0, i64 %tmp_12
  %in_buf_4_7_V_addr = getelementptr [64 x i8]* %in_buf_4_7_V, i64 0, i64 %tmp_12
  %in_buf_5_7_V_addr = getelementptr [64 x i8]* %in_buf_5_7_V, i64 0, i64 %tmp_12
  %in_buf_6_7_V_addr = getelementptr [64 x i8]* %in_buf_6_7_V, i64 0, i64 %tmp_12
  %in_buf_7_7_V_addr = getelementptr [64 x i8]* %in_buf_7_7_V, i64 0, i64 %tmp_12
  %in_buf_8_7_V_addr = getelementptr [64 x i8]* %in_buf_8_7_V, i64 0, i64 %tmp_12
  %in_buf_9_7_V_addr = getelementptr [64 x i8]* %in_buf_9_7_V, i64 0, i64 %tmp_12
  %in_buf_10_7_V_addr = getelementptr [64 x i8]* %in_buf_10_7_V, i64 0, i64 %tmp_12
  %in_buf_11_7_V_addr = getelementptr [64 x i8]* %in_buf_11_7_V, i64 0, i64 %tmp_12
  %in_buf_12_7_V_addr = getelementptr [64 x i8]* %in_buf_12_7_V, i64 0, i64 %tmp_12
  %in_buf_13_7_V_addr = getelementptr [64 x i8]* %in_buf_13_7_V, i64 0, i64 %tmp_12
  %in_buf_14_7_V_addr = getelementptr [64 x i8]* %in_buf_14_7_V, i64 0, i64 %tmp_12
  %in_buf_15_7_V_addr = getelementptr [64 x i8]* %in_buf_15_7_V, i64 0, i64 %tmp_12
  %in_buf_16_7_V_addr = getelementptr [64 x i8]* %in_buf_16_7_V, i64 0, i64 %tmp_12
  %in_buf_17_7_V_addr = getelementptr [64 x i8]* %in_buf_17_7_V, i64 0, i64 %tmp_12
  %in_buf_18_7_V_addr = getelementptr [64 x i8]* %in_buf_18_7_V, i64 0, i64 %tmp_12
  %in_buf_19_7_V_addr = getelementptr [64 x i8]* %in_buf_19_7_V, i64 0, i64 %tmp_12
  %in_buf_20_7_V_addr = getelementptr [64 x i8]* %in_buf_20_7_V, i64 0, i64 %tmp_12
  %in_buf_21_7_V_addr = getelementptr [64 x i8]* %in_buf_21_7_V, i64 0, i64 %tmp_12
  %in_buf_22_7_V_addr = getelementptr [64 x i8]* %in_buf_22_7_V, i64 0, i64 %tmp_12
  %in_buf_23_7_V_addr = getelementptr [64 x i8]* %in_buf_23_7_V, i64 0, i64 %tmp_12
  %in_buf_24_7_V_addr = getelementptr [64 x i8]* %in_buf_24_7_V, i64 0, i64 %tmp_12
  %in_buf_25_7_V_addr = getelementptr [64 x i8]* %in_buf_25_7_V, i64 0, i64 %tmp_12
  %in_buf_26_7_V_addr = getelementptr [64 x i8]* %in_buf_26_7_V, i64 0, i64 %tmp_12
  %in_buf_27_7_V_addr = getelementptr [64 x i8]* %in_buf_27_7_V, i64 0, i64 %tmp_12
  %in_buf_28_7_V_addr = getelementptr [64 x i8]* %in_buf_28_7_V, i64 0, i64 %tmp_12
  %in_buf_29_7_V_addr = getelementptr [64 x i8]* %in_buf_29_7_V, i64 0, i64 %tmp_12
  %in_buf_30_7_V_addr = getelementptr [64 x i8]* %in_buf_30_7_V, i64 0, i64 %tmp_12
  %in_buf_31_7_V_addr = getelementptr [64 x i8]* %in_buf_31_7_V, i64 0, i64 %tmp_12
  br label %9

; <label>:9                                       ; preds = %11, %8
  %is_idx_5 = phi i19 [ %indvars_iv257_in, %8 ], [ %is_idx_7, %11 ]
  %j2 = phi i9 [ 0, %8 ], [ %j_2, %11 ]
  %exitcond6 = icmp eq i19 %is_idx_5, %is_idx_6
  br i1 %exitcond6, label %12, label %10

; <label>:10                                      ; preds = %9
  %empty_16 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32)
  call void (...)* @_ssdm_op_SpecLoopName([9 x i8]* @p_str11) nounwind
  %tmp_21 = call i32 (...)* @_ssdm_op_SpecRegionBegin([9 x i8]* @p_str11)
  call void (...)* @_ssdm_op_SpecPipeline(i32 1, i32 1, i32 1, i32 0, [1 x i8]* @p_str1) nounwind
  %is_idx_7 = add i19 1, %is_idx_5
  %empty_17 = call { i64, i8, i8, i4, i1, i5, i5 } @_ssdm_op_Read.axis.volatile.i64P.i8P.i8P.i4P.i1P.i5P.i5P(i64* %in_stream_data_V, i8* %in_stream_keep_V, i8* %in_stream_strb_V, i4* %in_stream_user_V, i1* %in_stream_last_V, i5* %in_stream_id_V, i5* %in_stream_dest_V)
  %ret_2 = extractvalue { i64, i8, i8, i4, i1, i5, i5 } %empty_17, 0
  %tmp_261 = trunc i64 %ret_2 to i8
  %arrayNo1_cast_cast = call i6 @_ssdm_op_PartSelect.i6.i9.i32.i32(i9 %j2, i32 3, i32 8)
  %val_assign_s = call i8 @_ssdm_op_PartSelect.i8.i64.i32.i32(i64 %ret_2, i32 8, i32 15)
  %val_assign_2 = call i8 @_ssdm_op_PartSelect.i8.i64.i32.i32(i64 %ret_2, i32 16, i32 23)
  %val_assign_10 = call i8 @_ssdm_op_PartSelect.i8.i64.i32.i32(i64 %ret_2, i32 24, i32 31)
  %val_assign_11 = call i8 @_ssdm_op_PartSelect.i8.i64.i32.i32(i64 %ret_2, i32 32, i32 39)
  %val_assign_12 = call i8 @_ssdm_op_PartSelect.i8.i64.i32.i32(i64 %ret_2, i32 40, i32 47)
  %val_assign_13 = call i8 @_ssdm_op_PartSelect.i8.i64.i32.i32(i64 %ret_2, i32 48, i32 55)
  %val_assign_14 = call i8 @_ssdm_op_PartSelect.i8.i64.i32.i32(i64 %ret_2, i32 56, i32 63)
  switch i6 %arrayNo1_cast_cast, label %branch511 [
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

; <label>:11                                      ; preds = %branch511, %branch510, %branch509, %branch508, %branch507, %branch506, %branch505, %branch504, %branch503, %branch502, %branch501, %branch500, %branch499, %branch498, %branch497, %branch496, %branch495, %branch494, %branch493, %branch492, %branch491, %branch490, %branch489, %branch488, %branch487, %branch486, %branch485, %branch484, %branch483, %branch482, %branch481, %branch480
  %empty_18 = call i32 (...)* @_ssdm_op_SpecRegionEnd([9 x i8]* @p_str11, i32 %tmp_21)
  %j_2 = add i9 %j2, 8
  br label %9

; <label>:12                                      ; preds = %9
  %empty_19 = call i32 (...)* @_ssdm_op_SpecRegionEnd([9 x i8]* @p_str10, i32 %tmp_11)
  br label %7

.preheader.preheader:                             ; preds = %.preheader.preheader.preheader, %.preheader
  %indvar_flatten = phi i10 [ %indvar_flatten_next, %.preheader ], [ 0, %.preheader.preheader.preheader ]
  %i4 = phi i7 [ %tmp_23_mid2_v, %.preheader ], [ 0, %.preheader.preheader.preheader ]
  %j3 = phi i4 [ %j_4, %.preheader ], [ 0, %.preheader.preheader.preheader ]
  %exitcond_flatten = icmp eq i10 %indvar_flatten, -384
  %indvar_flatten_next = add i10 %indvar_flatten, 1
  br i1 %exitcond_flatten, label %13, label %.preheader

.preheader:                                       ; preds = %.preheader.preheader
  %i_4 = add i7 %i4, 1
  call void (...)* @_ssdm_op_SpecLoopName([6 x i8]* @L1_L2_str)
  %empty_20 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 640, i64 640, i64 640)
  %exitcond5 = icmp eq i4 %j3, -6
  %j3_mid2 = select i1 %exitcond5, i4 0, i4 %j3
  %tmp_23_mid2_v = select i1 %exitcond5, i7 %i_4, i7 %i4
  %tmp_23_mid2 = zext i7 %tmp_23_mid2_v to i64
  %tmp_16 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %tmp_23_mid2_v, i3 0)
  %p_shl_cast = zext i10 %tmp_16 to i11
  %tmp_25 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %tmp_23_mid2_v, i1 false)
  %p_shl1_cast = zext i8 %tmp_25 to i11
  %tmp_17 = add i11 %p_shl_cast, %p_shl1_cast
  %in_buf_0_0_V_addr_1 = getelementptr [64 x i8]* %in_buf_0_0_V, i64 0, i64 %tmp_23_mid2
  %in_buf_0_0_V_load = load i8* %in_buf_0_0_V_addr_1, align 1
  %lhs_V_mid2 = zext i8 %in_buf_0_0_V_load to i16
  %in_buf_0_1_V_addr_1 = getelementptr [64 x i8]* %in_buf_0_1_V, i64 0, i64 %tmp_23_mid2
  %in_buf_0_1_V_load = load i8* %in_buf_0_1_V_addr_1, align 1
  %lhs_V_1_mid2 = zext i8 %in_buf_0_1_V_load to i16
  %in_buf_0_2_V_addr_1 = getelementptr [64 x i8]* %in_buf_0_2_V, i64 0, i64 %tmp_23_mid2
  %in_buf_0_2_V_load = load i8* %in_buf_0_2_V_addr_1, align 1
  %lhs_V_2_mid2 = zext i8 %in_buf_0_2_V_load to i16
  %in_buf_0_3_V_addr_1 = getelementptr [64 x i8]* %in_buf_0_3_V, i64 0, i64 %tmp_23_mid2
  %in_buf_0_3_V_load = load i8* %in_buf_0_3_V_addr_1, align 1
  %lhs_V_3_mid2 = zext i8 %in_buf_0_3_V_load to i16
  %in_buf_0_4_V_addr_1 = getelementptr [64 x i8]* %in_buf_0_4_V, i64 0, i64 %tmp_23_mid2
  %in_buf_0_4_V_load = load i8* %in_buf_0_4_V_addr_1, align 1
  %lhs_V_4_mid2 = zext i8 %in_buf_0_4_V_load to i16
  %in_buf_0_5_V_addr_1 = getelementptr [64 x i8]* %in_buf_0_5_V, i64 0, i64 %tmp_23_mid2
  %in_buf_0_5_V_load = load i8* %in_buf_0_5_V_addr_1, align 1
  %lhs_V_5_mid2 = zext i8 %in_buf_0_5_V_load to i16
  %in_buf_0_6_V_addr_1 = getelementptr [64 x i8]* %in_buf_0_6_V, i64 0, i64 %tmp_23_mid2
  %in_buf_0_6_V_load = load i8* %in_buf_0_6_V_addr_1, align 1
  %lhs_V_6_mid2 = zext i8 %in_buf_0_6_V_load to i16
  %in_buf_0_7_V_addr_1 = getelementptr [64 x i8]* %in_buf_0_7_V, i64 0, i64 %tmp_23_mid2
  %in_buf_0_7_V_load = load i8* %in_buf_0_7_V_addr_1, align 1
  %lhs_V_7_mid2 = zext i8 %in_buf_0_7_V_load to i16
  %in_buf_1_0_V_addr_1 = getelementptr [64 x i8]* %in_buf_1_0_V, i64 0, i64 %tmp_23_mid2
  %in_buf_1_0_V_load = load i8* %in_buf_1_0_V_addr_1, align 1
  %lhs_V_8_mid2 = zext i8 %in_buf_1_0_V_load to i16
  %in_buf_1_1_V_addr_1 = getelementptr [64 x i8]* %in_buf_1_1_V, i64 0, i64 %tmp_23_mid2
  %in_buf_1_1_V_load = load i8* %in_buf_1_1_V_addr_1, align 1
  %lhs_V_9_mid2 = zext i8 %in_buf_1_1_V_load to i16
  %in_buf_1_2_V_addr_1 = getelementptr [64 x i8]* %in_buf_1_2_V, i64 0, i64 %tmp_23_mid2
  %in_buf_1_2_V_load = load i8* %in_buf_1_2_V_addr_1, align 1
  %lhs_V_mid2_21 = zext i8 %in_buf_1_2_V_load to i16
  %in_buf_1_3_V_addr_1 = getelementptr [64 x i8]* %in_buf_1_3_V, i64 0, i64 %tmp_23_mid2
  %in_buf_1_3_V_load = load i8* %in_buf_1_3_V_addr_1, align 1
  %lhs_V_10_mid2 = zext i8 %in_buf_1_3_V_load to i16
  %in_buf_1_4_V_addr_1 = getelementptr [64 x i8]* %in_buf_1_4_V, i64 0, i64 %tmp_23_mid2
  %in_buf_1_4_V_load = load i8* %in_buf_1_4_V_addr_1, align 1
  %lhs_V_11_mid2 = zext i8 %in_buf_1_4_V_load to i16
  %in_buf_1_5_V_addr_1 = getelementptr [64 x i8]* %in_buf_1_5_V, i64 0, i64 %tmp_23_mid2
  %in_buf_1_5_V_load = load i8* %in_buf_1_5_V_addr_1, align 1
  %lhs_V_12_mid2 = zext i8 %in_buf_1_5_V_load to i16
  %in_buf_1_6_V_addr_1 = getelementptr [64 x i8]* %in_buf_1_6_V, i64 0, i64 %tmp_23_mid2
  %in_buf_1_6_V_load = load i8* %in_buf_1_6_V_addr_1, align 1
  %lhs_V_13_mid2 = zext i8 %in_buf_1_6_V_load to i16
  %in_buf_1_7_V_addr_1 = getelementptr [64 x i8]* %in_buf_1_7_V, i64 0, i64 %tmp_23_mid2
  %in_buf_1_7_V_load = load i8* %in_buf_1_7_V_addr_1, align 1
  %lhs_V_14_mid2 = zext i8 %in_buf_1_7_V_load to i16
  %in_buf_2_0_V_addr_1 = getelementptr [64 x i8]* %in_buf_2_0_V, i64 0, i64 %tmp_23_mid2
  %in_buf_2_0_V_load = load i8* %in_buf_2_0_V_addr_1, align 1
  %lhs_V_15_mid2 = zext i8 %in_buf_2_0_V_load to i16
  %in_buf_2_1_V_addr_1 = getelementptr [64 x i8]* %in_buf_2_1_V, i64 0, i64 %tmp_23_mid2
  %in_buf_2_1_V_load = load i8* %in_buf_2_1_V_addr_1, align 1
  %lhs_V_16_mid2 = zext i8 %in_buf_2_1_V_load to i16
  %in_buf_2_2_V_addr_1 = getelementptr [64 x i8]* %in_buf_2_2_V, i64 0, i64 %tmp_23_mid2
  %in_buf_2_2_V_load = load i8* %in_buf_2_2_V_addr_1, align 1
  %lhs_V_17_mid2 = zext i8 %in_buf_2_2_V_load to i16
  %in_buf_2_3_V_addr_1 = getelementptr [64 x i8]* %in_buf_2_3_V, i64 0, i64 %tmp_23_mid2
  %in_buf_2_3_V_load = load i8* %in_buf_2_3_V_addr_1, align 1
  %lhs_V_18_mid2 = zext i8 %in_buf_2_3_V_load to i16
  %in_buf_2_4_V_addr_1 = getelementptr [64 x i8]* %in_buf_2_4_V, i64 0, i64 %tmp_23_mid2
  %in_buf_2_4_V_load = load i8* %in_buf_2_4_V_addr_1, align 1
  %lhs_V_19_mid2 = zext i8 %in_buf_2_4_V_load to i16
  %in_buf_2_5_V_addr_1 = getelementptr [64 x i8]* %in_buf_2_5_V, i64 0, i64 %tmp_23_mid2
  %in_buf_2_5_V_load = load i8* %in_buf_2_5_V_addr_1, align 1
  %lhs_V_20_mid2 = zext i8 %in_buf_2_5_V_load to i16
  %in_buf_2_6_V_addr_1 = getelementptr [64 x i8]* %in_buf_2_6_V, i64 0, i64 %tmp_23_mid2
  %in_buf_2_6_V_load = load i8* %in_buf_2_6_V_addr_1, align 1
  %lhs_V_21_mid2 = zext i8 %in_buf_2_6_V_load to i16
  %in_buf_2_7_V_addr_1 = getelementptr [64 x i8]* %in_buf_2_7_V, i64 0, i64 %tmp_23_mid2
  %in_buf_2_7_V_load = load i8* %in_buf_2_7_V_addr_1, align 1
  %lhs_V_22_mid2 = zext i8 %in_buf_2_7_V_load to i16
  %in_buf_3_0_V_addr_1 = getelementptr [64 x i8]* %in_buf_3_0_V, i64 0, i64 %tmp_23_mid2
  %in_buf_3_0_V_load = load i8* %in_buf_3_0_V_addr_1, align 1
  %lhs_V_23_mid2 = zext i8 %in_buf_3_0_V_load to i16
  %in_buf_3_1_V_addr_1 = getelementptr [64 x i8]* %in_buf_3_1_V, i64 0, i64 %tmp_23_mid2
  %in_buf_3_1_V_load = load i8* %in_buf_3_1_V_addr_1, align 1
  %lhs_V_24_mid2 = zext i8 %in_buf_3_1_V_load to i16
  %in_buf_3_2_V_addr_1 = getelementptr [64 x i8]* %in_buf_3_2_V, i64 0, i64 %tmp_23_mid2
  %in_buf_3_2_V_load = load i8* %in_buf_3_2_V_addr_1, align 1
  %lhs_V_25_mid2 = zext i8 %in_buf_3_2_V_load to i16
  %in_buf_3_3_V_addr_1 = getelementptr [64 x i8]* %in_buf_3_3_V, i64 0, i64 %tmp_23_mid2
  %in_buf_3_3_V_load = load i8* %in_buf_3_3_V_addr_1, align 1
  %lhs_V_26_mid2 = zext i8 %in_buf_3_3_V_load to i16
  %in_buf_3_4_V_addr_1 = getelementptr [64 x i8]* %in_buf_3_4_V, i64 0, i64 %tmp_23_mid2
  %in_buf_3_4_V_load = load i8* %in_buf_3_4_V_addr_1, align 1
  %lhs_V_27_mid2 = zext i8 %in_buf_3_4_V_load to i16
  %in_buf_3_5_V_addr_1 = getelementptr [64 x i8]* %in_buf_3_5_V, i64 0, i64 %tmp_23_mid2
  %in_buf_3_5_V_load = load i8* %in_buf_3_5_V_addr_1, align 1
  %lhs_V_28_mid2 = zext i8 %in_buf_3_5_V_load to i16
  %in_buf_3_6_V_addr_1 = getelementptr [64 x i8]* %in_buf_3_6_V, i64 0, i64 %tmp_23_mid2
  %in_buf_3_6_V_load = load i8* %in_buf_3_6_V_addr_1, align 1
  %lhs_V_29_mid2 = zext i8 %in_buf_3_6_V_load to i16
  %in_buf_3_7_V_addr_1 = getelementptr [64 x i8]* %in_buf_3_7_V, i64 0, i64 %tmp_23_mid2
  %in_buf_3_7_V_load = load i8* %in_buf_3_7_V_addr_1, align 1
  %lhs_V_30_mid2 = zext i8 %in_buf_3_7_V_load to i16
  %in_buf_4_0_V_addr_1 = getelementptr [64 x i8]* %in_buf_4_0_V, i64 0, i64 %tmp_23_mid2
  %in_buf_4_0_V_load = load i8* %in_buf_4_0_V_addr_1, align 1
  %lhs_V_31_mid2 = zext i8 %in_buf_4_0_V_load to i16
  %in_buf_4_1_V_addr_1 = getelementptr [64 x i8]* %in_buf_4_1_V, i64 0, i64 %tmp_23_mid2
  %in_buf_4_1_V_load = load i8* %in_buf_4_1_V_addr_1, align 1
  %lhs_V_32_mid2 = zext i8 %in_buf_4_1_V_load to i16
  %in_buf_4_2_V_addr_1 = getelementptr [64 x i8]* %in_buf_4_2_V, i64 0, i64 %tmp_23_mid2
  %in_buf_4_2_V_load = load i8* %in_buf_4_2_V_addr_1, align 1
  %lhs_V_33_mid2 = zext i8 %in_buf_4_2_V_load to i16
  %in_buf_4_3_V_addr_1 = getelementptr [64 x i8]* %in_buf_4_3_V, i64 0, i64 %tmp_23_mid2
  %in_buf_4_3_V_load = load i8* %in_buf_4_3_V_addr_1, align 1
  %lhs_V_34_mid2 = zext i8 %in_buf_4_3_V_load to i16
  %in_buf_4_4_V_addr_1 = getelementptr [64 x i8]* %in_buf_4_4_V, i64 0, i64 %tmp_23_mid2
  %in_buf_4_4_V_load = load i8* %in_buf_4_4_V_addr_1, align 1
  %lhs_V_35_mid2 = zext i8 %in_buf_4_4_V_load to i16
  %in_buf_4_5_V_addr_1 = getelementptr [64 x i8]* %in_buf_4_5_V, i64 0, i64 %tmp_23_mid2
  %in_buf_4_5_V_load = load i8* %in_buf_4_5_V_addr_1, align 1
  %lhs_V_36_mid2 = zext i8 %in_buf_4_5_V_load to i16
  %in_buf_4_6_V_addr_1 = getelementptr [64 x i8]* %in_buf_4_6_V, i64 0, i64 %tmp_23_mid2
  %in_buf_4_6_V_load = load i8* %in_buf_4_6_V_addr_1, align 1
  %lhs_V_37_mid2 = zext i8 %in_buf_4_6_V_load to i16
  %in_buf_4_7_V_addr_1 = getelementptr [64 x i8]* %in_buf_4_7_V, i64 0, i64 %tmp_23_mid2
  %in_buf_4_7_V_load = load i8* %in_buf_4_7_V_addr_1, align 1
  %lhs_V_38_mid2 = zext i8 %in_buf_4_7_V_load to i16
  %in_buf_5_0_V_addr_1 = getelementptr [64 x i8]* %in_buf_5_0_V, i64 0, i64 %tmp_23_mid2
  %in_buf_5_0_V_load = load i8* %in_buf_5_0_V_addr_1, align 1
  %lhs_V_39_mid2 = zext i8 %in_buf_5_0_V_load to i16
  %in_buf_5_1_V_addr_1 = getelementptr [64 x i8]* %in_buf_5_1_V, i64 0, i64 %tmp_23_mid2
  %in_buf_5_1_V_load = load i8* %in_buf_5_1_V_addr_1, align 1
  %lhs_V_40_mid2 = zext i8 %in_buf_5_1_V_load to i16
  %in_buf_5_2_V_addr_1 = getelementptr [64 x i8]* %in_buf_5_2_V, i64 0, i64 %tmp_23_mid2
  %in_buf_5_2_V_load = load i8* %in_buf_5_2_V_addr_1, align 1
  %lhs_V_41_mid2 = zext i8 %in_buf_5_2_V_load to i16
  %in_buf_5_3_V_addr_1 = getelementptr [64 x i8]* %in_buf_5_3_V, i64 0, i64 %tmp_23_mid2
  %in_buf_5_3_V_load = load i8* %in_buf_5_3_V_addr_1, align 1
  %lhs_V_42_mid2 = zext i8 %in_buf_5_3_V_load to i16
  %in_buf_5_4_V_addr_1 = getelementptr [64 x i8]* %in_buf_5_4_V, i64 0, i64 %tmp_23_mid2
  %in_buf_5_4_V_load = load i8* %in_buf_5_4_V_addr_1, align 1
  %lhs_V_43_mid2 = zext i8 %in_buf_5_4_V_load to i16
  %in_buf_5_5_V_addr_1 = getelementptr [64 x i8]* %in_buf_5_5_V, i64 0, i64 %tmp_23_mid2
  %in_buf_5_5_V_load = load i8* %in_buf_5_5_V_addr_1, align 1
  %lhs_V_44_mid2 = zext i8 %in_buf_5_5_V_load to i16
  %in_buf_5_6_V_addr_1 = getelementptr [64 x i8]* %in_buf_5_6_V, i64 0, i64 %tmp_23_mid2
  %in_buf_5_6_V_load = load i8* %in_buf_5_6_V_addr_1, align 1
  %lhs_V_45_mid2 = zext i8 %in_buf_5_6_V_load to i16
  %in_buf_5_7_V_addr_1 = getelementptr [64 x i8]* %in_buf_5_7_V, i64 0, i64 %tmp_23_mid2
  %in_buf_5_7_V_load = load i8* %in_buf_5_7_V_addr_1, align 1
  %lhs_V_46_mid2 = zext i8 %in_buf_5_7_V_load to i16
  %in_buf_6_0_V_addr_1 = getelementptr [64 x i8]* %in_buf_6_0_V, i64 0, i64 %tmp_23_mid2
  %in_buf_6_0_V_load = load i8* %in_buf_6_0_V_addr_1, align 1
  %lhs_V_47_mid2 = zext i8 %in_buf_6_0_V_load to i16
  %in_buf_6_1_V_addr_1 = getelementptr [64 x i8]* %in_buf_6_1_V, i64 0, i64 %tmp_23_mid2
  %in_buf_6_1_V_load = load i8* %in_buf_6_1_V_addr_1, align 1
  %lhs_V_48_mid2 = zext i8 %in_buf_6_1_V_load to i16
  %in_buf_6_2_V_addr_1 = getelementptr [64 x i8]* %in_buf_6_2_V, i64 0, i64 %tmp_23_mid2
  %in_buf_6_2_V_load = load i8* %in_buf_6_2_V_addr_1, align 1
  %lhs_V_49_mid2 = zext i8 %in_buf_6_2_V_load to i16
  %in_buf_6_3_V_addr_1 = getelementptr [64 x i8]* %in_buf_6_3_V, i64 0, i64 %tmp_23_mid2
  %in_buf_6_3_V_load = load i8* %in_buf_6_3_V_addr_1, align 1
  %lhs_V_50_mid2 = zext i8 %in_buf_6_3_V_load to i16
  %in_buf_6_4_V_addr_1 = getelementptr [64 x i8]* %in_buf_6_4_V, i64 0, i64 %tmp_23_mid2
  %in_buf_6_4_V_load = load i8* %in_buf_6_4_V_addr_1, align 1
  %lhs_V_51_mid2 = zext i8 %in_buf_6_4_V_load to i16
  %in_buf_6_5_V_addr_1 = getelementptr [64 x i8]* %in_buf_6_5_V, i64 0, i64 %tmp_23_mid2
  %in_buf_6_5_V_load = load i8* %in_buf_6_5_V_addr_1, align 1
  %lhs_V_52_mid2 = zext i8 %in_buf_6_5_V_load to i16
  %in_buf_6_6_V_addr_1 = getelementptr [64 x i8]* %in_buf_6_6_V, i64 0, i64 %tmp_23_mid2
  %in_buf_6_6_V_load = load i8* %in_buf_6_6_V_addr_1, align 1
  %lhs_V_53_mid2 = zext i8 %in_buf_6_6_V_load to i16
  %in_buf_6_7_V_addr_1 = getelementptr [64 x i8]* %in_buf_6_7_V, i64 0, i64 %tmp_23_mid2
  %in_buf_6_7_V_load = load i8* %in_buf_6_7_V_addr_1, align 1
  %lhs_V_54_mid2 = zext i8 %in_buf_6_7_V_load to i16
  %in_buf_7_0_V_addr_1 = getelementptr [64 x i8]* %in_buf_7_0_V, i64 0, i64 %tmp_23_mid2
  %in_buf_7_0_V_load = load i8* %in_buf_7_0_V_addr_1, align 1
  %lhs_V_55_mid2 = zext i8 %in_buf_7_0_V_load to i16
  %in_buf_7_1_V_addr_1 = getelementptr [64 x i8]* %in_buf_7_1_V, i64 0, i64 %tmp_23_mid2
  %in_buf_7_1_V_load = load i8* %in_buf_7_1_V_addr_1, align 1
  %lhs_V_56_mid2 = zext i8 %in_buf_7_1_V_load to i16
  %in_buf_7_2_V_addr_1 = getelementptr [64 x i8]* %in_buf_7_2_V, i64 0, i64 %tmp_23_mid2
  %in_buf_7_2_V_load = load i8* %in_buf_7_2_V_addr_1, align 1
  %lhs_V_57_mid2 = zext i8 %in_buf_7_2_V_load to i16
  %in_buf_7_3_V_addr_1 = getelementptr [64 x i8]* %in_buf_7_3_V, i64 0, i64 %tmp_23_mid2
  %in_buf_7_3_V_load = load i8* %in_buf_7_3_V_addr_1, align 1
  %lhs_V_58_mid2 = zext i8 %in_buf_7_3_V_load to i16
  %in_buf_7_4_V_addr_1 = getelementptr [64 x i8]* %in_buf_7_4_V, i64 0, i64 %tmp_23_mid2
  %in_buf_7_4_V_load = load i8* %in_buf_7_4_V_addr_1, align 1
  %lhs_V_59_mid2 = zext i8 %in_buf_7_4_V_load to i16
  %in_buf_7_5_V_addr_1 = getelementptr [64 x i8]* %in_buf_7_5_V, i64 0, i64 %tmp_23_mid2
  %in_buf_7_5_V_load = load i8* %in_buf_7_5_V_addr_1, align 1
  %lhs_V_60_mid2 = zext i8 %in_buf_7_5_V_load to i16
  %in_buf_7_6_V_addr_1 = getelementptr [64 x i8]* %in_buf_7_6_V, i64 0, i64 %tmp_23_mid2
  %in_buf_7_6_V_load = load i8* %in_buf_7_6_V_addr_1, align 1
  %lhs_V_61_mid2 = zext i8 %in_buf_7_6_V_load to i16
  %in_buf_7_7_V_addr_1 = getelementptr [64 x i8]* %in_buf_7_7_V, i64 0, i64 %tmp_23_mid2
  %in_buf_7_7_V_load = load i8* %in_buf_7_7_V_addr_1, align 1
  %lhs_V_62_mid2 = zext i8 %in_buf_7_7_V_load to i16
  %in_buf_8_0_V_addr_1 = getelementptr [64 x i8]* %in_buf_8_0_V, i64 0, i64 %tmp_23_mid2
  %in_buf_8_0_V_load = load i8* %in_buf_8_0_V_addr_1, align 1
  %lhs_V_63_mid2 = zext i8 %in_buf_8_0_V_load to i16
  %in_buf_8_1_V_addr_1 = getelementptr [64 x i8]* %in_buf_8_1_V, i64 0, i64 %tmp_23_mid2
  %in_buf_8_1_V_load = load i8* %in_buf_8_1_V_addr_1, align 1
  %lhs_V_64_mid2 = zext i8 %in_buf_8_1_V_load to i16
  %in_buf_8_2_V_addr_1 = getelementptr [64 x i8]* %in_buf_8_2_V, i64 0, i64 %tmp_23_mid2
  %in_buf_8_2_V_load = load i8* %in_buf_8_2_V_addr_1, align 1
  %lhs_V_65_mid2 = zext i8 %in_buf_8_2_V_load to i16
  %in_buf_8_3_V_addr_1 = getelementptr [64 x i8]* %in_buf_8_3_V, i64 0, i64 %tmp_23_mid2
  %in_buf_8_3_V_load = load i8* %in_buf_8_3_V_addr_1, align 1
  %lhs_V_66_mid2 = zext i8 %in_buf_8_3_V_load to i16
  %in_buf_8_4_V_addr_1 = getelementptr [64 x i8]* %in_buf_8_4_V, i64 0, i64 %tmp_23_mid2
  %in_buf_8_4_V_load = load i8* %in_buf_8_4_V_addr_1, align 1
  %lhs_V_67_mid2 = zext i8 %in_buf_8_4_V_load to i16
  %in_buf_8_5_V_addr_1 = getelementptr [64 x i8]* %in_buf_8_5_V, i64 0, i64 %tmp_23_mid2
  %in_buf_8_5_V_load = load i8* %in_buf_8_5_V_addr_1, align 1
  %lhs_V_68_mid2 = zext i8 %in_buf_8_5_V_load to i16
  %in_buf_8_6_V_addr_1 = getelementptr [64 x i8]* %in_buf_8_6_V, i64 0, i64 %tmp_23_mid2
  %in_buf_8_6_V_load = load i8* %in_buf_8_6_V_addr_1, align 1
  %lhs_V_69_mid2 = zext i8 %in_buf_8_6_V_load to i16
  %in_buf_8_7_V_addr_1 = getelementptr [64 x i8]* %in_buf_8_7_V, i64 0, i64 %tmp_23_mid2
  %in_buf_8_7_V_load = load i8* %in_buf_8_7_V_addr_1, align 1
  %lhs_V_70_mid2 = zext i8 %in_buf_8_7_V_load to i16
  %in_buf_9_0_V_addr_1 = getelementptr [64 x i8]* %in_buf_9_0_V, i64 0, i64 %tmp_23_mid2
  %in_buf_9_0_V_load = load i8* %in_buf_9_0_V_addr_1, align 1
  %lhs_V_71_mid2 = zext i8 %in_buf_9_0_V_load to i16
  %in_buf_9_1_V_addr_1 = getelementptr [64 x i8]* %in_buf_9_1_V, i64 0, i64 %tmp_23_mid2
  %in_buf_9_1_V_load = load i8* %in_buf_9_1_V_addr_1, align 1
  %lhs_V_72_mid2 = zext i8 %in_buf_9_1_V_load to i16
  %in_buf_9_2_V_addr_1 = getelementptr [64 x i8]* %in_buf_9_2_V, i64 0, i64 %tmp_23_mid2
  %in_buf_9_2_V_load = load i8* %in_buf_9_2_V_addr_1, align 1
  %lhs_V_73_mid2 = zext i8 %in_buf_9_2_V_load to i16
  %in_buf_9_3_V_addr_1 = getelementptr [64 x i8]* %in_buf_9_3_V, i64 0, i64 %tmp_23_mid2
  %in_buf_9_3_V_load = load i8* %in_buf_9_3_V_addr_1, align 1
  %lhs_V_74_mid2 = zext i8 %in_buf_9_3_V_load to i16
  %in_buf_9_4_V_addr_1 = getelementptr [64 x i8]* %in_buf_9_4_V, i64 0, i64 %tmp_23_mid2
  %in_buf_9_4_V_load = load i8* %in_buf_9_4_V_addr_1, align 1
  %lhs_V_75_mid2 = zext i8 %in_buf_9_4_V_load to i16
  %in_buf_9_5_V_addr_1 = getelementptr [64 x i8]* %in_buf_9_5_V, i64 0, i64 %tmp_23_mid2
  %in_buf_9_5_V_load = load i8* %in_buf_9_5_V_addr_1, align 1
  %lhs_V_76_mid2 = zext i8 %in_buf_9_5_V_load to i16
  %in_buf_9_6_V_addr_1 = getelementptr [64 x i8]* %in_buf_9_6_V, i64 0, i64 %tmp_23_mid2
  %in_buf_9_6_V_load = load i8* %in_buf_9_6_V_addr_1, align 1
  %lhs_V_77_mid2 = zext i8 %in_buf_9_6_V_load to i16
  %in_buf_9_7_V_addr_1 = getelementptr [64 x i8]* %in_buf_9_7_V, i64 0, i64 %tmp_23_mid2
  %in_buf_9_7_V_load = load i8* %in_buf_9_7_V_addr_1, align 1
  %lhs_V_78_mid2 = zext i8 %in_buf_9_7_V_load to i16
  %in_buf_10_0_V_addr_1 = getelementptr [64 x i8]* %in_buf_10_0_V, i64 0, i64 %tmp_23_mid2
  %in_buf_10_0_V_load = load i8* %in_buf_10_0_V_addr_1, align 1
  %lhs_V_79_mid2 = zext i8 %in_buf_10_0_V_load to i16
  %in_buf_10_1_V_addr_1 = getelementptr [64 x i8]* %in_buf_10_1_V, i64 0, i64 %tmp_23_mid2
  %in_buf_10_1_V_load = load i8* %in_buf_10_1_V_addr_1, align 1
  %lhs_V_80_mid2 = zext i8 %in_buf_10_1_V_load to i16
  %in_buf_10_2_V_addr_1 = getelementptr [64 x i8]* %in_buf_10_2_V, i64 0, i64 %tmp_23_mid2
  %in_buf_10_2_V_load = load i8* %in_buf_10_2_V_addr_1, align 1
  %lhs_V_81_mid2 = zext i8 %in_buf_10_2_V_load to i16
  %in_buf_10_3_V_addr_1 = getelementptr [64 x i8]* %in_buf_10_3_V, i64 0, i64 %tmp_23_mid2
  %in_buf_10_3_V_load = load i8* %in_buf_10_3_V_addr_1, align 1
  %lhs_V_82_mid2 = zext i8 %in_buf_10_3_V_load to i16
  %in_buf_10_4_V_addr_1 = getelementptr [64 x i8]* %in_buf_10_4_V, i64 0, i64 %tmp_23_mid2
  %in_buf_10_4_V_load = load i8* %in_buf_10_4_V_addr_1, align 1
  %lhs_V_83_mid2 = zext i8 %in_buf_10_4_V_load to i16
  %in_buf_10_5_V_addr_1 = getelementptr [64 x i8]* %in_buf_10_5_V, i64 0, i64 %tmp_23_mid2
  %in_buf_10_5_V_load = load i8* %in_buf_10_5_V_addr_1, align 1
  %lhs_V_84_mid2 = zext i8 %in_buf_10_5_V_load to i16
  %in_buf_10_6_V_addr_1 = getelementptr [64 x i8]* %in_buf_10_6_V, i64 0, i64 %tmp_23_mid2
  %in_buf_10_6_V_load = load i8* %in_buf_10_6_V_addr_1, align 1
  %lhs_V_85_mid2 = zext i8 %in_buf_10_6_V_load to i16
  %in_buf_10_7_V_addr_1 = getelementptr [64 x i8]* %in_buf_10_7_V, i64 0, i64 %tmp_23_mid2
  %in_buf_10_7_V_load = load i8* %in_buf_10_7_V_addr_1, align 1
  %lhs_V_86_mid2 = zext i8 %in_buf_10_7_V_load to i16
  %in_buf_11_0_V_addr_1 = getelementptr [64 x i8]* %in_buf_11_0_V, i64 0, i64 %tmp_23_mid2
  %in_buf_11_0_V_load = load i8* %in_buf_11_0_V_addr_1, align 1
  %lhs_V_87_mid2 = zext i8 %in_buf_11_0_V_load to i16
  %in_buf_11_1_V_addr_1 = getelementptr [64 x i8]* %in_buf_11_1_V, i64 0, i64 %tmp_23_mid2
  %in_buf_11_1_V_load = load i8* %in_buf_11_1_V_addr_1, align 1
  %lhs_V_88_mid2 = zext i8 %in_buf_11_1_V_load to i16
  %in_buf_11_2_V_addr_1 = getelementptr [64 x i8]* %in_buf_11_2_V, i64 0, i64 %tmp_23_mid2
  %in_buf_11_2_V_load = load i8* %in_buf_11_2_V_addr_1, align 1
  %lhs_V_89_mid2 = zext i8 %in_buf_11_2_V_load to i16
  %in_buf_11_3_V_addr_1 = getelementptr [64 x i8]* %in_buf_11_3_V, i64 0, i64 %tmp_23_mid2
  %in_buf_11_3_V_load = load i8* %in_buf_11_3_V_addr_1, align 1
  %lhs_V_90_mid2 = zext i8 %in_buf_11_3_V_load to i16
  %in_buf_11_4_V_addr_1 = getelementptr [64 x i8]* %in_buf_11_4_V, i64 0, i64 %tmp_23_mid2
  %in_buf_11_4_V_load = load i8* %in_buf_11_4_V_addr_1, align 1
  %lhs_V_91_mid2 = zext i8 %in_buf_11_4_V_load to i16
  %in_buf_11_5_V_addr_1 = getelementptr [64 x i8]* %in_buf_11_5_V, i64 0, i64 %tmp_23_mid2
  %in_buf_11_5_V_load = load i8* %in_buf_11_5_V_addr_1, align 1
  %lhs_V_92_mid2 = zext i8 %in_buf_11_5_V_load to i16
  %in_buf_11_6_V_addr_1 = getelementptr [64 x i8]* %in_buf_11_6_V, i64 0, i64 %tmp_23_mid2
  %in_buf_11_6_V_load = load i8* %in_buf_11_6_V_addr_1, align 1
  %lhs_V_93_mid2 = zext i8 %in_buf_11_6_V_load to i16
  %in_buf_11_7_V_addr_1 = getelementptr [64 x i8]* %in_buf_11_7_V, i64 0, i64 %tmp_23_mid2
  %in_buf_11_7_V_load = load i8* %in_buf_11_7_V_addr_1, align 1
  %lhs_V_94_mid2 = zext i8 %in_buf_11_7_V_load to i16
  %in_buf_12_0_V_addr_1 = getelementptr [64 x i8]* %in_buf_12_0_V, i64 0, i64 %tmp_23_mid2
  %in_buf_12_0_V_load = load i8* %in_buf_12_0_V_addr_1, align 1
  %lhs_V_95_mid2 = zext i8 %in_buf_12_0_V_load to i16
  %in_buf_12_1_V_addr_1 = getelementptr [64 x i8]* %in_buf_12_1_V, i64 0, i64 %tmp_23_mid2
  %in_buf_12_1_V_load = load i8* %in_buf_12_1_V_addr_1, align 1
  %lhs_V_96_mid2 = zext i8 %in_buf_12_1_V_load to i16
  %in_buf_12_2_V_addr_1 = getelementptr [64 x i8]* %in_buf_12_2_V, i64 0, i64 %tmp_23_mid2
  %in_buf_12_2_V_load = load i8* %in_buf_12_2_V_addr_1, align 1
  %lhs_V_97_mid2 = zext i8 %in_buf_12_2_V_load to i16
  %in_buf_12_3_V_addr_1 = getelementptr [64 x i8]* %in_buf_12_3_V, i64 0, i64 %tmp_23_mid2
  %in_buf_12_3_V_load = load i8* %in_buf_12_3_V_addr_1, align 1
  %lhs_V_98_mid2 = zext i8 %in_buf_12_3_V_load to i16
  %in_buf_12_4_V_addr_1 = getelementptr [64 x i8]* %in_buf_12_4_V, i64 0, i64 %tmp_23_mid2
  %in_buf_12_4_V_load = load i8* %in_buf_12_4_V_addr_1, align 1
  %lhs_V_99_mid2 = zext i8 %in_buf_12_4_V_load to i16
  %in_buf_12_5_V_addr_1 = getelementptr [64 x i8]* %in_buf_12_5_V, i64 0, i64 %tmp_23_mid2
  %in_buf_12_5_V_load = load i8* %in_buf_12_5_V_addr_1, align 1
  %lhs_V_100_mid2 = zext i8 %in_buf_12_5_V_load to i16
  %in_buf_12_6_V_addr_1 = getelementptr [64 x i8]* %in_buf_12_6_V, i64 0, i64 %tmp_23_mid2
  %in_buf_12_6_V_load = load i8* %in_buf_12_6_V_addr_1, align 1
  %lhs_V_101_mid2 = zext i8 %in_buf_12_6_V_load to i16
  %in_buf_12_7_V_addr_1 = getelementptr [64 x i8]* %in_buf_12_7_V, i64 0, i64 %tmp_23_mid2
  %in_buf_12_7_V_load = load i8* %in_buf_12_7_V_addr_1, align 1
  %lhs_V_102_mid2 = zext i8 %in_buf_12_7_V_load to i16
  %in_buf_13_0_V_addr_1 = getelementptr [64 x i8]* %in_buf_13_0_V, i64 0, i64 %tmp_23_mid2
  %in_buf_13_0_V_load = load i8* %in_buf_13_0_V_addr_1, align 1
  %lhs_V_103_mid2 = zext i8 %in_buf_13_0_V_load to i16
  %in_buf_13_1_V_addr_1 = getelementptr [64 x i8]* %in_buf_13_1_V, i64 0, i64 %tmp_23_mid2
  %in_buf_13_1_V_load = load i8* %in_buf_13_1_V_addr_1, align 1
  %lhs_V_104_mid2 = zext i8 %in_buf_13_1_V_load to i16
  %in_buf_13_2_V_addr_1 = getelementptr [64 x i8]* %in_buf_13_2_V, i64 0, i64 %tmp_23_mid2
  %in_buf_13_2_V_load = load i8* %in_buf_13_2_V_addr_1, align 1
  %lhs_V_105_mid2 = zext i8 %in_buf_13_2_V_load to i16
  %in_buf_13_3_V_addr_1 = getelementptr [64 x i8]* %in_buf_13_3_V, i64 0, i64 %tmp_23_mid2
  %in_buf_13_3_V_load = load i8* %in_buf_13_3_V_addr_1, align 1
  %lhs_V_106_mid2 = zext i8 %in_buf_13_3_V_load to i16
  %in_buf_13_4_V_addr_1 = getelementptr [64 x i8]* %in_buf_13_4_V, i64 0, i64 %tmp_23_mid2
  %in_buf_13_4_V_load = load i8* %in_buf_13_4_V_addr_1, align 1
  %lhs_V_107_mid2 = zext i8 %in_buf_13_4_V_load to i16
  %in_buf_13_5_V_addr_1 = getelementptr [64 x i8]* %in_buf_13_5_V, i64 0, i64 %tmp_23_mid2
  %in_buf_13_5_V_load = load i8* %in_buf_13_5_V_addr_1, align 1
  %lhs_V_108_mid2 = zext i8 %in_buf_13_5_V_load to i16
  %in_buf_13_6_V_addr_1 = getelementptr [64 x i8]* %in_buf_13_6_V, i64 0, i64 %tmp_23_mid2
  %in_buf_13_6_V_load = load i8* %in_buf_13_6_V_addr_1, align 1
  %lhs_V_109_mid2 = zext i8 %in_buf_13_6_V_load to i16
  %in_buf_13_7_V_addr_1 = getelementptr [64 x i8]* %in_buf_13_7_V, i64 0, i64 %tmp_23_mid2
  %in_buf_13_7_V_load = load i8* %in_buf_13_7_V_addr_1, align 1
  %lhs_V_110_mid2 = zext i8 %in_buf_13_7_V_load to i16
  %in_buf_14_0_V_addr_1 = getelementptr [64 x i8]* %in_buf_14_0_V, i64 0, i64 %tmp_23_mid2
  %in_buf_14_0_V_load = load i8* %in_buf_14_0_V_addr_1, align 1
  %lhs_V_111_mid2 = zext i8 %in_buf_14_0_V_load to i16
  %in_buf_14_1_V_addr_1 = getelementptr [64 x i8]* %in_buf_14_1_V, i64 0, i64 %tmp_23_mid2
  %in_buf_14_1_V_load = load i8* %in_buf_14_1_V_addr_1, align 1
  %lhs_V_112_mid2 = zext i8 %in_buf_14_1_V_load to i16
  %in_buf_14_2_V_addr_1 = getelementptr [64 x i8]* %in_buf_14_2_V, i64 0, i64 %tmp_23_mid2
  %in_buf_14_2_V_load = load i8* %in_buf_14_2_V_addr_1, align 1
  %lhs_V_113_mid2 = zext i8 %in_buf_14_2_V_load to i16
  %in_buf_14_3_V_addr_1 = getelementptr [64 x i8]* %in_buf_14_3_V, i64 0, i64 %tmp_23_mid2
  %in_buf_14_3_V_load = load i8* %in_buf_14_3_V_addr_1, align 1
  %lhs_V_114_mid2 = zext i8 %in_buf_14_3_V_load to i16
  %in_buf_14_4_V_addr_1 = getelementptr [64 x i8]* %in_buf_14_4_V, i64 0, i64 %tmp_23_mid2
  %in_buf_14_4_V_load = load i8* %in_buf_14_4_V_addr_1, align 1
  %lhs_V_115_mid2 = zext i8 %in_buf_14_4_V_load to i16
  %in_buf_14_5_V_addr_1 = getelementptr [64 x i8]* %in_buf_14_5_V, i64 0, i64 %tmp_23_mid2
  %in_buf_14_5_V_load = load i8* %in_buf_14_5_V_addr_1, align 1
  %lhs_V_116_mid2 = zext i8 %in_buf_14_5_V_load to i16
  %in_buf_14_6_V_addr_1 = getelementptr [64 x i8]* %in_buf_14_6_V, i64 0, i64 %tmp_23_mid2
  %in_buf_14_6_V_load = load i8* %in_buf_14_6_V_addr_1, align 1
  %lhs_V_117_mid2 = zext i8 %in_buf_14_6_V_load to i16
  %in_buf_14_7_V_addr_1 = getelementptr [64 x i8]* %in_buf_14_7_V, i64 0, i64 %tmp_23_mid2
  %in_buf_14_7_V_load = load i8* %in_buf_14_7_V_addr_1, align 1
  %lhs_V_118_mid2 = zext i8 %in_buf_14_7_V_load to i16
  %in_buf_15_0_V_addr_1 = getelementptr [64 x i8]* %in_buf_15_0_V, i64 0, i64 %tmp_23_mid2
  %in_buf_15_0_V_load = load i8* %in_buf_15_0_V_addr_1, align 1
  %lhs_V_119_mid2 = zext i8 %in_buf_15_0_V_load to i16
  %in_buf_15_1_V_addr_1 = getelementptr [64 x i8]* %in_buf_15_1_V, i64 0, i64 %tmp_23_mid2
  %in_buf_15_1_V_load = load i8* %in_buf_15_1_V_addr_1, align 1
  %lhs_V_120_mid2 = zext i8 %in_buf_15_1_V_load to i16
  %in_buf_15_2_V_addr_1 = getelementptr [64 x i8]* %in_buf_15_2_V, i64 0, i64 %tmp_23_mid2
  %in_buf_15_2_V_load = load i8* %in_buf_15_2_V_addr_1, align 1
  %lhs_V_121_mid2 = zext i8 %in_buf_15_2_V_load to i16
  %in_buf_15_3_V_addr_1 = getelementptr [64 x i8]* %in_buf_15_3_V, i64 0, i64 %tmp_23_mid2
  %in_buf_15_3_V_load = load i8* %in_buf_15_3_V_addr_1, align 1
  %lhs_V_122_mid2 = zext i8 %in_buf_15_3_V_load to i16
  %in_buf_15_4_V_addr_1 = getelementptr [64 x i8]* %in_buf_15_4_V, i64 0, i64 %tmp_23_mid2
  %in_buf_15_4_V_load = load i8* %in_buf_15_4_V_addr_1, align 1
  %lhs_V_123_mid2 = zext i8 %in_buf_15_4_V_load to i16
  %in_buf_15_5_V_addr_1 = getelementptr [64 x i8]* %in_buf_15_5_V, i64 0, i64 %tmp_23_mid2
  %in_buf_15_5_V_load = load i8* %in_buf_15_5_V_addr_1, align 1
  %lhs_V_124_mid2 = zext i8 %in_buf_15_5_V_load to i16
  %in_buf_15_6_V_addr_1 = getelementptr [64 x i8]* %in_buf_15_6_V, i64 0, i64 %tmp_23_mid2
  %in_buf_15_6_V_load = load i8* %in_buf_15_6_V_addr_1, align 1
  %lhs_V_125_mid2 = zext i8 %in_buf_15_6_V_load to i16
  %in_buf_15_7_V_addr_1 = getelementptr [64 x i8]* %in_buf_15_7_V, i64 0, i64 %tmp_23_mid2
  %in_buf_15_7_V_load = load i8* %in_buf_15_7_V_addr_1, align 1
  %lhs_V_126_mid2 = zext i8 %in_buf_15_7_V_load to i16
  %in_buf_16_0_V_addr_1 = getelementptr [64 x i8]* %in_buf_16_0_V, i64 0, i64 %tmp_23_mid2
  %in_buf_16_0_V_load = load i8* %in_buf_16_0_V_addr_1, align 1
  %lhs_V_127_mid2 = zext i8 %in_buf_16_0_V_load to i16
  %in_buf_16_1_V_addr_1 = getelementptr [64 x i8]* %in_buf_16_1_V, i64 0, i64 %tmp_23_mid2
  %in_buf_16_1_V_load = load i8* %in_buf_16_1_V_addr_1, align 1
  %lhs_V_128_mid2 = zext i8 %in_buf_16_1_V_load to i16
  %in_buf_16_2_V_addr_1 = getelementptr [64 x i8]* %in_buf_16_2_V, i64 0, i64 %tmp_23_mid2
  %in_buf_16_2_V_load = load i8* %in_buf_16_2_V_addr_1, align 1
  %lhs_V_129_mid2 = zext i8 %in_buf_16_2_V_load to i16
  %in_buf_16_3_V_addr_1 = getelementptr [64 x i8]* %in_buf_16_3_V, i64 0, i64 %tmp_23_mid2
  %in_buf_16_3_V_load = load i8* %in_buf_16_3_V_addr_1, align 1
  %lhs_V_130_mid2 = zext i8 %in_buf_16_3_V_load to i16
  %in_buf_16_4_V_addr_1 = getelementptr [64 x i8]* %in_buf_16_4_V, i64 0, i64 %tmp_23_mid2
  %in_buf_16_4_V_load = load i8* %in_buf_16_4_V_addr_1, align 1
  %lhs_V_131_mid2 = zext i8 %in_buf_16_4_V_load to i16
  %in_buf_16_5_V_addr_1 = getelementptr [64 x i8]* %in_buf_16_5_V, i64 0, i64 %tmp_23_mid2
  %in_buf_16_5_V_load = load i8* %in_buf_16_5_V_addr_1, align 1
  %lhs_V_132_mid2 = zext i8 %in_buf_16_5_V_load to i16
  %in_buf_16_6_V_addr_1 = getelementptr [64 x i8]* %in_buf_16_6_V, i64 0, i64 %tmp_23_mid2
  %in_buf_16_6_V_load = load i8* %in_buf_16_6_V_addr_1, align 1
  %lhs_V_133_mid2 = zext i8 %in_buf_16_6_V_load to i16
  %in_buf_16_7_V_addr_1 = getelementptr [64 x i8]* %in_buf_16_7_V, i64 0, i64 %tmp_23_mid2
  %in_buf_16_7_V_load = load i8* %in_buf_16_7_V_addr_1, align 1
  %lhs_V_134_mid2 = zext i8 %in_buf_16_7_V_load to i16
  %in_buf_17_0_V_addr_1 = getelementptr [64 x i8]* %in_buf_17_0_V, i64 0, i64 %tmp_23_mid2
  %in_buf_17_0_V_load = load i8* %in_buf_17_0_V_addr_1, align 1
  %lhs_V_135_mid2 = zext i8 %in_buf_17_0_V_load to i16
  %in_buf_17_1_V_addr_1 = getelementptr [64 x i8]* %in_buf_17_1_V, i64 0, i64 %tmp_23_mid2
  %in_buf_17_1_V_load = load i8* %in_buf_17_1_V_addr_1, align 1
  %lhs_V_136_mid2 = zext i8 %in_buf_17_1_V_load to i16
  %in_buf_17_2_V_addr_1 = getelementptr [64 x i8]* %in_buf_17_2_V, i64 0, i64 %tmp_23_mid2
  %in_buf_17_2_V_load = load i8* %in_buf_17_2_V_addr_1, align 1
  %lhs_V_137_mid2 = zext i8 %in_buf_17_2_V_load to i16
  %in_buf_17_3_V_addr_1 = getelementptr [64 x i8]* %in_buf_17_3_V, i64 0, i64 %tmp_23_mid2
  %in_buf_17_3_V_load = load i8* %in_buf_17_3_V_addr_1, align 1
  %lhs_V_138_mid2 = zext i8 %in_buf_17_3_V_load to i16
  %in_buf_17_4_V_addr_1 = getelementptr [64 x i8]* %in_buf_17_4_V, i64 0, i64 %tmp_23_mid2
  %in_buf_17_4_V_load = load i8* %in_buf_17_4_V_addr_1, align 1
  %lhs_V_139_mid2 = zext i8 %in_buf_17_4_V_load to i16
  %in_buf_17_5_V_addr_1 = getelementptr [64 x i8]* %in_buf_17_5_V, i64 0, i64 %tmp_23_mid2
  %in_buf_17_5_V_load = load i8* %in_buf_17_5_V_addr_1, align 1
  %lhs_V_140_mid2 = zext i8 %in_buf_17_5_V_load to i16
  %in_buf_17_6_V_addr_1 = getelementptr [64 x i8]* %in_buf_17_6_V, i64 0, i64 %tmp_23_mid2
  %in_buf_17_6_V_load = load i8* %in_buf_17_6_V_addr_1, align 1
  %lhs_V_141_mid2 = zext i8 %in_buf_17_6_V_load to i16
  %in_buf_17_7_V_addr_1 = getelementptr [64 x i8]* %in_buf_17_7_V, i64 0, i64 %tmp_23_mid2
  %in_buf_17_7_V_load = load i8* %in_buf_17_7_V_addr_1, align 1
  %lhs_V_142_mid2 = zext i8 %in_buf_17_7_V_load to i16
  %in_buf_18_0_V_addr_1 = getelementptr [64 x i8]* %in_buf_18_0_V, i64 0, i64 %tmp_23_mid2
  %in_buf_18_0_V_load = load i8* %in_buf_18_0_V_addr_1, align 1
  %lhs_V_143_mid2 = zext i8 %in_buf_18_0_V_load to i16
  %in_buf_18_1_V_addr_1 = getelementptr [64 x i8]* %in_buf_18_1_V, i64 0, i64 %tmp_23_mid2
  %in_buf_18_1_V_load = load i8* %in_buf_18_1_V_addr_1, align 1
  %lhs_V_144_mid2 = zext i8 %in_buf_18_1_V_load to i16
  %in_buf_18_2_V_addr_1 = getelementptr [64 x i8]* %in_buf_18_2_V, i64 0, i64 %tmp_23_mid2
  %in_buf_18_2_V_load = load i8* %in_buf_18_2_V_addr_1, align 1
  %lhs_V_145_mid2 = zext i8 %in_buf_18_2_V_load to i16
  %in_buf_18_3_V_addr_1 = getelementptr [64 x i8]* %in_buf_18_3_V, i64 0, i64 %tmp_23_mid2
  %in_buf_18_3_V_load = load i8* %in_buf_18_3_V_addr_1, align 1
  %lhs_V_146_mid2 = zext i8 %in_buf_18_3_V_load to i16
  %in_buf_18_4_V_addr_1 = getelementptr [64 x i8]* %in_buf_18_4_V, i64 0, i64 %tmp_23_mid2
  %in_buf_18_4_V_load = load i8* %in_buf_18_4_V_addr_1, align 1
  %lhs_V_147_mid2 = zext i8 %in_buf_18_4_V_load to i16
  %in_buf_18_5_V_addr_1 = getelementptr [64 x i8]* %in_buf_18_5_V, i64 0, i64 %tmp_23_mid2
  %in_buf_18_5_V_load = load i8* %in_buf_18_5_V_addr_1, align 1
  %lhs_V_148_mid2 = zext i8 %in_buf_18_5_V_load to i16
  %in_buf_18_6_V_addr_1 = getelementptr [64 x i8]* %in_buf_18_6_V, i64 0, i64 %tmp_23_mid2
  %in_buf_18_6_V_load = load i8* %in_buf_18_6_V_addr_1, align 1
  %lhs_V_149_mid2 = zext i8 %in_buf_18_6_V_load to i16
  %in_buf_18_7_V_addr_1 = getelementptr [64 x i8]* %in_buf_18_7_V, i64 0, i64 %tmp_23_mid2
  %in_buf_18_7_V_load = load i8* %in_buf_18_7_V_addr_1, align 1
  %lhs_V_150_mid2 = zext i8 %in_buf_18_7_V_load to i16
  %in_buf_19_0_V_addr_1 = getelementptr [64 x i8]* %in_buf_19_0_V, i64 0, i64 %tmp_23_mid2
  %in_buf_19_0_V_load = load i8* %in_buf_19_0_V_addr_1, align 1
  %lhs_V_151_mid2 = zext i8 %in_buf_19_0_V_load to i16
  %in_buf_19_1_V_addr_1 = getelementptr [64 x i8]* %in_buf_19_1_V, i64 0, i64 %tmp_23_mid2
  %in_buf_19_1_V_load = load i8* %in_buf_19_1_V_addr_1, align 1
  %lhs_V_152_mid2 = zext i8 %in_buf_19_1_V_load to i16
  %in_buf_19_2_V_addr_1 = getelementptr [64 x i8]* %in_buf_19_2_V, i64 0, i64 %tmp_23_mid2
  %in_buf_19_2_V_load = load i8* %in_buf_19_2_V_addr_1, align 1
  %lhs_V_153_mid2 = zext i8 %in_buf_19_2_V_load to i16
  %in_buf_19_3_V_addr_1 = getelementptr [64 x i8]* %in_buf_19_3_V, i64 0, i64 %tmp_23_mid2
  %in_buf_19_3_V_load = load i8* %in_buf_19_3_V_addr_1, align 1
  %lhs_V_154_mid2 = zext i8 %in_buf_19_3_V_load to i16
  %in_buf_19_4_V_addr_1 = getelementptr [64 x i8]* %in_buf_19_4_V, i64 0, i64 %tmp_23_mid2
  %in_buf_19_4_V_load = load i8* %in_buf_19_4_V_addr_1, align 1
  %lhs_V_155_mid2 = zext i8 %in_buf_19_4_V_load to i16
  %in_buf_19_5_V_addr_1 = getelementptr [64 x i8]* %in_buf_19_5_V, i64 0, i64 %tmp_23_mid2
  %in_buf_19_5_V_load = load i8* %in_buf_19_5_V_addr_1, align 1
  %lhs_V_156_mid2 = zext i8 %in_buf_19_5_V_load to i16
  %in_buf_19_6_V_addr_1 = getelementptr [64 x i8]* %in_buf_19_6_V, i64 0, i64 %tmp_23_mid2
  %in_buf_19_6_V_load = load i8* %in_buf_19_6_V_addr_1, align 1
  %lhs_V_157_mid2 = zext i8 %in_buf_19_6_V_load to i16
  %in_buf_19_7_V_addr_1 = getelementptr [64 x i8]* %in_buf_19_7_V, i64 0, i64 %tmp_23_mid2
  %in_buf_19_7_V_load = load i8* %in_buf_19_7_V_addr_1, align 1
  %lhs_V_158_mid2 = zext i8 %in_buf_19_7_V_load to i16
  %in_buf_20_0_V_addr_1 = getelementptr [64 x i8]* %in_buf_20_0_V, i64 0, i64 %tmp_23_mid2
  %in_buf_20_0_V_load = load i8* %in_buf_20_0_V_addr_1, align 1
  %lhs_V_159_mid2 = zext i8 %in_buf_20_0_V_load to i16
  %in_buf_20_1_V_addr_1 = getelementptr [64 x i8]* %in_buf_20_1_V, i64 0, i64 %tmp_23_mid2
  %in_buf_20_1_V_load = load i8* %in_buf_20_1_V_addr_1, align 1
  %lhs_V_160_mid2 = zext i8 %in_buf_20_1_V_load to i16
  %in_buf_20_2_V_addr_1 = getelementptr [64 x i8]* %in_buf_20_2_V, i64 0, i64 %tmp_23_mid2
  %in_buf_20_2_V_load = load i8* %in_buf_20_2_V_addr_1, align 1
  %lhs_V_161_mid2 = zext i8 %in_buf_20_2_V_load to i16
  %in_buf_20_3_V_addr_1 = getelementptr [64 x i8]* %in_buf_20_3_V, i64 0, i64 %tmp_23_mid2
  %in_buf_20_3_V_load = load i8* %in_buf_20_3_V_addr_1, align 1
  %lhs_V_162_mid2 = zext i8 %in_buf_20_3_V_load to i16
  %in_buf_20_4_V_addr_1 = getelementptr [64 x i8]* %in_buf_20_4_V, i64 0, i64 %tmp_23_mid2
  %in_buf_20_4_V_load = load i8* %in_buf_20_4_V_addr_1, align 1
  %lhs_V_163_mid2 = zext i8 %in_buf_20_4_V_load to i16
  %in_buf_20_5_V_addr_1 = getelementptr [64 x i8]* %in_buf_20_5_V, i64 0, i64 %tmp_23_mid2
  %in_buf_20_5_V_load = load i8* %in_buf_20_5_V_addr_1, align 1
  %lhs_V_164_mid2 = zext i8 %in_buf_20_5_V_load to i16
  %in_buf_20_6_V_addr_1 = getelementptr [64 x i8]* %in_buf_20_6_V, i64 0, i64 %tmp_23_mid2
  %in_buf_20_6_V_load = load i8* %in_buf_20_6_V_addr_1, align 1
  %lhs_V_165_mid2 = zext i8 %in_buf_20_6_V_load to i16
  %in_buf_20_7_V_addr_1 = getelementptr [64 x i8]* %in_buf_20_7_V, i64 0, i64 %tmp_23_mid2
  %in_buf_20_7_V_load = load i8* %in_buf_20_7_V_addr_1, align 1
  %lhs_V_166_mid2 = zext i8 %in_buf_20_7_V_load to i16
  %in_buf_21_0_V_addr_1 = getelementptr [64 x i8]* %in_buf_21_0_V, i64 0, i64 %tmp_23_mid2
  %in_buf_21_0_V_load = load i8* %in_buf_21_0_V_addr_1, align 1
  %lhs_V_167_mid2 = zext i8 %in_buf_21_0_V_load to i16
  %in_buf_21_1_V_addr_1 = getelementptr [64 x i8]* %in_buf_21_1_V, i64 0, i64 %tmp_23_mid2
  %in_buf_21_1_V_load = load i8* %in_buf_21_1_V_addr_1, align 1
  %lhs_V_168_mid2 = zext i8 %in_buf_21_1_V_load to i16
  %in_buf_21_2_V_addr_1 = getelementptr [64 x i8]* %in_buf_21_2_V, i64 0, i64 %tmp_23_mid2
  %in_buf_21_2_V_load = load i8* %in_buf_21_2_V_addr_1, align 1
  %lhs_V_169_mid2 = zext i8 %in_buf_21_2_V_load to i16
  %in_buf_21_3_V_addr_1 = getelementptr [64 x i8]* %in_buf_21_3_V, i64 0, i64 %tmp_23_mid2
  %in_buf_21_3_V_load = load i8* %in_buf_21_3_V_addr_1, align 1
  %lhs_V_170_mid2 = zext i8 %in_buf_21_3_V_load to i16
  %in_buf_21_4_V_addr_1 = getelementptr [64 x i8]* %in_buf_21_4_V, i64 0, i64 %tmp_23_mid2
  %in_buf_21_4_V_load = load i8* %in_buf_21_4_V_addr_1, align 1
  %lhs_V_171_mid2 = zext i8 %in_buf_21_4_V_load to i16
  %in_buf_21_5_V_addr_1 = getelementptr [64 x i8]* %in_buf_21_5_V, i64 0, i64 %tmp_23_mid2
  %in_buf_21_5_V_load = load i8* %in_buf_21_5_V_addr_1, align 1
  %lhs_V_172_mid2 = zext i8 %in_buf_21_5_V_load to i16
  %in_buf_21_6_V_addr_1 = getelementptr [64 x i8]* %in_buf_21_6_V, i64 0, i64 %tmp_23_mid2
  %in_buf_21_6_V_load = load i8* %in_buf_21_6_V_addr_1, align 1
  %lhs_V_173_mid2 = zext i8 %in_buf_21_6_V_load to i16
  %in_buf_21_7_V_addr_1 = getelementptr [64 x i8]* %in_buf_21_7_V, i64 0, i64 %tmp_23_mid2
  %in_buf_21_7_V_load = load i8* %in_buf_21_7_V_addr_1, align 1
  %lhs_V_174_mid2 = zext i8 %in_buf_21_7_V_load to i16
  %in_buf_22_0_V_addr_1 = getelementptr [64 x i8]* %in_buf_22_0_V, i64 0, i64 %tmp_23_mid2
  %in_buf_22_0_V_load = load i8* %in_buf_22_0_V_addr_1, align 1
  %lhs_V_175_mid2 = zext i8 %in_buf_22_0_V_load to i16
  %in_buf_22_1_V_addr_1 = getelementptr [64 x i8]* %in_buf_22_1_V, i64 0, i64 %tmp_23_mid2
  %in_buf_22_1_V_load = load i8* %in_buf_22_1_V_addr_1, align 1
  %lhs_V_176_mid2 = zext i8 %in_buf_22_1_V_load to i16
  %in_buf_22_2_V_addr_1 = getelementptr [64 x i8]* %in_buf_22_2_V, i64 0, i64 %tmp_23_mid2
  %in_buf_22_2_V_load = load i8* %in_buf_22_2_V_addr_1, align 1
  %lhs_V_177_mid2 = zext i8 %in_buf_22_2_V_load to i16
  %in_buf_22_3_V_addr_1 = getelementptr [64 x i8]* %in_buf_22_3_V, i64 0, i64 %tmp_23_mid2
  %in_buf_22_3_V_load = load i8* %in_buf_22_3_V_addr_1, align 1
  %lhs_V_178_mid2 = zext i8 %in_buf_22_3_V_load to i16
  %in_buf_22_4_V_addr_1 = getelementptr [64 x i8]* %in_buf_22_4_V, i64 0, i64 %tmp_23_mid2
  %in_buf_22_4_V_load = load i8* %in_buf_22_4_V_addr_1, align 1
  %lhs_V_179_mid2 = zext i8 %in_buf_22_4_V_load to i16
  %in_buf_22_5_V_addr_1 = getelementptr [64 x i8]* %in_buf_22_5_V, i64 0, i64 %tmp_23_mid2
  %in_buf_22_5_V_load = load i8* %in_buf_22_5_V_addr_1, align 1
  %lhs_V_180_mid2 = zext i8 %in_buf_22_5_V_load to i16
  %in_buf_22_6_V_addr_1 = getelementptr [64 x i8]* %in_buf_22_6_V, i64 0, i64 %tmp_23_mid2
  %in_buf_22_6_V_load = load i8* %in_buf_22_6_V_addr_1, align 1
  %lhs_V_181_mid2 = zext i8 %in_buf_22_6_V_load to i16
  %in_buf_22_7_V_addr_1 = getelementptr [64 x i8]* %in_buf_22_7_V, i64 0, i64 %tmp_23_mid2
  %in_buf_22_7_V_load = load i8* %in_buf_22_7_V_addr_1, align 1
  %lhs_V_182_mid2 = zext i8 %in_buf_22_7_V_load to i16
  %in_buf_23_0_V_addr_1 = getelementptr [64 x i8]* %in_buf_23_0_V, i64 0, i64 %tmp_23_mid2
  %in_buf_23_0_V_load = load i8* %in_buf_23_0_V_addr_1, align 1
  %lhs_V_183_mid2 = zext i8 %in_buf_23_0_V_load to i16
  %in_buf_23_1_V_addr_1 = getelementptr [64 x i8]* %in_buf_23_1_V, i64 0, i64 %tmp_23_mid2
  %in_buf_23_1_V_load = load i8* %in_buf_23_1_V_addr_1, align 1
  %lhs_V_184_mid2 = zext i8 %in_buf_23_1_V_load to i16
  %in_buf_23_2_V_addr_1 = getelementptr [64 x i8]* %in_buf_23_2_V, i64 0, i64 %tmp_23_mid2
  %in_buf_23_2_V_load = load i8* %in_buf_23_2_V_addr_1, align 1
  %lhs_V_185_mid2 = zext i8 %in_buf_23_2_V_load to i16
  %in_buf_23_3_V_addr_1 = getelementptr [64 x i8]* %in_buf_23_3_V, i64 0, i64 %tmp_23_mid2
  %in_buf_23_3_V_load = load i8* %in_buf_23_3_V_addr_1, align 1
  %lhs_V_186_mid2 = zext i8 %in_buf_23_3_V_load to i16
  %in_buf_23_4_V_addr_1 = getelementptr [64 x i8]* %in_buf_23_4_V, i64 0, i64 %tmp_23_mid2
  %in_buf_23_4_V_load = load i8* %in_buf_23_4_V_addr_1, align 1
  %lhs_V_187_mid2 = zext i8 %in_buf_23_4_V_load to i16
  %in_buf_23_5_V_addr_1 = getelementptr [64 x i8]* %in_buf_23_5_V, i64 0, i64 %tmp_23_mid2
  %in_buf_23_5_V_load = load i8* %in_buf_23_5_V_addr_1, align 1
  %lhs_V_188_mid2 = zext i8 %in_buf_23_5_V_load to i16
  %in_buf_23_6_V_addr_1 = getelementptr [64 x i8]* %in_buf_23_6_V, i64 0, i64 %tmp_23_mid2
  %in_buf_23_6_V_load = load i8* %in_buf_23_6_V_addr_1, align 1
  %lhs_V_189_mid2 = zext i8 %in_buf_23_6_V_load to i16
  %in_buf_23_7_V_addr_1 = getelementptr [64 x i8]* %in_buf_23_7_V, i64 0, i64 %tmp_23_mid2
  %in_buf_23_7_V_load = load i8* %in_buf_23_7_V_addr_1, align 1
  %lhs_V_190_mid2 = zext i8 %in_buf_23_7_V_load to i16
  %in_buf_24_0_V_addr_1 = getelementptr [64 x i8]* %in_buf_24_0_V, i64 0, i64 %tmp_23_mid2
  %in_buf_24_0_V_load = load i8* %in_buf_24_0_V_addr_1, align 1
  %lhs_V_191_mid2 = zext i8 %in_buf_24_0_V_load to i16
  %in_buf_24_1_V_addr_1 = getelementptr [64 x i8]* %in_buf_24_1_V, i64 0, i64 %tmp_23_mid2
  %in_buf_24_1_V_load = load i8* %in_buf_24_1_V_addr_1, align 1
  %lhs_V_192_mid2 = zext i8 %in_buf_24_1_V_load to i16
  %in_buf_24_2_V_addr_1 = getelementptr [64 x i8]* %in_buf_24_2_V, i64 0, i64 %tmp_23_mid2
  %in_buf_24_2_V_load = load i8* %in_buf_24_2_V_addr_1, align 1
  %lhs_V_193_mid2 = zext i8 %in_buf_24_2_V_load to i16
  %in_buf_24_3_V_addr_1 = getelementptr [64 x i8]* %in_buf_24_3_V, i64 0, i64 %tmp_23_mid2
  %in_buf_24_3_V_load = load i8* %in_buf_24_3_V_addr_1, align 1
  %lhs_V_194_mid2 = zext i8 %in_buf_24_3_V_load to i16
  %in_buf_24_4_V_addr_1 = getelementptr [64 x i8]* %in_buf_24_4_V, i64 0, i64 %tmp_23_mid2
  %in_buf_24_4_V_load = load i8* %in_buf_24_4_V_addr_1, align 1
  %lhs_V_195_mid2 = zext i8 %in_buf_24_4_V_load to i16
  %in_buf_24_5_V_addr_1 = getelementptr [64 x i8]* %in_buf_24_5_V, i64 0, i64 %tmp_23_mid2
  %in_buf_24_5_V_load = load i8* %in_buf_24_5_V_addr_1, align 1
  %lhs_V_196_mid2 = zext i8 %in_buf_24_5_V_load to i16
  %in_buf_24_6_V_addr_1 = getelementptr [64 x i8]* %in_buf_24_6_V, i64 0, i64 %tmp_23_mid2
  %in_buf_24_6_V_load = load i8* %in_buf_24_6_V_addr_1, align 1
  %lhs_V_197_mid2 = zext i8 %in_buf_24_6_V_load to i16
  %in_buf_24_7_V_addr_1 = getelementptr [64 x i8]* %in_buf_24_7_V, i64 0, i64 %tmp_23_mid2
  %in_buf_24_7_V_load = load i8* %in_buf_24_7_V_addr_1, align 1
  %lhs_V_198_mid2 = zext i8 %in_buf_24_7_V_load to i16
  %in_buf_25_0_V_addr_1 = getelementptr [64 x i8]* %in_buf_25_0_V, i64 0, i64 %tmp_23_mid2
  %in_buf_25_0_V_load = load i8* %in_buf_25_0_V_addr_1, align 1
  %lhs_V_199_mid2 = zext i8 %in_buf_25_0_V_load to i16
  %in_buf_25_1_V_addr_1 = getelementptr [64 x i8]* %in_buf_25_1_V, i64 0, i64 %tmp_23_mid2
  %in_buf_25_1_V_load = load i8* %in_buf_25_1_V_addr_1, align 1
  %lhs_V_200_mid2 = zext i8 %in_buf_25_1_V_load to i16
  %in_buf_25_2_V_addr_1 = getelementptr [64 x i8]* %in_buf_25_2_V, i64 0, i64 %tmp_23_mid2
  %in_buf_25_2_V_load = load i8* %in_buf_25_2_V_addr_1, align 1
  %lhs_V_201_mid2 = zext i8 %in_buf_25_2_V_load to i16
  %in_buf_25_3_V_addr_1 = getelementptr [64 x i8]* %in_buf_25_3_V, i64 0, i64 %tmp_23_mid2
  %in_buf_25_3_V_load = load i8* %in_buf_25_3_V_addr_1, align 1
  %lhs_V_202_mid2 = zext i8 %in_buf_25_3_V_load to i16
  %in_buf_25_4_V_addr_1 = getelementptr [64 x i8]* %in_buf_25_4_V, i64 0, i64 %tmp_23_mid2
  %in_buf_25_4_V_load = load i8* %in_buf_25_4_V_addr_1, align 1
  %lhs_V_203_mid2 = zext i8 %in_buf_25_4_V_load to i16
  %in_buf_25_5_V_addr_1 = getelementptr [64 x i8]* %in_buf_25_5_V, i64 0, i64 %tmp_23_mid2
  %in_buf_25_5_V_load = load i8* %in_buf_25_5_V_addr_1, align 1
  %lhs_V_204_mid2 = zext i8 %in_buf_25_5_V_load to i16
  %in_buf_25_6_V_addr_1 = getelementptr [64 x i8]* %in_buf_25_6_V, i64 0, i64 %tmp_23_mid2
  %in_buf_25_6_V_load = load i8* %in_buf_25_6_V_addr_1, align 1
  %lhs_V_205_mid2 = zext i8 %in_buf_25_6_V_load to i16
  %in_buf_25_7_V_addr_1 = getelementptr [64 x i8]* %in_buf_25_7_V, i64 0, i64 %tmp_23_mid2
  %in_buf_25_7_V_load = load i8* %in_buf_25_7_V_addr_1, align 1
  %lhs_V_206_mid2 = zext i8 %in_buf_25_7_V_load to i16
  %in_buf_26_0_V_addr_1 = getelementptr [64 x i8]* %in_buf_26_0_V, i64 0, i64 %tmp_23_mid2
  %in_buf_26_0_V_load = load i8* %in_buf_26_0_V_addr_1, align 1
  %lhs_V_207_mid2 = zext i8 %in_buf_26_0_V_load to i16
  %in_buf_26_1_V_addr_1 = getelementptr [64 x i8]* %in_buf_26_1_V, i64 0, i64 %tmp_23_mid2
  %in_buf_26_1_V_load = load i8* %in_buf_26_1_V_addr_1, align 1
  %lhs_V_208_mid2 = zext i8 %in_buf_26_1_V_load to i16
  %in_buf_26_2_V_addr_1 = getelementptr [64 x i8]* %in_buf_26_2_V, i64 0, i64 %tmp_23_mid2
  %in_buf_26_2_V_load = load i8* %in_buf_26_2_V_addr_1, align 1
  %lhs_V_209_mid2 = zext i8 %in_buf_26_2_V_load to i16
  %in_buf_26_3_V_addr_1 = getelementptr [64 x i8]* %in_buf_26_3_V, i64 0, i64 %tmp_23_mid2
  %in_buf_26_3_V_load = load i8* %in_buf_26_3_V_addr_1, align 1
  %lhs_V_210_mid2 = zext i8 %in_buf_26_3_V_load to i16
  %in_buf_26_4_V_addr_1 = getelementptr [64 x i8]* %in_buf_26_4_V, i64 0, i64 %tmp_23_mid2
  %in_buf_26_4_V_load = load i8* %in_buf_26_4_V_addr_1, align 1
  %lhs_V_211_mid2 = zext i8 %in_buf_26_4_V_load to i16
  %in_buf_26_5_V_addr_1 = getelementptr [64 x i8]* %in_buf_26_5_V, i64 0, i64 %tmp_23_mid2
  %in_buf_26_5_V_load = load i8* %in_buf_26_5_V_addr_1, align 1
  %lhs_V_212_mid2 = zext i8 %in_buf_26_5_V_load to i16
  %in_buf_26_6_V_addr_1 = getelementptr [64 x i8]* %in_buf_26_6_V, i64 0, i64 %tmp_23_mid2
  %in_buf_26_6_V_load = load i8* %in_buf_26_6_V_addr_1, align 1
  %lhs_V_213_mid2 = zext i8 %in_buf_26_6_V_load to i16
  %in_buf_26_7_V_addr_1 = getelementptr [64 x i8]* %in_buf_26_7_V, i64 0, i64 %tmp_23_mid2
  %in_buf_26_7_V_load = load i8* %in_buf_26_7_V_addr_1, align 1
  %lhs_V_214_mid2 = zext i8 %in_buf_26_7_V_load to i16
  %in_buf_27_0_V_addr_1 = getelementptr [64 x i8]* %in_buf_27_0_V, i64 0, i64 %tmp_23_mid2
  %in_buf_27_0_V_load = load i8* %in_buf_27_0_V_addr_1, align 1
  %lhs_V_215_mid2 = zext i8 %in_buf_27_0_V_load to i16
  %in_buf_27_1_V_addr_1 = getelementptr [64 x i8]* %in_buf_27_1_V, i64 0, i64 %tmp_23_mid2
  %in_buf_27_1_V_load = load i8* %in_buf_27_1_V_addr_1, align 1
  %lhs_V_216_mid2 = zext i8 %in_buf_27_1_V_load to i16
  %in_buf_27_2_V_addr_1 = getelementptr [64 x i8]* %in_buf_27_2_V, i64 0, i64 %tmp_23_mid2
  %in_buf_27_2_V_load = load i8* %in_buf_27_2_V_addr_1, align 1
  %lhs_V_217_mid2 = zext i8 %in_buf_27_2_V_load to i16
  %in_buf_27_3_V_addr_1 = getelementptr [64 x i8]* %in_buf_27_3_V, i64 0, i64 %tmp_23_mid2
  %in_buf_27_3_V_load = load i8* %in_buf_27_3_V_addr_1, align 1
  %lhs_V_218_mid2 = zext i8 %in_buf_27_3_V_load to i16
  %in_buf_27_4_V_addr_1 = getelementptr [64 x i8]* %in_buf_27_4_V, i64 0, i64 %tmp_23_mid2
  %in_buf_27_4_V_load = load i8* %in_buf_27_4_V_addr_1, align 1
  %lhs_V_219_mid2 = zext i8 %in_buf_27_4_V_load to i16
  %in_buf_27_5_V_addr_1 = getelementptr [64 x i8]* %in_buf_27_5_V, i64 0, i64 %tmp_23_mid2
  %in_buf_27_5_V_load = load i8* %in_buf_27_5_V_addr_1, align 1
  %lhs_V_220_mid2 = zext i8 %in_buf_27_5_V_load to i16
  %in_buf_27_6_V_addr_1 = getelementptr [64 x i8]* %in_buf_27_6_V, i64 0, i64 %tmp_23_mid2
  %in_buf_27_6_V_load = load i8* %in_buf_27_6_V_addr_1, align 1
  %lhs_V_221_mid2 = zext i8 %in_buf_27_6_V_load to i16
  %in_buf_27_7_V_addr_1 = getelementptr [64 x i8]* %in_buf_27_7_V, i64 0, i64 %tmp_23_mid2
  %in_buf_27_7_V_load = load i8* %in_buf_27_7_V_addr_1, align 1
  %lhs_V_222_mid2 = zext i8 %in_buf_27_7_V_load to i16
  %in_buf_28_0_V_addr_1 = getelementptr [64 x i8]* %in_buf_28_0_V, i64 0, i64 %tmp_23_mid2
  %in_buf_28_0_V_load = load i8* %in_buf_28_0_V_addr_1, align 1
  %lhs_V_223_mid2 = zext i8 %in_buf_28_0_V_load to i16
  %in_buf_28_1_V_addr_1 = getelementptr [64 x i8]* %in_buf_28_1_V, i64 0, i64 %tmp_23_mid2
  %in_buf_28_1_V_load = load i8* %in_buf_28_1_V_addr_1, align 1
  %lhs_V_224_mid2 = zext i8 %in_buf_28_1_V_load to i16
  %in_buf_28_2_V_addr_1 = getelementptr [64 x i8]* %in_buf_28_2_V, i64 0, i64 %tmp_23_mid2
  %in_buf_28_2_V_load = load i8* %in_buf_28_2_V_addr_1, align 1
  %lhs_V_225_mid2 = zext i8 %in_buf_28_2_V_load to i16
  %in_buf_28_3_V_addr_1 = getelementptr [64 x i8]* %in_buf_28_3_V, i64 0, i64 %tmp_23_mid2
  %in_buf_28_3_V_load = load i8* %in_buf_28_3_V_addr_1, align 1
  %lhs_V_226_mid2 = zext i8 %in_buf_28_3_V_load to i16
  %in_buf_28_4_V_addr_1 = getelementptr [64 x i8]* %in_buf_28_4_V, i64 0, i64 %tmp_23_mid2
  %in_buf_28_4_V_load = load i8* %in_buf_28_4_V_addr_1, align 1
  %lhs_V_227_mid2 = zext i8 %in_buf_28_4_V_load to i16
  %in_buf_28_5_V_addr_1 = getelementptr [64 x i8]* %in_buf_28_5_V, i64 0, i64 %tmp_23_mid2
  %in_buf_28_5_V_load = load i8* %in_buf_28_5_V_addr_1, align 1
  %lhs_V_228_mid2 = zext i8 %in_buf_28_5_V_load to i16
  %in_buf_28_6_V_addr_1 = getelementptr [64 x i8]* %in_buf_28_6_V, i64 0, i64 %tmp_23_mid2
  %in_buf_28_6_V_load = load i8* %in_buf_28_6_V_addr_1, align 1
  %lhs_V_229_mid2 = zext i8 %in_buf_28_6_V_load to i16
  %in_buf_28_7_V_addr_1 = getelementptr [64 x i8]* %in_buf_28_7_V, i64 0, i64 %tmp_23_mid2
  %in_buf_28_7_V_load = load i8* %in_buf_28_7_V_addr_1, align 1
  %lhs_V_230_mid2 = zext i8 %in_buf_28_7_V_load to i16
  %in_buf_29_0_V_addr_1 = getelementptr [64 x i8]* %in_buf_29_0_V, i64 0, i64 %tmp_23_mid2
  %in_buf_29_0_V_load = load i8* %in_buf_29_0_V_addr_1, align 1
  %lhs_V_231_mid2 = zext i8 %in_buf_29_0_V_load to i16
  %in_buf_29_1_V_addr_1 = getelementptr [64 x i8]* %in_buf_29_1_V, i64 0, i64 %tmp_23_mid2
  %in_buf_29_1_V_load = load i8* %in_buf_29_1_V_addr_1, align 1
  %lhs_V_232_mid2 = zext i8 %in_buf_29_1_V_load to i16
  %in_buf_29_2_V_addr_1 = getelementptr [64 x i8]* %in_buf_29_2_V, i64 0, i64 %tmp_23_mid2
  %in_buf_29_2_V_load = load i8* %in_buf_29_2_V_addr_1, align 1
  %lhs_V_233_mid2 = zext i8 %in_buf_29_2_V_load to i16
  %in_buf_29_3_V_addr_1 = getelementptr [64 x i8]* %in_buf_29_3_V, i64 0, i64 %tmp_23_mid2
  %in_buf_29_3_V_load = load i8* %in_buf_29_3_V_addr_1, align 1
  %lhs_V_234_mid2 = zext i8 %in_buf_29_3_V_load to i16
  %in_buf_29_4_V_addr_1 = getelementptr [64 x i8]* %in_buf_29_4_V, i64 0, i64 %tmp_23_mid2
  %in_buf_29_4_V_load = load i8* %in_buf_29_4_V_addr_1, align 1
  %lhs_V_235_mid2 = zext i8 %in_buf_29_4_V_load to i16
  %in_buf_29_5_V_addr_1 = getelementptr [64 x i8]* %in_buf_29_5_V, i64 0, i64 %tmp_23_mid2
  %in_buf_29_5_V_load = load i8* %in_buf_29_5_V_addr_1, align 1
  %lhs_V_236_mid2 = zext i8 %in_buf_29_5_V_load to i16
  %in_buf_29_6_V_addr_1 = getelementptr [64 x i8]* %in_buf_29_6_V, i64 0, i64 %tmp_23_mid2
  %in_buf_29_6_V_load = load i8* %in_buf_29_6_V_addr_1, align 1
  %lhs_V_237_mid2 = zext i8 %in_buf_29_6_V_load to i16
  %in_buf_29_7_V_addr_1 = getelementptr [64 x i8]* %in_buf_29_7_V, i64 0, i64 %tmp_23_mid2
  %in_buf_29_7_V_load = load i8* %in_buf_29_7_V_addr_1, align 1
  %lhs_V_238_mid2 = zext i8 %in_buf_29_7_V_load to i16
  %in_buf_30_0_V_addr_1 = getelementptr [64 x i8]* %in_buf_30_0_V, i64 0, i64 %tmp_23_mid2
  %in_buf_30_0_V_load = load i8* %in_buf_30_0_V_addr_1, align 1
  %lhs_V_239_mid2 = zext i8 %in_buf_30_0_V_load to i16
  %in_buf_30_1_V_addr_1 = getelementptr [64 x i8]* %in_buf_30_1_V, i64 0, i64 %tmp_23_mid2
  %in_buf_30_1_V_load = load i8* %in_buf_30_1_V_addr_1, align 1
  %lhs_V_240_mid2 = zext i8 %in_buf_30_1_V_load to i16
  %in_buf_30_2_V_addr_1 = getelementptr [64 x i8]* %in_buf_30_2_V, i64 0, i64 %tmp_23_mid2
  %in_buf_30_2_V_load = load i8* %in_buf_30_2_V_addr_1, align 1
  %lhs_V_241_mid2 = zext i8 %in_buf_30_2_V_load to i16
  %in_buf_30_3_V_addr_1 = getelementptr [64 x i8]* %in_buf_30_3_V, i64 0, i64 %tmp_23_mid2
  %in_buf_30_3_V_load = load i8* %in_buf_30_3_V_addr_1, align 1
  %lhs_V_242_mid2 = zext i8 %in_buf_30_3_V_load to i16
  %in_buf_30_4_V_addr_1 = getelementptr [64 x i8]* %in_buf_30_4_V, i64 0, i64 %tmp_23_mid2
  %in_buf_30_4_V_load = load i8* %in_buf_30_4_V_addr_1, align 1
  %lhs_V_243_mid2 = zext i8 %in_buf_30_4_V_load to i16
  %in_buf_30_5_V_addr_1 = getelementptr [64 x i8]* %in_buf_30_5_V, i64 0, i64 %tmp_23_mid2
  %in_buf_30_5_V_load = load i8* %in_buf_30_5_V_addr_1, align 1
  %lhs_V_244_mid2 = zext i8 %in_buf_30_5_V_load to i16
  %in_buf_30_6_V_addr_1 = getelementptr [64 x i8]* %in_buf_30_6_V, i64 0, i64 %tmp_23_mid2
  %in_buf_30_6_V_load = load i8* %in_buf_30_6_V_addr_1, align 1
  %lhs_V_245_mid2 = zext i8 %in_buf_30_6_V_load to i16
  %in_buf_30_7_V_addr_1 = getelementptr [64 x i8]* %in_buf_30_7_V, i64 0, i64 %tmp_23_mid2
  %in_buf_30_7_V_load = load i8* %in_buf_30_7_V_addr_1, align 1
  %lhs_V_246_mid2 = zext i8 %in_buf_30_7_V_load to i16
  %in_buf_31_0_V_addr_1 = getelementptr [64 x i8]* %in_buf_31_0_V, i64 0, i64 %tmp_23_mid2
  %in_buf_31_0_V_load = load i8* %in_buf_31_0_V_addr_1, align 1
  %lhs_V_247_mid2 = zext i8 %in_buf_31_0_V_load to i16
  %in_buf_31_1_V_addr_1 = getelementptr [64 x i8]* %in_buf_31_1_V, i64 0, i64 %tmp_23_mid2
  %in_buf_31_1_V_load = load i8* %in_buf_31_1_V_addr_1, align 1
  %lhs_V_248_mid2 = zext i8 %in_buf_31_1_V_load to i16
  %in_buf_31_2_V_addr_1 = getelementptr [64 x i8]* %in_buf_31_2_V, i64 0, i64 %tmp_23_mid2
  %in_buf_31_2_V_load = load i8* %in_buf_31_2_V_addr_1, align 1
  %lhs_V_249_mid2 = zext i8 %in_buf_31_2_V_load to i16
  %in_buf_31_3_V_addr_1 = getelementptr [64 x i8]* %in_buf_31_3_V, i64 0, i64 %tmp_23_mid2
  %in_buf_31_3_V_load = load i8* %in_buf_31_3_V_addr_1, align 1
  %lhs_V_250_mid2 = zext i8 %in_buf_31_3_V_load to i16
  %in_buf_31_4_V_addr_1 = getelementptr [64 x i8]* %in_buf_31_4_V, i64 0, i64 %tmp_23_mid2
  %in_buf_31_4_V_load = load i8* %in_buf_31_4_V_addr_1, align 1
  %lhs_V_251_mid2 = zext i8 %in_buf_31_4_V_load to i16
  %in_buf_31_5_V_addr_1 = getelementptr [64 x i8]* %in_buf_31_5_V, i64 0, i64 %tmp_23_mid2
  %in_buf_31_5_V_load = load i8* %in_buf_31_5_V_addr_1, align 1
  %lhs_V_252_mid2 = zext i8 %in_buf_31_5_V_load to i16
  %in_buf_31_6_V_addr_1 = getelementptr [64 x i8]* %in_buf_31_6_V, i64 0, i64 %tmp_23_mid2
  %in_buf_31_6_V_load = load i8* %in_buf_31_6_V_addr_1, align 1
  %lhs_V_253_mid2 = zext i8 %in_buf_31_6_V_load to i16
  %in_buf_31_7_V_addr_1 = getelementptr [64 x i8]* %in_buf_31_7_V, i64 0, i64 %tmp_23_mid2
  %in_buf_31_7_V_load = load i8* %in_buf_31_7_V_addr_1, align 1
  %lhs_V_254_mid2 = zext i8 %in_buf_31_7_V_load to i16
  call void (...)* @_ssdm_op_SpecLoopName([3 x i8]* @p_str13) nounwind
  %tmp_18 = call i32 (...)* @_ssdm_op_SpecRegionBegin([3 x i8]* @p_str13)
  call void (...)* @_ssdm_op_SpecPipeline(i32 1, i32 1, i32 1, i32 0, [1 x i8]* @p_str1) nounwind
  %tmp_19 = zext i4 %j3_mid2 to i64
  %tmp_19_cast = zext i4 %j3_mid2 to i11
  %tmp_20 = add i11 %tmp_19_cast, %tmp_17
  %tmp_20_cast = zext i11 %tmp_20 to i64
  %out_buf_V_addr_2 = getelementptr [640 x i32]* %out_buf_V, i64 0, i64 %tmp_20_cast
  %offset_buf_V_addr_2 = getelementptr [10 x i32]* %offset_buf_V, i64 0, i64 %tmp_19
  %tmp_V = load i32* %offset_buf_V_addr_2, align 4
  %weight_buf_0_0_V_a_1 = getelementptr [10 x i8]* %weight_buf_0_0_V, i64 0, i64 %tmp_19
  %weight_buf_0_0_V_l = load i8* %weight_buf_0_0_V_a_1, align 1
  %rhs_V = sext i8 %weight_buf_0_0_V_l to i16
  %r_V = mul i16 %lhs_V_mid2, %rhs_V
  %mult_V = sext i16 %r_V to i32
  %weight_buf_0_1_V_a_1 = getelementptr [10 x i8]* %weight_buf_0_1_V, i64 0, i64 %tmp_19
  %weight_buf_0_1_V_l = load i8* %weight_buf_0_1_V_a_1, align 1
  %rhs_V_1 = sext i8 %weight_buf_0_1_V_l to i16
  %r_V_1 = mul i16 %lhs_V_1_mid2, %rhs_V_1
  %mult_V_1_cast = sext i16 %r_V_1 to i17
  %weight_buf_0_2_V_a_1 = getelementptr [10 x i8]* %weight_buf_0_2_V, i64 0, i64 %tmp_19
  %weight_buf_0_2_V_l = load i8* %weight_buf_0_2_V_a_1, align 1
  %rhs_V_2 = sext i8 %weight_buf_0_2_V_l to i16
  %r_V_2 = mul i16 %lhs_V_2_mid2, %rhs_V_2
  %mult_V_2_cast = sext i16 %r_V_2 to i17
  %weight_buf_0_3_V_a_1 = getelementptr [10 x i8]* %weight_buf_0_3_V, i64 0, i64 %tmp_19
  %weight_buf_0_3_V_l = load i8* %weight_buf_0_3_V_a_1, align 1
  %rhs_V_3 = sext i8 %weight_buf_0_3_V_l to i16
  %r_V_3 = mul i16 %lhs_V_3_mid2, %rhs_V_3
  %mult_V_3_cast = sext i16 %r_V_3 to i17
  %weight_buf_0_4_V_a_1 = getelementptr [10 x i8]* %weight_buf_0_4_V, i64 0, i64 %tmp_19
  %weight_buf_0_4_V_l = load i8* %weight_buf_0_4_V_a_1, align 1
  %rhs_V_4 = sext i8 %weight_buf_0_4_V_l to i16
  %r_V_4 = mul i16 %lhs_V_4_mid2, %rhs_V_4
  %mult_V_4_cast = sext i16 %r_V_4 to i17
  %weight_buf_0_5_V_a_1 = getelementptr [10 x i8]* %weight_buf_0_5_V, i64 0, i64 %tmp_19
  %weight_buf_0_5_V_l = load i8* %weight_buf_0_5_V_a_1, align 1
  %rhs_V_5 = sext i8 %weight_buf_0_5_V_l to i16
  %r_V_5 = mul i16 %lhs_V_5_mid2, %rhs_V_5
  %mult_V_5_cast = sext i16 %r_V_5 to i17
  %weight_buf_0_6_V_a_1 = getelementptr [10 x i8]* %weight_buf_0_6_V, i64 0, i64 %tmp_19
  %weight_buf_0_6_V_l = load i8* %weight_buf_0_6_V_a_1, align 1
  %rhs_V_6 = sext i8 %weight_buf_0_6_V_l to i16
  %r_V_6 = mul i16 %lhs_V_6_mid2, %rhs_V_6
  %mult_V_6_cast = sext i16 %r_V_6 to i17
  %weight_buf_0_7_V_a_1 = getelementptr [10 x i8]* %weight_buf_0_7_V, i64 0, i64 %tmp_19
  %weight_buf_0_7_V_l = load i8* %weight_buf_0_7_V_a_1, align 1
  %rhs_V_7 = sext i8 %weight_buf_0_7_V_l to i16
  %r_V_7 = mul i16 %lhs_V_7_mid2, %rhs_V_7
  %mult_V_7_cast = sext i16 %r_V_7 to i17
  %weight_buf_1_0_V_a_1 = getelementptr [10 x i8]* %weight_buf_1_0_V, i64 0, i64 %tmp_19
  %weight_buf_1_0_V_l = load i8* %weight_buf_1_0_V_a_1, align 1
  %rhs_V_8 = sext i8 %weight_buf_1_0_V_l to i16
  %r_V_8 = mul i16 %lhs_V_8_mid2, %rhs_V_8
  %mult_V_8_cast = sext i16 %r_V_8 to i17
  %weight_buf_1_1_V_a_1 = getelementptr [10 x i8]* %weight_buf_1_1_V, i64 0, i64 %tmp_19
  %weight_buf_1_1_V_l = load i8* %weight_buf_1_1_V_a_1, align 1
  %rhs_V_9 = sext i8 %weight_buf_1_1_V_l to i16
  %r_V_9 = mul i16 %lhs_V_9_mid2, %rhs_V_9
  %mult_V_9_cast = sext i16 %r_V_9 to i17
  %weight_buf_1_2_V_a_1 = getelementptr [10 x i8]* %weight_buf_1_2_V, i64 0, i64 %tmp_19
  %weight_buf_1_2_V_l = load i8* %weight_buf_1_2_V_a_1, align 1
  %rhs_V_s = sext i8 %weight_buf_1_2_V_l to i16
  %r_V_s = mul i16 %lhs_V_mid2_21, %rhs_V_s
  %mult_V_cast = sext i16 %r_V_s to i17
  %weight_buf_1_3_V_a_1 = getelementptr [10 x i8]* %weight_buf_1_3_V, i64 0, i64 %tmp_19
  %weight_buf_1_3_V_l = load i8* %weight_buf_1_3_V_a_1, align 1
  %rhs_V_10 = sext i8 %weight_buf_1_3_V_l to i16
  %r_V_10 = mul i16 %lhs_V_10_mid2, %rhs_V_10
  %mult_V_10_cast = sext i16 %r_V_10 to i17
  %weight_buf_1_4_V_a_1 = getelementptr [10 x i8]* %weight_buf_1_4_V, i64 0, i64 %tmp_19
  %weight_buf_1_4_V_l = load i8* %weight_buf_1_4_V_a_1, align 1
  %rhs_V_11 = sext i8 %weight_buf_1_4_V_l to i16
  %r_V_11 = mul i16 %lhs_V_11_mid2, %rhs_V_11
  %mult_V_11_cast = sext i16 %r_V_11 to i17
  %weight_buf_1_5_V_a_1 = getelementptr [10 x i8]* %weight_buf_1_5_V, i64 0, i64 %tmp_19
  %weight_buf_1_5_V_l = load i8* %weight_buf_1_5_V_a_1, align 1
  %rhs_V_12 = sext i8 %weight_buf_1_5_V_l to i16
  %r_V_12 = mul i16 %lhs_V_12_mid2, %rhs_V_12
  %mult_V_12_cast = sext i16 %r_V_12 to i17
  %weight_buf_1_6_V_a_1 = getelementptr [10 x i8]* %weight_buf_1_6_V, i64 0, i64 %tmp_19
  %weight_buf_1_6_V_l = load i8* %weight_buf_1_6_V_a_1, align 1
  %rhs_V_13 = sext i8 %weight_buf_1_6_V_l to i16
  %r_V_13 = mul i16 %lhs_V_13_mid2, %rhs_V_13
  %mult_V_13_cast = sext i16 %r_V_13 to i17
  %weight_buf_1_7_V_a_1 = getelementptr [10 x i8]* %weight_buf_1_7_V, i64 0, i64 %tmp_19
  %weight_buf_1_7_V_l = load i8* %weight_buf_1_7_V_a_1, align 1
  %rhs_V_14 = sext i8 %weight_buf_1_7_V_l to i16
  %r_V_14 = mul i16 %lhs_V_14_mid2, %rhs_V_14
  %mult_V_14_cast = sext i16 %r_V_14 to i17
  %weight_buf_2_0_V_a_1 = getelementptr [10 x i8]* %weight_buf_2_0_V, i64 0, i64 %tmp_19
  %weight_buf_2_0_V_l = load i8* %weight_buf_2_0_V_a_1, align 1
  %rhs_V_15 = sext i8 %weight_buf_2_0_V_l to i16
  %r_V_15 = mul i16 %lhs_V_15_mid2, %rhs_V_15
  %mult_V_15_cast = sext i16 %r_V_15 to i17
  %weight_buf_2_1_V_a_1 = getelementptr [10 x i8]* %weight_buf_2_1_V, i64 0, i64 %tmp_19
  %weight_buf_2_1_V_l = load i8* %weight_buf_2_1_V_a_1, align 1
  %rhs_V_16 = sext i8 %weight_buf_2_1_V_l to i16
  %r_V_16 = mul i16 %lhs_V_16_mid2, %rhs_V_16
  %mult_V_16_cast = sext i16 %r_V_16 to i17
  %weight_buf_2_2_V_a_1 = getelementptr [10 x i8]* %weight_buf_2_2_V, i64 0, i64 %tmp_19
  %weight_buf_2_2_V_l = load i8* %weight_buf_2_2_V_a_1, align 1
  %rhs_V_17 = sext i8 %weight_buf_2_2_V_l to i16
  %r_V_17 = mul i16 %lhs_V_17_mid2, %rhs_V_17
  %mult_V_17_cast = sext i16 %r_V_17 to i17
  %weight_buf_2_3_V_a_1 = getelementptr [10 x i8]* %weight_buf_2_3_V, i64 0, i64 %tmp_19
  %weight_buf_2_3_V_l = load i8* %weight_buf_2_3_V_a_1, align 1
  %rhs_V_18 = sext i8 %weight_buf_2_3_V_l to i16
  %r_V_18 = mul i16 %lhs_V_18_mid2, %rhs_V_18
  %mult_V_18_cast = sext i16 %r_V_18 to i17
  %weight_buf_2_4_V_a_1 = getelementptr [10 x i8]* %weight_buf_2_4_V, i64 0, i64 %tmp_19
  %weight_buf_2_4_V_l = load i8* %weight_buf_2_4_V_a_1, align 1
  %rhs_V_19 = sext i8 %weight_buf_2_4_V_l to i16
  %r_V_19 = mul i16 %lhs_V_19_mid2, %rhs_V_19
  %mult_V_19_cast = sext i16 %r_V_19 to i17
  %weight_buf_2_5_V_a_1 = getelementptr [10 x i8]* %weight_buf_2_5_V, i64 0, i64 %tmp_19
  %weight_buf_2_5_V_l = load i8* %weight_buf_2_5_V_a_1, align 1
  %rhs_V_20 = sext i8 %weight_buf_2_5_V_l to i16
  %r_V_20 = mul i16 %lhs_V_20_mid2, %rhs_V_20
  %mult_V_20_cast = sext i16 %r_V_20 to i17
  %weight_buf_2_6_V_a_1 = getelementptr [10 x i8]* %weight_buf_2_6_V, i64 0, i64 %tmp_19
  %weight_buf_2_6_V_l = load i8* %weight_buf_2_6_V_a_1, align 1
  %rhs_V_21 = sext i8 %weight_buf_2_6_V_l to i16
  %r_V_21 = mul i16 %lhs_V_21_mid2, %rhs_V_21
  %mult_V_21_cast = sext i16 %r_V_21 to i17
  %weight_buf_2_7_V_a_1 = getelementptr [10 x i8]* %weight_buf_2_7_V, i64 0, i64 %tmp_19
  %weight_buf_2_7_V_l = load i8* %weight_buf_2_7_V_a_1, align 1
  %rhs_V_22 = sext i8 %weight_buf_2_7_V_l to i16
  %r_V_22 = mul i16 %lhs_V_22_mid2, %rhs_V_22
  %mult_V_22_cast = sext i16 %r_V_22 to i17
  %weight_buf_3_0_V_a_1 = getelementptr [10 x i8]* %weight_buf_3_0_V, i64 0, i64 %tmp_19
  %weight_buf_3_0_V_l = load i8* %weight_buf_3_0_V_a_1, align 1
  %rhs_V_23 = sext i8 %weight_buf_3_0_V_l to i16
  %r_V_23 = mul i16 %lhs_V_23_mid2, %rhs_V_23
  %mult_V_23_cast = sext i16 %r_V_23 to i17
  %weight_buf_3_1_V_a_1 = getelementptr [10 x i8]* %weight_buf_3_1_V, i64 0, i64 %tmp_19
  %weight_buf_3_1_V_l = load i8* %weight_buf_3_1_V_a_1, align 1
  %rhs_V_24 = sext i8 %weight_buf_3_1_V_l to i16
  %r_V_24 = mul i16 %lhs_V_24_mid2, %rhs_V_24
  %mult_V_24_cast = sext i16 %r_V_24 to i17
  %weight_buf_3_2_V_a_1 = getelementptr [10 x i8]* %weight_buf_3_2_V, i64 0, i64 %tmp_19
  %weight_buf_3_2_V_l = load i8* %weight_buf_3_2_V_a_1, align 1
  %rhs_V_25 = sext i8 %weight_buf_3_2_V_l to i16
  %r_V_25 = mul i16 %lhs_V_25_mid2, %rhs_V_25
  %mult_V_25_cast = sext i16 %r_V_25 to i17
  %weight_buf_3_3_V_a_1 = getelementptr [10 x i8]* %weight_buf_3_3_V, i64 0, i64 %tmp_19
  %weight_buf_3_3_V_l = load i8* %weight_buf_3_3_V_a_1, align 1
  %rhs_V_26 = sext i8 %weight_buf_3_3_V_l to i16
  %r_V_26 = mul i16 %lhs_V_26_mid2, %rhs_V_26
  %mult_V_26_cast = sext i16 %r_V_26 to i17
  %weight_buf_3_4_V_a_1 = getelementptr [10 x i8]* %weight_buf_3_4_V, i64 0, i64 %tmp_19
  %weight_buf_3_4_V_l = load i8* %weight_buf_3_4_V_a_1, align 1
  %rhs_V_27 = sext i8 %weight_buf_3_4_V_l to i16
  %r_V_27 = mul i16 %lhs_V_27_mid2, %rhs_V_27
  %mult_V_27_cast = sext i16 %r_V_27 to i17
  %weight_buf_3_5_V_a_1 = getelementptr [10 x i8]* %weight_buf_3_5_V, i64 0, i64 %tmp_19
  %weight_buf_3_5_V_l = load i8* %weight_buf_3_5_V_a_1, align 1
  %rhs_V_28 = sext i8 %weight_buf_3_5_V_l to i16
  %r_V_28 = mul i16 %lhs_V_28_mid2, %rhs_V_28
  %mult_V_28_cast = sext i16 %r_V_28 to i17
  %weight_buf_3_6_V_a_1 = getelementptr [10 x i8]* %weight_buf_3_6_V, i64 0, i64 %tmp_19
  %weight_buf_3_6_V_l = load i8* %weight_buf_3_6_V_a_1, align 1
  %rhs_V_29 = sext i8 %weight_buf_3_6_V_l to i16
  %r_V_29 = mul i16 %lhs_V_29_mid2, %rhs_V_29
  %mult_V_29_cast = sext i16 %r_V_29 to i17
  %weight_buf_3_7_V_a_1 = getelementptr [10 x i8]* %weight_buf_3_7_V, i64 0, i64 %tmp_19
  %weight_buf_3_7_V_l = load i8* %weight_buf_3_7_V_a_1, align 1
  %rhs_V_30 = sext i8 %weight_buf_3_7_V_l to i16
  %r_V_30 = mul i16 %lhs_V_30_mid2, %rhs_V_30
  %mult_V_30_cast = sext i16 %r_V_30 to i17
  %weight_buf_4_0_V_a_1 = getelementptr [10 x i8]* %weight_buf_4_0_V, i64 0, i64 %tmp_19
  %weight_buf_4_0_V_l = load i8* %weight_buf_4_0_V_a_1, align 1
  %rhs_V_31 = sext i8 %weight_buf_4_0_V_l to i16
  %r_V_31 = mul i16 %lhs_V_31_mid2, %rhs_V_31
  %mult_V_31_cast = sext i16 %r_V_31 to i17
  %weight_buf_4_1_V_a_1 = getelementptr [10 x i8]* %weight_buf_4_1_V, i64 0, i64 %tmp_19
  %weight_buf_4_1_V_l = load i8* %weight_buf_4_1_V_a_1, align 1
  %rhs_V_32 = sext i8 %weight_buf_4_1_V_l to i16
  %r_V_32 = mul i16 %lhs_V_32_mid2, %rhs_V_32
  %mult_V_32_cast = sext i16 %r_V_32 to i17
  %weight_buf_4_2_V_a_1 = getelementptr [10 x i8]* %weight_buf_4_2_V, i64 0, i64 %tmp_19
  %weight_buf_4_2_V_l = load i8* %weight_buf_4_2_V_a_1, align 1
  %rhs_V_33 = sext i8 %weight_buf_4_2_V_l to i16
  %r_V_33 = mul i16 %lhs_V_33_mid2, %rhs_V_33
  %mult_V_33_cast = sext i16 %r_V_33 to i17
  %weight_buf_4_3_V_a_1 = getelementptr [10 x i8]* %weight_buf_4_3_V, i64 0, i64 %tmp_19
  %weight_buf_4_3_V_l = load i8* %weight_buf_4_3_V_a_1, align 1
  %rhs_V_34 = sext i8 %weight_buf_4_3_V_l to i16
  %r_V_34 = mul i16 %lhs_V_34_mid2, %rhs_V_34
  %mult_V_34_cast = sext i16 %r_V_34 to i17
  %weight_buf_4_4_V_a_1 = getelementptr [10 x i8]* %weight_buf_4_4_V, i64 0, i64 %tmp_19
  %weight_buf_4_4_V_l = load i8* %weight_buf_4_4_V_a_1, align 1
  %rhs_V_35 = sext i8 %weight_buf_4_4_V_l to i16
  %r_V_35 = mul i16 %lhs_V_35_mid2, %rhs_V_35
  %mult_V_35_cast = sext i16 %r_V_35 to i17
  %weight_buf_4_5_V_a_1 = getelementptr [10 x i8]* %weight_buf_4_5_V, i64 0, i64 %tmp_19
  %weight_buf_4_5_V_l = load i8* %weight_buf_4_5_V_a_1, align 1
  %rhs_V_36 = sext i8 %weight_buf_4_5_V_l to i16
  %r_V_36 = mul i16 %lhs_V_36_mid2, %rhs_V_36
  %mult_V_36_cast = sext i16 %r_V_36 to i17
  %weight_buf_4_6_V_a_1 = getelementptr [10 x i8]* %weight_buf_4_6_V, i64 0, i64 %tmp_19
  %weight_buf_4_6_V_l = load i8* %weight_buf_4_6_V_a_1, align 1
  %rhs_V_37 = sext i8 %weight_buf_4_6_V_l to i16
  %r_V_37 = mul i16 %lhs_V_37_mid2, %rhs_V_37
  %mult_V_37_cast = sext i16 %r_V_37 to i17
  %weight_buf_4_7_V_a_1 = getelementptr [10 x i8]* %weight_buf_4_7_V, i64 0, i64 %tmp_19
  %weight_buf_4_7_V_l = load i8* %weight_buf_4_7_V_a_1, align 1
  %rhs_V_38 = sext i8 %weight_buf_4_7_V_l to i16
  %r_V_38 = mul i16 %lhs_V_38_mid2, %rhs_V_38
  %mult_V_38_cast = sext i16 %r_V_38 to i17
  %weight_buf_5_0_V_a_1 = getelementptr [10 x i8]* %weight_buf_5_0_V, i64 0, i64 %tmp_19
  %weight_buf_5_0_V_l = load i8* %weight_buf_5_0_V_a_1, align 1
  %rhs_V_39 = sext i8 %weight_buf_5_0_V_l to i16
  %r_V_39 = mul i16 %lhs_V_39_mid2, %rhs_V_39
  %mult_V_39_cast = sext i16 %r_V_39 to i17
  %weight_buf_5_1_V_a_1 = getelementptr [10 x i8]* %weight_buf_5_1_V, i64 0, i64 %tmp_19
  %weight_buf_5_1_V_l = load i8* %weight_buf_5_1_V_a_1, align 1
  %rhs_V_40 = sext i8 %weight_buf_5_1_V_l to i16
  %r_V_40 = mul i16 %lhs_V_40_mid2, %rhs_V_40
  %mult_V_40_cast = sext i16 %r_V_40 to i17
  %weight_buf_5_2_V_a_1 = getelementptr [10 x i8]* %weight_buf_5_2_V, i64 0, i64 %tmp_19
  %weight_buf_5_2_V_l = load i8* %weight_buf_5_2_V_a_1, align 1
  %rhs_V_41 = sext i8 %weight_buf_5_2_V_l to i16
  %r_V_41 = mul i16 %lhs_V_41_mid2, %rhs_V_41
  %mult_V_41_cast = sext i16 %r_V_41 to i17
  %weight_buf_5_3_V_a_1 = getelementptr [10 x i8]* %weight_buf_5_3_V, i64 0, i64 %tmp_19
  %weight_buf_5_3_V_l = load i8* %weight_buf_5_3_V_a_1, align 1
  %rhs_V_42 = sext i8 %weight_buf_5_3_V_l to i16
  %r_V_42 = mul i16 %lhs_V_42_mid2, %rhs_V_42
  %mult_V_42_cast = sext i16 %r_V_42 to i17
  %weight_buf_5_4_V_a_1 = getelementptr [10 x i8]* %weight_buf_5_4_V, i64 0, i64 %tmp_19
  %weight_buf_5_4_V_l = load i8* %weight_buf_5_4_V_a_1, align 1
  %rhs_V_43 = sext i8 %weight_buf_5_4_V_l to i16
  %r_V_43 = mul i16 %lhs_V_43_mid2, %rhs_V_43
  %mult_V_43_cast = sext i16 %r_V_43 to i17
  %weight_buf_5_5_V_a_1 = getelementptr [10 x i8]* %weight_buf_5_5_V, i64 0, i64 %tmp_19
  %weight_buf_5_5_V_l = load i8* %weight_buf_5_5_V_a_1, align 1
  %rhs_V_44 = sext i8 %weight_buf_5_5_V_l to i16
  %r_V_44 = mul i16 %lhs_V_44_mid2, %rhs_V_44
  %mult_V_44_cast = sext i16 %r_V_44 to i17
  %weight_buf_5_6_V_a_1 = getelementptr [10 x i8]* %weight_buf_5_6_V, i64 0, i64 %tmp_19
  %weight_buf_5_6_V_l = load i8* %weight_buf_5_6_V_a_1, align 1
  %rhs_V_45 = sext i8 %weight_buf_5_6_V_l to i16
  %r_V_45 = mul i16 %lhs_V_45_mid2, %rhs_V_45
  %mult_V_45_cast = sext i16 %r_V_45 to i17
  %weight_buf_5_7_V_a_1 = getelementptr [10 x i8]* %weight_buf_5_7_V, i64 0, i64 %tmp_19
  %weight_buf_5_7_V_l = load i8* %weight_buf_5_7_V_a_1, align 1
  %rhs_V_46 = sext i8 %weight_buf_5_7_V_l to i16
  %r_V_46 = mul i16 %lhs_V_46_mid2, %rhs_V_46
  %mult_V_46_cast = sext i16 %r_V_46 to i17
  %weight_buf_6_0_V_a_1 = getelementptr [10 x i8]* %weight_buf_6_0_V, i64 0, i64 %tmp_19
  %weight_buf_6_0_V_l = load i8* %weight_buf_6_0_V_a_1, align 1
  %rhs_V_47 = sext i8 %weight_buf_6_0_V_l to i16
  %r_V_47 = mul i16 %lhs_V_47_mid2, %rhs_V_47
  %mult_V_47_cast = sext i16 %r_V_47 to i17
  %weight_buf_6_1_V_a_1 = getelementptr [10 x i8]* %weight_buf_6_1_V, i64 0, i64 %tmp_19
  %weight_buf_6_1_V_l = load i8* %weight_buf_6_1_V_a_1, align 1
  %rhs_V_48 = sext i8 %weight_buf_6_1_V_l to i16
  %r_V_48 = mul i16 %lhs_V_48_mid2, %rhs_V_48
  %mult_V_48_cast = sext i16 %r_V_48 to i17
  %weight_buf_6_2_V_a_1 = getelementptr [10 x i8]* %weight_buf_6_2_V, i64 0, i64 %tmp_19
  %weight_buf_6_2_V_l = load i8* %weight_buf_6_2_V_a_1, align 1
  %rhs_V_49 = sext i8 %weight_buf_6_2_V_l to i16
  %r_V_49 = mul i16 %lhs_V_49_mid2, %rhs_V_49
  %mult_V_49_cast = sext i16 %r_V_49 to i17
  %weight_buf_6_3_V_a_1 = getelementptr [10 x i8]* %weight_buf_6_3_V, i64 0, i64 %tmp_19
  %weight_buf_6_3_V_l = load i8* %weight_buf_6_3_V_a_1, align 1
  %rhs_V_50 = sext i8 %weight_buf_6_3_V_l to i16
  %r_V_50 = mul i16 %lhs_V_50_mid2, %rhs_V_50
  %mult_V_50_cast = sext i16 %r_V_50 to i17
  %weight_buf_6_4_V_a_1 = getelementptr [10 x i8]* %weight_buf_6_4_V, i64 0, i64 %tmp_19
  %weight_buf_6_4_V_l = load i8* %weight_buf_6_4_V_a_1, align 1
  %rhs_V_51 = sext i8 %weight_buf_6_4_V_l to i16
  %r_V_51 = mul i16 %lhs_V_51_mid2, %rhs_V_51
  %mult_V_51_cast = sext i16 %r_V_51 to i17
  %weight_buf_6_5_V_a_1 = getelementptr [10 x i8]* %weight_buf_6_5_V, i64 0, i64 %tmp_19
  %weight_buf_6_5_V_l = load i8* %weight_buf_6_5_V_a_1, align 1
  %rhs_V_52 = sext i8 %weight_buf_6_5_V_l to i16
  %r_V_52 = mul i16 %lhs_V_52_mid2, %rhs_V_52
  %mult_V_52_cast = sext i16 %r_V_52 to i17
  %weight_buf_6_6_V_a_1 = getelementptr [10 x i8]* %weight_buf_6_6_V, i64 0, i64 %tmp_19
  %weight_buf_6_6_V_l = load i8* %weight_buf_6_6_V_a_1, align 1
  %rhs_V_53 = sext i8 %weight_buf_6_6_V_l to i16
  %r_V_53 = mul i16 %lhs_V_53_mid2, %rhs_V_53
  %mult_V_53_cast = sext i16 %r_V_53 to i17
  %weight_buf_6_7_V_a_1 = getelementptr [10 x i8]* %weight_buf_6_7_V, i64 0, i64 %tmp_19
  %weight_buf_6_7_V_l = load i8* %weight_buf_6_7_V_a_1, align 1
  %rhs_V_54 = sext i8 %weight_buf_6_7_V_l to i16
  %r_V_54 = mul i16 %lhs_V_54_mid2, %rhs_V_54
  %mult_V_54_cast = sext i16 %r_V_54 to i17
  %weight_buf_7_0_V_a_1 = getelementptr [10 x i8]* %weight_buf_7_0_V, i64 0, i64 %tmp_19
  %weight_buf_7_0_V_l = load i8* %weight_buf_7_0_V_a_1, align 1
  %rhs_V_55 = sext i8 %weight_buf_7_0_V_l to i16
  %r_V_55 = mul i16 %lhs_V_55_mid2, %rhs_V_55
  %mult_V_55_cast = sext i16 %r_V_55 to i17
  %weight_buf_7_1_V_a_1 = getelementptr [10 x i8]* %weight_buf_7_1_V, i64 0, i64 %tmp_19
  %weight_buf_7_1_V_l = load i8* %weight_buf_7_1_V_a_1, align 1
  %rhs_V_56 = sext i8 %weight_buf_7_1_V_l to i16
  %r_V_56 = mul i16 %lhs_V_56_mid2, %rhs_V_56
  %mult_V_56_cast = sext i16 %r_V_56 to i17
  %weight_buf_7_2_V_a_1 = getelementptr [10 x i8]* %weight_buf_7_2_V, i64 0, i64 %tmp_19
  %weight_buf_7_2_V_l = load i8* %weight_buf_7_2_V_a_1, align 1
  %rhs_V_57 = sext i8 %weight_buf_7_2_V_l to i16
  %r_V_57 = mul i16 %lhs_V_57_mid2, %rhs_V_57
  %mult_V_57_cast = sext i16 %r_V_57 to i17
  %weight_buf_7_3_V_a_1 = getelementptr [10 x i8]* %weight_buf_7_3_V, i64 0, i64 %tmp_19
  %weight_buf_7_3_V_l = load i8* %weight_buf_7_3_V_a_1, align 1
  %rhs_V_58 = sext i8 %weight_buf_7_3_V_l to i16
  %r_V_58 = mul i16 %lhs_V_58_mid2, %rhs_V_58
  %mult_V_58_cast = sext i16 %r_V_58 to i17
  %weight_buf_7_4_V_a_1 = getelementptr [10 x i8]* %weight_buf_7_4_V, i64 0, i64 %tmp_19
  %weight_buf_7_4_V_l = load i8* %weight_buf_7_4_V_a_1, align 1
  %rhs_V_59 = sext i8 %weight_buf_7_4_V_l to i16
  %r_V_59 = mul i16 %lhs_V_59_mid2, %rhs_V_59
  %mult_V_59_cast = sext i16 %r_V_59 to i17
  %weight_buf_7_5_V_a_1 = getelementptr [10 x i8]* %weight_buf_7_5_V, i64 0, i64 %tmp_19
  %weight_buf_7_5_V_l = load i8* %weight_buf_7_5_V_a_1, align 1
  %rhs_V_60 = sext i8 %weight_buf_7_5_V_l to i16
  %r_V_60 = mul i16 %lhs_V_60_mid2, %rhs_V_60
  %mult_V_60_cast = sext i16 %r_V_60 to i17
  %weight_buf_7_6_V_a_1 = getelementptr [10 x i8]* %weight_buf_7_6_V, i64 0, i64 %tmp_19
  %weight_buf_7_6_V_l = load i8* %weight_buf_7_6_V_a_1, align 1
  %rhs_V_61 = sext i8 %weight_buf_7_6_V_l to i16
  %r_V_61 = mul i16 %lhs_V_61_mid2, %rhs_V_61
  %mult_V_61_cast = sext i16 %r_V_61 to i17
  %weight_buf_7_7_V_a_1 = getelementptr [10 x i8]* %weight_buf_7_7_V, i64 0, i64 %tmp_19
  %weight_buf_7_7_V_l = load i8* %weight_buf_7_7_V_a_1, align 1
  %rhs_V_62 = sext i8 %weight_buf_7_7_V_l to i16
  %r_V_62 = mul i16 %lhs_V_62_mid2, %rhs_V_62
  %mult_V_62_cast = sext i16 %r_V_62 to i17
  %weight_buf_8_0_V_a_1 = getelementptr [10 x i8]* %weight_buf_8_0_V, i64 0, i64 %tmp_19
  %weight_buf_8_0_V_l = load i8* %weight_buf_8_0_V_a_1, align 1
  %rhs_V_63 = sext i8 %weight_buf_8_0_V_l to i16
  %r_V_63 = mul i16 %lhs_V_63_mid2, %rhs_V_63
  %mult_V_63_cast = sext i16 %r_V_63 to i17
  %weight_buf_8_1_V_a_1 = getelementptr [10 x i8]* %weight_buf_8_1_V, i64 0, i64 %tmp_19
  %weight_buf_8_1_V_l = load i8* %weight_buf_8_1_V_a_1, align 1
  %rhs_V_64 = sext i8 %weight_buf_8_1_V_l to i16
  %r_V_64 = mul i16 %lhs_V_64_mid2, %rhs_V_64
  %mult_V_64_cast = sext i16 %r_V_64 to i17
  %weight_buf_8_2_V_a_1 = getelementptr [10 x i8]* %weight_buf_8_2_V, i64 0, i64 %tmp_19
  %weight_buf_8_2_V_l = load i8* %weight_buf_8_2_V_a_1, align 1
  %rhs_V_65 = sext i8 %weight_buf_8_2_V_l to i16
  %r_V_65 = mul i16 %lhs_V_65_mid2, %rhs_V_65
  %mult_V_65_cast = sext i16 %r_V_65 to i17
  %weight_buf_8_3_V_a_1 = getelementptr [10 x i8]* %weight_buf_8_3_V, i64 0, i64 %tmp_19
  %weight_buf_8_3_V_l = load i8* %weight_buf_8_3_V_a_1, align 1
  %rhs_V_66 = sext i8 %weight_buf_8_3_V_l to i16
  %r_V_66 = mul i16 %lhs_V_66_mid2, %rhs_V_66
  %mult_V_66_cast = sext i16 %r_V_66 to i17
  %weight_buf_8_4_V_a_1 = getelementptr [10 x i8]* %weight_buf_8_4_V, i64 0, i64 %tmp_19
  %weight_buf_8_4_V_l = load i8* %weight_buf_8_4_V_a_1, align 1
  %rhs_V_67 = sext i8 %weight_buf_8_4_V_l to i16
  %r_V_67 = mul i16 %lhs_V_67_mid2, %rhs_V_67
  %mult_V_67_cast = sext i16 %r_V_67 to i17
  %weight_buf_8_5_V_a_1 = getelementptr [10 x i8]* %weight_buf_8_5_V, i64 0, i64 %tmp_19
  %weight_buf_8_5_V_l = load i8* %weight_buf_8_5_V_a_1, align 1
  %rhs_V_68 = sext i8 %weight_buf_8_5_V_l to i16
  %r_V_68 = mul i16 %lhs_V_68_mid2, %rhs_V_68
  %mult_V_68_cast = sext i16 %r_V_68 to i17
  %weight_buf_8_6_V_a_1 = getelementptr [10 x i8]* %weight_buf_8_6_V, i64 0, i64 %tmp_19
  %weight_buf_8_6_V_l = load i8* %weight_buf_8_6_V_a_1, align 1
  %rhs_V_69 = sext i8 %weight_buf_8_6_V_l to i16
  %r_V_69 = mul i16 %lhs_V_69_mid2, %rhs_V_69
  %mult_V_69_cast = sext i16 %r_V_69 to i17
  %weight_buf_8_7_V_a_1 = getelementptr [10 x i8]* %weight_buf_8_7_V, i64 0, i64 %tmp_19
  %weight_buf_8_7_V_l = load i8* %weight_buf_8_7_V_a_1, align 1
  %rhs_V_70 = sext i8 %weight_buf_8_7_V_l to i16
  %r_V_70 = mul i16 %lhs_V_70_mid2, %rhs_V_70
  %mult_V_70_cast = sext i16 %r_V_70 to i17
  %weight_buf_9_0_V_a_1 = getelementptr [10 x i8]* %weight_buf_9_0_V, i64 0, i64 %tmp_19
  %weight_buf_9_0_V_l = load i8* %weight_buf_9_0_V_a_1, align 1
  %rhs_V_71 = sext i8 %weight_buf_9_0_V_l to i16
  %r_V_71 = mul i16 %lhs_V_71_mid2, %rhs_V_71
  %mult_V_71_cast = sext i16 %r_V_71 to i17
  %weight_buf_9_1_V_a_1 = getelementptr [10 x i8]* %weight_buf_9_1_V, i64 0, i64 %tmp_19
  %weight_buf_9_1_V_l = load i8* %weight_buf_9_1_V_a_1, align 1
  %rhs_V_72 = sext i8 %weight_buf_9_1_V_l to i16
  %r_V_72 = mul i16 %lhs_V_72_mid2, %rhs_V_72
  %mult_V_72_cast = sext i16 %r_V_72 to i17
  %weight_buf_9_2_V_a_1 = getelementptr [10 x i8]* %weight_buf_9_2_V, i64 0, i64 %tmp_19
  %weight_buf_9_2_V_l = load i8* %weight_buf_9_2_V_a_1, align 1
  %rhs_V_73 = sext i8 %weight_buf_9_2_V_l to i16
  %r_V_73 = mul i16 %lhs_V_73_mid2, %rhs_V_73
  %mult_V_73_cast = sext i16 %r_V_73 to i17
  %weight_buf_9_3_V_a_1 = getelementptr [10 x i8]* %weight_buf_9_3_V, i64 0, i64 %tmp_19
  %weight_buf_9_3_V_l = load i8* %weight_buf_9_3_V_a_1, align 1
  %rhs_V_74 = sext i8 %weight_buf_9_3_V_l to i16
  %r_V_74 = mul i16 %lhs_V_74_mid2, %rhs_V_74
  %mult_V_74_cast = sext i16 %r_V_74 to i17
  %weight_buf_9_4_V_a_1 = getelementptr [10 x i8]* %weight_buf_9_4_V, i64 0, i64 %tmp_19
  %weight_buf_9_4_V_l = load i8* %weight_buf_9_4_V_a_1, align 1
  %rhs_V_75 = sext i8 %weight_buf_9_4_V_l to i16
  %r_V_75 = mul i16 %lhs_V_75_mid2, %rhs_V_75
  %mult_V_75_cast = sext i16 %r_V_75 to i17
  %weight_buf_9_5_V_a_1 = getelementptr [10 x i8]* %weight_buf_9_5_V, i64 0, i64 %tmp_19
  %weight_buf_9_5_V_l = load i8* %weight_buf_9_5_V_a_1, align 1
  %rhs_V_76 = sext i8 %weight_buf_9_5_V_l to i16
  %r_V_76 = mul i16 %lhs_V_76_mid2, %rhs_V_76
  %mult_V_76_cast = sext i16 %r_V_76 to i17
  %weight_buf_9_6_V_a_1 = getelementptr [10 x i8]* %weight_buf_9_6_V, i64 0, i64 %tmp_19
  %weight_buf_9_6_V_l = load i8* %weight_buf_9_6_V_a_1, align 1
  %rhs_V_77 = sext i8 %weight_buf_9_6_V_l to i16
  %r_V_77 = mul i16 %lhs_V_77_mid2, %rhs_V_77
  %mult_V_77_cast = sext i16 %r_V_77 to i17
  %weight_buf_9_7_V_a_1 = getelementptr [10 x i8]* %weight_buf_9_7_V, i64 0, i64 %tmp_19
  %weight_buf_9_7_V_l = load i8* %weight_buf_9_7_V_a_1, align 1
  %rhs_V_78 = sext i8 %weight_buf_9_7_V_l to i16
  %r_V_78 = mul i16 %lhs_V_78_mid2, %rhs_V_78
  %mult_V_78_cast = sext i16 %r_V_78 to i17
  %weight_buf_10_0_V_1 = getelementptr [10 x i8]* %weight_buf_10_0_V, i64 0, i64 %tmp_19
  %weight_buf_10_0_V_2 = load i8* %weight_buf_10_0_V_1, align 1
  %rhs_V_79 = sext i8 %weight_buf_10_0_V_2 to i16
  %r_V_79 = mul i16 %lhs_V_79_mid2, %rhs_V_79
  %mult_V_79_cast = sext i16 %r_V_79 to i17
  %weight_buf_10_1_V_1 = getelementptr [10 x i8]* %weight_buf_10_1_V, i64 0, i64 %tmp_19
  %weight_buf_10_1_V_2 = load i8* %weight_buf_10_1_V_1, align 1
  %rhs_V_80 = sext i8 %weight_buf_10_1_V_2 to i16
  %r_V_80 = mul i16 %lhs_V_80_mid2, %rhs_V_80
  %mult_V_80_cast = sext i16 %r_V_80 to i17
  %weight_buf_10_2_V_1 = getelementptr [10 x i8]* %weight_buf_10_2_V, i64 0, i64 %tmp_19
  %weight_buf_10_2_V_2 = load i8* %weight_buf_10_2_V_1, align 1
  %rhs_V_81 = sext i8 %weight_buf_10_2_V_2 to i16
  %r_V_81 = mul i16 %lhs_V_81_mid2, %rhs_V_81
  %mult_V_81_cast = sext i16 %r_V_81 to i17
  %weight_buf_10_3_V_1 = getelementptr [10 x i8]* %weight_buf_10_3_V, i64 0, i64 %tmp_19
  %weight_buf_10_3_V_2 = load i8* %weight_buf_10_3_V_1, align 1
  %rhs_V_82 = sext i8 %weight_buf_10_3_V_2 to i16
  %r_V_82 = mul i16 %lhs_V_82_mid2, %rhs_V_82
  %mult_V_82_cast = sext i16 %r_V_82 to i17
  %weight_buf_10_4_V_1 = getelementptr [10 x i8]* %weight_buf_10_4_V, i64 0, i64 %tmp_19
  %weight_buf_10_4_V_2 = load i8* %weight_buf_10_4_V_1, align 1
  %rhs_V_83 = sext i8 %weight_buf_10_4_V_2 to i16
  %r_V_83 = mul i16 %lhs_V_83_mid2, %rhs_V_83
  %mult_V_83_cast = sext i16 %r_V_83 to i17
  %weight_buf_10_5_V_1 = getelementptr [10 x i8]* %weight_buf_10_5_V, i64 0, i64 %tmp_19
  %weight_buf_10_5_V_2 = load i8* %weight_buf_10_5_V_1, align 1
  %rhs_V_84 = sext i8 %weight_buf_10_5_V_2 to i16
  %r_V_84 = mul i16 %lhs_V_84_mid2, %rhs_V_84
  %mult_V_84_cast = sext i16 %r_V_84 to i17
  %weight_buf_10_6_V_1 = getelementptr [10 x i8]* %weight_buf_10_6_V, i64 0, i64 %tmp_19
  %weight_buf_10_6_V_2 = load i8* %weight_buf_10_6_V_1, align 1
  %rhs_V_85 = sext i8 %weight_buf_10_6_V_2 to i16
  %r_V_85 = mul i16 %lhs_V_85_mid2, %rhs_V_85
  %mult_V_85_cast = sext i16 %r_V_85 to i17
  %weight_buf_10_7_V_1 = getelementptr [10 x i8]* %weight_buf_10_7_V, i64 0, i64 %tmp_19
  %weight_buf_10_7_V_2 = load i8* %weight_buf_10_7_V_1, align 1
  %rhs_V_86 = sext i8 %weight_buf_10_7_V_2 to i16
  %r_V_86 = mul i16 %lhs_V_86_mid2, %rhs_V_86
  %mult_V_86_cast = sext i16 %r_V_86 to i17
  %weight_buf_11_0_V_1 = getelementptr [10 x i8]* %weight_buf_11_0_V, i64 0, i64 %tmp_19
  %weight_buf_11_0_V_2 = load i8* %weight_buf_11_0_V_1, align 1
  %rhs_V_87 = sext i8 %weight_buf_11_0_V_2 to i16
  %r_V_87 = mul i16 %lhs_V_87_mid2, %rhs_V_87
  %mult_V_87_cast = sext i16 %r_V_87 to i17
  %weight_buf_11_1_V_1 = getelementptr [10 x i8]* %weight_buf_11_1_V, i64 0, i64 %tmp_19
  %weight_buf_11_1_V_2 = load i8* %weight_buf_11_1_V_1, align 1
  %rhs_V_88 = sext i8 %weight_buf_11_1_V_2 to i16
  %r_V_88 = mul i16 %lhs_V_88_mid2, %rhs_V_88
  %mult_V_88_cast = sext i16 %r_V_88 to i17
  %weight_buf_11_2_V_1 = getelementptr [10 x i8]* %weight_buf_11_2_V, i64 0, i64 %tmp_19
  %weight_buf_11_2_V_2 = load i8* %weight_buf_11_2_V_1, align 1
  %rhs_V_89 = sext i8 %weight_buf_11_2_V_2 to i16
  %r_V_89 = mul i16 %lhs_V_89_mid2, %rhs_V_89
  %mult_V_89_cast = sext i16 %r_V_89 to i17
  %weight_buf_11_3_V_1 = getelementptr [10 x i8]* %weight_buf_11_3_V, i64 0, i64 %tmp_19
  %weight_buf_11_3_V_2 = load i8* %weight_buf_11_3_V_1, align 1
  %rhs_V_90 = sext i8 %weight_buf_11_3_V_2 to i16
  %r_V_90 = mul i16 %lhs_V_90_mid2, %rhs_V_90
  %mult_V_90_cast = sext i16 %r_V_90 to i17
  %weight_buf_11_4_V_1 = getelementptr [10 x i8]* %weight_buf_11_4_V, i64 0, i64 %tmp_19
  %weight_buf_11_4_V_2 = load i8* %weight_buf_11_4_V_1, align 1
  %rhs_V_91 = sext i8 %weight_buf_11_4_V_2 to i16
  %r_V_91 = mul i16 %lhs_V_91_mid2, %rhs_V_91
  %mult_V_91_cast = sext i16 %r_V_91 to i17
  %weight_buf_11_5_V_1 = getelementptr [10 x i8]* %weight_buf_11_5_V, i64 0, i64 %tmp_19
  %weight_buf_11_5_V_2 = load i8* %weight_buf_11_5_V_1, align 1
  %rhs_V_92 = sext i8 %weight_buf_11_5_V_2 to i16
  %r_V_92 = mul i16 %lhs_V_92_mid2, %rhs_V_92
  %mult_V_92_cast = sext i16 %r_V_92 to i17
  %weight_buf_11_6_V_1 = getelementptr [10 x i8]* %weight_buf_11_6_V, i64 0, i64 %tmp_19
  %weight_buf_11_6_V_2 = load i8* %weight_buf_11_6_V_1, align 1
  %rhs_V_93 = sext i8 %weight_buf_11_6_V_2 to i16
  %r_V_93 = mul i16 %lhs_V_93_mid2, %rhs_V_93
  %mult_V_93_cast = sext i16 %r_V_93 to i17
  %weight_buf_11_7_V_1 = getelementptr [10 x i8]* %weight_buf_11_7_V, i64 0, i64 %tmp_19
  %weight_buf_11_7_V_2 = load i8* %weight_buf_11_7_V_1, align 1
  %rhs_V_94 = sext i8 %weight_buf_11_7_V_2 to i16
  %r_V_94 = mul i16 %lhs_V_94_mid2, %rhs_V_94
  %mult_V_94_cast = sext i16 %r_V_94 to i17
  %weight_buf_12_0_V_1 = getelementptr [10 x i8]* %weight_buf_12_0_V, i64 0, i64 %tmp_19
  %weight_buf_12_0_V_2 = load i8* %weight_buf_12_0_V_1, align 1
  %rhs_V_95 = sext i8 %weight_buf_12_0_V_2 to i16
  %r_V_95 = mul i16 %lhs_V_95_mid2, %rhs_V_95
  %mult_V_95_cast = sext i16 %r_V_95 to i17
  %weight_buf_12_1_V_1 = getelementptr [10 x i8]* %weight_buf_12_1_V, i64 0, i64 %tmp_19
  %weight_buf_12_1_V_2 = load i8* %weight_buf_12_1_V_1, align 1
  %rhs_V_96 = sext i8 %weight_buf_12_1_V_2 to i16
  %r_V_96 = mul i16 %lhs_V_96_mid2, %rhs_V_96
  %mult_V_96_cast = sext i16 %r_V_96 to i17
  %weight_buf_12_2_V_1 = getelementptr [10 x i8]* %weight_buf_12_2_V, i64 0, i64 %tmp_19
  %weight_buf_12_2_V_2 = load i8* %weight_buf_12_2_V_1, align 1
  %rhs_V_97 = sext i8 %weight_buf_12_2_V_2 to i16
  %r_V_97 = mul i16 %lhs_V_97_mid2, %rhs_V_97
  %mult_V_97_cast = sext i16 %r_V_97 to i17
  %weight_buf_12_3_V_1 = getelementptr [10 x i8]* %weight_buf_12_3_V, i64 0, i64 %tmp_19
  %weight_buf_12_3_V_2 = load i8* %weight_buf_12_3_V_1, align 1
  %rhs_V_98 = sext i8 %weight_buf_12_3_V_2 to i16
  %r_V_98 = mul i16 %lhs_V_98_mid2, %rhs_V_98
  %mult_V_98_cast = sext i16 %r_V_98 to i17
  %weight_buf_12_4_V_1 = getelementptr [10 x i8]* %weight_buf_12_4_V, i64 0, i64 %tmp_19
  %weight_buf_12_4_V_2 = load i8* %weight_buf_12_4_V_1, align 1
  %rhs_V_99 = sext i8 %weight_buf_12_4_V_2 to i16
  %r_V_99 = mul i16 %lhs_V_99_mid2, %rhs_V_99
  %mult_V_99_cast = sext i16 %r_V_99 to i17
  %weight_buf_12_5_V_1 = getelementptr [10 x i8]* %weight_buf_12_5_V, i64 0, i64 %tmp_19
  %weight_buf_12_5_V_2 = load i8* %weight_buf_12_5_V_1, align 1
  %rhs_V_100 = sext i8 %weight_buf_12_5_V_2 to i16
  %r_V_100 = mul i16 %lhs_V_100_mid2, %rhs_V_100
  %mult_V_100_cast = sext i16 %r_V_100 to i17
  %weight_buf_12_6_V_1 = getelementptr [10 x i8]* %weight_buf_12_6_V, i64 0, i64 %tmp_19
  %weight_buf_12_6_V_2 = load i8* %weight_buf_12_6_V_1, align 1
  %rhs_V_101 = sext i8 %weight_buf_12_6_V_2 to i16
  %r_V_101 = mul i16 %lhs_V_101_mid2, %rhs_V_101
  %mult_V_101_cast = sext i16 %r_V_101 to i17
  %weight_buf_12_7_V_1 = getelementptr [10 x i8]* %weight_buf_12_7_V, i64 0, i64 %tmp_19
  %weight_buf_12_7_V_2 = load i8* %weight_buf_12_7_V_1, align 1
  %rhs_V_102 = sext i8 %weight_buf_12_7_V_2 to i16
  %r_V_102 = mul i16 %lhs_V_102_mid2, %rhs_V_102
  %mult_V_102_cast = sext i16 %r_V_102 to i17
  %weight_buf_13_0_V_1 = getelementptr [10 x i8]* %weight_buf_13_0_V, i64 0, i64 %tmp_19
  %weight_buf_13_0_V_2 = load i8* %weight_buf_13_0_V_1, align 1
  %rhs_V_103 = sext i8 %weight_buf_13_0_V_2 to i16
  %r_V_103 = mul i16 %lhs_V_103_mid2, %rhs_V_103
  %mult_V_103_cast = sext i16 %r_V_103 to i17
  %weight_buf_13_1_V_1 = getelementptr [10 x i8]* %weight_buf_13_1_V, i64 0, i64 %tmp_19
  %weight_buf_13_1_V_2 = load i8* %weight_buf_13_1_V_1, align 1
  %rhs_V_104 = sext i8 %weight_buf_13_1_V_2 to i16
  %r_V_104 = mul i16 %lhs_V_104_mid2, %rhs_V_104
  %mult_V_104_cast = sext i16 %r_V_104 to i17
  %weight_buf_13_2_V_1 = getelementptr [10 x i8]* %weight_buf_13_2_V, i64 0, i64 %tmp_19
  %weight_buf_13_2_V_2 = load i8* %weight_buf_13_2_V_1, align 1
  %rhs_V_105 = sext i8 %weight_buf_13_2_V_2 to i16
  %r_V_105 = mul i16 %lhs_V_105_mid2, %rhs_V_105
  %mult_V_105_cast = sext i16 %r_V_105 to i17
  %weight_buf_13_3_V_1 = getelementptr [10 x i8]* %weight_buf_13_3_V, i64 0, i64 %tmp_19
  %weight_buf_13_3_V_2 = load i8* %weight_buf_13_3_V_1, align 1
  %rhs_V_106 = sext i8 %weight_buf_13_3_V_2 to i16
  %r_V_106 = mul i16 %lhs_V_106_mid2, %rhs_V_106
  %mult_V_106_cast = sext i16 %r_V_106 to i17
  %weight_buf_13_4_V_1 = getelementptr [10 x i8]* %weight_buf_13_4_V, i64 0, i64 %tmp_19
  %weight_buf_13_4_V_2 = load i8* %weight_buf_13_4_V_1, align 1
  %rhs_V_107 = sext i8 %weight_buf_13_4_V_2 to i16
  %r_V_107 = mul i16 %lhs_V_107_mid2, %rhs_V_107
  %mult_V_107_cast = sext i16 %r_V_107 to i17
  %weight_buf_13_5_V_1 = getelementptr [10 x i8]* %weight_buf_13_5_V, i64 0, i64 %tmp_19
  %weight_buf_13_5_V_2 = load i8* %weight_buf_13_5_V_1, align 1
  %rhs_V_108 = sext i8 %weight_buf_13_5_V_2 to i16
  %r_V_108 = mul i16 %lhs_V_108_mid2, %rhs_V_108
  %mult_V_108_cast = sext i16 %r_V_108 to i17
  %weight_buf_13_6_V_1 = getelementptr [10 x i8]* %weight_buf_13_6_V, i64 0, i64 %tmp_19
  %weight_buf_13_6_V_2 = load i8* %weight_buf_13_6_V_1, align 1
  %rhs_V_109 = sext i8 %weight_buf_13_6_V_2 to i16
  %r_V_109 = mul i16 %lhs_V_109_mid2, %rhs_V_109
  %mult_V_109_cast = sext i16 %r_V_109 to i17
  %weight_buf_13_7_V_1 = getelementptr [10 x i8]* %weight_buf_13_7_V, i64 0, i64 %tmp_19
  %weight_buf_13_7_V_2 = load i8* %weight_buf_13_7_V_1, align 1
  %rhs_V_110 = sext i8 %weight_buf_13_7_V_2 to i16
  %r_V_110 = mul i16 %lhs_V_110_mid2, %rhs_V_110
  %mult_V_110_cast = sext i16 %r_V_110 to i17
  %weight_buf_14_0_V_1 = getelementptr [10 x i8]* %weight_buf_14_0_V, i64 0, i64 %tmp_19
  %weight_buf_14_0_V_2 = load i8* %weight_buf_14_0_V_1, align 1
  %rhs_V_111 = sext i8 %weight_buf_14_0_V_2 to i16
  %r_V_111 = mul i16 %lhs_V_111_mid2, %rhs_V_111
  %mult_V_111_cast = sext i16 %r_V_111 to i17
  %weight_buf_14_1_V_1 = getelementptr [10 x i8]* %weight_buf_14_1_V, i64 0, i64 %tmp_19
  %weight_buf_14_1_V_2 = load i8* %weight_buf_14_1_V_1, align 1
  %rhs_V_112 = sext i8 %weight_buf_14_1_V_2 to i16
  %r_V_112 = mul i16 %lhs_V_112_mid2, %rhs_V_112
  %mult_V_112_cast = sext i16 %r_V_112 to i17
  %weight_buf_14_2_V_1 = getelementptr [10 x i8]* %weight_buf_14_2_V, i64 0, i64 %tmp_19
  %weight_buf_14_2_V_2 = load i8* %weight_buf_14_2_V_1, align 1
  %rhs_V_113 = sext i8 %weight_buf_14_2_V_2 to i16
  %r_V_113 = mul i16 %lhs_V_113_mid2, %rhs_V_113
  %mult_V_113_cast = sext i16 %r_V_113 to i17
  %weight_buf_14_3_V_1 = getelementptr [10 x i8]* %weight_buf_14_3_V, i64 0, i64 %tmp_19
  %weight_buf_14_3_V_2 = load i8* %weight_buf_14_3_V_1, align 1
  %rhs_V_114 = sext i8 %weight_buf_14_3_V_2 to i16
  %r_V_114 = mul i16 %lhs_V_114_mid2, %rhs_V_114
  %mult_V_114_cast = sext i16 %r_V_114 to i17
  %weight_buf_14_4_V_1 = getelementptr [10 x i8]* %weight_buf_14_4_V, i64 0, i64 %tmp_19
  %weight_buf_14_4_V_2 = load i8* %weight_buf_14_4_V_1, align 1
  %rhs_V_115 = sext i8 %weight_buf_14_4_V_2 to i16
  %r_V_115 = mul i16 %lhs_V_115_mid2, %rhs_V_115
  %mult_V_115_cast = sext i16 %r_V_115 to i17
  %weight_buf_14_5_V_1 = getelementptr [10 x i8]* %weight_buf_14_5_V, i64 0, i64 %tmp_19
  %weight_buf_14_5_V_2 = load i8* %weight_buf_14_5_V_1, align 1
  %rhs_V_116 = sext i8 %weight_buf_14_5_V_2 to i16
  %r_V_116 = mul i16 %lhs_V_116_mid2, %rhs_V_116
  %mult_V_116_cast = sext i16 %r_V_116 to i17
  %weight_buf_14_6_V_1 = getelementptr [10 x i8]* %weight_buf_14_6_V, i64 0, i64 %tmp_19
  %weight_buf_14_6_V_2 = load i8* %weight_buf_14_6_V_1, align 1
  %rhs_V_117 = sext i8 %weight_buf_14_6_V_2 to i16
  %r_V_117 = mul i16 %lhs_V_117_mid2, %rhs_V_117
  %mult_V_117_cast = sext i16 %r_V_117 to i17
  %weight_buf_14_7_V_1 = getelementptr [10 x i8]* %weight_buf_14_7_V, i64 0, i64 %tmp_19
  %weight_buf_14_7_V_2 = load i8* %weight_buf_14_7_V_1, align 1
  %rhs_V_118 = sext i8 %weight_buf_14_7_V_2 to i16
  %r_V_118 = mul i16 %lhs_V_118_mid2, %rhs_V_118
  %mult_V_118_cast = sext i16 %r_V_118 to i17
  %weight_buf_15_0_V_1 = getelementptr [10 x i8]* %weight_buf_15_0_V, i64 0, i64 %tmp_19
  %weight_buf_15_0_V_2 = load i8* %weight_buf_15_0_V_1, align 1
  %rhs_V_119 = sext i8 %weight_buf_15_0_V_2 to i16
  %r_V_119 = mul i16 %lhs_V_119_mid2, %rhs_V_119
  %mult_V_119_cast = sext i16 %r_V_119 to i17
  %weight_buf_15_1_V_1 = getelementptr [10 x i8]* %weight_buf_15_1_V, i64 0, i64 %tmp_19
  %weight_buf_15_1_V_2 = load i8* %weight_buf_15_1_V_1, align 1
  %rhs_V_120 = sext i8 %weight_buf_15_1_V_2 to i16
  %r_V_120 = mul i16 %lhs_V_120_mid2, %rhs_V_120
  %mult_V_120_cast = sext i16 %r_V_120 to i17
  %weight_buf_15_2_V_1 = getelementptr [10 x i8]* %weight_buf_15_2_V, i64 0, i64 %tmp_19
  %weight_buf_15_2_V_2 = load i8* %weight_buf_15_2_V_1, align 1
  %rhs_V_121 = sext i8 %weight_buf_15_2_V_2 to i16
  %r_V_121 = mul i16 %lhs_V_121_mid2, %rhs_V_121
  %mult_V_121_cast = sext i16 %r_V_121 to i17
  %weight_buf_15_3_V_1 = getelementptr [10 x i8]* %weight_buf_15_3_V, i64 0, i64 %tmp_19
  %weight_buf_15_3_V_2 = load i8* %weight_buf_15_3_V_1, align 1
  %rhs_V_122 = sext i8 %weight_buf_15_3_V_2 to i16
  %r_V_122 = mul i16 %lhs_V_122_mid2, %rhs_V_122
  %mult_V_122_cast = sext i16 %r_V_122 to i17
  %weight_buf_15_4_V_1 = getelementptr [10 x i8]* %weight_buf_15_4_V, i64 0, i64 %tmp_19
  %weight_buf_15_4_V_2 = load i8* %weight_buf_15_4_V_1, align 1
  %rhs_V_123 = sext i8 %weight_buf_15_4_V_2 to i16
  %r_V_123 = mul i16 %lhs_V_123_mid2, %rhs_V_123
  %mult_V_123_cast = sext i16 %r_V_123 to i17
  %weight_buf_15_5_V_1 = getelementptr [10 x i8]* %weight_buf_15_5_V, i64 0, i64 %tmp_19
  %weight_buf_15_5_V_2 = load i8* %weight_buf_15_5_V_1, align 1
  %rhs_V_124 = sext i8 %weight_buf_15_5_V_2 to i16
  %r_V_124 = mul i16 %lhs_V_124_mid2, %rhs_V_124
  %mult_V_124_cast = sext i16 %r_V_124 to i17
  %weight_buf_15_6_V_1 = getelementptr [10 x i8]* %weight_buf_15_6_V, i64 0, i64 %tmp_19
  %weight_buf_15_6_V_2 = load i8* %weight_buf_15_6_V_1, align 1
  %rhs_V_125 = sext i8 %weight_buf_15_6_V_2 to i16
  %r_V_125 = mul i16 %lhs_V_125_mid2, %rhs_V_125
  %mult_V_125_cast = sext i16 %r_V_125 to i17
  %weight_buf_15_7_V_1 = getelementptr [10 x i8]* %weight_buf_15_7_V, i64 0, i64 %tmp_19
  %weight_buf_15_7_V_2 = load i8* %weight_buf_15_7_V_1, align 1
  %rhs_V_126 = sext i8 %weight_buf_15_7_V_2 to i16
  %r_V_126 = mul i16 %lhs_V_126_mid2, %rhs_V_126
  %mult_V_126_cast = sext i16 %r_V_126 to i17
  %weight_buf_16_0_V_1 = getelementptr [10 x i8]* %weight_buf_16_0_V, i64 0, i64 %tmp_19
  %weight_buf_16_0_V_2 = load i8* %weight_buf_16_0_V_1, align 1
  %rhs_V_127 = sext i8 %weight_buf_16_0_V_2 to i16
  %r_V_127 = mul i16 %lhs_V_127_mid2, %rhs_V_127
  %mult_V_127_cast = sext i16 %r_V_127 to i17
  %weight_buf_16_1_V_1 = getelementptr [10 x i8]* %weight_buf_16_1_V, i64 0, i64 %tmp_19
  %weight_buf_16_1_V_2 = load i8* %weight_buf_16_1_V_1, align 1
  %rhs_V_128 = sext i8 %weight_buf_16_1_V_2 to i16
  %r_V_128 = mul i16 %lhs_V_128_mid2, %rhs_V_128
  %mult_V_128_cast = sext i16 %r_V_128 to i17
  %weight_buf_16_2_V_1 = getelementptr [10 x i8]* %weight_buf_16_2_V, i64 0, i64 %tmp_19
  %weight_buf_16_2_V_2 = load i8* %weight_buf_16_2_V_1, align 1
  %rhs_V_129 = sext i8 %weight_buf_16_2_V_2 to i16
  %r_V_129 = mul i16 %lhs_V_129_mid2, %rhs_V_129
  %mult_V_129_cast = sext i16 %r_V_129 to i17
  %weight_buf_16_3_V_1 = getelementptr [10 x i8]* %weight_buf_16_3_V, i64 0, i64 %tmp_19
  %weight_buf_16_3_V_2 = load i8* %weight_buf_16_3_V_1, align 1
  %rhs_V_130 = sext i8 %weight_buf_16_3_V_2 to i16
  %r_V_130 = mul i16 %lhs_V_130_mid2, %rhs_V_130
  %mult_V_130_cast = sext i16 %r_V_130 to i17
  %weight_buf_16_4_V_1 = getelementptr [10 x i8]* %weight_buf_16_4_V, i64 0, i64 %tmp_19
  %weight_buf_16_4_V_2 = load i8* %weight_buf_16_4_V_1, align 1
  %rhs_V_131 = sext i8 %weight_buf_16_4_V_2 to i16
  %r_V_131 = mul i16 %lhs_V_131_mid2, %rhs_V_131
  %mult_V_131_cast = sext i16 %r_V_131 to i17
  %weight_buf_16_5_V_1 = getelementptr [10 x i8]* %weight_buf_16_5_V, i64 0, i64 %tmp_19
  %weight_buf_16_5_V_2 = load i8* %weight_buf_16_5_V_1, align 1
  %rhs_V_132 = sext i8 %weight_buf_16_5_V_2 to i16
  %r_V_132 = mul i16 %lhs_V_132_mid2, %rhs_V_132
  %mult_V_132_cast = sext i16 %r_V_132 to i17
  %weight_buf_16_6_V_1 = getelementptr [10 x i8]* %weight_buf_16_6_V, i64 0, i64 %tmp_19
  %weight_buf_16_6_V_2 = load i8* %weight_buf_16_6_V_1, align 1
  %rhs_V_133 = sext i8 %weight_buf_16_6_V_2 to i16
  %r_V_133 = mul i16 %lhs_V_133_mid2, %rhs_V_133
  %mult_V_133_cast = sext i16 %r_V_133 to i17
  %weight_buf_16_7_V_1 = getelementptr [10 x i8]* %weight_buf_16_7_V, i64 0, i64 %tmp_19
  %weight_buf_16_7_V_2 = load i8* %weight_buf_16_7_V_1, align 1
  %rhs_V_134 = sext i8 %weight_buf_16_7_V_2 to i16
  %r_V_134 = mul i16 %lhs_V_134_mid2, %rhs_V_134
  %mult_V_134_cast = sext i16 %r_V_134 to i17
  %weight_buf_17_0_V_1 = getelementptr [10 x i8]* %weight_buf_17_0_V, i64 0, i64 %tmp_19
  %weight_buf_17_0_V_2 = load i8* %weight_buf_17_0_V_1, align 1
  %rhs_V_135 = sext i8 %weight_buf_17_0_V_2 to i16
  %r_V_135 = mul i16 %lhs_V_135_mid2, %rhs_V_135
  %mult_V_135_cast = sext i16 %r_V_135 to i17
  %weight_buf_17_1_V_1 = getelementptr [10 x i8]* %weight_buf_17_1_V, i64 0, i64 %tmp_19
  %weight_buf_17_1_V_2 = load i8* %weight_buf_17_1_V_1, align 1
  %rhs_V_136 = sext i8 %weight_buf_17_1_V_2 to i16
  %r_V_136 = mul i16 %lhs_V_136_mid2, %rhs_V_136
  %mult_V_136_cast = sext i16 %r_V_136 to i17
  %weight_buf_17_2_V_1 = getelementptr [10 x i8]* %weight_buf_17_2_V, i64 0, i64 %tmp_19
  %weight_buf_17_2_V_2 = load i8* %weight_buf_17_2_V_1, align 1
  %rhs_V_137 = sext i8 %weight_buf_17_2_V_2 to i16
  %r_V_137 = mul i16 %lhs_V_137_mid2, %rhs_V_137
  %mult_V_137_cast = sext i16 %r_V_137 to i17
  %weight_buf_17_3_V_1 = getelementptr [10 x i8]* %weight_buf_17_3_V, i64 0, i64 %tmp_19
  %weight_buf_17_3_V_2 = load i8* %weight_buf_17_3_V_1, align 1
  %rhs_V_138 = sext i8 %weight_buf_17_3_V_2 to i16
  %r_V_138 = mul i16 %lhs_V_138_mid2, %rhs_V_138
  %mult_V_138_cast = sext i16 %r_V_138 to i17
  %weight_buf_17_4_V_1 = getelementptr [10 x i8]* %weight_buf_17_4_V, i64 0, i64 %tmp_19
  %weight_buf_17_4_V_2 = load i8* %weight_buf_17_4_V_1, align 1
  %rhs_V_139 = sext i8 %weight_buf_17_4_V_2 to i16
  %r_V_139 = mul i16 %lhs_V_139_mid2, %rhs_V_139
  %mult_V_139_cast = sext i16 %r_V_139 to i17
  %weight_buf_17_5_V_1 = getelementptr [10 x i8]* %weight_buf_17_5_V, i64 0, i64 %tmp_19
  %weight_buf_17_5_V_2 = load i8* %weight_buf_17_5_V_1, align 1
  %rhs_V_140 = sext i8 %weight_buf_17_5_V_2 to i16
  %r_V_140 = mul i16 %lhs_V_140_mid2, %rhs_V_140
  %mult_V_140_cast = sext i16 %r_V_140 to i17
  %weight_buf_17_6_V_1 = getelementptr [10 x i8]* %weight_buf_17_6_V, i64 0, i64 %tmp_19
  %weight_buf_17_6_V_2 = load i8* %weight_buf_17_6_V_1, align 1
  %rhs_V_141 = sext i8 %weight_buf_17_6_V_2 to i16
  %r_V_141 = mul i16 %lhs_V_141_mid2, %rhs_V_141
  %mult_V_141_cast = sext i16 %r_V_141 to i17
  %weight_buf_17_7_V_1 = getelementptr [10 x i8]* %weight_buf_17_7_V, i64 0, i64 %tmp_19
  %weight_buf_17_7_V_2 = load i8* %weight_buf_17_7_V_1, align 1
  %rhs_V_142 = sext i8 %weight_buf_17_7_V_2 to i16
  %r_V_142 = mul i16 %lhs_V_142_mid2, %rhs_V_142
  %mult_V_142_cast = sext i16 %r_V_142 to i17
  %weight_buf_18_0_V_1 = getelementptr [10 x i8]* %weight_buf_18_0_V, i64 0, i64 %tmp_19
  %weight_buf_18_0_V_2 = load i8* %weight_buf_18_0_V_1, align 1
  %rhs_V_143 = sext i8 %weight_buf_18_0_V_2 to i16
  %r_V_143 = mul i16 %lhs_V_143_mid2, %rhs_V_143
  %mult_V_143_cast = sext i16 %r_V_143 to i17
  %weight_buf_18_1_V_1 = getelementptr [10 x i8]* %weight_buf_18_1_V, i64 0, i64 %tmp_19
  %weight_buf_18_1_V_2 = load i8* %weight_buf_18_1_V_1, align 1
  %rhs_V_144 = sext i8 %weight_buf_18_1_V_2 to i16
  %r_V_144 = mul i16 %lhs_V_144_mid2, %rhs_V_144
  %mult_V_144_cast = sext i16 %r_V_144 to i17
  %weight_buf_18_2_V_1 = getelementptr [10 x i8]* %weight_buf_18_2_V, i64 0, i64 %tmp_19
  %weight_buf_18_2_V_2 = load i8* %weight_buf_18_2_V_1, align 1
  %rhs_V_145 = sext i8 %weight_buf_18_2_V_2 to i16
  %r_V_145 = mul i16 %lhs_V_145_mid2, %rhs_V_145
  %mult_V_145_cast = sext i16 %r_V_145 to i17
  %weight_buf_18_3_V_1 = getelementptr [10 x i8]* %weight_buf_18_3_V, i64 0, i64 %tmp_19
  %weight_buf_18_3_V_2 = load i8* %weight_buf_18_3_V_1, align 1
  %rhs_V_146 = sext i8 %weight_buf_18_3_V_2 to i16
  %r_V_146 = mul i16 %lhs_V_146_mid2, %rhs_V_146
  %mult_V_146_cast = sext i16 %r_V_146 to i17
  %weight_buf_18_4_V_1 = getelementptr [10 x i8]* %weight_buf_18_4_V, i64 0, i64 %tmp_19
  %weight_buf_18_4_V_2 = load i8* %weight_buf_18_4_V_1, align 1
  %rhs_V_147 = sext i8 %weight_buf_18_4_V_2 to i16
  %r_V_147 = mul i16 %lhs_V_147_mid2, %rhs_V_147
  %mult_V_147_cast = sext i16 %r_V_147 to i17
  %weight_buf_18_5_V_1 = getelementptr [10 x i8]* %weight_buf_18_5_V, i64 0, i64 %tmp_19
  %weight_buf_18_5_V_2 = load i8* %weight_buf_18_5_V_1, align 1
  %rhs_V_148 = sext i8 %weight_buf_18_5_V_2 to i16
  %r_V_148 = mul i16 %lhs_V_148_mid2, %rhs_V_148
  %mult_V_148_cast = sext i16 %r_V_148 to i17
  %weight_buf_18_6_V_1 = getelementptr [10 x i8]* %weight_buf_18_6_V, i64 0, i64 %tmp_19
  %weight_buf_18_6_V_2 = load i8* %weight_buf_18_6_V_1, align 1
  %rhs_V_149 = sext i8 %weight_buf_18_6_V_2 to i16
  %r_V_149 = mul i16 %lhs_V_149_mid2, %rhs_V_149
  %mult_V_149_cast = sext i16 %r_V_149 to i17
  %weight_buf_18_7_V_1 = getelementptr [10 x i8]* %weight_buf_18_7_V, i64 0, i64 %tmp_19
  %weight_buf_18_7_V_2 = load i8* %weight_buf_18_7_V_1, align 1
  %rhs_V_150 = sext i8 %weight_buf_18_7_V_2 to i16
  %r_V_150 = mul i16 %lhs_V_150_mid2, %rhs_V_150
  %mult_V_150_cast = sext i16 %r_V_150 to i17
  %weight_buf_19_0_V_1 = getelementptr [10 x i8]* %weight_buf_19_0_V, i64 0, i64 %tmp_19
  %weight_buf_19_0_V_2 = load i8* %weight_buf_19_0_V_1, align 1
  %rhs_V_151 = sext i8 %weight_buf_19_0_V_2 to i16
  %r_V_151 = mul i16 %lhs_V_151_mid2, %rhs_V_151
  %mult_V_151_cast = sext i16 %r_V_151 to i17
  %weight_buf_19_1_V_1 = getelementptr [10 x i8]* %weight_buf_19_1_V, i64 0, i64 %tmp_19
  %weight_buf_19_1_V_2 = load i8* %weight_buf_19_1_V_1, align 1
  %rhs_V_152 = sext i8 %weight_buf_19_1_V_2 to i16
  %r_V_152 = mul i16 %lhs_V_152_mid2, %rhs_V_152
  %mult_V_152_cast = sext i16 %r_V_152 to i17
  %weight_buf_19_2_V_1 = getelementptr [10 x i8]* %weight_buf_19_2_V, i64 0, i64 %tmp_19
  %weight_buf_19_2_V_2 = load i8* %weight_buf_19_2_V_1, align 1
  %rhs_V_153 = sext i8 %weight_buf_19_2_V_2 to i16
  %r_V_153 = mul i16 %lhs_V_153_mid2, %rhs_V_153
  %mult_V_153_cast = sext i16 %r_V_153 to i17
  %weight_buf_19_3_V_1 = getelementptr [10 x i8]* %weight_buf_19_3_V, i64 0, i64 %tmp_19
  %weight_buf_19_3_V_2 = load i8* %weight_buf_19_3_V_1, align 1
  %rhs_V_154 = sext i8 %weight_buf_19_3_V_2 to i16
  %r_V_154 = mul i16 %lhs_V_154_mid2, %rhs_V_154
  %mult_V_154_cast = sext i16 %r_V_154 to i17
  %weight_buf_19_4_V_1 = getelementptr [10 x i8]* %weight_buf_19_4_V, i64 0, i64 %tmp_19
  %weight_buf_19_4_V_2 = load i8* %weight_buf_19_4_V_1, align 1
  %rhs_V_155 = sext i8 %weight_buf_19_4_V_2 to i16
  %r_V_155 = mul i16 %lhs_V_155_mid2, %rhs_V_155
  %mult_V_155_cast = sext i16 %r_V_155 to i17
  %weight_buf_19_5_V_1 = getelementptr [10 x i8]* %weight_buf_19_5_V, i64 0, i64 %tmp_19
  %weight_buf_19_5_V_2 = load i8* %weight_buf_19_5_V_1, align 1
  %rhs_V_156 = sext i8 %weight_buf_19_5_V_2 to i16
  %r_V_156 = mul i16 %lhs_V_156_mid2, %rhs_V_156
  %mult_V_156_cast = sext i16 %r_V_156 to i17
  %weight_buf_19_6_V_1 = getelementptr [10 x i8]* %weight_buf_19_6_V, i64 0, i64 %tmp_19
  %weight_buf_19_6_V_2 = load i8* %weight_buf_19_6_V_1, align 1
  %rhs_V_157 = sext i8 %weight_buf_19_6_V_2 to i16
  %r_V_157 = mul i16 %lhs_V_157_mid2, %rhs_V_157
  %mult_V_157_cast = sext i16 %r_V_157 to i17
  %weight_buf_19_7_V_1 = getelementptr [10 x i8]* %weight_buf_19_7_V, i64 0, i64 %tmp_19
  %weight_buf_19_7_V_2 = load i8* %weight_buf_19_7_V_1, align 1
  %rhs_V_158 = sext i8 %weight_buf_19_7_V_2 to i16
  %r_V_158 = mul i16 %lhs_V_158_mid2, %rhs_V_158
  %mult_V_158_cast = sext i16 %r_V_158 to i17
  %weight_buf_20_0_V_1 = getelementptr [10 x i8]* %weight_buf_20_0_V, i64 0, i64 %tmp_19
  %weight_buf_20_0_V_2 = load i8* %weight_buf_20_0_V_1, align 1
  %rhs_V_159 = sext i8 %weight_buf_20_0_V_2 to i16
  %r_V_159 = mul i16 %lhs_V_159_mid2, %rhs_V_159
  %mult_V_159_cast = sext i16 %r_V_159 to i17
  %weight_buf_20_1_V_1 = getelementptr [10 x i8]* %weight_buf_20_1_V, i64 0, i64 %tmp_19
  %weight_buf_20_1_V_2 = load i8* %weight_buf_20_1_V_1, align 1
  %rhs_V_160 = sext i8 %weight_buf_20_1_V_2 to i16
  %r_V_160 = mul i16 %lhs_V_160_mid2, %rhs_V_160
  %mult_V_160_cast = sext i16 %r_V_160 to i17
  %weight_buf_20_2_V_1 = getelementptr [10 x i8]* %weight_buf_20_2_V, i64 0, i64 %tmp_19
  %weight_buf_20_2_V_2 = load i8* %weight_buf_20_2_V_1, align 1
  %rhs_V_161 = sext i8 %weight_buf_20_2_V_2 to i16
  %r_V_161 = mul i16 %lhs_V_161_mid2, %rhs_V_161
  %mult_V_161_cast = sext i16 %r_V_161 to i17
  %weight_buf_20_3_V_1 = getelementptr [10 x i8]* %weight_buf_20_3_V, i64 0, i64 %tmp_19
  %weight_buf_20_3_V_2 = load i8* %weight_buf_20_3_V_1, align 1
  %rhs_V_162 = sext i8 %weight_buf_20_3_V_2 to i16
  %r_V_162 = mul i16 %lhs_V_162_mid2, %rhs_V_162
  %mult_V_162_cast = sext i16 %r_V_162 to i17
  %weight_buf_20_4_V_1 = getelementptr [10 x i8]* %weight_buf_20_4_V, i64 0, i64 %tmp_19
  %weight_buf_20_4_V_2 = load i8* %weight_buf_20_4_V_1, align 1
  %rhs_V_163 = sext i8 %weight_buf_20_4_V_2 to i16
  %r_V_163 = mul i16 %lhs_V_163_mid2, %rhs_V_163
  %mult_V_163_cast = sext i16 %r_V_163 to i17
  %weight_buf_20_5_V_1 = getelementptr [10 x i8]* %weight_buf_20_5_V, i64 0, i64 %tmp_19
  %weight_buf_20_5_V_2 = load i8* %weight_buf_20_5_V_1, align 1
  %rhs_V_164 = sext i8 %weight_buf_20_5_V_2 to i16
  %r_V_164 = mul i16 %lhs_V_164_mid2, %rhs_V_164
  %mult_V_164_cast = sext i16 %r_V_164 to i17
  %weight_buf_20_6_V_1 = getelementptr [10 x i8]* %weight_buf_20_6_V, i64 0, i64 %tmp_19
  %weight_buf_20_6_V_2 = load i8* %weight_buf_20_6_V_1, align 1
  %rhs_V_165 = sext i8 %weight_buf_20_6_V_2 to i16
  %r_V_165 = mul i16 %lhs_V_165_mid2, %rhs_V_165
  %mult_V_165_cast = sext i16 %r_V_165 to i17
  %weight_buf_20_7_V_1 = getelementptr [10 x i8]* %weight_buf_20_7_V, i64 0, i64 %tmp_19
  %weight_buf_20_7_V_2 = load i8* %weight_buf_20_7_V_1, align 1
  %rhs_V_166 = sext i8 %weight_buf_20_7_V_2 to i16
  %r_V_166 = mul i16 %lhs_V_166_mid2, %rhs_V_166
  %mult_V_166_cast = sext i16 %r_V_166 to i17
  %weight_buf_21_0_V_1 = getelementptr [10 x i8]* %weight_buf_21_0_V, i64 0, i64 %tmp_19
  %weight_buf_21_0_V_2 = load i8* %weight_buf_21_0_V_1, align 1
  %rhs_V_167 = sext i8 %weight_buf_21_0_V_2 to i16
  %r_V_167 = mul i16 %lhs_V_167_mid2, %rhs_V_167
  %mult_V_167_cast = sext i16 %r_V_167 to i17
  %weight_buf_21_1_V_1 = getelementptr [10 x i8]* %weight_buf_21_1_V, i64 0, i64 %tmp_19
  %weight_buf_21_1_V_2 = load i8* %weight_buf_21_1_V_1, align 1
  %rhs_V_168 = sext i8 %weight_buf_21_1_V_2 to i16
  %r_V_168 = mul i16 %lhs_V_168_mid2, %rhs_V_168
  %mult_V_168_cast = sext i16 %r_V_168 to i17
  %weight_buf_21_2_V_1 = getelementptr [10 x i8]* %weight_buf_21_2_V, i64 0, i64 %tmp_19
  %weight_buf_21_2_V_2 = load i8* %weight_buf_21_2_V_1, align 1
  %rhs_V_169 = sext i8 %weight_buf_21_2_V_2 to i16
  %r_V_169 = mul i16 %lhs_V_169_mid2, %rhs_V_169
  %mult_V_169_cast = sext i16 %r_V_169 to i17
  %weight_buf_21_3_V_1 = getelementptr [10 x i8]* %weight_buf_21_3_V, i64 0, i64 %tmp_19
  %weight_buf_21_3_V_2 = load i8* %weight_buf_21_3_V_1, align 1
  %rhs_V_170 = sext i8 %weight_buf_21_3_V_2 to i16
  %r_V_170 = mul i16 %lhs_V_170_mid2, %rhs_V_170
  %mult_V_170_cast = sext i16 %r_V_170 to i17
  %weight_buf_21_4_V_1 = getelementptr [10 x i8]* %weight_buf_21_4_V, i64 0, i64 %tmp_19
  %weight_buf_21_4_V_2 = load i8* %weight_buf_21_4_V_1, align 1
  %rhs_V_171 = sext i8 %weight_buf_21_4_V_2 to i16
  %r_V_171 = mul i16 %lhs_V_171_mid2, %rhs_V_171
  %mult_V_171_cast = sext i16 %r_V_171 to i17
  %weight_buf_21_5_V_1 = getelementptr [10 x i8]* %weight_buf_21_5_V, i64 0, i64 %tmp_19
  %weight_buf_21_5_V_2 = load i8* %weight_buf_21_5_V_1, align 1
  %rhs_V_172 = sext i8 %weight_buf_21_5_V_2 to i16
  %r_V_172 = mul i16 %lhs_V_172_mid2, %rhs_V_172
  %mult_V_172_cast = sext i16 %r_V_172 to i17
  %weight_buf_21_6_V_1 = getelementptr [10 x i8]* %weight_buf_21_6_V, i64 0, i64 %tmp_19
  %weight_buf_21_6_V_2 = load i8* %weight_buf_21_6_V_1, align 1
  %rhs_V_173 = sext i8 %weight_buf_21_6_V_2 to i16
  %r_V_173 = mul i16 %lhs_V_173_mid2, %rhs_V_173
  %mult_V_173_cast = sext i16 %r_V_173 to i17
  %weight_buf_21_7_V_1 = getelementptr [10 x i8]* %weight_buf_21_7_V, i64 0, i64 %tmp_19
  %weight_buf_21_7_V_2 = load i8* %weight_buf_21_7_V_1, align 1
  %rhs_V_174 = sext i8 %weight_buf_21_7_V_2 to i16
  %r_V_174 = mul i16 %lhs_V_174_mid2, %rhs_V_174
  %mult_V_174_cast = sext i16 %r_V_174 to i17
  %weight_buf_22_0_V_1 = getelementptr [10 x i8]* %weight_buf_22_0_V, i64 0, i64 %tmp_19
  %weight_buf_22_0_V_2 = load i8* %weight_buf_22_0_V_1, align 1
  %rhs_V_175 = sext i8 %weight_buf_22_0_V_2 to i16
  %r_V_175 = mul i16 %lhs_V_175_mid2, %rhs_V_175
  %mult_V_175_cast = sext i16 %r_V_175 to i17
  %weight_buf_22_1_V_1 = getelementptr [10 x i8]* %weight_buf_22_1_V, i64 0, i64 %tmp_19
  %weight_buf_22_1_V_2 = load i8* %weight_buf_22_1_V_1, align 1
  %rhs_V_176 = sext i8 %weight_buf_22_1_V_2 to i16
  %r_V_176 = mul i16 %lhs_V_176_mid2, %rhs_V_176
  %mult_V_176_cast = sext i16 %r_V_176 to i17
  %weight_buf_22_2_V_1 = getelementptr [10 x i8]* %weight_buf_22_2_V, i64 0, i64 %tmp_19
  %weight_buf_22_2_V_2 = load i8* %weight_buf_22_2_V_1, align 1
  %rhs_V_177 = sext i8 %weight_buf_22_2_V_2 to i16
  %r_V_177 = mul i16 %lhs_V_177_mid2, %rhs_V_177
  %mult_V_177_cast = sext i16 %r_V_177 to i17
  %weight_buf_22_3_V_1 = getelementptr [10 x i8]* %weight_buf_22_3_V, i64 0, i64 %tmp_19
  %weight_buf_22_3_V_2 = load i8* %weight_buf_22_3_V_1, align 1
  %rhs_V_178 = sext i8 %weight_buf_22_3_V_2 to i16
  %r_V_178 = mul i16 %lhs_V_178_mid2, %rhs_V_178
  %mult_V_178_cast = sext i16 %r_V_178 to i17
  %weight_buf_22_4_V_1 = getelementptr [10 x i8]* %weight_buf_22_4_V, i64 0, i64 %tmp_19
  %weight_buf_22_4_V_2 = load i8* %weight_buf_22_4_V_1, align 1
  %rhs_V_179 = sext i8 %weight_buf_22_4_V_2 to i16
  %r_V_179 = mul i16 %lhs_V_179_mid2, %rhs_V_179
  %mult_V_179_cast = sext i16 %r_V_179 to i17
  %weight_buf_22_5_V_1 = getelementptr [10 x i8]* %weight_buf_22_5_V, i64 0, i64 %tmp_19
  %weight_buf_22_5_V_2 = load i8* %weight_buf_22_5_V_1, align 1
  %rhs_V_180 = sext i8 %weight_buf_22_5_V_2 to i16
  %r_V_180 = mul i16 %lhs_V_180_mid2, %rhs_V_180
  %mult_V_180_cast = sext i16 %r_V_180 to i17
  %weight_buf_22_6_V_1 = getelementptr [10 x i8]* %weight_buf_22_6_V, i64 0, i64 %tmp_19
  %weight_buf_22_6_V_2 = load i8* %weight_buf_22_6_V_1, align 1
  %rhs_V_181 = sext i8 %weight_buf_22_6_V_2 to i16
  %r_V_181 = mul i16 %lhs_V_181_mid2, %rhs_V_181
  %mult_V_181_cast = sext i16 %r_V_181 to i17
  %weight_buf_22_7_V_1 = getelementptr [10 x i8]* %weight_buf_22_7_V, i64 0, i64 %tmp_19
  %weight_buf_22_7_V_2 = load i8* %weight_buf_22_7_V_1, align 1
  %rhs_V_182 = sext i8 %weight_buf_22_7_V_2 to i16
  %r_V_182 = mul i16 %lhs_V_182_mid2, %rhs_V_182
  %mult_V_182_cast = sext i16 %r_V_182 to i17
  %weight_buf_23_0_V_1 = getelementptr [10 x i8]* %weight_buf_23_0_V, i64 0, i64 %tmp_19
  %weight_buf_23_0_V_2 = load i8* %weight_buf_23_0_V_1, align 1
  %rhs_V_183 = sext i8 %weight_buf_23_0_V_2 to i16
  %r_V_183 = mul i16 %lhs_V_183_mid2, %rhs_V_183
  %mult_V_183_cast = sext i16 %r_V_183 to i17
  %weight_buf_23_1_V_1 = getelementptr [10 x i8]* %weight_buf_23_1_V, i64 0, i64 %tmp_19
  %weight_buf_23_1_V_2 = load i8* %weight_buf_23_1_V_1, align 1
  %rhs_V_184 = sext i8 %weight_buf_23_1_V_2 to i16
  %r_V_184 = mul i16 %lhs_V_184_mid2, %rhs_V_184
  %mult_V_184_cast = sext i16 %r_V_184 to i17
  %weight_buf_23_2_V_1 = getelementptr [10 x i8]* %weight_buf_23_2_V, i64 0, i64 %tmp_19
  %weight_buf_23_2_V_2 = load i8* %weight_buf_23_2_V_1, align 1
  %rhs_V_185 = sext i8 %weight_buf_23_2_V_2 to i16
  %r_V_185 = mul i16 %lhs_V_185_mid2, %rhs_V_185
  %mult_V_185_cast = sext i16 %r_V_185 to i17
  %weight_buf_23_3_V_1 = getelementptr [10 x i8]* %weight_buf_23_3_V, i64 0, i64 %tmp_19
  %weight_buf_23_3_V_2 = load i8* %weight_buf_23_3_V_1, align 1
  %rhs_V_186 = sext i8 %weight_buf_23_3_V_2 to i16
  %r_V_186 = mul i16 %lhs_V_186_mid2, %rhs_V_186
  %mult_V_186_cast = sext i16 %r_V_186 to i17
  %weight_buf_23_4_V_1 = getelementptr [10 x i8]* %weight_buf_23_4_V, i64 0, i64 %tmp_19
  %weight_buf_23_4_V_2 = load i8* %weight_buf_23_4_V_1, align 1
  %rhs_V_187 = sext i8 %weight_buf_23_4_V_2 to i16
  %r_V_187 = mul i16 %lhs_V_187_mid2, %rhs_V_187
  %mult_V_187_cast = sext i16 %r_V_187 to i17
  %weight_buf_23_5_V_1 = getelementptr [10 x i8]* %weight_buf_23_5_V, i64 0, i64 %tmp_19
  %weight_buf_23_5_V_2 = load i8* %weight_buf_23_5_V_1, align 1
  %rhs_V_188 = sext i8 %weight_buf_23_5_V_2 to i16
  %r_V_188 = mul i16 %lhs_V_188_mid2, %rhs_V_188
  %mult_V_188_cast = sext i16 %r_V_188 to i17
  %weight_buf_23_6_V_1 = getelementptr [10 x i8]* %weight_buf_23_6_V, i64 0, i64 %tmp_19
  %weight_buf_23_6_V_2 = load i8* %weight_buf_23_6_V_1, align 1
  %rhs_V_189 = sext i8 %weight_buf_23_6_V_2 to i16
  %r_V_189 = mul i16 %lhs_V_189_mid2, %rhs_V_189
  %mult_V_189_cast = sext i16 %r_V_189 to i17
  %weight_buf_23_7_V_1 = getelementptr [10 x i8]* %weight_buf_23_7_V, i64 0, i64 %tmp_19
  %weight_buf_23_7_V_2 = load i8* %weight_buf_23_7_V_1, align 1
  %rhs_V_190 = sext i8 %weight_buf_23_7_V_2 to i16
  %r_V_190 = mul i16 %lhs_V_190_mid2, %rhs_V_190
  %mult_V_190_cast = sext i16 %r_V_190 to i17
  %weight_buf_24_0_V_1 = getelementptr [10 x i8]* %weight_buf_24_0_V, i64 0, i64 %tmp_19
  %weight_buf_24_0_V_2 = load i8* %weight_buf_24_0_V_1, align 1
  %rhs_V_191 = sext i8 %weight_buf_24_0_V_2 to i16
  %r_V_191 = mul i16 %lhs_V_191_mid2, %rhs_V_191
  %mult_V_191_cast = sext i16 %r_V_191 to i17
  %weight_buf_24_1_V_1 = getelementptr [10 x i8]* %weight_buf_24_1_V, i64 0, i64 %tmp_19
  %weight_buf_24_1_V_2 = load i8* %weight_buf_24_1_V_1, align 1
  %rhs_V_192 = sext i8 %weight_buf_24_1_V_2 to i16
  %r_V_192 = mul i16 %lhs_V_192_mid2, %rhs_V_192
  %mult_V_192_cast = sext i16 %r_V_192 to i17
  %weight_buf_24_2_V_1 = getelementptr [10 x i8]* %weight_buf_24_2_V, i64 0, i64 %tmp_19
  %weight_buf_24_2_V_2 = load i8* %weight_buf_24_2_V_1, align 1
  %rhs_V_193 = sext i8 %weight_buf_24_2_V_2 to i16
  %r_V_193 = mul i16 %lhs_V_193_mid2, %rhs_V_193
  %mult_V_193_cast = sext i16 %r_V_193 to i17
  %weight_buf_24_3_V_1 = getelementptr [10 x i8]* %weight_buf_24_3_V, i64 0, i64 %tmp_19
  %weight_buf_24_3_V_2 = load i8* %weight_buf_24_3_V_1, align 1
  %rhs_V_194 = sext i8 %weight_buf_24_3_V_2 to i16
  %r_V_194 = mul i16 %lhs_V_194_mid2, %rhs_V_194
  %mult_V_194_cast = sext i16 %r_V_194 to i17
  %weight_buf_24_4_V_1 = getelementptr [10 x i8]* %weight_buf_24_4_V, i64 0, i64 %tmp_19
  %weight_buf_24_4_V_2 = load i8* %weight_buf_24_4_V_1, align 1
  %rhs_V_195 = sext i8 %weight_buf_24_4_V_2 to i16
  %r_V_195 = mul i16 %lhs_V_195_mid2, %rhs_V_195
  %mult_V_195_cast = sext i16 %r_V_195 to i17
  %weight_buf_24_5_V_1 = getelementptr [10 x i8]* %weight_buf_24_5_V, i64 0, i64 %tmp_19
  %weight_buf_24_5_V_2 = load i8* %weight_buf_24_5_V_1, align 1
  %rhs_V_196 = sext i8 %weight_buf_24_5_V_2 to i16
  %r_V_196 = mul i16 %lhs_V_196_mid2, %rhs_V_196
  %mult_V_196_cast = sext i16 %r_V_196 to i17
  %weight_buf_24_6_V_1 = getelementptr [10 x i8]* %weight_buf_24_6_V, i64 0, i64 %tmp_19
  %weight_buf_24_6_V_2 = load i8* %weight_buf_24_6_V_1, align 1
  %rhs_V_197 = sext i8 %weight_buf_24_6_V_2 to i16
  %r_V_197 = mul i16 %lhs_V_197_mid2, %rhs_V_197
  %mult_V_197_cast = sext i16 %r_V_197 to i17
  %weight_buf_24_7_V_1 = getelementptr [10 x i8]* %weight_buf_24_7_V, i64 0, i64 %tmp_19
  %weight_buf_24_7_V_2 = load i8* %weight_buf_24_7_V_1, align 1
  %rhs_V_198 = sext i8 %weight_buf_24_7_V_2 to i16
  %r_V_198 = mul i16 %lhs_V_198_mid2, %rhs_V_198
  %mult_V_198_cast = sext i16 %r_V_198 to i17
  %weight_buf_25_0_V_1 = getelementptr [10 x i8]* %weight_buf_25_0_V, i64 0, i64 %tmp_19
  %weight_buf_25_0_V_2 = load i8* %weight_buf_25_0_V_1, align 1
  %rhs_V_199 = sext i8 %weight_buf_25_0_V_2 to i16
  %r_V_199 = mul i16 %lhs_V_199_mid2, %rhs_V_199
  %mult_V_199_cast = sext i16 %r_V_199 to i17
  %weight_buf_25_1_V_1 = getelementptr [10 x i8]* %weight_buf_25_1_V, i64 0, i64 %tmp_19
  %weight_buf_25_1_V_2 = load i8* %weight_buf_25_1_V_1, align 1
  %rhs_V_200 = sext i8 %weight_buf_25_1_V_2 to i16
  %r_V_200 = mul i16 %lhs_V_200_mid2, %rhs_V_200
  %mult_V_200_cast = sext i16 %r_V_200 to i17
  %weight_buf_25_2_V_1 = getelementptr [10 x i8]* %weight_buf_25_2_V, i64 0, i64 %tmp_19
  %weight_buf_25_2_V_2 = load i8* %weight_buf_25_2_V_1, align 1
  %rhs_V_201 = sext i8 %weight_buf_25_2_V_2 to i16
  %r_V_201 = mul i16 %lhs_V_201_mid2, %rhs_V_201
  %mult_V_201_cast = sext i16 %r_V_201 to i17
  %weight_buf_25_3_V_1 = getelementptr [10 x i8]* %weight_buf_25_3_V, i64 0, i64 %tmp_19
  %weight_buf_25_3_V_2 = load i8* %weight_buf_25_3_V_1, align 1
  %rhs_V_202 = sext i8 %weight_buf_25_3_V_2 to i16
  %r_V_202 = mul i16 %lhs_V_202_mid2, %rhs_V_202
  %mult_V_202_cast = sext i16 %r_V_202 to i17
  %weight_buf_25_4_V_1 = getelementptr [10 x i8]* %weight_buf_25_4_V, i64 0, i64 %tmp_19
  %weight_buf_25_4_V_2 = load i8* %weight_buf_25_4_V_1, align 1
  %rhs_V_203 = sext i8 %weight_buf_25_4_V_2 to i16
  %r_V_203 = mul i16 %lhs_V_203_mid2, %rhs_V_203
  %mult_V_203_cast = sext i16 %r_V_203 to i17
  %weight_buf_25_5_V_1 = getelementptr [10 x i8]* %weight_buf_25_5_V, i64 0, i64 %tmp_19
  %weight_buf_25_5_V_2 = load i8* %weight_buf_25_5_V_1, align 1
  %rhs_V_204 = sext i8 %weight_buf_25_5_V_2 to i16
  %r_V_204 = mul i16 %lhs_V_204_mid2, %rhs_V_204
  %mult_V_204_cast = sext i16 %r_V_204 to i17
  %weight_buf_25_6_V_1 = getelementptr [10 x i8]* %weight_buf_25_6_V, i64 0, i64 %tmp_19
  %weight_buf_25_6_V_2 = load i8* %weight_buf_25_6_V_1, align 1
  %rhs_V_205 = sext i8 %weight_buf_25_6_V_2 to i16
  %r_V_205 = mul i16 %lhs_V_205_mid2, %rhs_V_205
  %mult_V_205_cast = sext i16 %r_V_205 to i17
  %weight_buf_25_7_V_1 = getelementptr [10 x i8]* %weight_buf_25_7_V, i64 0, i64 %tmp_19
  %weight_buf_25_7_V_2 = load i8* %weight_buf_25_7_V_1, align 1
  %rhs_V_206 = sext i8 %weight_buf_25_7_V_2 to i16
  %r_V_206 = mul i16 %lhs_V_206_mid2, %rhs_V_206
  %mult_V_206_cast = sext i16 %r_V_206 to i17
  %weight_buf_26_0_V_1 = getelementptr [10 x i8]* %weight_buf_26_0_V, i64 0, i64 %tmp_19
  %weight_buf_26_0_V_2 = load i8* %weight_buf_26_0_V_1, align 1
  %rhs_V_207 = sext i8 %weight_buf_26_0_V_2 to i16
  %r_V_207 = mul i16 %lhs_V_207_mid2, %rhs_V_207
  %mult_V_207_cast = sext i16 %r_V_207 to i17
  %weight_buf_26_1_V_1 = getelementptr [10 x i8]* %weight_buf_26_1_V, i64 0, i64 %tmp_19
  %weight_buf_26_1_V_2 = load i8* %weight_buf_26_1_V_1, align 1
  %rhs_V_208 = sext i8 %weight_buf_26_1_V_2 to i16
  %r_V_208 = mul i16 %lhs_V_208_mid2, %rhs_V_208
  %mult_V_208_cast = sext i16 %r_V_208 to i17
  %weight_buf_26_2_V_1 = getelementptr [10 x i8]* %weight_buf_26_2_V, i64 0, i64 %tmp_19
  %weight_buf_26_2_V_2 = load i8* %weight_buf_26_2_V_1, align 1
  %rhs_V_209 = sext i8 %weight_buf_26_2_V_2 to i16
  %r_V_209 = mul i16 %lhs_V_209_mid2, %rhs_V_209
  %mult_V_209_cast = sext i16 %r_V_209 to i17
  %weight_buf_26_3_V_1 = getelementptr [10 x i8]* %weight_buf_26_3_V, i64 0, i64 %tmp_19
  %weight_buf_26_3_V_2 = load i8* %weight_buf_26_3_V_1, align 1
  %rhs_V_210 = sext i8 %weight_buf_26_3_V_2 to i16
  %r_V_210 = mul i16 %lhs_V_210_mid2, %rhs_V_210
  %mult_V_210_cast = sext i16 %r_V_210 to i17
  %weight_buf_26_4_V_1 = getelementptr [10 x i8]* %weight_buf_26_4_V, i64 0, i64 %tmp_19
  %weight_buf_26_4_V_2 = load i8* %weight_buf_26_4_V_1, align 1
  %rhs_V_211 = sext i8 %weight_buf_26_4_V_2 to i16
  %r_V_211 = mul i16 %lhs_V_211_mid2, %rhs_V_211
  %mult_V_211_cast = sext i16 %r_V_211 to i17
  %weight_buf_26_5_V_1 = getelementptr [10 x i8]* %weight_buf_26_5_V, i64 0, i64 %tmp_19
  %weight_buf_26_5_V_2 = load i8* %weight_buf_26_5_V_1, align 1
  %rhs_V_212 = sext i8 %weight_buf_26_5_V_2 to i16
  %r_V_212 = mul i16 %lhs_V_212_mid2, %rhs_V_212
  %mult_V_212_cast = sext i16 %r_V_212 to i17
  %weight_buf_26_6_V_1 = getelementptr [10 x i8]* %weight_buf_26_6_V, i64 0, i64 %tmp_19
  %weight_buf_26_6_V_2 = load i8* %weight_buf_26_6_V_1, align 1
  %rhs_V_213 = sext i8 %weight_buf_26_6_V_2 to i16
  %r_V_213 = mul i16 %lhs_V_213_mid2, %rhs_V_213
  %mult_V_213_cast = sext i16 %r_V_213 to i17
  %weight_buf_26_7_V_1 = getelementptr [10 x i8]* %weight_buf_26_7_V, i64 0, i64 %tmp_19
  %weight_buf_26_7_V_2 = load i8* %weight_buf_26_7_V_1, align 1
  %rhs_V_214 = sext i8 %weight_buf_26_7_V_2 to i16
  %r_V_214 = mul i16 %lhs_V_214_mid2, %rhs_V_214
  %mult_V_214_cast = sext i16 %r_V_214 to i17
  %weight_buf_27_0_V_1 = getelementptr [10 x i8]* %weight_buf_27_0_V, i64 0, i64 %tmp_19
  %weight_buf_27_0_V_2 = load i8* %weight_buf_27_0_V_1, align 1
  %rhs_V_215 = sext i8 %weight_buf_27_0_V_2 to i16
  %r_V_215 = mul i16 %lhs_V_215_mid2, %rhs_V_215
  %mult_V_215_cast = sext i16 %r_V_215 to i17
  %weight_buf_27_1_V_1 = getelementptr [10 x i8]* %weight_buf_27_1_V, i64 0, i64 %tmp_19
  %weight_buf_27_1_V_2 = load i8* %weight_buf_27_1_V_1, align 1
  %rhs_V_216 = sext i8 %weight_buf_27_1_V_2 to i16
  %r_V_216 = mul i16 %lhs_V_216_mid2, %rhs_V_216
  %mult_V_216_cast = sext i16 %r_V_216 to i17
  %weight_buf_27_2_V_1 = getelementptr [10 x i8]* %weight_buf_27_2_V, i64 0, i64 %tmp_19
  %weight_buf_27_2_V_2 = load i8* %weight_buf_27_2_V_1, align 1
  %rhs_V_217 = sext i8 %weight_buf_27_2_V_2 to i16
  %r_V_217 = mul i16 %lhs_V_217_mid2, %rhs_V_217
  %mult_V_217_cast = sext i16 %r_V_217 to i17
  %weight_buf_27_3_V_1 = getelementptr [10 x i8]* %weight_buf_27_3_V, i64 0, i64 %tmp_19
  %weight_buf_27_3_V_2 = load i8* %weight_buf_27_3_V_1, align 1
  %rhs_V_218 = sext i8 %weight_buf_27_3_V_2 to i16
  %r_V_218 = mul i16 %lhs_V_218_mid2, %rhs_V_218
  %mult_V_218_cast = sext i16 %r_V_218 to i17
  %weight_buf_27_4_V_1 = getelementptr [10 x i8]* %weight_buf_27_4_V, i64 0, i64 %tmp_19
  %weight_buf_27_4_V_2 = load i8* %weight_buf_27_4_V_1, align 1
  %rhs_V_219 = sext i8 %weight_buf_27_4_V_2 to i16
  %r_V_219 = mul i16 %lhs_V_219_mid2, %rhs_V_219
  %mult_V_219_cast = sext i16 %r_V_219 to i17
  %weight_buf_27_5_V_1 = getelementptr [10 x i8]* %weight_buf_27_5_V, i64 0, i64 %tmp_19
  %weight_buf_27_5_V_2 = load i8* %weight_buf_27_5_V_1, align 1
  %rhs_V_220 = sext i8 %weight_buf_27_5_V_2 to i16
  %r_V_220 = mul i16 %lhs_V_220_mid2, %rhs_V_220
  %mult_V_220_cast = sext i16 %r_V_220 to i17
  %weight_buf_27_6_V_1 = getelementptr [10 x i8]* %weight_buf_27_6_V, i64 0, i64 %tmp_19
  %weight_buf_27_6_V_2 = load i8* %weight_buf_27_6_V_1, align 1
  %rhs_V_221 = sext i8 %weight_buf_27_6_V_2 to i16
  %r_V_221 = mul i16 %lhs_V_221_mid2, %rhs_V_221
  %mult_V_221_cast = sext i16 %r_V_221 to i17
  %weight_buf_27_7_V_1 = getelementptr [10 x i8]* %weight_buf_27_7_V, i64 0, i64 %tmp_19
  %weight_buf_27_7_V_2 = load i8* %weight_buf_27_7_V_1, align 1
  %rhs_V_222 = sext i8 %weight_buf_27_7_V_2 to i16
  %r_V_222 = mul i16 %lhs_V_222_mid2, %rhs_V_222
  %mult_V_222_cast = sext i16 %r_V_222 to i17
  %weight_buf_28_0_V_1 = getelementptr [10 x i8]* %weight_buf_28_0_V, i64 0, i64 %tmp_19
  %weight_buf_28_0_V_2 = load i8* %weight_buf_28_0_V_1, align 1
  %rhs_V_223 = sext i8 %weight_buf_28_0_V_2 to i16
  %r_V_223 = mul i16 %lhs_V_223_mid2, %rhs_V_223
  %mult_V_223_cast = sext i16 %r_V_223 to i17
  %weight_buf_28_1_V_1 = getelementptr [10 x i8]* %weight_buf_28_1_V, i64 0, i64 %tmp_19
  %weight_buf_28_1_V_2 = load i8* %weight_buf_28_1_V_1, align 1
  %rhs_V_224 = sext i8 %weight_buf_28_1_V_2 to i16
  %r_V_224 = mul i16 %lhs_V_224_mid2, %rhs_V_224
  %mult_V_224_cast = sext i16 %r_V_224 to i17
  %weight_buf_28_2_V_1 = getelementptr [10 x i8]* %weight_buf_28_2_V, i64 0, i64 %tmp_19
  %weight_buf_28_2_V_2 = load i8* %weight_buf_28_2_V_1, align 1
  %rhs_V_225 = sext i8 %weight_buf_28_2_V_2 to i16
  %r_V_225 = mul i16 %lhs_V_225_mid2, %rhs_V_225
  %mult_V_225_cast = sext i16 %r_V_225 to i17
  %weight_buf_28_3_V_1 = getelementptr [10 x i8]* %weight_buf_28_3_V, i64 0, i64 %tmp_19
  %weight_buf_28_3_V_2 = load i8* %weight_buf_28_3_V_1, align 1
  %rhs_V_226 = sext i8 %weight_buf_28_3_V_2 to i16
  %r_V_226 = mul i16 %lhs_V_226_mid2, %rhs_V_226
  %mult_V_226_cast = sext i16 %r_V_226 to i17
  %weight_buf_28_4_V_1 = getelementptr [10 x i8]* %weight_buf_28_4_V, i64 0, i64 %tmp_19
  %weight_buf_28_4_V_2 = load i8* %weight_buf_28_4_V_1, align 1
  %rhs_V_227 = sext i8 %weight_buf_28_4_V_2 to i16
  %r_V_227 = mul i16 %lhs_V_227_mid2, %rhs_V_227
  %mult_V_227_cast = sext i16 %r_V_227 to i17
  %weight_buf_28_5_V_1 = getelementptr [10 x i8]* %weight_buf_28_5_V, i64 0, i64 %tmp_19
  %weight_buf_28_5_V_2 = load i8* %weight_buf_28_5_V_1, align 1
  %rhs_V_228 = sext i8 %weight_buf_28_5_V_2 to i16
  %r_V_228 = mul i16 %lhs_V_228_mid2, %rhs_V_228
  %mult_V_228_cast = sext i16 %r_V_228 to i17
  %weight_buf_28_6_V_1 = getelementptr [10 x i8]* %weight_buf_28_6_V, i64 0, i64 %tmp_19
  %weight_buf_28_6_V_2 = load i8* %weight_buf_28_6_V_1, align 1
  %rhs_V_229 = sext i8 %weight_buf_28_6_V_2 to i16
  %r_V_229 = mul i16 %lhs_V_229_mid2, %rhs_V_229
  %mult_V_229_cast = sext i16 %r_V_229 to i17
  %weight_buf_28_7_V_1 = getelementptr [10 x i8]* %weight_buf_28_7_V, i64 0, i64 %tmp_19
  %weight_buf_28_7_V_2 = load i8* %weight_buf_28_7_V_1, align 1
  %rhs_V_230 = sext i8 %weight_buf_28_7_V_2 to i16
  %r_V_230 = mul i16 %lhs_V_230_mid2, %rhs_V_230
  %mult_V_230_cast = sext i16 %r_V_230 to i17
  %weight_buf_29_0_V_1 = getelementptr [10 x i8]* %weight_buf_29_0_V, i64 0, i64 %tmp_19
  %weight_buf_29_0_V_2 = load i8* %weight_buf_29_0_V_1, align 1
  %rhs_V_231 = sext i8 %weight_buf_29_0_V_2 to i16
  %r_V_231 = mul i16 %lhs_V_231_mid2, %rhs_V_231
  %mult_V_231_cast = sext i16 %r_V_231 to i17
  %weight_buf_29_1_V_1 = getelementptr [10 x i8]* %weight_buf_29_1_V, i64 0, i64 %tmp_19
  %weight_buf_29_1_V_2 = load i8* %weight_buf_29_1_V_1, align 1
  %rhs_V_232 = sext i8 %weight_buf_29_1_V_2 to i16
  %r_V_232 = mul i16 %lhs_V_232_mid2, %rhs_V_232
  %mult_V_232_cast = sext i16 %r_V_232 to i17
  %weight_buf_29_2_V_1 = getelementptr [10 x i8]* %weight_buf_29_2_V, i64 0, i64 %tmp_19
  %weight_buf_29_2_V_2 = load i8* %weight_buf_29_2_V_1, align 1
  %rhs_V_233 = sext i8 %weight_buf_29_2_V_2 to i16
  %r_V_233 = mul i16 %lhs_V_233_mid2, %rhs_V_233
  %mult_V_233_cast = sext i16 %r_V_233 to i17
  %weight_buf_29_3_V_1 = getelementptr [10 x i8]* %weight_buf_29_3_V, i64 0, i64 %tmp_19
  %weight_buf_29_3_V_2 = load i8* %weight_buf_29_3_V_1, align 1
  %rhs_V_234 = sext i8 %weight_buf_29_3_V_2 to i16
  %r_V_234 = mul i16 %lhs_V_234_mid2, %rhs_V_234
  %mult_V_234_cast = sext i16 %r_V_234 to i17
  %weight_buf_29_4_V_1 = getelementptr [10 x i8]* %weight_buf_29_4_V, i64 0, i64 %tmp_19
  %weight_buf_29_4_V_2 = load i8* %weight_buf_29_4_V_1, align 1
  %rhs_V_235 = sext i8 %weight_buf_29_4_V_2 to i16
  %r_V_235 = mul i16 %lhs_V_235_mid2, %rhs_V_235
  %mult_V_235_cast = sext i16 %r_V_235 to i17
  %weight_buf_29_5_V_1 = getelementptr [10 x i8]* %weight_buf_29_5_V, i64 0, i64 %tmp_19
  %weight_buf_29_5_V_2 = load i8* %weight_buf_29_5_V_1, align 1
  %rhs_V_236 = sext i8 %weight_buf_29_5_V_2 to i16
  %r_V_236 = mul i16 %lhs_V_236_mid2, %rhs_V_236
  %mult_V_236_cast = sext i16 %r_V_236 to i17
  %weight_buf_29_6_V_1 = getelementptr [10 x i8]* %weight_buf_29_6_V, i64 0, i64 %tmp_19
  %weight_buf_29_6_V_2 = load i8* %weight_buf_29_6_V_1, align 1
  %rhs_V_237 = sext i8 %weight_buf_29_6_V_2 to i16
  %r_V_237 = mul i16 %lhs_V_237_mid2, %rhs_V_237
  %mult_V_237_cast = sext i16 %r_V_237 to i17
  %weight_buf_29_7_V_1 = getelementptr [10 x i8]* %weight_buf_29_7_V, i64 0, i64 %tmp_19
  %weight_buf_29_7_V_2 = load i8* %weight_buf_29_7_V_1, align 1
  %rhs_V_238 = sext i8 %weight_buf_29_7_V_2 to i16
  %r_V_238 = mul i16 %lhs_V_238_mid2, %rhs_V_238
  %mult_V_238_cast = sext i16 %r_V_238 to i17
  %weight_buf_30_0_V_1 = getelementptr [10 x i8]* %weight_buf_30_0_V, i64 0, i64 %tmp_19
  %weight_buf_30_0_V_2 = load i8* %weight_buf_30_0_V_1, align 1
  %rhs_V_239 = sext i8 %weight_buf_30_0_V_2 to i16
  %r_V_239 = mul i16 %lhs_V_239_mid2, %rhs_V_239
  %mult_V_239_cast = sext i16 %r_V_239 to i17
  %weight_buf_30_1_V_1 = getelementptr [10 x i8]* %weight_buf_30_1_V, i64 0, i64 %tmp_19
  %weight_buf_30_1_V_2 = load i8* %weight_buf_30_1_V_1, align 1
  %rhs_V_240 = sext i8 %weight_buf_30_1_V_2 to i16
  %r_V_240 = mul i16 %lhs_V_240_mid2, %rhs_V_240
  %mult_V_240_cast = sext i16 %r_V_240 to i17
  %weight_buf_30_2_V_1 = getelementptr [10 x i8]* %weight_buf_30_2_V, i64 0, i64 %tmp_19
  %weight_buf_30_2_V_2 = load i8* %weight_buf_30_2_V_1, align 1
  %rhs_V_241 = sext i8 %weight_buf_30_2_V_2 to i16
  %r_V_241 = mul i16 %lhs_V_241_mid2, %rhs_V_241
  %mult_V_241_cast = sext i16 %r_V_241 to i17
  %weight_buf_30_3_V_1 = getelementptr [10 x i8]* %weight_buf_30_3_V, i64 0, i64 %tmp_19
  %weight_buf_30_3_V_2 = load i8* %weight_buf_30_3_V_1, align 1
  %rhs_V_242 = sext i8 %weight_buf_30_3_V_2 to i16
  %r_V_242 = mul i16 %lhs_V_242_mid2, %rhs_V_242
  %mult_V_242_cast = sext i16 %r_V_242 to i17
  %weight_buf_30_4_V_1 = getelementptr [10 x i8]* %weight_buf_30_4_V, i64 0, i64 %tmp_19
  %weight_buf_30_4_V_2 = load i8* %weight_buf_30_4_V_1, align 1
  %rhs_V_243 = sext i8 %weight_buf_30_4_V_2 to i16
  %r_V_243 = mul i16 %lhs_V_243_mid2, %rhs_V_243
  %mult_V_243_cast = sext i16 %r_V_243 to i17
  %weight_buf_30_5_V_1 = getelementptr [10 x i8]* %weight_buf_30_5_V, i64 0, i64 %tmp_19
  %weight_buf_30_5_V_2 = load i8* %weight_buf_30_5_V_1, align 1
  %rhs_V_244 = sext i8 %weight_buf_30_5_V_2 to i16
  %r_V_244 = mul i16 %lhs_V_244_mid2, %rhs_V_244
  %mult_V_244_cast = sext i16 %r_V_244 to i17
  %weight_buf_30_6_V_1 = getelementptr [10 x i8]* %weight_buf_30_6_V, i64 0, i64 %tmp_19
  %weight_buf_30_6_V_2 = load i8* %weight_buf_30_6_V_1, align 1
  %rhs_V_245 = sext i8 %weight_buf_30_6_V_2 to i16
  %r_V_245 = mul i16 %lhs_V_245_mid2, %rhs_V_245
  %mult_V_245_cast = sext i16 %r_V_245 to i17
  %weight_buf_30_7_V_1 = getelementptr [10 x i8]* %weight_buf_30_7_V, i64 0, i64 %tmp_19
  %weight_buf_30_7_V_2 = load i8* %weight_buf_30_7_V_1, align 1
  %rhs_V_246 = sext i8 %weight_buf_30_7_V_2 to i16
  %r_V_246 = mul i16 %lhs_V_246_mid2, %rhs_V_246
  %mult_V_246_cast = sext i16 %r_V_246 to i17
  %weight_buf_31_0_V_1 = getelementptr [10 x i8]* %weight_buf_31_0_V, i64 0, i64 %tmp_19
  %weight_buf_31_0_V_2 = load i8* %weight_buf_31_0_V_1, align 1
  %rhs_V_247 = sext i8 %weight_buf_31_0_V_2 to i16
  %r_V_247 = mul i16 %lhs_V_247_mid2, %rhs_V_247
  %mult_V_247_cast = sext i16 %r_V_247 to i17
  %weight_buf_31_1_V_1 = getelementptr [10 x i8]* %weight_buf_31_1_V, i64 0, i64 %tmp_19
  %weight_buf_31_1_V_2 = load i8* %weight_buf_31_1_V_1, align 1
  %rhs_V_248 = sext i8 %weight_buf_31_1_V_2 to i16
  %r_V_248 = mul i16 %lhs_V_248_mid2, %rhs_V_248
  %mult_V_248_cast = sext i16 %r_V_248 to i17
  %weight_buf_31_2_V_1 = getelementptr [10 x i8]* %weight_buf_31_2_V, i64 0, i64 %tmp_19
  %weight_buf_31_2_V_2 = load i8* %weight_buf_31_2_V_1, align 1
  %rhs_V_249 = sext i8 %weight_buf_31_2_V_2 to i16
  %r_V_249 = mul i16 %lhs_V_249_mid2, %rhs_V_249
  %mult_V_249_cast = sext i16 %r_V_249 to i17
  %weight_buf_31_3_V_1 = getelementptr [10 x i8]* %weight_buf_31_3_V, i64 0, i64 %tmp_19
  %weight_buf_31_3_V_2 = load i8* %weight_buf_31_3_V_1, align 1
  %rhs_V_250 = sext i8 %weight_buf_31_3_V_2 to i16
  %r_V_250 = mul i16 %lhs_V_250_mid2, %rhs_V_250
  %mult_V_250_cast = sext i16 %r_V_250 to i17
  %weight_buf_31_4_V_1 = getelementptr [10 x i8]* %weight_buf_31_4_V, i64 0, i64 %tmp_19
  %weight_buf_31_4_V_2 = load i8* %weight_buf_31_4_V_1, align 1
  %rhs_V_251 = sext i8 %weight_buf_31_4_V_2 to i16
  %r_V_251 = mul i16 %lhs_V_251_mid2, %rhs_V_251
  %mult_V_251_cast = sext i16 %r_V_251 to i17
  %weight_buf_31_5_V_1 = getelementptr [10 x i8]* %weight_buf_31_5_V, i64 0, i64 %tmp_19
  %weight_buf_31_5_V_2 = load i8* %weight_buf_31_5_V_1, align 1
  %rhs_V_252 = sext i8 %weight_buf_31_5_V_2 to i16
  %r_V_252 = mul i16 %lhs_V_252_mid2, %rhs_V_252
  %mult_V_252_cast = sext i16 %r_V_252 to i18
  %weight_buf_31_6_V_1 = getelementptr [10 x i8]* %weight_buf_31_6_V, i64 0, i64 %tmp_19
  %weight_buf_31_6_V_2 = load i8* %weight_buf_31_6_V_1, align 1
  %rhs_V_253 = sext i8 %weight_buf_31_6_V_2 to i16
  %r_V_253 = mul i16 %lhs_V_253_mid2, %rhs_V_253
  %mult_V_253_cast = sext i16 %r_V_253 to i17
  %weight_buf_31_7_V_1 = getelementptr [10 x i8]* %weight_buf_31_7_V, i64 0, i64 %tmp_19
  %weight_buf_31_7_V_2 = load i8* %weight_buf_31_7_V_1, align 1
  %rhs_V_254 = sext i8 %weight_buf_31_7_V_2 to i16
  %r_V_254 = mul i16 %lhs_V_254_mid2, %rhs_V_254
  %mult_V_254_cast = sext i16 %r_V_254 to i17
  %tmp7 = add i32 %tmp_V, %mult_V
  %tmp8 = add i17 %mult_V_1_cast, %mult_V_2_cast
  %tmp8_cast = sext i17 %tmp8 to i32
  %tmp6 = add i32 %tmp8_cast, %tmp7
  %tmp10 = add i17 %mult_V_3_cast, %mult_V_4_cast
  %tmp10_cast = sext i17 %tmp10 to i18
  %tmp11 = add i17 %mult_V_5_cast, %mult_V_6_cast
  %tmp11_cast = sext i17 %tmp11 to i18
  %tmp9 = add i18 %tmp11_cast, %tmp10_cast
  %tmp9_cast = sext i18 %tmp9 to i32
  %tmp5 = add i32 %tmp9_cast, %tmp6
  %tmp14 = add i17 %mult_V_7_cast, %mult_V_8_cast
  %tmp14_cast = sext i17 %tmp14 to i18
  %tmp15 = add i17 %mult_V_9_cast, %mult_V_cast
  %tmp15_cast = sext i17 %tmp15 to i18
  %tmp13 = add i18 %tmp15_cast, %tmp14_cast
  %tmp13_cast = sext i18 %tmp13 to i19
  %tmp17 = add i17 %mult_V_10_cast, %mult_V_11_cast
  %tmp17_cast = sext i17 %tmp17 to i18
  %tmp18 = add i17 %mult_V_12_cast, %mult_V_13_cast
  %tmp18_cast = sext i17 %tmp18 to i18
  %tmp16 = add i18 %tmp18_cast, %tmp17_cast
  %tmp16_cast = sext i18 %tmp16 to i19
  %tmp12 = add i19 %tmp16_cast, %tmp13_cast
  %tmp12_cast = sext i19 %tmp12 to i32
  %tmp4 = add i32 %tmp12_cast, %tmp5
  %tmp22 = add i17 %mult_V_14_cast, %mult_V_15_cast
  %tmp22_cast = sext i17 %tmp22 to i18
  %tmp23 = add i17 %mult_V_16_cast, %mult_V_17_cast
  %tmp23_cast = sext i17 %tmp23 to i18
  %tmp21 = add i18 %tmp23_cast, %tmp22_cast
  %tmp21_cast = sext i18 %tmp21 to i19
  %tmp25 = add i17 %mult_V_18_cast, %mult_V_19_cast
  %tmp25_cast = sext i17 %tmp25 to i18
  %tmp26 = add i17 %mult_V_20_cast, %mult_V_21_cast
  %tmp26_cast = sext i17 %tmp26 to i18
  %tmp24 = add i18 %tmp26_cast, %tmp25_cast
  %tmp24_cast = sext i18 %tmp24 to i19
  %tmp20 = add i19 %tmp24_cast, %tmp21_cast
  %tmp20_cast = sext i19 %tmp20 to i20
  %tmp29 = add i17 %mult_V_22_cast, %mult_V_23_cast
  %tmp29_cast = sext i17 %tmp29 to i18
  %tmp30 = add i17 %mult_V_24_cast, %mult_V_25_cast
  %tmp30_cast = sext i17 %tmp30 to i18
  %tmp28 = add i18 %tmp30_cast, %tmp29_cast
  %tmp28_cast = sext i18 %tmp28 to i19
  %tmp32 = add i17 %mult_V_26_cast, %mult_V_27_cast
  %tmp32_cast = sext i17 %tmp32 to i18
  %tmp33 = add i17 %mult_V_28_cast, %mult_V_29_cast
  %tmp33_cast = sext i17 %tmp33 to i18
  %tmp31 = add i18 %tmp33_cast, %tmp32_cast
  %tmp31_cast = sext i18 %tmp31 to i19
  %tmp27 = add i19 %tmp31_cast, %tmp28_cast
  %tmp27_cast = sext i19 %tmp27 to i20
  %tmp19 = add i20 %tmp27_cast, %tmp20_cast
  %tmp19_cast = sext i20 %tmp19 to i32
  %tmp3 = add i32 %tmp19_cast, %tmp4
  %tmp38 = add i17 %mult_V_30_cast, %mult_V_31_cast
  %tmp38_cast = sext i17 %tmp38 to i18
  %tmp39 = add i17 %mult_V_32_cast, %mult_V_33_cast
  %tmp39_cast = sext i17 %tmp39 to i18
  %tmp37 = add i18 %tmp39_cast, %tmp38_cast
  %tmp37_cast = sext i18 %tmp37 to i19
  %tmp41 = add i17 %mult_V_34_cast, %mult_V_35_cast
  %tmp41_cast = sext i17 %tmp41 to i18
  %tmp42 = add i17 %mult_V_36_cast, %mult_V_37_cast
  %tmp42_cast = sext i17 %tmp42 to i18
  %tmp40 = add i18 %tmp42_cast, %tmp41_cast
  %tmp40_cast = sext i18 %tmp40 to i19
  %tmp36 = add i19 %tmp40_cast, %tmp37_cast
  %tmp36_cast = sext i19 %tmp36 to i20
  %tmp45 = add i17 %mult_V_38_cast, %mult_V_39_cast
  %tmp45_cast = sext i17 %tmp45 to i18
  %tmp46 = add i17 %mult_V_40_cast, %mult_V_41_cast
  %tmp46_cast = sext i17 %tmp46 to i18
  %tmp44 = add i18 %tmp46_cast, %tmp45_cast
  %tmp44_cast = sext i18 %tmp44 to i19
  %tmp48 = add i17 %mult_V_42_cast, %mult_V_43_cast
  %tmp48_cast = sext i17 %tmp48 to i18
  %tmp49 = add i17 %mult_V_44_cast, %mult_V_45_cast
  %tmp49_cast = sext i17 %tmp49 to i18
  %tmp47 = add i18 %tmp49_cast, %tmp48_cast
  %tmp47_cast = sext i18 %tmp47 to i19
  %tmp43 = add i19 %tmp47_cast, %tmp44_cast
  %tmp43_cast = sext i19 %tmp43 to i20
  %tmp35 = add i20 %tmp43_cast, %tmp36_cast
  %tmp35_cast = sext i20 %tmp35 to i21
  %tmp53 = add i17 %mult_V_46_cast, %mult_V_47_cast
  %tmp53_cast = sext i17 %tmp53 to i18
  %tmp54 = add i17 %mult_V_48_cast, %mult_V_49_cast
  %tmp54_cast = sext i17 %tmp54 to i18
  %tmp52 = add i18 %tmp54_cast, %tmp53_cast
  %tmp52_cast = sext i18 %tmp52 to i19
  %tmp56 = add i17 %mult_V_50_cast, %mult_V_51_cast
  %tmp56_cast = sext i17 %tmp56 to i18
  %tmp57 = add i17 %mult_V_52_cast, %mult_V_53_cast
  %tmp57_cast = sext i17 %tmp57 to i18
  %tmp55 = add i18 %tmp57_cast, %tmp56_cast
  %tmp55_cast = sext i18 %tmp55 to i19
  %tmp51 = add i19 %tmp55_cast, %tmp52_cast
  %tmp51_cast = sext i19 %tmp51 to i20
  %tmp60 = add i17 %mult_V_54_cast, %mult_V_55_cast
  %tmp60_cast = sext i17 %tmp60 to i18
  %tmp61 = add i17 %mult_V_56_cast, %mult_V_57_cast
  %tmp61_cast = sext i17 %tmp61 to i18
  %tmp59 = add i18 %tmp61_cast, %tmp60_cast
  %tmp59_cast = sext i18 %tmp59 to i19
  %tmp63 = add i17 %mult_V_58_cast, %mult_V_59_cast
  %tmp63_cast = sext i17 %tmp63 to i18
  %tmp64 = add i17 %mult_V_60_cast, %mult_V_61_cast
  %tmp64_cast = sext i17 %tmp64 to i18
  %tmp62 = add i18 %tmp64_cast, %tmp63_cast
  %tmp62_cast = sext i18 %tmp62 to i19
  %tmp58 = add i19 %tmp62_cast, %tmp59_cast
  %tmp58_cast = sext i19 %tmp58 to i20
  %tmp50 = add i20 %tmp58_cast, %tmp51_cast
  %tmp50_cast = sext i20 %tmp50 to i21
  %tmp34 = add i21 %tmp50_cast, %tmp35_cast
  %tmp34_cast = sext i21 %tmp34 to i32
  %tmp2 = add i32 %tmp34_cast, %tmp3
  %tmp70 = add i17 %mult_V_62_cast, %mult_V_63_cast
  %tmp70_cast = sext i17 %tmp70 to i18
  %tmp71 = add i17 %mult_V_64_cast, %mult_V_65_cast
  %tmp71_cast = sext i17 %tmp71 to i18
  %tmp69 = add i18 %tmp71_cast, %tmp70_cast
  %tmp69_cast = sext i18 %tmp69 to i19
  %tmp73 = add i17 %mult_V_66_cast, %mult_V_67_cast
  %tmp73_cast = sext i17 %tmp73 to i18
  %tmp74 = add i17 %mult_V_68_cast, %mult_V_69_cast
  %tmp74_cast = sext i17 %tmp74 to i18
  %tmp72 = add i18 %tmp74_cast, %tmp73_cast
  %tmp72_cast = sext i18 %tmp72 to i19
  %tmp68 = add i19 %tmp72_cast, %tmp69_cast
  %tmp68_cast = sext i19 %tmp68 to i20
  %tmp77 = add i17 %mult_V_70_cast, %mult_V_71_cast
  %tmp77_cast = sext i17 %tmp77 to i18
  %tmp78 = add i17 %mult_V_72_cast, %mult_V_73_cast
  %tmp78_cast = sext i17 %tmp78 to i18
  %tmp76 = add i18 %tmp78_cast, %tmp77_cast
  %tmp76_cast = sext i18 %tmp76 to i19
  %tmp80 = add i17 %mult_V_74_cast, %mult_V_75_cast
  %tmp80_cast = sext i17 %tmp80 to i18
  %tmp81 = add i17 %mult_V_76_cast, %mult_V_77_cast
  %tmp81_cast = sext i17 %tmp81 to i18
  %tmp79 = add i18 %tmp81_cast, %tmp80_cast
  %tmp79_cast = sext i18 %tmp79 to i19
  %tmp75 = add i19 %tmp79_cast, %tmp76_cast
  %tmp75_cast = sext i19 %tmp75 to i20
  %tmp67 = add i20 %tmp75_cast, %tmp68_cast
  %tmp67_cast = sext i20 %tmp67 to i21
  %tmp85 = add i17 %mult_V_78_cast, %mult_V_79_cast
  %tmp85_cast = sext i17 %tmp85 to i18
  %tmp86 = add i17 %mult_V_80_cast, %mult_V_81_cast
  %tmp86_cast = sext i17 %tmp86 to i18
  %tmp84 = add i18 %tmp86_cast, %tmp85_cast
  %tmp84_cast = sext i18 %tmp84 to i19
  %tmp88 = add i17 %mult_V_82_cast, %mult_V_83_cast
  %tmp88_cast = sext i17 %tmp88 to i18
  %tmp89 = add i17 %mult_V_84_cast, %mult_V_85_cast
  %tmp89_cast = sext i17 %tmp89 to i18
  %tmp87 = add i18 %tmp89_cast, %tmp88_cast
  %tmp87_cast = sext i18 %tmp87 to i19
  %tmp83 = add i19 %tmp87_cast, %tmp84_cast
  %tmp83_cast = sext i19 %tmp83 to i20
  %tmp92 = add i17 %mult_V_86_cast, %mult_V_87_cast
  %tmp92_cast = sext i17 %tmp92 to i18
  %tmp93 = add i17 %mult_V_88_cast, %mult_V_89_cast
  %tmp93_cast = sext i17 %tmp93 to i18
  %tmp91 = add i18 %tmp93_cast, %tmp92_cast
  %tmp91_cast = sext i18 %tmp91 to i19
  %tmp95 = add i17 %mult_V_90_cast, %mult_V_91_cast
  %tmp95_cast = sext i17 %tmp95 to i18
  %tmp96 = add i17 %mult_V_92_cast, %mult_V_93_cast
  %tmp96_cast = sext i17 %tmp96 to i18
  %tmp94 = add i18 %tmp96_cast, %tmp95_cast
  %tmp94_cast = sext i18 %tmp94 to i19
  %tmp90 = add i19 %tmp94_cast, %tmp91_cast
  %tmp90_cast = sext i19 %tmp90 to i20
  %tmp82 = add i20 %tmp90_cast, %tmp83_cast
  %tmp82_cast = sext i20 %tmp82 to i21
  %tmp66 = add i21 %tmp82_cast, %tmp67_cast
  %tmp66_cast = sext i21 %tmp66 to i22
  %tmp101 = add i17 %mult_V_94_cast, %mult_V_95_cast
  %tmp101_cast = sext i17 %tmp101 to i18
  %tmp102 = add i17 %mult_V_96_cast, %mult_V_97_cast
  %tmp102_cast = sext i17 %tmp102 to i18
  %tmp100 = add i18 %tmp102_cast, %tmp101_cast
  %tmp100_cast = sext i18 %tmp100 to i19
  %tmp104 = add i17 %mult_V_98_cast, %mult_V_99_cast
  %tmp104_cast = sext i17 %tmp104 to i18
  %tmp105 = add i17 %mult_V_100_cast, %mult_V_101_cast
  %tmp105_cast = sext i17 %tmp105 to i18
  %tmp103 = add i18 %tmp105_cast, %tmp104_cast
  %tmp103_cast = sext i18 %tmp103 to i19
  %tmp99 = add i19 %tmp103_cast, %tmp100_cast
  %tmp99_cast = sext i19 %tmp99 to i20
  %tmp108 = add i17 %mult_V_102_cast, %mult_V_103_cast
  %tmp108_cast = sext i17 %tmp108 to i18
  %tmp109 = add i17 %mult_V_104_cast, %mult_V_105_cast
  %tmp109_cast = sext i17 %tmp109 to i18
  %tmp107 = add i18 %tmp109_cast, %tmp108_cast
  %tmp107_cast = sext i18 %tmp107 to i19
  %tmp111 = add i17 %mult_V_106_cast, %mult_V_107_cast
  %tmp111_cast = sext i17 %tmp111 to i18
  %tmp112 = add i17 %mult_V_108_cast, %mult_V_109_cast
  %tmp112_cast = sext i17 %tmp112 to i18
  %tmp110 = add i18 %tmp112_cast, %tmp111_cast
  %tmp110_cast = sext i18 %tmp110 to i19
  %tmp106 = add i19 %tmp110_cast, %tmp107_cast
  %tmp106_cast = sext i19 %tmp106 to i20
  %tmp98 = add i20 %tmp106_cast, %tmp99_cast
  %tmp98_cast = sext i20 %tmp98 to i21
  %tmp116 = add i17 %mult_V_110_cast, %mult_V_111_cast
  %tmp116_cast = sext i17 %tmp116 to i18
  %tmp117 = add i17 %mult_V_112_cast, %mult_V_113_cast
  %tmp117_cast = sext i17 %tmp117 to i18
  %tmp115 = add i18 %tmp117_cast, %tmp116_cast
  %tmp115_cast = sext i18 %tmp115 to i19
  %tmp119 = add i17 %mult_V_114_cast, %mult_V_115_cast
  %tmp119_cast = sext i17 %tmp119 to i18
  %tmp120 = add i17 %mult_V_116_cast, %mult_V_117_cast
  %tmp120_cast = sext i17 %tmp120 to i18
  %tmp118 = add i18 %tmp120_cast, %tmp119_cast
  %tmp118_cast = sext i18 %tmp118 to i19
  %tmp114 = add i19 %tmp118_cast, %tmp115_cast
  %tmp114_cast = sext i19 %tmp114 to i20
  %tmp123 = add i17 %mult_V_118_cast, %mult_V_119_cast
  %tmp123_cast = sext i17 %tmp123 to i18
  %tmp124 = add i17 %mult_V_120_cast, %mult_V_121_cast
  %tmp124_cast = sext i17 %tmp124 to i18
  %tmp122 = add i18 %tmp124_cast, %tmp123_cast
  %tmp122_cast = sext i18 %tmp122 to i19
  %tmp126 = add i17 %mult_V_122_cast, %mult_V_123_cast
  %tmp126_cast = sext i17 %tmp126 to i18
  %tmp127 = add i17 %mult_V_124_cast, %mult_V_125_cast
  %tmp127_cast = sext i17 %tmp127 to i18
  %tmp125 = add i18 %tmp127_cast, %tmp126_cast
  %tmp125_cast = sext i18 %tmp125 to i19
  %tmp121 = add i19 %tmp125_cast, %tmp122_cast
  %tmp121_cast = sext i19 %tmp121 to i20
  %tmp113 = add i20 %tmp121_cast, %tmp114_cast
  %tmp113_cast = sext i20 %tmp113 to i21
  %tmp97 = add i21 %tmp113_cast, %tmp98_cast
  %tmp97_cast = sext i21 %tmp97 to i22
  %tmp65 = add i22 %tmp97_cast, %tmp66_cast
  %tmp65_cast = sext i22 %tmp65 to i32
  %tmp1 = add i32 %tmp65_cast, %tmp2
  %tmp134 = add i17 %mult_V_126_cast, %mult_V_127_cast
  %tmp134_cast = sext i17 %tmp134 to i18
  %tmp135 = add i17 %mult_V_128_cast, %mult_V_129_cast
  %tmp135_cast = sext i17 %tmp135 to i18
  %tmp133 = add i18 %tmp135_cast, %tmp134_cast
  %tmp133_cast = sext i18 %tmp133 to i19
  %tmp137 = add i17 %mult_V_130_cast, %mult_V_131_cast
  %tmp137_cast = sext i17 %tmp137 to i18
  %tmp138 = add i17 %mult_V_132_cast, %mult_V_133_cast
  %tmp138_cast = sext i17 %tmp138 to i18
  %tmp136 = add i18 %tmp138_cast, %tmp137_cast
  %tmp136_cast = sext i18 %tmp136 to i19
  %tmp132 = add i19 %tmp136_cast, %tmp133_cast
  %tmp132_cast = sext i19 %tmp132 to i20
  %tmp141 = add i17 %mult_V_134_cast, %mult_V_135_cast
  %tmp141_cast = sext i17 %tmp141 to i18
  %tmp142 = add i17 %mult_V_136_cast, %mult_V_137_cast
  %tmp142_cast = sext i17 %tmp142 to i18
  %tmp140 = add i18 %tmp142_cast, %tmp141_cast
  %tmp140_cast = sext i18 %tmp140 to i19
  %tmp144 = add i17 %mult_V_138_cast, %mult_V_139_cast
  %tmp144_cast = sext i17 %tmp144 to i18
  %tmp145 = add i17 %mult_V_140_cast, %mult_V_141_cast
  %tmp145_cast = sext i17 %tmp145 to i18
  %tmp143 = add i18 %tmp145_cast, %tmp144_cast
  %tmp143_cast = sext i18 %tmp143 to i19
  %tmp139 = add i19 %tmp143_cast, %tmp140_cast
  %tmp139_cast = sext i19 %tmp139 to i20
  %tmp131 = add i20 %tmp139_cast, %tmp132_cast
  %tmp131_cast = sext i20 %tmp131 to i21
  %tmp149 = add i17 %mult_V_142_cast, %mult_V_143_cast
  %tmp149_cast = sext i17 %tmp149 to i18
  %tmp150 = add i17 %mult_V_144_cast, %mult_V_145_cast
  %tmp150_cast = sext i17 %tmp150 to i18
  %tmp148 = add i18 %tmp150_cast, %tmp149_cast
  %tmp148_cast = sext i18 %tmp148 to i19
  %tmp152 = add i17 %mult_V_146_cast, %mult_V_147_cast
  %tmp152_cast = sext i17 %tmp152 to i18
  %tmp153 = add i17 %mult_V_148_cast, %mult_V_149_cast
  %tmp153_cast = sext i17 %tmp153 to i18
  %tmp151 = add i18 %tmp153_cast, %tmp152_cast
  %tmp151_cast = sext i18 %tmp151 to i19
  %tmp147 = add i19 %tmp151_cast, %tmp148_cast
  %tmp147_cast = sext i19 %tmp147 to i20
  %tmp156 = add i17 %mult_V_150_cast, %mult_V_151_cast
  %tmp156_cast = sext i17 %tmp156 to i18
  %tmp157 = add i17 %mult_V_152_cast, %mult_V_153_cast
  %tmp157_cast = sext i17 %tmp157 to i18
  %tmp155 = add i18 %tmp157_cast, %tmp156_cast
  %tmp155_cast = sext i18 %tmp155 to i19
  %tmp159 = add i17 %mult_V_154_cast, %mult_V_155_cast
  %tmp159_cast = sext i17 %tmp159 to i18
  %tmp160 = add i17 %mult_V_156_cast, %mult_V_157_cast
  %tmp160_cast = sext i17 %tmp160 to i18
  %tmp158 = add i18 %tmp160_cast, %tmp159_cast
  %tmp158_cast = sext i18 %tmp158 to i19
  %tmp154 = add i19 %tmp158_cast, %tmp155_cast
  %tmp154_cast = sext i19 %tmp154 to i20
  %tmp146 = add i20 %tmp154_cast, %tmp147_cast
  %tmp146_cast = sext i20 %tmp146 to i21
  %tmp130 = add i21 %tmp146_cast, %tmp131_cast
  %tmp130_cast = sext i21 %tmp130 to i22
  %tmp165 = add i17 %mult_V_158_cast, %mult_V_159_cast
  %tmp165_cast = sext i17 %tmp165 to i18
  %tmp166 = add i17 %mult_V_160_cast, %mult_V_161_cast
  %tmp166_cast = sext i17 %tmp166 to i18
  %tmp164 = add i18 %tmp166_cast, %tmp165_cast
  %tmp164_cast = sext i18 %tmp164 to i19
  %tmp168 = add i17 %mult_V_162_cast, %mult_V_163_cast
  %tmp168_cast = sext i17 %tmp168 to i18
  %tmp169 = add i17 %mult_V_164_cast, %mult_V_165_cast
  %tmp169_cast = sext i17 %tmp169 to i18
  %tmp167 = add i18 %tmp169_cast, %tmp168_cast
  %tmp167_cast = sext i18 %tmp167 to i19
  %tmp163 = add i19 %tmp167_cast, %tmp164_cast
  %tmp163_cast = sext i19 %tmp163 to i20
  %tmp172 = add i17 %mult_V_166_cast, %mult_V_167_cast
  %tmp172_cast = sext i17 %tmp172 to i18
  %tmp173 = add i17 %mult_V_168_cast, %mult_V_169_cast
  %tmp173_cast = sext i17 %tmp173 to i18
  %tmp171 = add i18 %tmp173_cast, %tmp172_cast
  %tmp171_cast = sext i18 %tmp171 to i19
  %tmp175 = add i17 %mult_V_170_cast, %mult_V_171_cast
  %tmp175_cast = sext i17 %tmp175 to i18
  %tmp176 = add i17 %mult_V_172_cast, %mult_V_173_cast
  %tmp176_cast = sext i17 %tmp176 to i18
  %tmp174 = add i18 %tmp176_cast, %tmp175_cast
  %tmp174_cast = sext i18 %tmp174 to i19
  %tmp170 = add i19 %tmp174_cast, %tmp171_cast
  %tmp170_cast = sext i19 %tmp170 to i20
  %tmp162 = add i20 %tmp170_cast, %tmp163_cast
  %tmp162_cast = sext i20 %tmp162 to i21
  %tmp180 = add i17 %mult_V_174_cast, %mult_V_175_cast
  %tmp180_cast = sext i17 %tmp180 to i18
  %tmp181 = add i17 %mult_V_176_cast, %mult_V_177_cast
  %tmp181_cast = sext i17 %tmp181 to i18
  %tmp179 = add i18 %tmp181_cast, %tmp180_cast
  %tmp179_cast = sext i18 %tmp179 to i19
  %tmp183 = add i17 %mult_V_178_cast, %mult_V_179_cast
  %tmp183_cast = sext i17 %tmp183 to i18
  %tmp184 = add i17 %mult_V_180_cast, %mult_V_181_cast
  %tmp184_cast = sext i17 %tmp184 to i18
  %tmp182 = add i18 %tmp184_cast, %tmp183_cast
  %tmp182_cast = sext i18 %tmp182 to i19
  %tmp178 = add i19 %tmp182_cast, %tmp179_cast
  %tmp178_cast = sext i19 %tmp178 to i20
  %tmp187 = add i17 %mult_V_182_cast, %mult_V_183_cast
  %tmp187_cast = sext i17 %tmp187 to i18
  %tmp188 = add i17 %mult_V_184_cast, %mult_V_185_cast
  %tmp188_cast = sext i17 %tmp188 to i18
  %tmp186 = add i18 %tmp188_cast, %tmp187_cast
  %tmp186_cast = sext i18 %tmp186 to i19
  %tmp190 = add i17 %mult_V_186_cast, %mult_V_187_cast
  %tmp190_cast = sext i17 %tmp190 to i18
  %tmp191 = add i17 %mult_V_188_cast, %mult_V_189_cast
  %tmp191_cast = sext i17 %tmp191 to i18
  %tmp189 = add i18 %tmp191_cast, %tmp190_cast
  %tmp189_cast = sext i18 %tmp189 to i19
  %tmp185 = add i19 %tmp189_cast, %tmp186_cast
  %tmp185_cast = sext i19 %tmp185 to i20
  %tmp177 = add i20 %tmp185_cast, %tmp178_cast
  %tmp177_cast = sext i20 %tmp177 to i21
  %tmp161 = add i21 %tmp177_cast, %tmp162_cast
  %tmp161_cast = sext i21 %tmp161 to i22
  %tmp129 = add i22 %tmp161_cast, %tmp130_cast
  %tmp129_cast = sext i22 %tmp129 to i24
  %tmp197 = add i17 %mult_V_190_cast, %mult_V_191_cast
  %tmp197_cast = sext i17 %tmp197 to i18
  %tmp198 = add i17 %mult_V_192_cast, %mult_V_193_cast
  %tmp198_cast = sext i17 %tmp198 to i18
  %tmp196 = add i18 %tmp198_cast, %tmp197_cast
  %tmp196_cast = sext i18 %tmp196 to i19
  %tmp200 = add i17 %mult_V_194_cast, %mult_V_195_cast
  %tmp200_cast = sext i17 %tmp200 to i18
  %tmp201 = add i17 %mult_V_196_cast, %mult_V_197_cast
  %tmp201_cast = sext i17 %tmp201 to i18
  %tmp199 = add i18 %tmp201_cast, %tmp200_cast
  %tmp199_cast = sext i18 %tmp199 to i19
  %tmp195 = add i19 %tmp199_cast, %tmp196_cast
  %tmp195_cast = sext i19 %tmp195 to i20
  %tmp204 = add i17 %mult_V_198_cast, %mult_V_199_cast
  %tmp204_cast = sext i17 %tmp204 to i18
  %tmp205 = add i17 %mult_V_200_cast, %mult_V_201_cast
  %tmp205_cast = sext i17 %tmp205 to i18
  %tmp203 = add i18 %tmp205_cast, %tmp204_cast
  %tmp203_cast = sext i18 %tmp203 to i19
  %tmp207 = add i17 %mult_V_202_cast, %mult_V_203_cast
  %tmp207_cast = sext i17 %tmp207 to i18
  %tmp208 = add i17 %mult_V_204_cast, %mult_V_205_cast
  %tmp208_cast = sext i17 %tmp208 to i18
  %tmp206 = add i18 %tmp208_cast, %tmp207_cast
  %tmp206_cast = sext i18 %tmp206 to i19
  %tmp202 = add i19 %tmp206_cast, %tmp203_cast
  %tmp202_cast = sext i19 %tmp202 to i20
  %tmp194 = add i20 %tmp202_cast, %tmp195_cast
  %tmp194_cast = sext i20 %tmp194 to i21
  %tmp212 = add i17 %mult_V_206_cast, %mult_V_207_cast
  %tmp212_cast = sext i17 %tmp212 to i18
  %tmp213 = add i17 %mult_V_208_cast, %mult_V_209_cast
  %tmp213_cast = sext i17 %tmp213 to i18
  %tmp211 = add i18 %tmp213_cast, %tmp212_cast
  %tmp211_cast = sext i18 %tmp211 to i19
  %tmp215 = add i17 %mult_V_210_cast, %mult_V_211_cast
  %tmp215_cast = sext i17 %tmp215 to i18
  %tmp216 = add i17 %mult_V_212_cast, %mult_V_213_cast
  %tmp216_cast = sext i17 %tmp216 to i18
  %tmp214 = add i18 %tmp216_cast, %tmp215_cast
  %tmp214_cast = sext i18 %tmp214 to i19
  %tmp210 = add i19 %tmp214_cast, %tmp211_cast
  %tmp210_cast = sext i19 %tmp210 to i20
  %tmp219 = add i17 %mult_V_214_cast, %mult_V_215_cast
  %tmp219_cast = sext i17 %tmp219 to i18
  %tmp220 = add i17 %mult_V_216_cast, %mult_V_217_cast
  %tmp220_cast = sext i17 %tmp220 to i18
  %tmp218 = add i18 %tmp220_cast, %tmp219_cast
  %tmp218_cast = sext i18 %tmp218 to i19
  %tmp222 = add i17 %mult_V_218_cast, %mult_V_219_cast
  %tmp222_cast = sext i17 %tmp222 to i18
  %tmp223 = add i17 %mult_V_220_cast, %mult_V_221_cast
  %tmp223_cast = sext i17 %tmp223 to i18
  %tmp221 = add i18 %tmp223_cast, %tmp222_cast
  %tmp221_cast = sext i18 %tmp221 to i19
  %tmp217 = add i19 %tmp221_cast, %tmp218_cast
  %tmp217_cast = sext i19 %tmp217 to i20
  %tmp209 = add i20 %tmp217_cast, %tmp210_cast
  %tmp209_cast = sext i20 %tmp209 to i21
  %tmp193 = add i21 %tmp209_cast, %tmp194_cast
  %tmp193_cast = sext i21 %tmp193 to i23
  %tmp228 = add i17 %mult_V_222_cast, %mult_V_223_cast
  %tmp228_cast = sext i17 %tmp228 to i18
  %tmp229 = add i17 %mult_V_224_cast, %mult_V_225_cast
  %tmp229_cast = sext i17 %tmp229 to i18
  %tmp227 = add i18 %tmp229_cast, %tmp228_cast
  %tmp227_cast = sext i18 %tmp227 to i19
  %tmp231 = add i17 %mult_V_226_cast, %mult_V_227_cast
  %tmp231_cast = sext i17 %tmp231 to i18
  %tmp232 = add i17 %mult_V_228_cast, %mult_V_229_cast
  %tmp232_cast = sext i17 %tmp232 to i18
  %tmp230 = add i18 %tmp232_cast, %tmp231_cast
  %tmp230_cast = sext i18 %tmp230 to i19
  %tmp226 = add i19 %tmp230_cast, %tmp227_cast
  %tmp226_cast = sext i19 %tmp226 to i20
  %tmp235 = add i17 %mult_V_230_cast, %mult_V_231_cast
  %tmp235_cast = sext i17 %tmp235 to i18
  %tmp236 = add i17 %mult_V_232_cast, %mult_V_233_cast
  %tmp236_cast = sext i17 %tmp236 to i18
  %tmp234 = add i18 %tmp236_cast, %tmp235_cast
  %tmp234_cast = sext i18 %tmp234 to i19
  %tmp238 = add i17 %mult_V_234_cast, %mult_V_235_cast
  %tmp238_cast = sext i17 %tmp238 to i18
  %tmp239 = add i17 %mult_V_236_cast, %mult_V_237_cast
  %tmp239_cast = sext i17 %tmp239 to i18
  %tmp237 = add i18 %tmp239_cast, %tmp238_cast
  %tmp237_cast = sext i18 %tmp237 to i19
  %tmp233 = add i19 %tmp237_cast, %tmp234_cast
  %tmp233_cast = sext i19 %tmp233 to i20
  %tmp225 = add i20 %tmp233_cast, %tmp226_cast
  %tmp225_cast = sext i20 %tmp225 to i22
  %tmp243 = add i17 %mult_V_238_cast, %mult_V_239_cast
  %tmp243_cast = sext i17 %tmp243 to i18
  %tmp244 = add i17 %mult_V_240_cast, %mult_V_241_cast
  %tmp244_cast = sext i17 %tmp244 to i18
  %tmp242 = add i18 %tmp244_cast, %tmp243_cast
  %tmp242_cast = sext i18 %tmp242 to i19
  %tmp246 = add i17 %mult_V_242_cast, %mult_V_243_cast
  %tmp246_cast = sext i17 %tmp246 to i18
  %tmp247 = add i17 %mult_V_244_cast, %mult_V_245_cast
  %tmp247_cast = sext i17 %tmp247 to i18
  %tmp245 = add i18 %tmp247_cast, %tmp246_cast
  %tmp245_cast = sext i18 %tmp245 to i19
  %tmp241 = add i19 %tmp245_cast, %tmp242_cast
  %tmp241_cast = sext i19 %tmp241 to i21
  %tmp250 = add i17 %mult_V_246_cast, %mult_V_247_cast
  %tmp250_cast = sext i17 %tmp250 to i18
  %tmp251 = add i17 %mult_V_248_cast, %mult_V_249_cast
  %tmp251_cast = sext i17 %tmp251 to i18
  %tmp249 = add i18 %tmp251_cast, %tmp250_cast
  %tmp249_cast = sext i18 %tmp249 to i20
  %tmp253 = add i17 %mult_V_250_cast, %mult_V_251_cast
  %tmp253_cast = sext i17 %tmp253 to i19
  %tmp255 = add i17 %mult_V_253_cast, %mult_V_254_cast
  %tmp255_cast = sext i17 %tmp255 to i18
  %tmp254 = add i18 %tmp255_cast, %mult_V_252_cast
  %tmp254_cast = sext i18 %tmp254 to i19
  %tmp252 = add i19 %tmp254_cast, %tmp253_cast
  %tmp252_cast = sext i19 %tmp252 to i20
  %tmp248 = add i20 %tmp252_cast, %tmp249_cast
  %tmp248_cast = sext i20 %tmp248 to i21
  %tmp240 = add i21 %tmp248_cast, %tmp241_cast
  %tmp240_cast = sext i21 %tmp240 to i22
  %tmp224 = add i22 %tmp240_cast, %tmp225_cast
  %tmp224_cast = sext i22 %tmp224 to i23
  %tmp192 = add i23 %tmp224_cast, %tmp193_cast
  %tmp192_cast = sext i23 %tmp192 to i24
  %tmp128 = add i24 %tmp192_cast, %tmp129_cast
  %tmp128_cast = sext i24 %tmp128 to i32
  %tmp_V_1_s = add nsw i32 %tmp128_cast, %tmp1
  store i32 %tmp_V_1_s, i32* %out_buf_V_addr_2, align 4
  %empty_22 = call i32 (...)* @_ssdm_op_SpecRegionEnd([3 x i8]* @p_str13, i32 %tmp_18)
  %j_4 = add i4 %j3_mid2, 1
  br label %.preheader.preheader

; <label>:13                                      ; preds = %.preheader.preheader
  %tmp_14 = or i16 %os_idx, 5
  %os_idx_3 = add i16 %os_idx, 320
  br label %14

; <label>:14                                      ; preds = %18, %13
  %indvars_iv = phi i16 [ %tmp_14, %13 ], [ %indvars_iv_next, %18 ]
  %os_idx_1 = phi i16 [ %os_idx, %13 ], [ %tmp_23, %18 ]
  %i5 = phi i7 [ 0, %13 ], [ %i_5, %18 ]
  %exitcond7 = icmp eq i7 %i5, -64
  %i_5 = add i7 %i5, 1
  br i1 %exitcond7, label %19, label %15

; <label>:15                                      ; preds = %14
  %empty_23 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 64, i64 64, i64 64)
  call void (...)* @_ssdm_op_SpecLoopName([10 x i8]* @p_str15) nounwind
  %tmp_22 = call i32 (...)* @_ssdm_op_SpecRegionBegin([10 x i8]* @p_str15)
  %tmp_23 = add i16 %os_idx_1, 5
  %tmp_27 = call i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7 %i5, i3 0)
  %p_shl2_cast = zext i10 %tmp_27 to i11
  %tmp_29 = call i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7 %i5, i1 false)
  %p_shl3_cast = zext i8 %tmp_29 to i11
  %tmp_30 = add i11 %p_shl3_cast, %p_shl2_cast
  br label %16

; <label>:16                                      ; preds = %17, %15
  %os_idx_2 = phi i16 [ %os_idx_1, %15 ], [ %tmp_28, %17 ]
  %j4 = phi i4 [ 0, %15 ], [ %j_3, %17 ]
  %exitcond = icmp eq i16 %os_idx_2, %indvars_iv
  br i1 %exitcond, label %18, label %17

; <label>:17                                      ; preds = %16
  %empty_24 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 5, i64 5, i64 5)
  call void (...)* @_ssdm_op_SpecLoopName([10 x i8]* @p_str16) nounwind
  %tmp_24 = call i32 (...)* @_ssdm_op_SpecRegionBegin([10 x i8]* @p_str16)
  call void (...)* @_ssdm_op_SpecPipeline(i32 1, i32 1, i32 1, i32 0, [1 x i8]* @p_str1) nounwind
  %tmp_25_cast = zext i4 %j4 to i11
  %tmp_31 = add i11 %tmp_30, %tmp_25_cast
  %tmp_259_cast = zext i11 %tmp_31 to i64
  %out_buf_V_addr = getelementptr [640 x i32]* %out_buf_V, i64 0, i64 %tmp_259_cast
  %out_buf_V_load = load i32* %out_buf_V_addr, align 8
  %tmp_26 = or i4 %j4, 1
  %tmp_27_cast = zext i4 %tmp_26 to i11
  %tmp_32 = add i11 %tmp_30, %tmp_27_cast
  %tmp_260_cast = zext i11 %tmp_32 to i64
  %out_buf_V_addr_1 = getelementptr [640 x i32]* %out_buf_V, i64 0, i64 %tmp_260_cast
  %out_buf_V_load_1 = load i32* %out_buf_V_addr_1, align 4
  %val_assign_15 = call i64 @_ssdm_op_BitConcatenate.i64.i32.i32(i32 %out_buf_V_load_1, i32 %out_buf_V_load)
  %tmp_28 = add i16 %os_idx_2, 1
  %last_assign = icmp eq i16 %tmp_28, -24576
  call void @_ssdm_op_Write.axis.volatile.i64P.i8P.i8P.i4P.i1P.i5P.i5P(i64* %out_stream_data_V, i8* %out_stream_keep_V, i8* %out_stream_strb_V, i4* %out_stream_user_V, i1* %out_stream_last_V, i5* %out_stream_id_V, i5* %out_stream_dest_V, i64 %val_assign_15, i8 -1, i8 -1, i4 0, i1 %last_assign, i5 0, i5 0)
  %empty_25 = call i32 (...)* @_ssdm_op_SpecRegionEnd([10 x i8]* @p_str16, i32 %tmp_24)
  %j_3 = add i4 %j4, 2
  br label %16

; <label>:18                                      ; preds = %16
  %empty_26 = call i32 (...)* @_ssdm_op_SpecRegionEnd([10 x i8]* @p_str15, i32 %tmp_22)
  %indvars_iv_next = add i16 %indvars_iv, 5
  br label %14

; <label>:19                                      ; preds = %14
  %empty_27 = call i32 (...)* @_ssdm_op_SpecRegionEnd([3 x i8]* @p_str9, i32 %tmp_7)
  %t_1 = add i14 %t, 64
  br label %.preheader268

; <label>:20                                      ; preds = %.preheader268
  ret void

branch224:                                        ; preds = %3
  store i8 %tmp_15, i8* %weight_buf_0_0_V_a, align 8
  store i8 %val_assign_3, i8* %weight_buf_0_1_V_a, align 1
  store i8 %val_assign_4, i8* %weight_buf_0_2_V_a, align 2
  store i8 %val_assign_5, i8* %weight_buf_0_3_V_a, align 1
  store i8 %val_assign_6, i8* %weight_buf_0_4_V_a, align 4
  store i8 %val_assign_7, i8* %weight_buf_0_5_V_a, align 1
  store i8 %val_assign_8, i8* %weight_buf_0_6_V_a, align 2
  store i8 %val_assign_9, i8* %weight_buf_0_7_V_a, align 1
  br label %4

branch225:                                        ; preds = %3
  store i8 %tmp_15, i8* %weight_buf_1_0_V_a, align 8
  store i8 %val_assign_3, i8* %weight_buf_1_1_V_a, align 1
  store i8 %val_assign_4, i8* %weight_buf_1_2_V_a, align 2
  store i8 %val_assign_5, i8* %weight_buf_1_3_V_a, align 1
  store i8 %val_assign_6, i8* %weight_buf_1_4_V_a, align 4
  store i8 %val_assign_7, i8* %weight_buf_1_5_V_a, align 1
  store i8 %val_assign_8, i8* %weight_buf_1_6_V_a, align 2
  store i8 %val_assign_9, i8* %weight_buf_1_7_V_a, align 1
  br label %4

branch226:                                        ; preds = %3
  store i8 %tmp_15, i8* %weight_buf_2_0_V_a, align 8
  store i8 %val_assign_3, i8* %weight_buf_2_1_V_a, align 1
  store i8 %val_assign_4, i8* %weight_buf_2_2_V_a, align 2
  store i8 %val_assign_5, i8* %weight_buf_2_3_V_a, align 1
  store i8 %val_assign_6, i8* %weight_buf_2_4_V_a, align 4
  store i8 %val_assign_7, i8* %weight_buf_2_5_V_a, align 1
  store i8 %val_assign_8, i8* %weight_buf_2_6_V_a, align 2
  store i8 %val_assign_9, i8* %weight_buf_2_7_V_a, align 1
  br label %4

branch227:                                        ; preds = %3
  store i8 %tmp_15, i8* %weight_buf_3_0_V_a, align 8
  store i8 %val_assign_3, i8* %weight_buf_3_1_V_a, align 1
  store i8 %val_assign_4, i8* %weight_buf_3_2_V_a, align 2
  store i8 %val_assign_5, i8* %weight_buf_3_3_V_a, align 1
  store i8 %val_assign_6, i8* %weight_buf_3_4_V_a, align 4
  store i8 %val_assign_7, i8* %weight_buf_3_5_V_a, align 1
  store i8 %val_assign_8, i8* %weight_buf_3_6_V_a, align 2
  store i8 %val_assign_9, i8* %weight_buf_3_7_V_a, align 1
  br label %4

branch228:                                        ; preds = %3
  store i8 %tmp_15, i8* %weight_buf_4_0_V_a, align 8
  store i8 %val_assign_3, i8* %weight_buf_4_1_V_a, align 1
  store i8 %val_assign_4, i8* %weight_buf_4_2_V_a, align 2
  store i8 %val_assign_5, i8* %weight_buf_4_3_V_a, align 1
  store i8 %val_assign_6, i8* %weight_buf_4_4_V_a, align 4
  store i8 %val_assign_7, i8* %weight_buf_4_5_V_a, align 1
  store i8 %val_assign_8, i8* %weight_buf_4_6_V_a, align 2
  store i8 %val_assign_9, i8* %weight_buf_4_7_V_a, align 1
  br label %4

branch229:                                        ; preds = %3
  store i8 %tmp_15, i8* %weight_buf_5_0_V_a, align 8
  store i8 %val_assign_3, i8* %weight_buf_5_1_V_a, align 1
  store i8 %val_assign_4, i8* %weight_buf_5_2_V_a, align 2
  store i8 %val_assign_5, i8* %weight_buf_5_3_V_a, align 1
  store i8 %val_assign_6, i8* %weight_buf_5_4_V_a, align 4
  store i8 %val_assign_7, i8* %weight_buf_5_5_V_a, align 1
  store i8 %val_assign_8, i8* %weight_buf_5_6_V_a, align 2
  store i8 %val_assign_9, i8* %weight_buf_5_7_V_a, align 1
  br label %4

branch230:                                        ; preds = %3
  store i8 %tmp_15, i8* %weight_buf_6_0_V_a, align 8
  store i8 %val_assign_3, i8* %weight_buf_6_1_V_a, align 1
  store i8 %val_assign_4, i8* %weight_buf_6_2_V_a, align 2
  store i8 %val_assign_5, i8* %weight_buf_6_3_V_a, align 1
  store i8 %val_assign_6, i8* %weight_buf_6_4_V_a, align 4
  store i8 %val_assign_7, i8* %weight_buf_6_5_V_a, align 1
  store i8 %val_assign_8, i8* %weight_buf_6_6_V_a, align 2
  store i8 %val_assign_9, i8* %weight_buf_6_7_V_a, align 1
  br label %4

branch231:                                        ; preds = %3
  store i8 %tmp_15, i8* %weight_buf_7_0_V_a, align 8
  store i8 %val_assign_3, i8* %weight_buf_7_1_V_a, align 1
  store i8 %val_assign_4, i8* %weight_buf_7_2_V_a, align 2
  store i8 %val_assign_5, i8* %weight_buf_7_3_V_a, align 1
  store i8 %val_assign_6, i8* %weight_buf_7_4_V_a, align 4
  store i8 %val_assign_7, i8* %weight_buf_7_5_V_a, align 1
  store i8 %val_assign_8, i8* %weight_buf_7_6_V_a, align 2
  store i8 %val_assign_9, i8* %weight_buf_7_7_V_a, align 1
  br label %4

branch232:                                        ; preds = %3
  store i8 %tmp_15, i8* %weight_buf_8_0_V_a, align 8
  store i8 %val_assign_3, i8* %weight_buf_8_1_V_a, align 1
  store i8 %val_assign_4, i8* %weight_buf_8_2_V_a, align 2
  store i8 %val_assign_5, i8* %weight_buf_8_3_V_a, align 1
  store i8 %val_assign_6, i8* %weight_buf_8_4_V_a, align 4
  store i8 %val_assign_7, i8* %weight_buf_8_5_V_a, align 1
  store i8 %val_assign_8, i8* %weight_buf_8_6_V_a, align 2
  store i8 %val_assign_9, i8* %weight_buf_8_7_V_a, align 1
  br label %4

branch233:                                        ; preds = %3
  store i8 %tmp_15, i8* %weight_buf_9_0_V_a, align 8
  store i8 %val_assign_3, i8* %weight_buf_9_1_V_a, align 1
  store i8 %val_assign_4, i8* %weight_buf_9_2_V_a, align 2
  store i8 %val_assign_5, i8* %weight_buf_9_3_V_a, align 1
  store i8 %val_assign_6, i8* %weight_buf_9_4_V_a, align 4
  store i8 %val_assign_7, i8* %weight_buf_9_5_V_a, align 1
  store i8 %val_assign_8, i8* %weight_buf_9_6_V_a, align 2
  store i8 %val_assign_9, i8* %weight_buf_9_7_V_a, align 1
  br label %4

branch234:                                        ; preds = %3
  store i8 %tmp_15, i8* %weight_buf_10_0_V_s, align 8
  store i8 %val_assign_3, i8* %weight_buf_10_1_V_s, align 1
  store i8 %val_assign_4, i8* %weight_buf_10_2_V_s, align 2
  store i8 %val_assign_5, i8* %weight_buf_10_3_V_s, align 1
  store i8 %val_assign_6, i8* %weight_buf_10_4_V_s, align 4
  store i8 %val_assign_7, i8* %weight_buf_10_5_V_s, align 1
  store i8 %val_assign_8, i8* %weight_buf_10_6_V_s, align 2
  store i8 %val_assign_9, i8* %weight_buf_10_7_V_s, align 1
  br label %4

branch235:                                        ; preds = %3
  store i8 %tmp_15, i8* %weight_buf_11_0_V_s, align 8
  store i8 %val_assign_3, i8* %weight_buf_11_1_V_s, align 1
  store i8 %val_assign_4, i8* %weight_buf_11_2_V_s, align 2
  store i8 %val_assign_5, i8* %weight_buf_11_3_V_s, align 1
  store i8 %val_assign_6, i8* %weight_buf_11_4_V_s, align 4
  store i8 %val_assign_7, i8* %weight_buf_11_5_V_s, align 1
  store i8 %val_assign_8, i8* %weight_buf_11_6_V_s, align 2
  store i8 %val_assign_9, i8* %weight_buf_11_7_V_s, align 1
  br label %4

branch236:                                        ; preds = %3
  store i8 %tmp_15, i8* %weight_buf_12_0_V_s, align 8
  store i8 %val_assign_3, i8* %weight_buf_12_1_V_s, align 1
  store i8 %val_assign_4, i8* %weight_buf_12_2_V_s, align 2
  store i8 %val_assign_5, i8* %weight_buf_12_3_V_s, align 1
  store i8 %val_assign_6, i8* %weight_buf_12_4_V_s, align 4
  store i8 %val_assign_7, i8* %weight_buf_12_5_V_s, align 1
  store i8 %val_assign_8, i8* %weight_buf_12_6_V_s, align 2
  store i8 %val_assign_9, i8* %weight_buf_12_7_V_s, align 1
  br label %4

branch237:                                        ; preds = %3
  store i8 %tmp_15, i8* %weight_buf_13_0_V_s, align 8
  store i8 %val_assign_3, i8* %weight_buf_13_1_V_s, align 1
  store i8 %val_assign_4, i8* %weight_buf_13_2_V_s, align 2
  store i8 %val_assign_5, i8* %weight_buf_13_3_V_s, align 1
  store i8 %val_assign_6, i8* %weight_buf_13_4_V_s, align 4
  store i8 %val_assign_7, i8* %weight_buf_13_5_V_s, align 1
  store i8 %val_assign_8, i8* %weight_buf_13_6_V_s, align 2
  store i8 %val_assign_9, i8* %weight_buf_13_7_V_s, align 1
  br label %4

branch238:                                        ; preds = %3
  store i8 %tmp_15, i8* %weight_buf_14_0_V_s, align 8
  store i8 %val_assign_3, i8* %weight_buf_14_1_V_s, align 1
  store i8 %val_assign_4, i8* %weight_buf_14_2_V_s, align 2
  store i8 %val_assign_5, i8* %weight_buf_14_3_V_s, align 1
  store i8 %val_assign_6, i8* %weight_buf_14_4_V_s, align 4
  store i8 %val_assign_7, i8* %weight_buf_14_5_V_s, align 1
  store i8 %val_assign_8, i8* %weight_buf_14_6_V_s, align 2
  store i8 %val_assign_9, i8* %weight_buf_14_7_V_s, align 1
  br label %4

branch239:                                        ; preds = %3
  store i8 %tmp_15, i8* %weight_buf_15_0_V_s, align 8
  store i8 %val_assign_3, i8* %weight_buf_15_1_V_s, align 1
  store i8 %val_assign_4, i8* %weight_buf_15_2_V_s, align 2
  store i8 %val_assign_5, i8* %weight_buf_15_3_V_s, align 1
  store i8 %val_assign_6, i8* %weight_buf_15_4_V_s, align 4
  store i8 %val_assign_7, i8* %weight_buf_15_5_V_s, align 1
  store i8 %val_assign_8, i8* %weight_buf_15_6_V_s, align 2
  store i8 %val_assign_9, i8* %weight_buf_15_7_V_s, align 1
  br label %4

branch240:                                        ; preds = %3
  store i8 %tmp_15, i8* %weight_buf_16_0_V_s, align 8
  store i8 %val_assign_3, i8* %weight_buf_16_1_V_s, align 1
  store i8 %val_assign_4, i8* %weight_buf_16_2_V_s, align 2
  store i8 %val_assign_5, i8* %weight_buf_16_3_V_s, align 1
  store i8 %val_assign_6, i8* %weight_buf_16_4_V_s, align 4
  store i8 %val_assign_7, i8* %weight_buf_16_5_V_s, align 1
  store i8 %val_assign_8, i8* %weight_buf_16_6_V_s, align 2
  store i8 %val_assign_9, i8* %weight_buf_16_7_V_s, align 1
  br label %4

branch241:                                        ; preds = %3
  store i8 %tmp_15, i8* %weight_buf_17_0_V_s, align 8
  store i8 %val_assign_3, i8* %weight_buf_17_1_V_s, align 1
  store i8 %val_assign_4, i8* %weight_buf_17_2_V_s, align 2
  store i8 %val_assign_5, i8* %weight_buf_17_3_V_s, align 1
  store i8 %val_assign_6, i8* %weight_buf_17_4_V_s, align 4
  store i8 %val_assign_7, i8* %weight_buf_17_5_V_s, align 1
  store i8 %val_assign_8, i8* %weight_buf_17_6_V_s, align 2
  store i8 %val_assign_9, i8* %weight_buf_17_7_V_s, align 1
  br label %4

branch242:                                        ; preds = %3
  store i8 %tmp_15, i8* %weight_buf_18_0_V_s, align 8
  store i8 %val_assign_3, i8* %weight_buf_18_1_V_s, align 1
  store i8 %val_assign_4, i8* %weight_buf_18_2_V_s, align 2
  store i8 %val_assign_5, i8* %weight_buf_18_3_V_s, align 1
  store i8 %val_assign_6, i8* %weight_buf_18_4_V_s, align 4
  store i8 %val_assign_7, i8* %weight_buf_18_5_V_s, align 1
  store i8 %val_assign_8, i8* %weight_buf_18_6_V_s, align 2
  store i8 %val_assign_9, i8* %weight_buf_18_7_V_s, align 1
  br label %4

branch243:                                        ; preds = %3
  store i8 %tmp_15, i8* %weight_buf_19_0_V_s, align 8
  store i8 %val_assign_3, i8* %weight_buf_19_1_V_s, align 1
  store i8 %val_assign_4, i8* %weight_buf_19_2_V_s, align 2
  store i8 %val_assign_5, i8* %weight_buf_19_3_V_s, align 1
  store i8 %val_assign_6, i8* %weight_buf_19_4_V_s, align 4
  store i8 %val_assign_7, i8* %weight_buf_19_5_V_s, align 1
  store i8 %val_assign_8, i8* %weight_buf_19_6_V_s, align 2
  store i8 %val_assign_9, i8* %weight_buf_19_7_V_s, align 1
  br label %4

branch244:                                        ; preds = %3
  store i8 %tmp_15, i8* %weight_buf_20_0_V_s, align 8
  store i8 %val_assign_3, i8* %weight_buf_20_1_V_s, align 1
  store i8 %val_assign_4, i8* %weight_buf_20_2_V_s, align 2
  store i8 %val_assign_5, i8* %weight_buf_20_3_V_s, align 1
  store i8 %val_assign_6, i8* %weight_buf_20_4_V_s, align 4
  store i8 %val_assign_7, i8* %weight_buf_20_5_V_s, align 1
  store i8 %val_assign_8, i8* %weight_buf_20_6_V_s, align 2
  store i8 %val_assign_9, i8* %weight_buf_20_7_V_s, align 1
  br label %4

branch245:                                        ; preds = %3
  store i8 %tmp_15, i8* %weight_buf_21_0_V_s, align 8
  store i8 %val_assign_3, i8* %weight_buf_21_1_V_s, align 1
  store i8 %val_assign_4, i8* %weight_buf_21_2_V_s, align 2
  store i8 %val_assign_5, i8* %weight_buf_21_3_V_s, align 1
  store i8 %val_assign_6, i8* %weight_buf_21_4_V_s, align 4
  store i8 %val_assign_7, i8* %weight_buf_21_5_V_s, align 1
  store i8 %val_assign_8, i8* %weight_buf_21_6_V_s, align 2
  store i8 %val_assign_9, i8* %weight_buf_21_7_V_s, align 1
  br label %4

branch246:                                        ; preds = %3
  store i8 %tmp_15, i8* %weight_buf_22_0_V_s, align 8
  store i8 %val_assign_3, i8* %weight_buf_22_1_V_s, align 1
  store i8 %val_assign_4, i8* %weight_buf_22_2_V_s, align 2
  store i8 %val_assign_5, i8* %weight_buf_22_3_V_s, align 1
  store i8 %val_assign_6, i8* %weight_buf_22_4_V_s, align 4
  store i8 %val_assign_7, i8* %weight_buf_22_5_V_s, align 1
  store i8 %val_assign_8, i8* %weight_buf_22_6_V_s, align 2
  store i8 %val_assign_9, i8* %weight_buf_22_7_V_s, align 1
  br label %4

branch247:                                        ; preds = %3
  store i8 %tmp_15, i8* %weight_buf_23_0_V_s, align 8
  store i8 %val_assign_3, i8* %weight_buf_23_1_V_s, align 1
  store i8 %val_assign_4, i8* %weight_buf_23_2_V_s, align 2
  store i8 %val_assign_5, i8* %weight_buf_23_3_V_s, align 1
  store i8 %val_assign_6, i8* %weight_buf_23_4_V_s, align 4
  store i8 %val_assign_7, i8* %weight_buf_23_5_V_s, align 1
  store i8 %val_assign_8, i8* %weight_buf_23_6_V_s, align 2
  store i8 %val_assign_9, i8* %weight_buf_23_7_V_s, align 1
  br label %4

branch248:                                        ; preds = %3
  store i8 %tmp_15, i8* %weight_buf_24_0_V_s, align 8
  store i8 %val_assign_3, i8* %weight_buf_24_1_V_s, align 1
  store i8 %val_assign_4, i8* %weight_buf_24_2_V_s, align 2
  store i8 %val_assign_5, i8* %weight_buf_24_3_V_s, align 1
  store i8 %val_assign_6, i8* %weight_buf_24_4_V_s, align 4
  store i8 %val_assign_7, i8* %weight_buf_24_5_V_s, align 1
  store i8 %val_assign_8, i8* %weight_buf_24_6_V_s, align 2
  store i8 %val_assign_9, i8* %weight_buf_24_7_V_s, align 1
  br label %4

branch249:                                        ; preds = %3
  store i8 %tmp_15, i8* %weight_buf_25_0_V_s, align 8
  store i8 %val_assign_3, i8* %weight_buf_25_1_V_s, align 1
  store i8 %val_assign_4, i8* %weight_buf_25_2_V_s, align 2
  store i8 %val_assign_5, i8* %weight_buf_25_3_V_s, align 1
  store i8 %val_assign_6, i8* %weight_buf_25_4_V_s, align 4
  store i8 %val_assign_7, i8* %weight_buf_25_5_V_s, align 1
  store i8 %val_assign_8, i8* %weight_buf_25_6_V_s, align 2
  store i8 %val_assign_9, i8* %weight_buf_25_7_V_s, align 1
  br label %4

branch250:                                        ; preds = %3
  store i8 %tmp_15, i8* %weight_buf_26_0_V_s, align 8
  store i8 %val_assign_3, i8* %weight_buf_26_1_V_s, align 1
  store i8 %val_assign_4, i8* %weight_buf_26_2_V_s, align 2
  store i8 %val_assign_5, i8* %weight_buf_26_3_V_s, align 1
  store i8 %val_assign_6, i8* %weight_buf_26_4_V_s, align 4
  store i8 %val_assign_7, i8* %weight_buf_26_5_V_s, align 1
  store i8 %val_assign_8, i8* %weight_buf_26_6_V_s, align 2
  store i8 %val_assign_9, i8* %weight_buf_26_7_V_s, align 1
  br label %4

branch251:                                        ; preds = %3
  store i8 %tmp_15, i8* %weight_buf_27_0_V_s, align 8
  store i8 %val_assign_3, i8* %weight_buf_27_1_V_s, align 1
  store i8 %val_assign_4, i8* %weight_buf_27_2_V_s, align 2
  store i8 %val_assign_5, i8* %weight_buf_27_3_V_s, align 1
  store i8 %val_assign_6, i8* %weight_buf_27_4_V_s, align 4
  store i8 %val_assign_7, i8* %weight_buf_27_5_V_s, align 1
  store i8 %val_assign_8, i8* %weight_buf_27_6_V_s, align 2
  store i8 %val_assign_9, i8* %weight_buf_27_7_V_s, align 1
  br label %4

branch252:                                        ; preds = %3
  store i8 %tmp_15, i8* %weight_buf_28_0_V_s, align 8
  store i8 %val_assign_3, i8* %weight_buf_28_1_V_s, align 1
  store i8 %val_assign_4, i8* %weight_buf_28_2_V_s, align 2
  store i8 %val_assign_5, i8* %weight_buf_28_3_V_s, align 1
  store i8 %val_assign_6, i8* %weight_buf_28_4_V_s, align 4
  store i8 %val_assign_7, i8* %weight_buf_28_5_V_s, align 1
  store i8 %val_assign_8, i8* %weight_buf_28_6_V_s, align 2
  store i8 %val_assign_9, i8* %weight_buf_28_7_V_s, align 1
  br label %4

branch253:                                        ; preds = %3
  store i8 %tmp_15, i8* %weight_buf_29_0_V_s, align 8
  store i8 %val_assign_3, i8* %weight_buf_29_1_V_s, align 1
  store i8 %val_assign_4, i8* %weight_buf_29_2_V_s, align 2
  store i8 %val_assign_5, i8* %weight_buf_29_3_V_s, align 1
  store i8 %val_assign_6, i8* %weight_buf_29_4_V_s, align 4
  store i8 %val_assign_7, i8* %weight_buf_29_5_V_s, align 1
  store i8 %val_assign_8, i8* %weight_buf_29_6_V_s, align 2
  store i8 %val_assign_9, i8* %weight_buf_29_7_V_s, align 1
  br label %4

branch254:                                        ; preds = %3
  store i8 %tmp_15, i8* %weight_buf_30_0_V_s, align 8
  store i8 %val_assign_3, i8* %weight_buf_30_1_V_s, align 1
  store i8 %val_assign_4, i8* %weight_buf_30_2_V_s, align 2
  store i8 %val_assign_5, i8* %weight_buf_30_3_V_s, align 1
  store i8 %val_assign_6, i8* %weight_buf_30_4_V_s, align 4
  store i8 %val_assign_7, i8* %weight_buf_30_5_V_s, align 1
  store i8 %val_assign_8, i8* %weight_buf_30_6_V_s, align 2
  store i8 %val_assign_9, i8* %weight_buf_30_7_V_s, align 1
  br label %4

branch255:                                        ; preds = %3
  store i8 %tmp_15, i8* %weight_buf_31_0_V_s, align 8
  store i8 %val_assign_3, i8* %weight_buf_31_1_V_s, align 1
  store i8 %val_assign_4, i8* %weight_buf_31_2_V_s, align 2
  store i8 %val_assign_5, i8* %weight_buf_31_3_V_s, align 1
  store i8 %val_assign_6, i8* %weight_buf_31_4_V_s, align 4
  store i8 %val_assign_7, i8* %weight_buf_31_5_V_s, align 1
  store i8 %val_assign_8, i8* %weight_buf_31_6_V_s, align 2
  store i8 %val_assign_9, i8* %weight_buf_31_7_V_s, align 1
  br label %4

branch480:                                        ; preds = %10
  store i8 %tmp_261, i8* %in_buf_0_0_V_addr, align 8
  store i8 %val_assign_s, i8* %in_buf_0_1_V_addr, align 1
  store i8 %val_assign_2, i8* %in_buf_0_2_V_addr, align 2
  store i8 %val_assign_10, i8* %in_buf_0_3_V_addr, align 1
  store i8 %val_assign_11, i8* %in_buf_0_4_V_addr, align 4
  store i8 %val_assign_12, i8* %in_buf_0_5_V_addr, align 1
  store i8 %val_assign_13, i8* %in_buf_0_6_V_addr, align 2
  store i8 %val_assign_14, i8* %in_buf_0_7_V_addr, align 1
  br label %11

branch481:                                        ; preds = %10
  store i8 %tmp_261, i8* %in_buf_1_0_V_addr, align 8
  store i8 %val_assign_s, i8* %in_buf_1_1_V_addr, align 1
  store i8 %val_assign_2, i8* %in_buf_1_2_V_addr, align 2
  store i8 %val_assign_10, i8* %in_buf_1_3_V_addr, align 1
  store i8 %val_assign_11, i8* %in_buf_1_4_V_addr, align 4
  store i8 %val_assign_12, i8* %in_buf_1_5_V_addr, align 1
  store i8 %val_assign_13, i8* %in_buf_1_6_V_addr, align 2
  store i8 %val_assign_14, i8* %in_buf_1_7_V_addr, align 1
  br label %11

branch482:                                        ; preds = %10
  store i8 %tmp_261, i8* %in_buf_2_0_V_addr, align 8
  store i8 %val_assign_s, i8* %in_buf_2_1_V_addr, align 1
  store i8 %val_assign_2, i8* %in_buf_2_2_V_addr, align 2
  store i8 %val_assign_10, i8* %in_buf_2_3_V_addr, align 1
  store i8 %val_assign_11, i8* %in_buf_2_4_V_addr, align 4
  store i8 %val_assign_12, i8* %in_buf_2_5_V_addr, align 1
  store i8 %val_assign_13, i8* %in_buf_2_6_V_addr, align 2
  store i8 %val_assign_14, i8* %in_buf_2_7_V_addr, align 1
  br label %11

branch483:                                        ; preds = %10
  store i8 %tmp_261, i8* %in_buf_3_0_V_addr, align 8
  store i8 %val_assign_s, i8* %in_buf_3_1_V_addr, align 1
  store i8 %val_assign_2, i8* %in_buf_3_2_V_addr, align 2
  store i8 %val_assign_10, i8* %in_buf_3_3_V_addr, align 1
  store i8 %val_assign_11, i8* %in_buf_3_4_V_addr, align 4
  store i8 %val_assign_12, i8* %in_buf_3_5_V_addr, align 1
  store i8 %val_assign_13, i8* %in_buf_3_6_V_addr, align 2
  store i8 %val_assign_14, i8* %in_buf_3_7_V_addr, align 1
  br label %11

branch484:                                        ; preds = %10
  store i8 %tmp_261, i8* %in_buf_4_0_V_addr, align 8
  store i8 %val_assign_s, i8* %in_buf_4_1_V_addr, align 1
  store i8 %val_assign_2, i8* %in_buf_4_2_V_addr, align 2
  store i8 %val_assign_10, i8* %in_buf_4_3_V_addr, align 1
  store i8 %val_assign_11, i8* %in_buf_4_4_V_addr, align 4
  store i8 %val_assign_12, i8* %in_buf_4_5_V_addr, align 1
  store i8 %val_assign_13, i8* %in_buf_4_6_V_addr, align 2
  store i8 %val_assign_14, i8* %in_buf_4_7_V_addr, align 1
  br label %11

branch485:                                        ; preds = %10
  store i8 %tmp_261, i8* %in_buf_5_0_V_addr, align 8
  store i8 %val_assign_s, i8* %in_buf_5_1_V_addr, align 1
  store i8 %val_assign_2, i8* %in_buf_5_2_V_addr, align 2
  store i8 %val_assign_10, i8* %in_buf_5_3_V_addr, align 1
  store i8 %val_assign_11, i8* %in_buf_5_4_V_addr, align 4
  store i8 %val_assign_12, i8* %in_buf_5_5_V_addr, align 1
  store i8 %val_assign_13, i8* %in_buf_5_6_V_addr, align 2
  store i8 %val_assign_14, i8* %in_buf_5_7_V_addr, align 1
  br label %11

branch486:                                        ; preds = %10
  store i8 %tmp_261, i8* %in_buf_6_0_V_addr, align 8
  store i8 %val_assign_s, i8* %in_buf_6_1_V_addr, align 1
  store i8 %val_assign_2, i8* %in_buf_6_2_V_addr, align 2
  store i8 %val_assign_10, i8* %in_buf_6_3_V_addr, align 1
  store i8 %val_assign_11, i8* %in_buf_6_4_V_addr, align 4
  store i8 %val_assign_12, i8* %in_buf_6_5_V_addr, align 1
  store i8 %val_assign_13, i8* %in_buf_6_6_V_addr, align 2
  store i8 %val_assign_14, i8* %in_buf_6_7_V_addr, align 1
  br label %11

branch487:                                        ; preds = %10
  store i8 %tmp_261, i8* %in_buf_7_0_V_addr, align 8
  store i8 %val_assign_s, i8* %in_buf_7_1_V_addr, align 1
  store i8 %val_assign_2, i8* %in_buf_7_2_V_addr, align 2
  store i8 %val_assign_10, i8* %in_buf_7_3_V_addr, align 1
  store i8 %val_assign_11, i8* %in_buf_7_4_V_addr, align 4
  store i8 %val_assign_12, i8* %in_buf_7_5_V_addr, align 1
  store i8 %val_assign_13, i8* %in_buf_7_6_V_addr, align 2
  store i8 %val_assign_14, i8* %in_buf_7_7_V_addr, align 1
  br label %11

branch488:                                        ; preds = %10
  store i8 %tmp_261, i8* %in_buf_8_0_V_addr, align 8
  store i8 %val_assign_s, i8* %in_buf_8_1_V_addr, align 1
  store i8 %val_assign_2, i8* %in_buf_8_2_V_addr, align 2
  store i8 %val_assign_10, i8* %in_buf_8_3_V_addr, align 1
  store i8 %val_assign_11, i8* %in_buf_8_4_V_addr, align 4
  store i8 %val_assign_12, i8* %in_buf_8_5_V_addr, align 1
  store i8 %val_assign_13, i8* %in_buf_8_6_V_addr, align 2
  store i8 %val_assign_14, i8* %in_buf_8_7_V_addr, align 1
  br label %11

branch489:                                        ; preds = %10
  store i8 %tmp_261, i8* %in_buf_9_0_V_addr, align 8
  store i8 %val_assign_s, i8* %in_buf_9_1_V_addr, align 1
  store i8 %val_assign_2, i8* %in_buf_9_2_V_addr, align 2
  store i8 %val_assign_10, i8* %in_buf_9_3_V_addr, align 1
  store i8 %val_assign_11, i8* %in_buf_9_4_V_addr, align 4
  store i8 %val_assign_12, i8* %in_buf_9_5_V_addr, align 1
  store i8 %val_assign_13, i8* %in_buf_9_6_V_addr, align 2
  store i8 %val_assign_14, i8* %in_buf_9_7_V_addr, align 1
  br label %11

branch490:                                        ; preds = %10
  store i8 %tmp_261, i8* %in_buf_10_0_V_addr, align 8
  store i8 %val_assign_s, i8* %in_buf_10_1_V_addr, align 1
  store i8 %val_assign_2, i8* %in_buf_10_2_V_addr, align 2
  store i8 %val_assign_10, i8* %in_buf_10_3_V_addr, align 1
  store i8 %val_assign_11, i8* %in_buf_10_4_V_addr, align 4
  store i8 %val_assign_12, i8* %in_buf_10_5_V_addr, align 1
  store i8 %val_assign_13, i8* %in_buf_10_6_V_addr, align 2
  store i8 %val_assign_14, i8* %in_buf_10_7_V_addr, align 1
  br label %11

branch491:                                        ; preds = %10
  store i8 %tmp_261, i8* %in_buf_11_0_V_addr, align 8
  store i8 %val_assign_s, i8* %in_buf_11_1_V_addr, align 1
  store i8 %val_assign_2, i8* %in_buf_11_2_V_addr, align 2
  store i8 %val_assign_10, i8* %in_buf_11_3_V_addr, align 1
  store i8 %val_assign_11, i8* %in_buf_11_4_V_addr, align 4
  store i8 %val_assign_12, i8* %in_buf_11_5_V_addr, align 1
  store i8 %val_assign_13, i8* %in_buf_11_6_V_addr, align 2
  store i8 %val_assign_14, i8* %in_buf_11_7_V_addr, align 1
  br label %11

branch492:                                        ; preds = %10
  store i8 %tmp_261, i8* %in_buf_12_0_V_addr, align 8
  store i8 %val_assign_s, i8* %in_buf_12_1_V_addr, align 1
  store i8 %val_assign_2, i8* %in_buf_12_2_V_addr, align 2
  store i8 %val_assign_10, i8* %in_buf_12_3_V_addr, align 1
  store i8 %val_assign_11, i8* %in_buf_12_4_V_addr, align 4
  store i8 %val_assign_12, i8* %in_buf_12_5_V_addr, align 1
  store i8 %val_assign_13, i8* %in_buf_12_6_V_addr, align 2
  store i8 %val_assign_14, i8* %in_buf_12_7_V_addr, align 1
  br label %11

branch493:                                        ; preds = %10
  store i8 %tmp_261, i8* %in_buf_13_0_V_addr, align 8
  store i8 %val_assign_s, i8* %in_buf_13_1_V_addr, align 1
  store i8 %val_assign_2, i8* %in_buf_13_2_V_addr, align 2
  store i8 %val_assign_10, i8* %in_buf_13_3_V_addr, align 1
  store i8 %val_assign_11, i8* %in_buf_13_4_V_addr, align 4
  store i8 %val_assign_12, i8* %in_buf_13_5_V_addr, align 1
  store i8 %val_assign_13, i8* %in_buf_13_6_V_addr, align 2
  store i8 %val_assign_14, i8* %in_buf_13_7_V_addr, align 1
  br label %11

branch494:                                        ; preds = %10
  store i8 %tmp_261, i8* %in_buf_14_0_V_addr, align 8
  store i8 %val_assign_s, i8* %in_buf_14_1_V_addr, align 1
  store i8 %val_assign_2, i8* %in_buf_14_2_V_addr, align 2
  store i8 %val_assign_10, i8* %in_buf_14_3_V_addr, align 1
  store i8 %val_assign_11, i8* %in_buf_14_4_V_addr, align 4
  store i8 %val_assign_12, i8* %in_buf_14_5_V_addr, align 1
  store i8 %val_assign_13, i8* %in_buf_14_6_V_addr, align 2
  store i8 %val_assign_14, i8* %in_buf_14_7_V_addr, align 1
  br label %11

branch495:                                        ; preds = %10
  store i8 %tmp_261, i8* %in_buf_15_0_V_addr, align 8
  store i8 %val_assign_s, i8* %in_buf_15_1_V_addr, align 1
  store i8 %val_assign_2, i8* %in_buf_15_2_V_addr, align 2
  store i8 %val_assign_10, i8* %in_buf_15_3_V_addr, align 1
  store i8 %val_assign_11, i8* %in_buf_15_4_V_addr, align 4
  store i8 %val_assign_12, i8* %in_buf_15_5_V_addr, align 1
  store i8 %val_assign_13, i8* %in_buf_15_6_V_addr, align 2
  store i8 %val_assign_14, i8* %in_buf_15_7_V_addr, align 1
  br label %11

branch496:                                        ; preds = %10
  store i8 %tmp_261, i8* %in_buf_16_0_V_addr, align 8
  store i8 %val_assign_s, i8* %in_buf_16_1_V_addr, align 1
  store i8 %val_assign_2, i8* %in_buf_16_2_V_addr, align 2
  store i8 %val_assign_10, i8* %in_buf_16_3_V_addr, align 1
  store i8 %val_assign_11, i8* %in_buf_16_4_V_addr, align 4
  store i8 %val_assign_12, i8* %in_buf_16_5_V_addr, align 1
  store i8 %val_assign_13, i8* %in_buf_16_6_V_addr, align 2
  store i8 %val_assign_14, i8* %in_buf_16_7_V_addr, align 1
  br label %11

branch497:                                        ; preds = %10
  store i8 %tmp_261, i8* %in_buf_17_0_V_addr, align 8
  store i8 %val_assign_s, i8* %in_buf_17_1_V_addr, align 1
  store i8 %val_assign_2, i8* %in_buf_17_2_V_addr, align 2
  store i8 %val_assign_10, i8* %in_buf_17_3_V_addr, align 1
  store i8 %val_assign_11, i8* %in_buf_17_4_V_addr, align 4
  store i8 %val_assign_12, i8* %in_buf_17_5_V_addr, align 1
  store i8 %val_assign_13, i8* %in_buf_17_6_V_addr, align 2
  store i8 %val_assign_14, i8* %in_buf_17_7_V_addr, align 1
  br label %11

branch498:                                        ; preds = %10
  store i8 %tmp_261, i8* %in_buf_18_0_V_addr, align 8
  store i8 %val_assign_s, i8* %in_buf_18_1_V_addr, align 1
  store i8 %val_assign_2, i8* %in_buf_18_2_V_addr, align 2
  store i8 %val_assign_10, i8* %in_buf_18_3_V_addr, align 1
  store i8 %val_assign_11, i8* %in_buf_18_4_V_addr, align 4
  store i8 %val_assign_12, i8* %in_buf_18_5_V_addr, align 1
  store i8 %val_assign_13, i8* %in_buf_18_6_V_addr, align 2
  store i8 %val_assign_14, i8* %in_buf_18_7_V_addr, align 1
  br label %11

branch499:                                        ; preds = %10
  store i8 %tmp_261, i8* %in_buf_19_0_V_addr, align 8
  store i8 %val_assign_s, i8* %in_buf_19_1_V_addr, align 1
  store i8 %val_assign_2, i8* %in_buf_19_2_V_addr, align 2
  store i8 %val_assign_10, i8* %in_buf_19_3_V_addr, align 1
  store i8 %val_assign_11, i8* %in_buf_19_4_V_addr, align 4
  store i8 %val_assign_12, i8* %in_buf_19_5_V_addr, align 1
  store i8 %val_assign_13, i8* %in_buf_19_6_V_addr, align 2
  store i8 %val_assign_14, i8* %in_buf_19_7_V_addr, align 1
  br label %11

branch500:                                        ; preds = %10
  store i8 %tmp_261, i8* %in_buf_20_0_V_addr, align 8
  store i8 %val_assign_s, i8* %in_buf_20_1_V_addr, align 1
  store i8 %val_assign_2, i8* %in_buf_20_2_V_addr, align 2
  store i8 %val_assign_10, i8* %in_buf_20_3_V_addr, align 1
  store i8 %val_assign_11, i8* %in_buf_20_4_V_addr, align 4
  store i8 %val_assign_12, i8* %in_buf_20_5_V_addr, align 1
  store i8 %val_assign_13, i8* %in_buf_20_6_V_addr, align 2
  store i8 %val_assign_14, i8* %in_buf_20_7_V_addr, align 1
  br label %11

branch501:                                        ; preds = %10
  store i8 %tmp_261, i8* %in_buf_21_0_V_addr, align 8
  store i8 %val_assign_s, i8* %in_buf_21_1_V_addr, align 1
  store i8 %val_assign_2, i8* %in_buf_21_2_V_addr, align 2
  store i8 %val_assign_10, i8* %in_buf_21_3_V_addr, align 1
  store i8 %val_assign_11, i8* %in_buf_21_4_V_addr, align 4
  store i8 %val_assign_12, i8* %in_buf_21_5_V_addr, align 1
  store i8 %val_assign_13, i8* %in_buf_21_6_V_addr, align 2
  store i8 %val_assign_14, i8* %in_buf_21_7_V_addr, align 1
  br label %11

branch502:                                        ; preds = %10
  store i8 %tmp_261, i8* %in_buf_22_0_V_addr, align 8
  store i8 %val_assign_s, i8* %in_buf_22_1_V_addr, align 1
  store i8 %val_assign_2, i8* %in_buf_22_2_V_addr, align 2
  store i8 %val_assign_10, i8* %in_buf_22_3_V_addr, align 1
  store i8 %val_assign_11, i8* %in_buf_22_4_V_addr, align 4
  store i8 %val_assign_12, i8* %in_buf_22_5_V_addr, align 1
  store i8 %val_assign_13, i8* %in_buf_22_6_V_addr, align 2
  store i8 %val_assign_14, i8* %in_buf_22_7_V_addr, align 1
  br label %11

branch503:                                        ; preds = %10
  store i8 %tmp_261, i8* %in_buf_23_0_V_addr, align 8
  store i8 %val_assign_s, i8* %in_buf_23_1_V_addr, align 1
  store i8 %val_assign_2, i8* %in_buf_23_2_V_addr, align 2
  store i8 %val_assign_10, i8* %in_buf_23_3_V_addr, align 1
  store i8 %val_assign_11, i8* %in_buf_23_4_V_addr, align 4
  store i8 %val_assign_12, i8* %in_buf_23_5_V_addr, align 1
  store i8 %val_assign_13, i8* %in_buf_23_6_V_addr, align 2
  store i8 %val_assign_14, i8* %in_buf_23_7_V_addr, align 1
  br label %11

branch504:                                        ; preds = %10
  store i8 %tmp_261, i8* %in_buf_24_0_V_addr, align 8
  store i8 %val_assign_s, i8* %in_buf_24_1_V_addr, align 1
  store i8 %val_assign_2, i8* %in_buf_24_2_V_addr, align 2
  store i8 %val_assign_10, i8* %in_buf_24_3_V_addr, align 1
  store i8 %val_assign_11, i8* %in_buf_24_4_V_addr, align 4
  store i8 %val_assign_12, i8* %in_buf_24_5_V_addr, align 1
  store i8 %val_assign_13, i8* %in_buf_24_6_V_addr, align 2
  store i8 %val_assign_14, i8* %in_buf_24_7_V_addr, align 1
  br label %11

branch505:                                        ; preds = %10
  store i8 %tmp_261, i8* %in_buf_25_0_V_addr, align 8
  store i8 %val_assign_s, i8* %in_buf_25_1_V_addr, align 1
  store i8 %val_assign_2, i8* %in_buf_25_2_V_addr, align 2
  store i8 %val_assign_10, i8* %in_buf_25_3_V_addr, align 1
  store i8 %val_assign_11, i8* %in_buf_25_4_V_addr, align 4
  store i8 %val_assign_12, i8* %in_buf_25_5_V_addr, align 1
  store i8 %val_assign_13, i8* %in_buf_25_6_V_addr, align 2
  store i8 %val_assign_14, i8* %in_buf_25_7_V_addr, align 1
  br label %11

branch506:                                        ; preds = %10
  store i8 %tmp_261, i8* %in_buf_26_0_V_addr, align 8
  store i8 %val_assign_s, i8* %in_buf_26_1_V_addr, align 1
  store i8 %val_assign_2, i8* %in_buf_26_2_V_addr, align 2
  store i8 %val_assign_10, i8* %in_buf_26_3_V_addr, align 1
  store i8 %val_assign_11, i8* %in_buf_26_4_V_addr, align 4
  store i8 %val_assign_12, i8* %in_buf_26_5_V_addr, align 1
  store i8 %val_assign_13, i8* %in_buf_26_6_V_addr, align 2
  store i8 %val_assign_14, i8* %in_buf_26_7_V_addr, align 1
  br label %11

branch507:                                        ; preds = %10
  store i8 %tmp_261, i8* %in_buf_27_0_V_addr, align 8
  store i8 %val_assign_s, i8* %in_buf_27_1_V_addr, align 1
  store i8 %val_assign_2, i8* %in_buf_27_2_V_addr, align 2
  store i8 %val_assign_10, i8* %in_buf_27_3_V_addr, align 1
  store i8 %val_assign_11, i8* %in_buf_27_4_V_addr, align 4
  store i8 %val_assign_12, i8* %in_buf_27_5_V_addr, align 1
  store i8 %val_assign_13, i8* %in_buf_27_6_V_addr, align 2
  store i8 %val_assign_14, i8* %in_buf_27_7_V_addr, align 1
  br label %11

branch508:                                        ; preds = %10
  store i8 %tmp_261, i8* %in_buf_28_0_V_addr, align 8
  store i8 %val_assign_s, i8* %in_buf_28_1_V_addr, align 1
  store i8 %val_assign_2, i8* %in_buf_28_2_V_addr, align 2
  store i8 %val_assign_10, i8* %in_buf_28_3_V_addr, align 1
  store i8 %val_assign_11, i8* %in_buf_28_4_V_addr, align 4
  store i8 %val_assign_12, i8* %in_buf_28_5_V_addr, align 1
  store i8 %val_assign_13, i8* %in_buf_28_6_V_addr, align 2
  store i8 %val_assign_14, i8* %in_buf_28_7_V_addr, align 1
  br label %11

branch509:                                        ; preds = %10
  store i8 %tmp_261, i8* %in_buf_29_0_V_addr, align 8
  store i8 %val_assign_s, i8* %in_buf_29_1_V_addr, align 1
  store i8 %val_assign_2, i8* %in_buf_29_2_V_addr, align 2
  store i8 %val_assign_10, i8* %in_buf_29_3_V_addr, align 1
  store i8 %val_assign_11, i8* %in_buf_29_4_V_addr, align 4
  store i8 %val_assign_12, i8* %in_buf_29_5_V_addr, align 1
  store i8 %val_assign_13, i8* %in_buf_29_6_V_addr, align 2
  store i8 %val_assign_14, i8* %in_buf_29_7_V_addr, align 1
  br label %11

branch510:                                        ; preds = %10
  store i8 %tmp_261, i8* %in_buf_30_0_V_addr, align 8
  store i8 %val_assign_s, i8* %in_buf_30_1_V_addr, align 1
  store i8 %val_assign_2, i8* %in_buf_30_2_V_addr, align 2
  store i8 %val_assign_10, i8* %in_buf_30_3_V_addr, align 1
  store i8 %val_assign_11, i8* %in_buf_30_4_V_addr, align 4
  store i8 %val_assign_12, i8* %in_buf_30_5_V_addr, align 1
  store i8 %val_assign_13, i8* %in_buf_30_6_V_addr, align 2
  store i8 %val_assign_14, i8* %in_buf_30_7_V_addr, align 1
  br label %11

branch511:                                        ; preds = %10
  store i8 %tmp_261, i8* %in_buf_31_0_V_addr, align 8
  store i8 %val_assign_s, i8* %in_buf_31_1_V_addr, align 1
  store i8 %val_assign_2, i8* %in_buf_31_2_V_addr, align 2
  store i8 %val_assign_10, i8* %in_buf_31_3_V_addr, align 1
  store i8 %val_assign_11, i8* %in_buf_31_4_V_addr, align 4
  store i8 %val_assign_12, i8* %in_buf_31_5_V_addr, align 1
  store i8 %val_assign_13, i8* %in_buf_31_6_V_addr, align 2
  store i8 %val_assign_14, i8* %in_buf_31_7_V_addr, align 1
  br label %11
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
  %empty_28 = load i8* %1
  %empty_29 = load i8* %2
  %empty_30 = load i4* %3
  %empty_31 = load i1* %4
  %empty_32 = load i5* %5
  %empty_33 = load i5* %6
  %mrv_0 = insertvalue { i64, i8, i8, i4, i1, i5, i5 } undef, i64 %empty, 0
  %mrv1 = insertvalue { i64, i8, i8, i4, i1, i5, i5 } %mrv_0, i8 %empty_28, 1
  %mrv2 = insertvalue { i64, i8, i8, i4, i1, i5, i5 } %mrv1, i8 %empty_29, 2
  %mrv3 = insertvalue { i64, i8, i8, i4, i1, i5, i5 } %mrv2, i4 %empty_30, 3
  %mrv4 = insertvalue { i64, i8, i8, i4, i1, i5, i5 } %mrv3, i1 %empty_31, 4
  %mrv5 = insertvalue { i64, i8, i8, i4, i1, i5, i5 } %mrv4, i5 %empty_32, 5
  %mrv6 = insertvalue { i64, i8, i8, i4, i1, i5, i5 } %mrv5, i5 %empty_33, 6
  ret { i64, i8, i8, i4, i1, i5, i5 } %mrv6
}

define weak i8 @_ssdm_op_PartSelect.i8.i64.i32.i32(i64, i32, i32) nounwind readnone {
entry:
  %empty = call i64 @llvm.part.select.i64(i64 %0, i32 %1, i32 %2)
  %empty_34 = trunc i64 %empty to i8
  ret i8 %empty_34
}

define weak i6 @_ssdm_op_PartSelect.i6.i9.i32.i32(i9, i32, i32) nounwind readnone {
entry:
  %empty = call i9 @llvm.part.select.i9(i9 %0, i32 %1, i32 %2)
  %empty_35 = trunc i9 %empty to i6
  ret i6 %empty_35
}

define weak i32 @_ssdm_op_PartSelect.i32.i64.i32.i32(i64, i32, i32) nounwind readnone {
entry:
  %empty = call i64 @llvm.part.select.i64(i64 %0, i32 %1, i32 %2)
  %empty_36 = trunc i64 %empty to i32
  ret i32 %empty_36
}

define weak i1 @_ssdm_op_BitSelect.i1.i14.i32(i14, i32) nounwind readnone {
entry:
  %empty = trunc i32 %1 to i14
  %empty_37 = shl i14 1, %empty
  %empty_38 = and i14 %0, %empty_37
  %empty_39 = icmp ne i14 %empty_38, 0
  ret i1 %empty_39
}

define weak i8 @_ssdm_op_BitConcatenate.i8.i7.i1(i7, i1) nounwind readnone {
entry:
  %empty = zext i7 %0 to i8
  %empty_40 = zext i1 %1 to i8
  %empty_41 = shl i8 %empty, 1
  %empty_42 = or i8 %empty_41, %empty_40
  ret i8 %empty_42
}

define weak i64 @_ssdm_op_BitConcatenate.i64.i32.i32(i32, i32) nounwind readnone {
entry:
  %empty = zext i32 %0 to i64
  %empty_43 = zext i32 %1 to i64
  %empty_44 = shl i64 %empty, 32
  %empty_45 = or i64 %empty_44, %empty_43
  ret i64 %empty_45
}

define weak i10 @_ssdm_op_BitConcatenate.i10.i7.i3(i7, i3) nounwind readnone {
entry:
  %empty = zext i7 %0 to i10
  %empty_46 = zext i3 %1 to i10
  %empty_47 = shl i10 %empty, 3
  %empty_48 = or i10 %empty_47, %empty_46
  ret i10 %empty_48
}

declare void @_GLOBAL__I_a() nounwind section ".text.startup"

!opencl.kernels = !{!0, !7, !13, !17, !17, !20, !20, !17, !17, !20, !20, !17, !17, !20, !20, !17, !17, !20, !20, !26, !26, !20, !20, !20, !28, !31, !33, !35, !20, !37, !39, !39, !20, !20, !42, !20, !20, !20, !45, !45, !47, !47, !49, !51, !51, !53, !55, !55, !20, !20, !57, !17, !17, !20, !20, !20, !20, !20, !20, !20, !20, !20, !20, !20, !20, !20, !20, !20, !20, !59}
!hls.encrypted.func = !{}
!llvm.map.gv = !{!62}

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
!37 = metadata !{null, metadata !8, metadata !9, metadata !38, metadata !11, metadata !30, metadata !6}
!38 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<32, true> &"}
!39 = metadata !{null, metadata !8, metadata !9, metadata !40, metadata !11, metadata !41, metadata !6}
!40 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<16, true> &"}
!41 = metadata !{metadata !"kernel_arg_name", metadata !"op"}
!42 = metadata !{null, metadata !14, metadata !2, metadata !43, metadata !4, metadata !44, metadata !6}
!43 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<8, false> &", metadata !"const ap_int_base<8, true> &"}
!44 = metadata !{metadata !"kernel_arg_name", metadata !"op", metadata !"op2"}
!45 = metadata !{null, metadata !8, metadata !9, metadata !46, metadata !11, metadata !41, metadata !6}
!46 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<8, true> &"}
!47 = metadata !{null, metadata !8, metadata !9, metadata !48, metadata !11, metadata !41, metadata !6}
!48 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<8, false> &"}
!49 = metadata !{null, metadata !8, metadata !9, metadata !50, metadata !11, metadata !30, metadata !6}
!50 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_uint<8> &"}
!51 = metadata !{null, metadata !8, metadata !9, metadata !52, metadata !11, metadata !19, metadata !6}
!52 = metadata !{metadata !"kernel_arg_type", metadata !"uchar"}
!53 = metadata !{null, metadata !8, metadata !9, metadata !54, metadata !11, metadata !30, metadata !6}
!54 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int<8> &"}
!55 = metadata !{null, metadata !8, metadata !9, metadata !56, metadata !11, metadata !19, metadata !6}
!56 = metadata !{metadata !"kernel_arg_type", metadata !"signed char"}
!57 = metadata !{null, metadata !8, metadata !9, metadata !58, metadata !11, metadata !30, metadata !6}
!58 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int<32> &"}
!59 = metadata !{null, metadata !8, metadata !9, metadata !60, metadata !11, metadata !61, metadata !6}
!60 = metadata !{metadata !"kernel_arg_type", metadata !"const struct ap_axiu<64, 4, 5, 5> &"}
!61 = metadata !{metadata !"kernel_arg_name", metadata !""}
!62 = metadata !{metadata !63, [1 x i32]* @llvm_global_ctors_0}
!63 = metadata !{metadata !64}
!64 = metadata !{i32 0, i32 31, metadata !65}
!65 = metadata !{metadata !66}
!66 = metadata !{metadata !"llvm.global_ctors.0", metadata !67, metadata !"", i32 0, i32 31}
!67 = metadata !{metadata !68}
!68 = metadata !{i32 0, i32 0, i32 1}
!69 = metadata !{metadata !70}
!70 = metadata !{i32 0, i32 63, metadata !71}
!71 = metadata !{metadata !72}
!72 = metadata !{metadata !"in_stream.data.V", metadata !73, metadata !"uint64", i32 0, i32 63}
!73 = metadata !{metadata !74}
!74 = metadata !{i32 0, i32 262468, i32 1}
!75 = metadata !{metadata !76}
!76 = metadata !{i32 0, i32 7, metadata !77}
!77 = metadata !{metadata !78}
!78 = metadata !{metadata !"in_stream.keep.V", metadata !73, metadata !"uint8", i32 0, i32 7}
!79 = metadata !{metadata !80}
!80 = metadata !{i32 0, i32 7, metadata !81}
!81 = metadata !{metadata !82}
!82 = metadata !{metadata !"in_stream.strb.V", metadata !73, metadata !"uint8", i32 0, i32 7}
!83 = metadata !{metadata !84}
!84 = metadata !{i32 0, i32 3, metadata !85}
!85 = metadata !{metadata !86}
!86 = metadata !{metadata !"in_stream.user.V", metadata !73, metadata !"uint4", i32 0, i32 3}
!87 = metadata !{metadata !88}
!88 = metadata !{i32 0, i32 0, metadata !89}
!89 = metadata !{metadata !90}
!90 = metadata !{metadata !"in_stream.last.V", metadata !73, metadata !"uint1", i32 0, i32 0}
!91 = metadata !{metadata !92}
!92 = metadata !{i32 0, i32 4, metadata !93}
!93 = metadata !{metadata !94}
!94 = metadata !{metadata !"in_stream.id.V", metadata !73, metadata !"uint5", i32 0, i32 4}
!95 = metadata !{metadata !96}
!96 = metadata !{i32 0, i32 4, metadata !97}
!97 = metadata !{metadata !98}
!98 = metadata !{metadata !"in_stream.dest.V", metadata !73, metadata !"uint5", i32 0, i32 4}
!99 = metadata !{metadata !100}
!100 = metadata !{i32 0, i32 63, metadata !101}
!101 = metadata !{metadata !102}
!102 = metadata !{metadata !"out_stream.data.V", metadata !103, metadata !"uint64", i32 0, i32 63}
!103 = metadata !{metadata !104}
!104 = metadata !{i32 0, i32 40959, i32 1}
!105 = metadata !{metadata !106}
!106 = metadata !{i32 0, i32 7, metadata !107}
!107 = metadata !{metadata !108}
!108 = metadata !{metadata !"out_stream.keep.V", metadata !103, metadata !"uint8", i32 0, i32 7}
!109 = metadata !{metadata !110}
!110 = metadata !{i32 0, i32 7, metadata !111}
!111 = metadata !{metadata !112}
!112 = metadata !{metadata !"out_stream.strb.V", metadata !103, metadata !"uint8", i32 0, i32 7}
!113 = metadata !{metadata !114}
!114 = metadata !{i32 0, i32 3, metadata !115}
!115 = metadata !{metadata !116}
!116 = metadata !{metadata !"out_stream.user.V", metadata !103, metadata !"uint4", i32 0, i32 3}
!117 = metadata !{metadata !118}
!118 = metadata !{i32 0, i32 0, metadata !119}
!119 = metadata !{metadata !120}
!120 = metadata !{metadata !"out_stream.last.V", metadata !103, metadata !"uint1", i32 0, i32 0}
!121 = metadata !{metadata !122}
!122 = metadata !{i32 0, i32 4, metadata !123}
!123 = metadata !{metadata !124}
!124 = metadata !{metadata !"out_stream.id.V", metadata !103, metadata !"uint5", i32 0, i32 4}
!125 = metadata !{metadata !126}
!126 = metadata !{i32 0, i32 4, metadata !127}
!127 = metadata !{metadata !128}
!128 = metadata !{metadata !"out_stream.dest.V", metadata !103, metadata !"uint5", i32 0, i32 4}
