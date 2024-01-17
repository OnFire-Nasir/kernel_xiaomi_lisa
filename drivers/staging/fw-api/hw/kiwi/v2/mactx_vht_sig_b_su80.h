
/*
 * Copyright (c) 2023 Qualcomm Innovation Center, Inc. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */



#ifndef _MACTX_VHT_SIG_B_SU80_H_
#define _MACTX_VHT_SIG_B_SU80_H_
#if !defined(__ASSEMBLER__)
#endif

#include "vht_sig_b_su80_info.h"
#define NUM_OF_DWORDS_MACTX_VHT_SIG_B_SU80 4

#define NUM_OF_QWORDS_MACTX_VHT_SIG_B_SU80 2

struct mactx_vht_sig_b_su80 {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
             struct   vht_sig_b_su80_info                                       mactx_vht_sig_b_su80_info_details;
#else
             struct   vht_sig_b_su80_info                                       mactx_vht_sig_b_su80_info_details;
#endif
};

#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_LENGTH_OFFSET        0x0000000000000000
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_LENGTH_LSB           0
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_LENGTH_MSB           20
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_LENGTH_MASK          0x00000000001fffff

#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_VHTB_RESERVED_OFFSET 0x0000000000000000
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_VHTB_RESERVED_LSB    21
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_VHTB_RESERVED_MSB    22
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_VHTB_RESERVED_MASK   0x0000000000600000

#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_TAIL_OFFSET          0x0000000000000000
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_TAIL_LSB             23
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_TAIL_MSB             28
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_TAIL_MASK            0x000000001f800000

#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_RESERVED_0_OFFSET    0x0000000000000000
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_RESERVED_0_LSB       29
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_RESERVED_0_MSB       30
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_RESERVED_0_MASK      0x0000000060000000

#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_RX_NDP_OFFSET        0x0000000000000000
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_RX_NDP_LSB           31
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_RX_NDP_MSB           31
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_RX_NDP_MASK          0x0000000080000000

#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_LENGTH_COPY_A_OFFSET 0x0000000000000000
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_LENGTH_COPY_A_LSB    32
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_LENGTH_COPY_A_MSB    52
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_LENGTH_COPY_A_MASK   0x001fffff00000000

#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_VHTB_RESERVED_COPY_A_OFFSET 0x0000000000000000
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_VHTB_RESERVED_COPY_A_LSB 53
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_VHTB_RESERVED_COPY_A_MSB 54
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_VHTB_RESERVED_COPY_A_MASK 0x0060000000000000

#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_TAIL_COPY_A_OFFSET   0x0000000000000000
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_TAIL_COPY_A_LSB      55
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_TAIL_COPY_A_MSB      60
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_TAIL_COPY_A_MASK     0x1f80000000000000

#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_RESERVED_1_OFFSET    0x0000000000000000
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_RESERVED_1_LSB       61
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_RESERVED_1_MSB       62
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_RESERVED_1_MASK      0x6000000000000000

#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_RX_NDP_COPY_A_OFFSET 0x0000000000000000
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_RX_NDP_COPY_A_LSB    63
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_RX_NDP_COPY_A_MSB    63
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_RX_NDP_COPY_A_MASK   0x8000000000000000

#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_LENGTH_COPY_B_OFFSET 0x0000000000000008
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_LENGTH_COPY_B_LSB    0
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_LENGTH_COPY_B_MSB    20
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_LENGTH_COPY_B_MASK   0x00000000001fffff

#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_VHTB_RESERVED_COPY_B_OFFSET 0x0000000000000008
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_VHTB_RESERVED_COPY_B_LSB 21
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_VHTB_RESERVED_COPY_B_MSB 22
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_VHTB_RESERVED_COPY_B_MASK 0x0000000000600000

#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_TAIL_COPY_B_OFFSET   0x0000000000000008
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_TAIL_COPY_B_LSB      23
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_TAIL_COPY_B_MSB      28
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_TAIL_COPY_B_MASK     0x000000001f800000

#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_RESERVED_2_OFFSET    0x0000000000000008
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_RESERVED_2_LSB       29
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_RESERVED_2_MSB       30
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_RESERVED_2_MASK      0x0000000060000000

#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_RX_NDP_COPY_B_OFFSET 0x0000000000000008
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_RX_NDP_COPY_B_LSB    31
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_RX_NDP_COPY_B_MSB    31
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_RX_NDP_COPY_B_MASK   0x0000000080000000

#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_LENGTH_COPY_C_OFFSET 0x0000000000000008
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_LENGTH_COPY_C_LSB    32
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_LENGTH_COPY_C_MSB    52
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_LENGTH_COPY_C_MASK   0x001fffff00000000

#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_VHTB_RESERVED_COPY_C_OFFSET 0x0000000000000008
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_VHTB_RESERVED_COPY_C_LSB 53
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_VHTB_RESERVED_COPY_C_MSB 54
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_VHTB_RESERVED_COPY_C_MASK 0x0060000000000000

#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_TAIL_COPY_C_OFFSET   0x0000000000000008
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_TAIL_COPY_C_LSB      55
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_TAIL_COPY_C_MSB      60
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_TAIL_COPY_C_MASK     0x1f80000000000000

#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_RESERVED_3_OFFSET    0x0000000000000008
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_RESERVED_3_LSB       61
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_RESERVED_3_MSB       62
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_RESERVED_3_MASK      0x6000000000000000

#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_RX_NDP_COPY_C_OFFSET 0x0000000000000008
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_RX_NDP_COPY_C_LSB    63
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_RX_NDP_COPY_C_MSB    63
#define MACTX_VHT_SIG_B_SU80_MACTX_VHT_SIG_B_SU80_INFO_DETAILS_RX_NDP_COPY_C_MASK   0x8000000000000000

#endif
