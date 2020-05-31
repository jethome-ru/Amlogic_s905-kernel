/* SPDX-License-Identifier: (GPL-2.0 OR MIT) */
/*
 * Driver for Microsemi VSC85xx PHYs
 *
 * Copyright (c) 2017 Microsemi Corporation
 */

#ifndef _MSCC_PHY_LINE_MAC_H_
#define _MSCC_PHY_LINE_MAC_H_

#define MSCC_MAC_CFG_ENA_CFG					0x00
#define MSCC_MAC_CFG_MODE_CFG					0x01
#define MSCC_MAC_CFG_MAXLEN_CFG					0x02
#define MSCC_MAC_CFG_NUM_TAGS_CFG				0x03
#define MSCC_MAC_CFG_TAGS_CFG					0x04
#define MSCC_MAC_CFG_ADV_CHK_CFG				0x07
#define MSCC_MAC_CFG_LFS_CFG					0x08
#define MSCC_MAC_CFG_LB_CFG					0x09
#define MSCC_MAC_CFG_PKTINF_CFG					0x0a
#define MSCC_MAC_PAUSE_CFG_TX_FRAME_CTRL			0x0b
#define MSCC_MAC_PAUSE_CFG_TX_FRAME_CTRL_2			0x0c
#define MSCC_MAC_PAUSE_CFG_RX_FRAME_CTRL			0x0d
#define MSCC_MAC_PAUSE_CFG_STATE				0x0e
#define MSCC_MAC_PAUSE_CFG_MAC_ADDRESS_LSB			0x0f
#define MSCC_MAC_PAUSE_CFG_MAC_ADDRESS_MSB			0x10
#define MSCC_MAC_STATUS_RX_LANE_STICKY_0			0x11
#define MSCC_MAC_STATUS_RX_LANE_STICKY_1			0x12
#define MSCC_MAC_STATUS_TX_MONITOR_STICKY			0x13
#define MSCC_MAC_STATUS_TX_MONITOR_STICKY_MASK			0x14
#define MSCC_MAC_STATUS_STICKY					0x15
#define MSCC_MAC_STATUS_STICKY_MASK				0x16
#define MSCC_MAC_STATS_32BIT_RX_HIH_CKSM_ERR_CNT		0x17
#define MSCC_MAC_STATS_32BIT_RX_XGMII_PROT_ERR_CNT		0x18
#define MSCC_MAC_STATS_32BIT_RX_SYMBOL_ERR_CNT			0x19
#define MSCC_MAC_STATS_32BIT_RX_PAUSE_CNT			0x1a
#define MSCC_MAC_STATS_32BIT_RX_UNSUP_OPCODE_CNT		0x1b
#define MSCC_MAC_STATS_32BIT_RX_UC_CNT				0x1c
#define MSCC_MAC_STATS_32BIT_RX_MC_CNT				0x1d
#define MSCC_MAC_STATS_32BIT_RX_BC_CNT				0x1e
#define MSCC_MAC_STATS_32BIT_RX_CRC_ERR_CNT			0x1f
#define MSCC_MAC_STATS_32BIT_RX_UNDERSIZE_CNT			0x20
#define MSCC_MAC_STATS_32BIT_RX_FRAGMENTS_CNT			0x21
#define MSCC_MAC_STATS_32BIT_RX_IN_RANGE_LEN_ERR_CNT		0x22
#define MSCC_MAC_STATS_32BIT_RX_OUT_OF_RANGE_LEN_ERR_CNT	0x23
#define MSCC_MAC_STATS_32BIT_RX_OVERSIZE_CNT			0x24
#define MSCC_MAC_STATS_32BIT_RX_JABBERS_CNT			0x25
#define MSCC_MAC_STATS_32BIT_RX_SIZE64_CNT			0x26
#define MSCC_MAC_STATS_32BIT_RX_SIZE65TO127_CNT			0x27
#define MSCC_MAC_STATS_32BIT_RX_SIZE128TO255_CNT		0x28
#define MSCC_MAC_STATS_32BIT_RX_SIZE256TO511_CNT		0x29
#define MSCC_MAC_STATS_32BIT_RX_SIZE512TO1023_CNT		0x2a
#define MSCC_MAC_STATS_32BIT_RX_SIZE1024TO1518_CNT		0x2b
#define MSCC_MAC_STATS_32BIT_RX_SIZE1519TOMAX_CNT		0x2c
#define MSCC_MAC_STATS_32BIT_RX_IPG_SHRINK_CNT			0x2d
#define MSCC_MAC_STATS_32BIT_TX_PAUSE_CNT			0x2e
#define MSCC_MAC_STATS_32BIT_TX_UC_CNT				0x2f
#define MSCC_MAC_STATS_32BIT_TX_MC_CNT				0x30
#define MSCC_MAC_STATS_32BIT_TX_BC_CNT				0x31
#define MSCC_MAC_STATS_32BIT_TX_SIZE64_CNT			0x32
#define MSCC_MAC_STATS_32BIT_TX_SIZE65TO127_CNT			0x33
#define MSCC_MAC_STATS_32BIT_TX_SIZE128TO255_CNT		0x34
#define MSCC_MAC_STATS_32BIT_TX_SIZE256TO511_CNT		0x35
#define MSCC_MAC_STATS_32BIT_TX_SIZE512TO1023_CNT		0x36
#define MSCC_MAC_STATS_32BIT_TX_SIZE1024TO1518_CNT		0x37
#define MSCC_MAC_STATS_32BIT_TX_SIZE1519TOMAX_CNT		0x38
#define MSCC_MAC_STATS_40BIT_RX_BAD_BYTES_CNT			0x39
#define MSCC_MAC_STATS_40BIT_RX_BAD_BYTES_MSB_CNT		0x3a
#define MSCC_MAC_STATS_40BIT_RX_OK_BYTES_CNT			0x3b
#define MSCC_MAC_STATS_40BIT_RX_OK_BYTES_MSB_CNT		0x3c
#define MSCC_MAC_STATS_40BIT_RX_IN_BYTES_CNT			0x3d
#define MSCC_MAC_STATS_40BIT_RX_IN_BYTES_MSB_CNT		0x3e
#define MSCC_MAC_STATS_40BIT_TX_OK_BYTES_CNT			0x3f
#define MSCC_MAC_STATS_40BIT_TX_OK_BYTES_MSB_CNT		0x40
#define MSCC_MAC_STATS_40BIT_TX_OUT_BYTES_CNT			0x41
#define MSCC_MAC_STATS_40BIT_TX_OUT_BYTES_MSB_CNT		0x42

