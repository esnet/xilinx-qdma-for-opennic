/*-
 * BSD LICENSE
 *
 * Copyright (c) 2017-2022 Xilinx, Inc. All rights reserved.
 * Copyright (c) 2022-2023, Advanced Micro Devices, Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *   * Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in
 *     the documentation and/or other materials provided with the
 *     distribution.
 *   * Neither the name of the copyright holder nor the names of its
 *     contributors may be used to endorse or promote products derived
 *     from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <rte_mbuf.h>
#include <rte_cycles.h>
#include "qdma.h"
#include "qdma_access_common.h"

#include <fcntl.h>
#include <unistd.h>
#include "qdma_rxtx.h"
#include "qdma_devops.h"

#ifdef __GNUC__
#  define UNUSED(x) UNUSED_ ## x __attribute__((__unused__))
#else
#  define UNUSED(x) UNUSED_ ## x
#endif

/* Receive API for Streaming mode */
uint16_t qdma_recv_pkts_st_vec(void *UNUSED(rx_queue),
			struct rte_mbuf **UNUSED(rx_pkts), uint16_t UNUSED(nb_pkts))
{
	PMD_DRV_LOG(INFO, "qdma_recv_pkts_st_vec not supported for open-nic-shell");
	return 0;
}

/**
 * DPDK callback for receiving packets in burst.
 *
 * @param rx_queue
 *   Generic pointer to Rx queue structure.
 * @param[out] rx_pkts
 *   Array to store received packets.
 * @param nb_pkts
 *   Maximum number of packets in array.
 *
 * @return
 *   Number of packets successfully received (<= nb_pkts).
 */
uint16_t qdma_recv_pkts_vec(void *UNUSED(rx_queue), struct rte_mbuf **UNUSED(rx_pkts),
			uint16_t UNUSED(nb_pkts))
{
	PMD_DRV_LOG(INFO, "qdma_recv_pkts_vec not supported for open-nic-shell");
	return 0;
}

/* Transmit API for Streaming mode */
uint16_t qdma_xmit_pkts_st_vec(void *UNUSED(tx_queue),
			struct rte_mbuf **UNUSED(tx_pkts), uint16_t UNUSED(nb_pkts))
{
	PMD_DRV_LOG(INFO, "qdma_xmit_pkts_st_vec not supported for open-nic-shell");
	return 0;
}

/**
 * DPDK callback for transmitting packets in burst.
 *
 * @param tx_queue
 *   Generic pointer to TX queue structure.
 * @param[in] tx_pkts
 *   Packets to transmit.
 * @param nb_pkts
 *   Number of packets in array.
 *
 * @return
 *   Number of packets successfully transmitted (<= nb_pkts).
 */
uint16_t qdma_xmit_pkts_vec(void *UNUSED(tx_queue), struct rte_mbuf **UNUSED(tx_pkts),
			uint16_t UNUSED(nb_pkts))
{
	PMD_DRV_LOG(INFO, "qdma_xmit_pkts_vec not supported for open-nic-shell");
	return 0;
}
