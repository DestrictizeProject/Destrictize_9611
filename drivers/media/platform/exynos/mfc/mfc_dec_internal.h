/*
 * drivers/media/platform/exynos/mfc/mfc_dec_internal.h
 *
 * Copyright (c) 2016 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com/
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#ifndef __MFC_DEC_INTERNAL_H
#define __MFC_DEC_INTERNAL_H __FILE__

#include "mfc_common.h"

struct mfc_fmt dec_formats[] = {
	{
		.name = "4:2:0 3 Planes Y/Cb/Cr",
		.fourcc = V4L2_PIX_FMT_YUV420M,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_FRAME,
		.num_planes = 3,
		.mem_planes = 3,
	},
	{
		.name = "4:2:0 3 Planes Y/Cb/Cr single",
		.fourcc = V4L2_PIX_FMT_YUV420N,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_FRAME,
		.num_planes = 3,
		.mem_planes = 1,
	},
	{
		.name = "4:2:0 3 Planes Y/Cr/Cb",
		.fourcc = V4L2_PIX_FMT_YVU420M,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_FRAME,
		.num_planes = 3,
		.mem_planes = 3,
	},
	{
		.name = "4:2:0 2 Planes Y/CbCr",
		.fourcc = V4L2_PIX_FMT_NV12M,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_FRAME,
		.num_planes = 2,
		.mem_planes = 2,
	},
	{
		.name = "4:2:0 2 Planes Y/CbCr single",
		.fourcc = V4L2_PIX_FMT_NV12N,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_FRAME,
		.num_planes = 2,
		.mem_planes = 1,
	},
	{
		.name = "4:2:0 2 Planes Y/CbCr 8+2 10bit",
		.fourcc = V4L2_PIX_FMT_NV12M_S10B,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_FRAME | MFC_FMT_10BIT,
		.num_planes = 2,
		.mem_planes = 2,
	},
	{
		.name = "4:2:0 2 Planes Y/CbCr 10bit single",
		.fourcc = V4L2_PIX_FMT_NV12N_10B,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_FRAME | MFC_FMT_10BIT,
		.num_planes = 2,
		.mem_planes = 1,
	},
	{
		.name = "4:2:0 2 Planes Y/CbCr P010 10bit",
		.fourcc = V4L2_PIX_FMT_NV12M_P010,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_FRAME | MFC_FMT_10BIT,
		.num_planes = 2,
		.mem_planes = 2,
	},
	{
		.name = "4:2:0 2 Planes Y/CrCb",
		.fourcc = V4L2_PIX_FMT_NV21M,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_FRAME,
		.num_planes = 2,
		.mem_planes = 2,
	},
	{
		.name = "4:2:0 2 Planes Y/CrCb 8+2 10bit",
		.fourcc = V4L2_PIX_FMT_NV21M_S10B,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_FRAME | MFC_FMT_10BIT,
		.num_planes = 2,
		.mem_planes = 2,
	},
	{
		.name = "4:2:0 2 Planes Y/CrCb P010 10bit",
		.fourcc = V4L2_PIX_FMT_NV21M_P010,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_FRAME | MFC_FMT_10BIT,
		.num_planes = 2,
		.mem_planes = 2,
	},
	{
		.name = "4:2:2 2 Planes Y/CbCr",
		.fourcc = V4L2_PIX_FMT_NV16M,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_FRAME | MFC_FMT_422,
		.num_planes = 2,
		.mem_planes = 2,
	},
	{
		.name = "4:2:2 2 Planes Y/CbCr 8+2 10bit",
		.fourcc = V4L2_PIX_FMT_NV16M_S10B,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_FRAME | MFC_FMT_10BIT | MFC_FMT_422,
		.num_planes = 2,
		.mem_planes = 2,
	},
	{
		.name = "4:2:2 2 Planes Y/CbCr P210 10bit",
		.fourcc = V4L2_PIX_FMT_NV16M_P210,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_FRAME | MFC_FMT_10BIT | MFC_FMT_422,
		.num_planes = 2,
		.mem_planes = 2,
	},
	{
		.name = "4:2:2 2 Planes Y/CrCb",
		.fourcc = V4L2_PIX_FMT_NV61M,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_FRAME | MFC_FMT_422,
		.num_planes = 2,
		.mem_planes = 2,
	},
	{
		.name = "4:2:2 2 Planes Y/CrCb 8+2 10bit",
		.fourcc = V4L2_PIX_FMT_NV61M_S10B,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_FRAME | MFC_FMT_10BIT | MFC_FMT_422,
		.num_planes = 2,
		.mem_planes = 2,
	},
	{
		.name = "4:2:2 2 Planes Y/CrCb P210 10bit",
		.fourcc = V4L2_PIX_FMT_NV61M_P210,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_FRAME | MFC_FMT_10BIT | MFC_FMT_422,
		.num_planes = 2,
		.mem_planes = 2,
	},
	{
		.name = "H264 Encoded Stream",
		.fourcc = V4L2_PIX_FMT_H264,
		.codec_mode = MFC_REG_CODEC_H264_DEC,
		.type = MFC_FMT_STREAM,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "H264/MVC Encoded Stream",
		.fourcc = V4L2_PIX_FMT_H264_MVC,
		.codec_mode = MFC_REG_CODEC_H264_MVC_DEC,
		.type = MFC_FMT_STREAM,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "H263 Encoded Stream",
		.fourcc = V4L2_PIX_FMT_H263,
		.codec_mode = MFC_REG_CODEC_H263_DEC,
		.type = MFC_FMT_STREAM,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "MPEG1 Encoded Stream",
		.fourcc = V4L2_PIX_FMT_MPEG1,
		.codec_mode = MFC_REG_CODEC_MPEG2_DEC,
		.type = MFC_FMT_STREAM,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "MPEG2 Encoded Stream",
		.fourcc = V4L2_PIX_FMT_MPEG2,
		.codec_mode = MFC_REG_CODEC_MPEG2_DEC,
		.type = MFC_FMT_STREAM,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "MPEG4 Encoded Stream",
		.fourcc = V4L2_PIX_FMT_MPEG4,
		.codec_mode = MFC_REG_CODEC_MPEG4_DEC,
		.type = MFC_FMT_STREAM,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "FIMV Encoded Stream",
		.fourcc = V4L2_PIX_FMT_FIMV,
		.codec_mode = MFC_REG_CODEC_MPEG4_DEC,
		.type = MFC_FMT_STREAM,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "FIMV1 Encoded Stream",
		.fourcc = V4L2_PIX_FMT_FIMV1,
		.codec_mode = MFC_REG_CODEC_FIMV1_DEC,
		.type = MFC_FMT_STREAM,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "FIMV2 Encoded Stream",
		.fourcc = V4L2_PIX_FMT_FIMV2,
		.codec_mode = MFC_REG_CODEC_FIMV2_DEC,
		.type = MFC_FMT_STREAM,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "FIMV3 Encoded Stream",
		.fourcc = V4L2_PIX_FMT_FIMV3,
		.codec_mode = MFC_REG_CODEC_FIMV3_DEC,
		.type = MFC_FMT_STREAM,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "FIMV4 Encoded Stream",
		.fourcc = V4L2_PIX_FMT_FIMV4,
		.codec_mode = MFC_REG_CODEC_FIMV4_DEC,
		.type = MFC_FMT_STREAM,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "XviD Encoded Stream",
		.fourcc = V4L2_PIX_FMT_XVID,
		.codec_mode = MFC_REG_CODEC_MPEG4_DEC,
		.type = MFC_FMT_STREAM,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "VC1 Encoded Stream",
		.fourcc = V4L2_PIX_FMT_VC1_ANNEX_G,
		.codec_mode = MFC_REG_CODEC_VC1_DEC,
		.type = MFC_FMT_STREAM,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "VC1 RCV Encoded Stream",
		.fourcc = V4L2_PIX_FMT_VC1_ANNEX_L,
		.codec_mode = MFC_REG_CODEC_VC1_RCV_DEC,
		.type = MFC_FMT_STREAM,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "VP8 Encoded Stream",
		.fourcc = V4L2_PIX_FMT_VP8,
		.codec_mode = MFC_REG_CODEC_VP8_DEC,
		.type = MFC_FMT_STREAM,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "VP9 Encoded Stream",
		.fourcc = V4L2_PIX_FMT_VP9,
		.codec_mode = MFC_REG_CODEC_VP9_DEC,
		.type = MFC_FMT_STREAM,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "HEVC Encoded Stream",
		.fourcc = V4L2_PIX_FMT_HEVC,
		.codec_mode = MFC_REG_CODEC_HEVC_DEC,
		.type = MFC_FMT_STREAM,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "BPG Encoded Stream",
		.fourcc = V4L2_PIX_FMT_BPG,
		.codec_mode = MFC_REG_CODEC_BPG_DEC,
		.type = MFC_FMT_STREAM,
		.num_planes = 1,
		.mem_planes = 1,
	},
};

#define NUM_FORMATS ARRAY_SIZE(dec_formats)

static struct v4l2_queryctrl controls[] = {
	{
		.id = V4L2_CID_MPEG_MFC51_VIDEO_DECODER_H264_DISPLAY_DELAY,
		.type = V4L2_CTRL_TYPE_INTEGER,
		.name = "H.264 Display Delay",
		.minimum = -1,
		.maximum = 32,
		.step = 1,
		.default_value = -1,
	},
	{
		.id = V4L2_CID_MPEG_VIDEO_DECODER_MPEG4_DEBLOCK_FILTER,
		.type = V4L2_CTRL_TYPE_BOOLEAN,
		.name = "Mpeg4 Loop Filter Enable",
		.minimum = 0,
		.maximum = 1,
		.step = 1,
		.default_value = 0,
	},
	{
		.id = V4L2_CID_MPEG_VIDEO_DECODER_SLICE_INTERFACE,
		.type = V4L2_CTRL_TYPE_BOOLEAN,
		.name = "Slice Interface Enable",
		.minimum = 0,
		.maximum = 1,
		.step = 1,
		.default_value = 0,
	},
	{
		.id = V4L2_CID_MPEG_MFC51_VIDEO_PACKED_PB,
		.type = V4L2_CTRL_TYPE_BOOLEAN,
		.name = "Packed PB Enable",
		.minimum = 0,
		.maximum = 1,
		.step = 1,
		.default_value = 0,
	},
	{
		.id = V4L2_CID_MPEG_MFC51_VIDEO_FRAME_TAG,
		.type = V4L2_CTRL_TYPE_INTEGER,
		.name = "Frame Tag",
		.minimum = 0,
		.maximum = INT_MAX,
		.step = 1,
		.default_value = 0,
	},
	{
		.id = V4L2_CID_CACHEABLE,
		.type = V4L2_CTRL_TYPE_BOOLEAN,
		.name = "Cacheable flag",
		.minimum = 0,
		.maximum = 3,
		.step = 1,
		.default_value = 0,
	},
	{
		.id = V4L2_CID_MPEG_MFC51_VIDEO_CRC_ENABLE,
		.type = V4L2_CTRL_TYPE_BOOLEAN,
		.name = "CRC enable",
		.minimum = 0,
		.maximum = 1,
		.step = 1,
		.default_value = 0,
	},
	{
		.id = V4L2_CID_MPEG_MFC51_VIDEO_CRC_DATA_LUMA,
		.type = V4L2_CTRL_TYPE_INTEGER,
		.name = "CRC data",
		.minimum = 0,
		.maximum = INT_MAX,
		.step = 1,
		.default_value = 0,
	},
	{
		.id = V4L2_CID_MPEG_MFC51_VIDEO_CRC_DATA_CHROMA,
		.type = V4L2_CTRL_TYPE_INTEGER,
		.name = "CRC data",
		.minimum = 0,
		.maximum = INT_MAX,
		.step = 1,
		.default_value = 0,
	},
	{
		.id = V4L2_CID_MPEG_MFC51_VIDEO_DISPLAY_STATUS,
		.type = V4L2_CTRL_TYPE_INTEGER,
		.name = "Display status",
		.minimum = 0,
		.maximum = 3,
		.step = 1,
		.default_value = 0,
	},
	{
		.id = V4L2_CID_MPEG_MFC51_VIDEO_FRAME_TYPE,
		.type = V4L2_CTRL_TYPE_INTEGER,
		.name = "Frame type",
		.minimum = 0,
		.maximum = INT_MAX,
		.step = 1,
		.default_value = 0,
	},
	{
		.id = V4L2_CID_MPEG_VIDEO_H264_SEI_FRAME_PACKING,
		.type = V4L2_CTRL_TYPE_BOOLEAN,
		.name = "Frame pack sei parse flag",
		.minimum = 0,
		.maximum = 1,
		.step = 1,
		.default_value = 0,
	},
	{
		.id = V4L2_CID_MPEG_MFC51_VIDEO_I_FRAME_DECODING,
		.type = V4L2_CTRL_TYPE_BOOLEAN,
		.name = "I frame decoding mode",
		.minimum = 0,
		.maximum = 1,
		.step = 1,
		.default_value = 0,
	},
	{
		.id = V4L2_CID_MPEG_MFC51_VIDEO_FRAME_RATE,
		.type = V4L2_CTRL_TYPE_INTEGER,
		.name = "Frames per second in 1000x scale",
		.minimum = 1,
		.maximum = 480000,
		.step = 1,
		.default_value = 60000,
	},
	{
		.id = V4L2_CID_MPEG_VIDEO_DECODER_IMMEDIATE_DISPLAY,
		.type = V4L2_CTRL_TYPE_BOOLEAN,
		.name = "Immediate Display Enable",
		.minimum = 0,
		.maximum = 1,
		.step = 1,
		.default_value = 0,
	},
	{
		.id = V4L2_CID_MPEG_VIDEO_DECODER_DECODING_TIMESTAMP_MODE,
		.type = V4L2_CTRL_TYPE_BOOLEAN,
		.name = "Decoding Timestamp Mode Enable",
		.minimum = 0,
		.maximum = 1,
		.step = 1,
		.default_value = 0,
	},
	{
		.id = V4L2_CID_MPEG_VIDEO_DECODER_WAIT_DECODING_START,
		.type = V4L2_CTRL_TYPE_BOOLEAN,
		.name = "Wait until buffer setting done",
		.minimum = 0,
		.maximum = 1,
		.step = 1,
		.default_value = 0,
	},
	{
		.id = V4L2_CID_MPEG_MFC_GET_VERSION_INFO,
		.type = V4L2_CTRL_TYPE_INTEGER,
		.name = "Get MFC version information",
		.minimum = 0,
		.maximum = 1,
		.step = 1,
		.default_value = 0,
	},
	{
		.id = V4L2_CID_MPEG_MFC_SET_DUAL_DPB_MODE,
		.type = V4L2_CTRL_TYPE_BOOLEAN,
		.name = "Set Dual DPB mode",
		.minimum = 0,
		.maximum = 1,
		.step = 1,
		.default_value = 0,
	},
	{
		.id = V4L2_CID_MPEG_VIDEO_QOS_RATIO,
		.type = V4L2_CTRL_TYPE_INTEGER,
		.name = "QoS ratio value",
		.minimum = 20,
		.maximum = 1000,
		.step = 10,
		.default_value = 100,
	},
	{
		.id = V4L2_CID_MPEG_MFC_SET_DYNAMIC_DPB_MODE,
		.type = V4L2_CTRL_TYPE_INTEGER,
		.name = "Set dynamic DPB",
		.minimum = 0,
		.maximum = 1,
		.step = 1,
		.default_value = 0,
	},
	{
		.id = V4L2_CID_MPEG_MFC_SET_USER_SHARED_HANDLE,
		.type = V4L2_CTRL_TYPE_INTEGER,
		.name = "Set dynamic DPB",
		.minimum = 0,
		.maximum = 65535,
		.step = 1,
		.default_value = 0,
	},
	{
		.id = V4L2_CID_MPEG_MFC_GET_EXT_INFO,
		.type = V4L2_CTRL_TYPE_INTEGER,
		.name = "Get extra information",
		.minimum = INT_MIN,
		.maximum = INT_MAX,
		.step = 1,
		.default_value = 0,
	},
	{
		.id = V4L2_CID_MPEG_MFC_SET_BUF_PROCESS_TYPE,
		.type = V4L2_CTRL_TYPE_INTEGER,
		.name = "Set buffer process type",
		.minimum = INT_MIN,
		.maximum = INT_MAX,
		.step = 1,
		.default_value = 0,
	},
	{
		.id = V4L2_CID_MPEG_MFC_GET_10BIT_INFO,
		.type = V4L2_CTRL_TYPE_INTEGER,
		.name = "10 bit contents information",
		.minimum = 0,
		.maximum = 1,
		.step = 1,
		.default_value = 0,
	},
	{
		.id = V4L2_CID_MPEG_VIDEO_BLACK_BAR_DETECT,
		.type = V4L2_CTRL_TYPE_BOOLEAN,
		.name = "Set black bar detection option",
		.minimum = 0,
		.maximum = 1,
		.step = 1,
		.default_value = 0,
	},
	{
		.id = V4L2_CID_MPEG_MFC_HDR_USER_SHARED_HANDLE,
		.type = V4L2_CTRL_TYPE_INTEGER,
		.name = "Dynamic HDR10+ SEI metadata",
		.minimum = INT_MIN,
		.maximum = INT_MAX,
		.step = 1,
		.default_value = 0,
	},
	{
		.id = V4L2_CID_MPEG_VIDEO_DECODING_ORDER,
		.type = V4L2_CTRL_TYPE_BOOLEAN,
		.name = "decoding order enable",
		.minimum = 0,
		.maximum = 1,
		.step = 1,
		.default_value = 0,
	},

};

#define NUM_CTRLS ARRAY_SIZE(controls)

#endif /* __MFC_DEC_INTERNAL_H */