#define MSCC_MAC_CFG_ENA_CFG_RX_CLK_ENA				BIT(0)
#define MSCC_MAC_CFG_ENA_CFG_TX_CLK_ENA				BIT(4)
#define MSCC_MAC_CFG_ENA_CFG_RX_SW_RST				BIT(8)
#define MSCC_MAC_CFG_ENA_CFG_TX_SW_RST				BIT(12)
#define MSCC_MAC_CFG_ENA_CFG_RX_ENA				BIT(16)
#define MSCC_MAC_CFG_ENA_CFG_TX_ENA				BIT(20)

#define MSCC_MAC_CFG_MODE_CFG_FORCE_CW_UPDATE_INTERVAL(x)	((x) << 20)
#define MSCC_MAC_CFG_MODE_CFG_FORCE_CW_UPDATE_INTERVAL_M	GENMASK(29, 20)
#define MSCC_MAC_CFG_MODE_CFG_FORCE_CW_UPDATE			BIT(16)
#define MSCC_MAC_CFG_MODE_CFG_TUNNEL_PAUSE_FRAMES		BIT(14)
#define MSCC_MAC_CFG_MODE_CFG_MAC_PREAMBLE_CFG(x)		((x) << 10)
#define MSCC_MAC_CFG_MODE_CFG_MAC_PREAMBLE_CFG_M		GENMASK(12, 10)
#define MSCC_MAC_CFG_MODE_CFG_MAC_IPG_CFG			BIT(6)
#define MSCC_MAC_CFG_MODE_CFG_XGMII_GEN_MODE_ENA		BIT(4)
#define MSCC_MAC_CFG_MODE_CFG_HIH_CRC_CHECK			BIT(2)
#define MSCC_MAC_CFG_MODE_CFG_UNDERSIZED_FRAME_DROP_DIS		BIT(1)
#define MSCC_MAC_CFG_MODE_CFG_DISABLE_DIC			BIT(0)

#define MSCC_MAC_CFG_MAXLEN_CFG_MAX_LEN_TAG_CHK			BIT(16)
#define MSCC_MAC_CFG_MAXLEN_CFG_MAX_LEN(x)			(x)
#define MSCC_MAC_CFG_MAXLEN_CFG_MAX_LEN_M			GENMASK(15, 0)

#define MSCC_MAC_CFG_TAGS_CFG_RSZ				0x4
#define MSCC_MAC_CFG_TAGS_CFG_TAG_ID(x)				((x) << 16)
#define MSCC_MAC_CFG_TAGS_CFG_TAG_ID_M				GENMASK(31, 16)
#define MSCC_MAC_CFG_TAGS_CFG_TAG_ENA				BIT(4)

#define MSCC_MAC_CFG_ADV_CHK_CFG_EXT_EOP_CHK_ENA		BIT(24)
#define MSCC_MAC_CFG_ADV_CHK_CFG_EXT_SOP_CHK_ENA		BIT(20)
#define MSCC_MAC_CFG_ADV_CHK_CFG_SFD_CHK_ENA			BIT(16)
#define MSCC_MAC_CFG_ADV_CHK_CFG_PRM_SHK_CHK_DIS		BIT(12)
#define MSCC_MAC_CFG_ADV_CHK_CFG_PRM_CHK_ENA			BIT(8)
#define MSCC_MAC_CFG_ADV_CHK_CFG_OOR_ERR_ENA			BIT(4)
#define MSCC_MAC_CFG_ADV_CHK_CFG_INR_ERR_ENA			BIT(0)

