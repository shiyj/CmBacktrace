cmake_minimum_required(VERSION 3.1)

include(mc_arm_gcc)

mc_set_arm_gcc()

project(CmBacktrace C ASM)

mc_set_include_list(
   ./cm_backtrace
   ./cm_backtrace/Languages/_ErrorCode
   ./cm_backtrace/Languages/en-US
)

mc_set_source_list(
   ./cm_backtrace/*.c
   ./cm_backtrace/fault_handler/gcc/*.S
)

mc_export_library()

