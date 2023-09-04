/*
 * This file is part of the CmBacktrace Library.
 *
 * Copyright (c) 2020, Armink, <armink.ztl@gmail.com>
 *                     Chenxuan, <chenxuan.zhao@icloud.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * 'Software'), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

[PRINT_MAIN_STACK_CFG_ERROR]  = "0",
[PRINT_FIRMWARE_INFO]         = "Firmware name: %s, hardware version: %s, software version: %s",
[PRINT_ASSERT_ON_THREAD]      = "2 %s",
[PRINT_ASSERT_ON_HANDLER]     = "3",
[PRINT_THREAD_STACK_INFO]     = "4",
[PRINT_MAIN_STACK_INFO]       = "5",
[PRINT_THREAD_STACK_OVERFLOW] = "6(%08x)",
[PRINT_MAIN_STACK_OVERFLOW]   = "7(%08x)",
[PRINT_CALL_STACK_INFO]       = "8: addr2line -e %s%s -afpiC %.*s",
[PRINT_CALL_STACK_ERR]        = "9",
[PRINT_FAULT_ON_THREAD]       = "10 %s",
[PRINT_FAULT_ON_HANDLER]      = "11",
[PRINT_REGS_TITLE]            = "12",
[PRINT_HFSR_VECTBL]           = "13",
[PRINT_MFSR_IACCVIOL]         = "14",
[PRINT_MFSR_DACCVIOL]         = "15",
[PRINT_MFSR_MUNSTKERR]        = "16",
[PRINT_MFSR_MSTKERR]          = "17",
[PRINT_MFSR_MLSPERR]          = "18",
[PRINT_BFSR_IBUSERR]          = "19",
[PRINT_BFSR_PRECISERR]        = "20",
[PRINT_BFSR_IMPREISERR]       = "21",
[PRINT_BFSR_UNSTKERR]         = "22",
[PRINT_BFSR_STKERR]           = "23",
[PRINT_BFSR_LSPERR]           = "24",
[PRINT_UFSR_UNDEFINSTR]       = "25",
[PRINT_UFSR_INVSTATE]         = "26",
[PRINT_UFSR_INVPC]            = "27",
[PRINT_UFSR_NOCP]             = "28",
#if (CMB_CPU_PLATFORM_TYPE == CMB_CPU_ARM_CORTEX_M33)
    [PRINT_UFSR_STKOF]        = "29",
#endif
[PRINT_UFSR_UNALIGNED]        = "30",
[PRINT_UFSR_DIVBYZERO0]       = "31",
[PRINT_DFSR_HALTED]           = "32",
[PRINT_DFSR_BKPT]             = "33",
[PRINT_DFSR_DWTTRAP]          = "34",
[PRINT_DFSR_VCATCH]           = "35",
[PRINT_DFSR_EXTERNAL]         = "36",
[PRINT_MMAR]                  = "37 %08x",
[PRINT_BFAR]                  = "38 %08x",