#define MSCC_MAC_CFG_LFS_CFG_LFS_INH_TX				BIT(8)
#define MSCC_MAC_CFG_LFS_CFG_LFS_DIS_TX				BIT(4)
#define MSCC_MAC_CFG_LFS_CFG_LFS_UNIDIR_ENA			BIT(3)
#define MSCC_MAC_CFG_LFS_CFG_USE_LEADING_EDGE_DETECT		BIT(2)
#define MSCC_MAC_CFG_LFS_CFG_SPURIOUS_Q_DIS			BIT(1)
#define MSCC_MAC_CFG_LFS_CFG_LFS_MODE_ENA			BIT(0)

#define MSCC_MAC_CFG_LB_CFG_XGMII_HOST_LB_ENA			BIT(4)
#define MSCC_MAC_CFG_LB_CFG_XGMII_PHY_LB_ENA			BIT(0)

#define MSCC_MAC_CFG_PKTINF_CFG_STRIP_FCS_ENA			BIT(0)
#define MSCC_MAC_CFG_PKTINF_CFG_INSERT_FCS_ENA			BIT(4)
#define MSCC_MAC_CFG_PKTINF_CFG_STRIP_PREAMBLE_ENA		BIT(8)
#define MSCC_MAC_CFG_PKTINF_CFG_INSERT_PREAMBLE_ENA		BIT(12)
#define MSCC_MAC_CFG_PKTINF_CFG_LPI_RELAY_ENA			BIT(16)
#define MSCC_MAC_CFG_PKTINF_CFG_LF_RELAY_ENA			BIT(20)
#define MSCC_MAC_CFG_PKTINF_CFG_RF_RELAY_ENA			BIT(24)
#define MSCC_MAC_CFG_PKTINF_CFG_ENABLE_TX_PADDING		BIT(25)
#define MSCC_MAC_CFG_PKTINF_CFG_ENABLE_RX_PADDING		BIT(26)
#define MSCC_MAC_CFG_PKTINF_CFG_ENABLE_4BYTE_PREAMBLE		BIT(27)
#define MSCC_MAC_CFG_PKTINF_CFG_MACSEC_BYPASS_NUM_PTP_STALL_CLKS(x)	((x) << 28)
#define MSCC_MAC_CFG_PKTINF_CFG_MACSEC_BYPASS_NUM_PTP_STALL_CLKS_M	GENMASK(30, 28)

#define MSCC_MAC_PAUSE_CFG_TX_FRAME_CTRL_PAUSE_VALUE(x)		((x) << 16)
#define MSCC_MAC_PAUSE_CFG_TX_FRAME_CTRL_PAUSE_VALUE_M		GENMASK(31, 16)
#define MSCC_MAC_PAUSE_CFG_TX_FRAME_CTRL_WAIT_FOR_LPI_LOW	BIT(12)
#define MSCC_MAC_PAUSE_CFG_TX_FRAME_CTRL_USE_PAUSE_STALL_ENA	BIT(8)
#define MSCC_MAC_PAUSE_CFG_TX_FRAME_CTRL_PAUSE_REPL_MODE	BIT(4)
#define MSCC_MAC_PAUSE_CFG_TX_FRAME_CTRL_PAUSE_FRC_FRAME	BIT(2)
#define MSCC_MAC_PAUSE_CFG_TX_FRAME_CTRL_PAUSE_MODE(x)		(x)
#define MSCC_MAC_PAUSE_CFG_TX_FRAME_CTRL_PAUSE_MODE_M		GENMASK(1, 0)

#define MSCC_MAC_PAUSE_CFG_RX_FRAME_CTRL_EARLY_PAUSE_DETECT_ENA	BIT(16)
#define MSCC_MAC_PAUSE_CFG_RX_FRAME_CTRL_PRE_CRC_MODE		BIT(20)
#define MSCC_MAC_PAUSE_CFG_RX_FRAME_CTRL_PAUSE_TIMER_ENA	BIT(12)
#define MSCC_MAC_PAUSE_CFG_RX_FRAME_CTRL_PAUSE_REACT_ENA	BIT(8)
#define MSCC_MAC_PAUSE_CFG_RX_FRAME_CTRL_PAUSE_FRAME_DROP_ENA	BIT(4)
#define MSCC_MAC_PAUSE_CFG_RX_FRAME_CTRL_PAUSE_MODE		BIT(0)

#define MSCC_MAC_PAUSE_CFG_STATE_PAUSE_STATE			BIT(0)
#define MSCC_MAC_PAUSE_CFG_STATE_MAC_TX_PAUSE_GEN		BIT(4)

#define MSCC_PROC_IP_1588_TOP_CFG_STAT_MODE_CTL			0x2
#define MSCC_PROC_IP_1588_TOP_CFG_STAT_MODE_CTL_PROTOCOL_MODE(x)	(x)
#define MSCC_PROC_IP_1588_TOP_CFG_STAT_MODE_CTL_PROTOCOL_MODE_M	GENMASK(2, 0)

#endif /* _MSCC_PHY_LINE_MAC_H_ */
