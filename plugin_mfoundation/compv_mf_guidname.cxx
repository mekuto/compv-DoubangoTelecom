/* Copyright (C) 2011-2020 Doubango Telecom <https://www.doubango.org>
* File author: Mamadou DIOP (Doubango Telecom, France).
* License: GPLv3. For commercial license please contact us.
* Source code: https://github.com/DoubangoTelecom/compv
* WebSite: http://compv.org
*/
#include "compv/mf/compv_mf_guidname.h"

#ifndef DIRECT3D_VERSION
#define D3DFMT_R8G8B8       20
#define D3DFMT_A8R8G8B8     21
#define D3DFMT_X8R8G8B8     22
#define D3DFMT_R5G6B5       23
#define D3DFMT_X1R5G5B5     24
#define D3DFMT_P8           41
#define LOCAL_D3DFMT_DEFINES 1
#endif

GUID_STRING_ENTRY g_GuidNames[] = {
#define COMPV_DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
    { #name, { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } } }
#define COMPV_DEFINE_MEDIATYPE_GUID(name, format) \
    COMPV_DEFINE_GUID(name,                       \
    format, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71)

	// The next defines are from <mfapi.h>

	COMPV_DEFINE_MEDIATYPE_GUID(MFVideoFormat_Base, 0x00000000),
	COMPV_DEFINE_MEDIATYPE_GUID(MFVideoFormat_RGB32, D3DFMT_X8R8G8B8),
	COMPV_DEFINE_MEDIATYPE_GUID(MFVideoFormat_ARGB32, D3DFMT_A8R8G8B8),
	COMPV_DEFINE_MEDIATYPE_GUID(MFVideoFormat_RGB24, D3DFMT_R8G8B8),
	COMPV_DEFINE_MEDIATYPE_GUID(MFVideoFormat_RGB555, D3DFMT_X1R5G5B5),
	COMPV_DEFINE_MEDIATYPE_GUID(MFVideoFormat_RGB565, D3DFMT_R5G6B5),
	COMPV_DEFINE_MEDIATYPE_GUID(MFVideoFormat_RGB8, D3DFMT_P8),
	COMPV_DEFINE_MEDIATYPE_GUID(MFVideoFormat_AI44, FCC('AI44')),
	COMPV_DEFINE_MEDIATYPE_GUID(MFVideoFormat_AYUV, FCC('AYUV')),
	COMPV_DEFINE_MEDIATYPE_GUID(MFVideoFormat_YUY2, FCC('YUY2')),
	COMPV_DEFINE_MEDIATYPE_GUID(MFVideoFormat_YVYU, FCC('YVYU')),
	COMPV_DEFINE_MEDIATYPE_GUID(MFVideoFormat_YVU9, FCC('YVU9')),
	COMPV_DEFINE_MEDIATYPE_GUID(MFVideoFormat_UYVY, FCC('UYVY')),
	COMPV_DEFINE_MEDIATYPE_GUID(MFVideoFormat_NV11, FCC('NV11')),
	COMPV_DEFINE_MEDIATYPE_GUID(MFVideoFormat_NV12, FCC('NV12')),
	COMPV_DEFINE_MEDIATYPE_GUID(MFVideoFormat_YV12, FCC('YV12')),
	COMPV_DEFINE_MEDIATYPE_GUID(MFVideoFormat_I420, FCC('I420')),
	COMPV_DEFINE_MEDIATYPE_GUID(MFVideoFormat_IYUV, FCC('IYUV')),
	COMPV_DEFINE_MEDIATYPE_GUID(MFVideoFormat_Y210, FCC('Y210')),
	COMPV_DEFINE_MEDIATYPE_GUID(MFVideoFormat_Y216, FCC('Y216')),
	COMPV_DEFINE_MEDIATYPE_GUID(MFVideoFormat_Y410, FCC('Y410')),
	COMPV_DEFINE_MEDIATYPE_GUID(MFVideoFormat_Y416, FCC('Y416')),
	COMPV_DEFINE_MEDIATYPE_GUID(MFVideoFormat_Y41P, FCC('Y41P')),
	COMPV_DEFINE_MEDIATYPE_GUID(MFVideoFormat_Y41T, FCC('Y41T')),
	COMPV_DEFINE_MEDIATYPE_GUID(MFVideoFormat_Y42T, FCC('Y42T')),
	COMPV_DEFINE_MEDIATYPE_GUID(MFVideoFormat_P210, FCC('P210')),
	COMPV_DEFINE_MEDIATYPE_GUID(MFVideoFormat_P216, FCC('P216')),
	COMPV_DEFINE_MEDIATYPE_GUID(MFVideoFormat_P010, FCC('P010')),
	COMPV_DEFINE_MEDIATYPE_GUID(MFVideoFormat_P016, FCC('P016')),
	COMPV_DEFINE_MEDIATYPE_GUID(MFVideoFormat_v210, FCC('v210')),
	COMPV_DEFINE_MEDIATYPE_GUID(MFVideoFormat_v216, FCC('v216')),
	COMPV_DEFINE_MEDIATYPE_GUID(MFVideoFormat_v410, FCC('v410')),
	COMPV_DEFINE_MEDIATYPE_GUID(MFVideoFormat_MP43, FCC('MP43')),
	COMPV_DEFINE_MEDIATYPE_GUID(MFVideoFormat_MP4S, FCC('MP4S')),
	COMPV_DEFINE_MEDIATYPE_GUID(MFVideoFormat_M4S2, FCC('M4S2')),
	COMPV_DEFINE_MEDIATYPE_GUID(MFVideoFormat_MP4V, FCC('MP4V')),
	COMPV_DEFINE_MEDIATYPE_GUID(MFVideoFormat_WMV1, FCC('WMV1')),
	COMPV_DEFINE_MEDIATYPE_GUID(MFVideoFormat_WMV2, FCC('WMV2')),
	COMPV_DEFINE_MEDIATYPE_GUID(MFVideoFormat_WMV3, FCC('WMV3')),
	COMPV_DEFINE_MEDIATYPE_GUID(MFVideoFormat_WVC1, FCC('WVC1')),
	COMPV_DEFINE_MEDIATYPE_GUID(MFVideoFormat_MSS1, FCC('MSS1')),
	COMPV_DEFINE_MEDIATYPE_GUID(MFVideoFormat_MSS2, FCC('MSS2')),
	COMPV_DEFINE_MEDIATYPE_GUID(MFVideoFormat_MPG1, FCC('MPG1')),
	COMPV_DEFINE_MEDIATYPE_GUID(MFVideoFormat_DVSL, FCC('dvsl')),
	COMPV_DEFINE_MEDIATYPE_GUID(MFVideoFormat_DVSD, FCC('dvsd')),
	COMPV_DEFINE_MEDIATYPE_GUID(MFVideoFormat_DVHD, FCC('dvhd')),
	COMPV_DEFINE_MEDIATYPE_GUID(MFVideoFormat_DV25, FCC('dv25')),
	COMPV_DEFINE_MEDIATYPE_GUID(MFVideoFormat_DV50, FCC('dv50')),
	COMPV_DEFINE_MEDIATYPE_GUID(MFVideoFormat_DVH1, FCC('dvh1')),
	COMPV_DEFINE_MEDIATYPE_GUID(MFVideoFormat_DVC, FCC('dvc ')),
	COMPV_DEFINE_MEDIATYPE_GUID(MFVideoFormat_H264, FCC('H264')),  // assume MFVideoFormat_H264 is frame aligned. that is, each input sample has one complete compressed frame (one frame picture, two field pictures or a single unpaired field picture)
	COMPV_DEFINE_MEDIATYPE_GUID(MFVideoFormat_MJPG, FCC('MJPG')),
	COMPV_DEFINE_MEDIATYPE_GUID(MFVideoFormat_420O, FCC('420O')),
	COMPV_DEFINE_MEDIATYPE_GUID(MFVideoFormat_HEVC, FCC('HEVC')),
	COMPV_DEFINE_MEDIATYPE_GUID(MFVideoFormat_HEVC_ES, FCC('HEVS')),

	COMPV_DEFINE_MEDIATYPE_GUID(MFVideoFormat_H263, FCC('H263')),

	COMPV_DEFINE_GUID(MFVideoFormat_H264_ES,
	0x3f40f4f0, 0x5622, 0x4ff8, 0xb6, 0xd8, 0xa1, 0x7a, 0x58, 0x4b, 0xee, 0x5e),


	COMPV_DEFINE_GUID(MFVideoFormat_MPEG2,
	0xe06d8026, 0xdb46, 0x11cf, 0xb4, 0xd1, 0x00, 0x80, 0x5f, 0x6c, 0xbb, 0xea),


	COMPV_DEFINE_MEDIATYPE_GUID(MFAudioFormat_Base, 0x00000000),
	COMPV_DEFINE_MEDIATYPE_GUID(MFAudioFormat_PCM, WAVE_FORMAT_PCM),
	COMPV_DEFINE_MEDIATYPE_GUID(MFAudioFormat_Float, WAVE_FORMAT_IEEE_FLOAT),
	COMPV_DEFINE_MEDIATYPE_GUID(MFAudioFormat_DTS, WAVE_FORMAT_DTS),
	COMPV_DEFINE_MEDIATYPE_GUID(MFAudioFormat_Dolby_AC3_SPDIF, WAVE_FORMAT_DOLBY_AC3_SPDIF),
	COMPV_DEFINE_MEDIATYPE_GUID(MFAudioFormat_DRM, WAVE_FORMAT_DRM),
	COMPV_DEFINE_MEDIATYPE_GUID(MFAudioFormat_WMAudioV8, WAVE_FORMAT_WMAUDIO2),
	COMPV_DEFINE_MEDIATYPE_GUID(MFAudioFormat_WMAudioV9, WAVE_FORMAT_WMAUDIO3),
	COMPV_DEFINE_MEDIATYPE_GUID(MFAudioFormat_WMAudio_Lossless, WAVE_FORMAT_WMAUDIO_LOSSLESS),
	COMPV_DEFINE_MEDIATYPE_GUID(MFAudioFormat_WMASPDIF, WAVE_FORMAT_WMASPDIF),
	COMPV_DEFINE_MEDIATYPE_GUID(MFAudioFormat_MSP1, WAVE_FORMAT_WMAVOICE9),
	COMPV_DEFINE_MEDIATYPE_GUID(MFAudioFormat_MP3, WAVE_FORMAT_MPEGLAYER3),
	COMPV_DEFINE_MEDIATYPE_GUID(MFAudioFormat_MPEG, WAVE_FORMAT_MPEG),
	COMPV_DEFINE_MEDIATYPE_GUID(MFAudioFormat_AAC, WAVE_FORMAT_MPEG_HEAAC),
	COMPV_DEFINE_MEDIATYPE_GUID(MFAudioFormat_ADTS, WAVE_FORMAT_MPEG_ADTS_AAC),
	COMPV_DEFINE_MEDIATYPE_GUID(MFAudioFormat_AMR_NB, WAVE_FORMAT_AMR_NB),
	COMPV_DEFINE_MEDIATYPE_GUID(MFAudioFormat_AMR_WB, WAVE_FORMAT_AMR_WB),
	COMPV_DEFINE_MEDIATYPE_GUID(MFAudioFormat_AMR_WP, WAVE_FORMAT_AMR_WP),

	COMPV_DEFINE_GUID(MFAudioFormat_Dolby_AC3, // == MEDIASUBTYPE_DOLBY_AC3 defined in ksuuids.h
		0xe06d802c, 0xdb46, 0x11cf, 0xb4, 0xd1, 0x00, 0x80, 0x05f, 0x6c, 0xbb, 0xea),
	COMPV_DEFINE_GUID(MFAudioFormat_Dolby_DDPlus, // == MEDIASUBTYPE_DOLBY_DDPLUS defined in wmcodecdsp.h
		0xa7fb87af, 0x2d02, 0x42fb, 0xa4, 0xd4, 0x5, 0xcd, 0x93, 0x84, 0x3b, 0xdd),

	COMPV_DEFINE_GUID(MFMPEG4Format_Base,
		0x00000000, 0x767a, 0x494d, 0xb4, 0x78, 0xf2, 0x9d, 0x25, 0xdc, 0x90, 0x37),

	COMPV_DEFINE_GUID(MF_MT_MAJOR_TYPE,
		0x48eba18e, 0xf8c9, 0x4687, 0xbf, 0x11, 0x0a, 0x74, 0xc9, 0xf9, 0x6a, 0x8f),

	COMPV_DEFINE_GUID(MF_MT_SUBTYPE,
		0xf7e34c9a, 0x42e8, 0x4714, 0xb7, 0x4b, 0xcb, 0x29, 0xd7, 0x2c, 0x35, 0xe5),

	COMPV_DEFINE_GUID(MF_MT_ALL_SAMPLES_INDEPENDENT,
		0xc9173739, 0x5e56, 0x461c, 0xb7, 0x13, 0x46, 0xfb, 0x99, 0x5c, 0xb9, 0x5f),

	COMPV_DEFINE_GUID(MF_MT_FIXED_SIZE_SAMPLES,
		0xb8ebefaf, 0xb718, 0x4e04, 0xb0, 0xa9, 0x11, 0x67, 0x75, 0xe3, 0x32, 0x1b),

	COMPV_DEFINE_GUID(MF_MT_COMPRESSED,
		0x3afd0cee, 0x18f2, 0x4ba5, 0xa1, 0x10, 0x8b, 0xea, 0x50, 0x2e, 0x1f, 0x92),

	COMPV_DEFINE_GUID(MF_MT_SAMPLE_SIZE,
		0xdad3ab78, 0x1990, 0x408b, 0xbc, 0xe2, 0xeb, 0xa6, 0x73, 0xda, 0xcc, 0x10),

	COMPV_DEFINE_GUID(MF_MT_WRAPPED_TYPE,
		0x4d3f7b23, 0xd02f, 0x4e6c, 0x9b, 0xee, 0xe4, 0xbf, 0x2c, 0x6c, 0x69, 0x5d),

	COMPV_DEFINE_GUID(MF_MT_VIDEO_3D,
		0xcb5e88cf, 0x7b5b, 0x476b, 0x85, 0xaa, 0x1c, 0xa5, 0xae, 0x18, 0x75, 0x55),

	COMPV_DEFINE_GUID(MF_MT_VIDEO_3D_FORMAT,
		0x5315d8a0, 0x87c5, 0x4697, 0xb7, 0x93, 0x66, 0x6, 0xc6, 0x7c, 0x4, 0x9b),

	COMPV_DEFINE_GUID(MF_MT_VIDEO_3D_NUM_VIEWS,
		0xbb077e8a, 0xdcbf, 0x42eb, 0xaf, 0x60, 0x41, 0x8d, 0xf9, 0x8a, 0xa4, 0x95),

	COMPV_DEFINE_GUID(MF_MT_VIDEO_3D_LEFT_IS_BASE,
		0x6d4b7bff, 0x5629, 0x4404, 0x94, 0x8c, 0xc6, 0x34, 0xf4, 0xce, 0x26, 0xd4),

	COMPV_DEFINE_GUID(MF_MT_VIDEO_3D_FIRST_IS_LEFT,
		0xec298493, 0xada, 0x4ea1, 0xa4, 0xfe, 0xcb, 0xbd, 0x36, 0xce, 0x93, 0x31),


	COMPV_DEFINE_GUID(MFSampleExtension_3DVideo,
		0xf86f97a4, 0xdd54, 0x4e2e, 0x9a, 0x5e, 0x55, 0xfc, 0x2d, 0x74, 0xa0, 0x05),

	COMPV_DEFINE_GUID(MFSampleExtension_3DVideo_SampleFormat,
		0x8671772, 0xe36f, 0x4cff, 0x97, 0xb3, 0xd7, 0x2e, 0x20, 0x98, 0x7a, 0x48),

	COMPV_DEFINE_GUID(MF_MT_VIDEO_ROTATION,
		0xc380465d, 0x2271, 0x428c, 0x9b, 0x83, 0xec, 0xea, 0x3b, 0x4a, 0x85, 0xc1),



	COMPV_DEFINE_GUID(MF_MT_AUDIO_NUM_CHANNELS,
		0x37e48bf5, 0x645e, 0x4c5b, 0x89, 0xde, 0xad, 0xa9, 0xe2, 0x9b, 0x69, 0x6a),

	COMPV_DEFINE_GUID(MF_MT_AUDIO_SAMPLES_PER_SECOND,
		0x5faeeae7, 0x0290, 0x4c31, 0x9e, 0x8a, 0xc5, 0x34, 0xf6, 0x8d, 0x9d, 0xba),

	COMPV_DEFINE_GUID(MF_MT_AUDIO_FLOAT_SAMPLES_PER_SECOND,
		0xfb3b724a, 0xcfb5, 0x4319, 0xae, 0xfe, 0x6e, 0x42, 0xb2, 0x40, 0x61, 0x32),

	COMPV_DEFINE_GUID(MF_MT_AUDIO_AVG_BYTES_PER_SECOND,
		0x1aab75c8, 0xcfef, 0x451c, 0xab, 0x95, 0xac, 0x03, 0x4b, 0x8e, 0x17, 0x31),

	COMPV_DEFINE_GUID(MF_MT_AUDIO_BLOCK_ALIGNMENT,
		0x322de230, 0x9eeb, 0x43bd, 0xab, 0x7a, 0xff, 0x41, 0x22, 0x51, 0x54, 0x1d),

	COMPV_DEFINE_GUID(MF_MT_AUDIO_BITS_PER_SAMPLE,
		0xf2deb57f, 0x40fa, 0x4764, 0xaa, 0x33, 0xed, 0x4f, 0x2d, 0x1f, 0xf6, 0x69),

	COMPV_DEFINE_GUID(MF_MT_AUDIO_VALID_BITS_PER_SAMPLE,
		0xd9bf8d6a, 0x9530, 0x4b7c, 0x9d, 0xdf, 0xff, 0x6f, 0xd5, 0x8b, 0xbd, 0x06),

	COMPV_DEFINE_GUID(MF_MT_AUDIO_SAMPLES_PER_BLOCK,
		0xaab15aac, 0xe13a, 0x4995, 0x92, 0x22, 0x50, 0x1e, 0xa1, 0x5c, 0x68, 0x77),

	COMPV_DEFINE_GUID(MF_MT_AUDIO_CHANNEL_MASK,
		0x55fb5765, 0x644a, 0x4caf, 0x84, 0x79, 0x93, 0x89, 0x83, 0xbb, 0x15, 0x88),

	COMPV_DEFINE_GUID(MF_MT_AUDIO_FOLDDOWN_MATRIX,
		0x9d62927c, 0x36be, 0x4cf2, 0xb5, 0xc4, 0xa3, 0x92, 0x6e, 0x3e, 0x87, 0x11),

	COMPV_DEFINE_GUID(MF_MT_AUDIO_WMADRC_PEAKREF,
		0x9d62927d, 0x36be, 0x4cf2, 0xb5, 0xc4, 0xa3, 0x92, 0x6e, 0x3e, 0x87, 0x11),

	COMPV_DEFINE_GUID(MF_MT_AUDIO_WMADRC_PEAKTARGET,
		0x9d62927e, 0x36be, 0x4cf2, 0xb5, 0xc4, 0xa3, 0x92, 0x6e, 0x3e, 0x87, 0x11),


	COMPV_DEFINE_GUID(MF_MT_AUDIO_WMADRC_AVGREF,
		0x9d62927f, 0x36be, 0x4cf2, 0xb5, 0xc4, 0xa3, 0x92, 0x6e, 0x3e, 0x87, 0x11),

	COMPV_DEFINE_GUID(MF_MT_AUDIO_WMADRC_AVGTARGET,
		0x9d629280, 0x36be, 0x4cf2, 0xb5, 0xc4, 0xa3, 0x92, 0x6e, 0x3e, 0x87, 0x11),

	COMPV_DEFINE_GUID(MF_MT_AUDIO_PREFER_WAVEFORMATEX,
		0xa901aaba, 0xe037, 0x458a, 0xbd, 0xf6, 0x54, 0x5b, 0xe2, 0x07, 0x40, 0x42),

	COMPV_DEFINE_GUID(MF_MT_AAC_PAYLOAD_TYPE,
		0xbfbabe79, 0x7434, 0x4d1c, 0x94, 0xf0, 0x72, 0xa3, 0xb9, 0xe1, 0x71, 0x88),

	COMPV_DEFINE_GUID(MF_MT_AAC_AUDIO_PROFILE_LEVEL_INDICATION,
		0x7632f0e6, 0x9538, 0x4d61, 0xac, 0xda, 0xea, 0x29, 0xc8, 0xc1, 0x44, 0x56),

	COMPV_DEFINE_GUID(MF_MT_FRAME_SIZE,
		0x1652c33d, 0xd6b2, 0x4012, 0xb8, 0x34, 0x72, 0x03, 0x08, 0x49, 0xa3, 0x7d),

	COMPV_DEFINE_GUID(MF_MT_FRAME_RATE,
		0xc459a2e8, 0x3d2c, 0x4e44, 0xb1, 0x32, 0xfe, 0xe5, 0x15, 0x6c, 0x7b, 0xb0),

	COMPV_DEFINE_GUID(MF_MT_PIXEL_ASPECT_RATIO,
		0xc6376a1e, 0x8d0a, 0x4027, 0xbe, 0x45, 0x6d, 0x9a, 0x0a, 0xd3, 0x9b, 0xb6),

	COMPV_DEFINE_GUID(MF_MT_DRM_FLAGS,
		0x8772f323, 0x355a, 0x4cc7, 0xbb, 0x78, 0x6d, 0x61, 0xa0, 0x48, 0xae, 0x82),

	COMPV_DEFINE_GUID(MF_MT_TIMESTAMP_CAN_BE_DTS,
		0x24974215, 0x1b7b, 0x41e4, 0x86, 0x25, 0xac, 0x46, 0x9f, 0x2d, 0xed, 0xaa),

	COMPV_DEFINE_GUID(MF_MT_PAD_CONTROL_FLAGS,
		0x4d0e73e5, 0x80ea, 0x4354, 0xa9, 0xd0, 0x11, 0x76, 0xce, 0xb0, 0x28, 0xea),

	COMPV_DEFINE_GUID(MF_MT_SOURCE_CONTENT_HINT,
		0x68aca3cc, 0x22d0, 0x44e6, 0x85, 0xf8, 0x28, 0x16, 0x71, 0x97, 0xfa, 0x38),

	COMPV_DEFINE_GUID(MF_MT_VIDEO_CHROMA_SITING,
		0x65df2370, 0xc773, 0x4c33, 0xaa, 0x64, 0x84, 0x3e, 0x06, 0x8e, 0xfb, 0x0c),

	COMPV_DEFINE_GUID(MF_MT_INTERLACE_MODE,
		0xe2724bb8, 0xe676, 0x4806, 0xb4, 0xb2, 0xa8, 0xd6, 0xef, 0xb4, 0x4c, 0xcd),

	COMPV_DEFINE_GUID(MF_MT_TRANSFER_FUNCTION,
		0x5fb0fce9, 0xbe5c, 0x4935, 0xa8, 0x11, 0xec, 0x83, 0x8f, 0x8e, 0xed, 0x93),

	COMPV_DEFINE_GUID(MF_MT_VIDEO_PRIMARIES,
		0xdbfbe4d7, 0x0740, 0x4ee0, 0x81, 0x92, 0x85, 0x0a, 0xb0, 0xe2, 0x19, 0x35),



	COMPV_DEFINE_GUID(MF_MT_CUSTOM_VIDEO_PRIMARIES,
		0x47537213, 0x8cfb, 0x4722, 0xaa, 0x34, 0xfb, 0xc9, 0xe2, 0x4d, 0x77, 0xb8),

	COMPV_DEFINE_GUID(MF_MT_YUV_MATRIX,
		0x3e23d450, 0x2c75, 0x4d25, 0xa0, 0x0e, 0xb9, 0x16, 0x70, 0xd1, 0x23, 0x27),

	COMPV_DEFINE_GUID(MF_MT_VIDEO_LIGHTING,
		0x53a0529c, 0x890b, 0x4216, 0x8b, 0xf9, 0x59, 0x93, 0x67, 0xad, 0x6d, 0x20),

	COMPV_DEFINE_GUID(MF_MT_VIDEO_NOMINAL_RANGE,
		0xc21b8ee5, 0xb956, 0x4071, 0x8d, 0xaf, 0x32, 0x5e, 0xdf, 0x5c, 0xab, 0x11),

	COMPV_DEFINE_GUID(MF_MT_GEOMETRIC_APERTURE,
		0x66758743, 0x7e5f, 0x400d, 0x98, 0x0a, 0xaa, 0x85, 0x96, 0xc8, 0x56, 0x96),

	COMPV_DEFINE_GUID(MF_MT_MINIMUM_DISPLAY_APERTURE,
		0xd7388766, 0x18fe, 0x48c6, 0xa1, 0x77, 0xee, 0x89, 0x48, 0x67, 0xc8, 0xc4),

	COMPV_DEFINE_GUID(MF_MT_PAN_SCAN_APERTURE,
		0x79614dde, 0x9187, 0x48fb, 0xb8, 0xc7, 0x4d, 0x52, 0x68, 0x9d, 0xe6, 0x49),

	COMPV_DEFINE_GUID(MF_MT_PAN_SCAN_ENABLED,
		0x4b7f6bc3, 0x8b13, 0x40b2, 0xa9, 0x93, 0xab, 0xf6, 0x30, 0xb8, 0x20, 0x4e),

	COMPV_DEFINE_GUID(MF_MT_AVG_BITRATE,
		0x20332624, 0xfb0d, 0x4d9e, 0xbd, 0x0d, 0xcb, 0xf6, 0x78, 0x6c, 0x10, 0x2e),

	COMPV_DEFINE_GUID(MF_MT_AVG_BIT_ERROR_RATE,
		0x799cabd6, 0x3508, 0x4db4, 0xa3, 0xc7, 0x56, 0x9c, 0xd5, 0x33, 0xde, 0xb1),

	COMPV_DEFINE_GUID(MF_MT_MAX_KEYFRAME_SPACING,
		0xc16eb52b, 0x73a1, 0x476f, 0x8d, 0x62, 0x83, 0x9d, 0x6a, 0x02, 0x06, 0x52),

	COMPV_DEFINE_GUID(MF_MT_USER_DATA,
		0xb6bc765f, 0x4c3b, 0x40a4, 0xbd, 0x51, 0x25, 0x35, 0xb6, 0x6f, 0xe0, 0x9d),



	COMPV_DEFINE_GUID(MF_MT_DEFAULT_STRIDE,
		0x644b4e48, 0x1e02, 0x4516, 0xb0, 0xeb, 0xc0, 0x1c, 0xa9, 0xd4, 0x9a, 0xc6),

	COMPV_DEFINE_GUID(MF_MT_PALETTE,
		0x6d283f42, 0x9846, 0x4410, 0xaf, 0xd9, 0x65, 0x4d, 0x50, 0x3b, 0x1a, 0x54),

	COMPV_DEFINE_GUID(MF_MT_AM_FORMAT_TYPE,
		0x73d1072d, 0x1870, 0x4174, 0xa0, 0x63, 0x29, 0xff, 0x4f, 0xf6, 0xc1, 0x1e),

	COMPV_DEFINE_GUID(MF_MT_VIDEO_PROFILE,
		0xad76a80b, 0x2d5c, 0x4e0b, 0xb3, 0x75, 0x64, 0xe5, 0x20, 0x13, 0x70, 0x36),

	COMPV_DEFINE_GUID(MF_MT_VIDEO_LEVEL,
		0x96f66574, 0x11c5, 0x4015, 0x86, 0x66, 0xbf, 0xf5, 0x16, 0x43, 0x6d, 0xa7),


	COMPV_DEFINE_GUID(MF_MT_MPEG_START_TIME_CODE,
		0x91f67885, 0x4333, 0x4280, 0x97, 0xcd, 0xbd, 0x5a, 0x6c, 0x03, 0xa0, 0x6e),

	COMPV_DEFINE_GUID(MF_MT_MPEG2_PROFILE,
		0xad76a80b, 0x2d5c, 0x4e0b, 0xb3, 0x75, 0x64, 0xe5, 0x20, 0x13, 0x70, 0x36),

	COMPV_DEFINE_GUID(MF_MT_MPEG2_LEVEL,
		0x96f66574, 0x11c5, 0x4015, 0x86, 0x66, 0xbf, 0xf5, 0x16, 0x43, 0x6d, 0xa7),

	COMPV_DEFINE_GUID(MF_MT_MPEG2_FLAGS,
		0x31e3991d, 0xf701, 0x4b2f, 0xb4, 0x26, 0x8a, 0xe3, 0xbd, 0xa9, 0xe0, 0x4b),

	COMPV_DEFINE_GUID(MF_MT_MPEG_SEQUENCE_HEADER,
		0x3c036de7, 0x3ad0, 0x4c9e, 0x92, 0x16, 0xee, 0x6d, 0x6a, 0xc2, 0x1c, 0xb3),

	COMPV_DEFINE_GUID(MF_MT_MPEG2_STANDARD,
		0xa20af9e8, 0x928a, 0x4b26, 0xaa, 0xa9, 0xf0, 0x5c, 0x74, 0xca, 0xc4, 0x7c),

	COMPV_DEFINE_GUID(MF_MT_MPEG2_TIMECODE,
		0x5229ba10, 0xe29d, 0x4f80, 0xa5, 0x9c, 0xdf, 0x4f, 0x18, 0x2, 0x7, 0xd2),

	COMPV_DEFINE_GUID(MF_MT_MPEG2_CONTENT_PACKET,
		0x825d55e4, 0x4f12, 0x4197, 0x9e, 0xb3, 0x59, 0xb6, 0xe4, 0x71, 0xf, 0x6),


	COMPV_DEFINE_GUID(MF_MT_H264_MAX_CODEC_CONFIG_DELAY,
		0xf5929986, 0x4c45, 0x4fbb, 0xbb, 0x49, 0x6c, 0xc5, 0x34, 0xd0, 0x5b, 0x9b),

	COMPV_DEFINE_GUID(MF_MT_H264_SUPPORTED_SLICE_MODES,
		0xc8be1937, 0x4d64, 0x4549, 0x83, 0x43, 0xa8, 0x8, 0x6c, 0xb, 0xfd, 0xa5),

	COMPV_DEFINE_GUID(MF_MT_H264_SUPPORTED_SYNC_FRAME_TYPES,
		0x89a52c01, 0xf282, 0x48d2, 0xb5, 0x22, 0x22, 0xe6, 0xae, 0x63, 0x31, 0x99),

	COMPV_DEFINE_GUID(MF_MT_H264_RESOLUTION_SCALING,
		0xe3854272, 0xf715, 0x4757, 0xba, 0x90, 0x1b, 0x69, 0x6c, 0x77, 0x34, 0x57),

	COMPV_DEFINE_GUID(MF_MT_H264_SIMULCAST_SUPPORT,
		0x9ea2d63d, 0x53f0, 0x4a34, 0xb9, 0x4e, 0x9d, 0xe4, 0x9a, 0x7, 0x8c, 0xb3),

	COMPV_DEFINE_GUID(MF_MT_H264_SUPPORTED_RATE_CONTROL_MODES,
		0x6a8ac47e, 0x519c, 0x4f18, 0x9b, 0xb3, 0x7e, 0xea, 0xae, 0xa5, 0x59, 0x4d),

	COMPV_DEFINE_GUID(MF_MT_H264_MAX_MB_PER_SEC,
		0x45256d30, 0x7215, 0x4576, 0x93, 0x36, 0xb0, 0xf1, 0xbc, 0xd5, 0x9b, 0xb2),

	COMPV_DEFINE_GUID(MF_MT_H264_SUPPORTED_USAGES,
		0x60b1a998, 0xdc01, 0x40ce, 0x97, 0x36, 0xab, 0xa8, 0x45, 0xa2, 0xdb, 0xdc),

	COMPV_DEFINE_GUID(MF_MT_H264_CAPABILITIES,
		0xbb3bd508, 0x490a, 0x11e0, 0x99, 0xe4, 0x13, 0x16, 0xdf, 0xd7, 0x20, 0x85),

	COMPV_DEFINE_GUID(MF_MT_H264_SVC_CAPABILITIES,
		0xf8993abe, 0xd937, 0x4a8f, 0xbb, 0xca, 0x69, 0x66, 0xfe, 0x9e, 0x11, 0x52),

	COMPV_DEFINE_GUID(MF_MT_H264_USAGE,
		0x359ce3a5, 0xaf00, 0x49ca, 0xa2, 0xf4, 0x2a, 0xc9, 0x4c, 0xa8, 0x2b, 0x61),

	COMPV_DEFINE_GUID(MF_MT_H264_RATE_CONTROL_MODES,
		0x705177d8, 0x45cb, 0x11e0, 0xac, 0x7d, 0xb9, 0x1c, 0xe0, 0xd7, 0x20, 0x85),

	COMPV_DEFINE_GUID(MF_MT_H264_LAYOUT_PER_STREAM,
		0x85e299b2, 0x90e3, 0x4fe8, 0xb2, 0xf5, 0xc0, 0x67, 0xe0, 0xbf, 0xe5, 0x7a),

	COMPV_DEFINE_GUID(MF_MT_DV_AAUX_SRC_PACK_0,
		0x84bd5d88, 0x0fb8, 0x4ac8, 0xbe, 0x4b, 0xa8, 0x84, 0x8b, 0xef, 0x98, 0xf3),

	COMPV_DEFINE_GUID(MF_MT_DV_AAUX_CTRL_PACK_0,
		0xf731004e, 0x1dd1, 0x4515, 0xaa, 0xbe, 0xf0, 0xc0, 0x6a, 0xa5, 0x36, 0xac),

	COMPV_DEFINE_GUID(MF_MT_DV_AAUX_SRC_PACK_1,
		0x720e6544, 0x0225, 0x4003, 0xa6, 0x51, 0x01, 0x96, 0x56, 0x3a, 0x95, 0x8e),

	COMPV_DEFINE_GUID(MF_MT_DV_AAUX_CTRL_PACK_1,
		0xcd1f470d, 0x1f04, 0x4fe0, 0xbf, 0xb9, 0xd0, 0x7a, 0xe0, 0x38, 0x6a, 0xd8),

	COMPV_DEFINE_GUID(MF_MT_DV_VAUX_SRC_PACK,
		0x41402d9d, 0x7b57, 0x43c6, 0xb1, 0x29, 0x2c, 0xb9, 0x97, 0xf1, 0x50, 0x09),

	COMPV_DEFINE_GUID(MF_MT_DV_VAUX_CTRL_PACK,
		0x2f84e1c4, 0x0da1, 0x4788, 0x93, 0x8e, 0x0d, 0xfb, 0xfb, 0xb3, 0x4b, 0x48),

	COMPV_DEFINE_GUID(MF_MT_ARBITRARY_HEADER,
		0x9e6bd6f5, 0x109, 0x4f95, 0x84, 0xac, 0x93, 0x9, 0x15, 0x3a, 0x19, 0xfc),

	COMPV_DEFINE_GUID(MF_MT_ARBITRARY_FORMAT,
		0x5a75b249, 0xd7d, 0x49a1, 0xa1, 0xc3, 0xe0, 0xd8, 0x7f, 0xc, 0xad, 0xe5),


	COMPV_DEFINE_GUID(MF_MT_IMAGE_LOSS_TOLERANT,
		0xed062cf4, 0xe34e, 0x4922, 0xbe, 0x99, 0x93, 0x40, 0x32, 0x13, 0x3d, 0x7c),

	COMPV_DEFINE_GUID(MF_MT_MPEG4_SAMPLE_DESCRIPTION,
		0x261e9d83, 0x9529, 0x4b8f, 0xa1, 0x11, 0x8b, 0x9c, 0x95, 0x0a, 0x81, 0xa9),

	COMPV_DEFINE_GUID(MF_MT_MPEG4_CURRENT_SAMPLE_ENTRY,
		0x9aa7e155, 0xb64a, 0x4c1d, 0xa5, 0x00, 0x45, 0x5d, 0x60, 0x0b, 0x65, 0x60),

	COMPV_DEFINE_GUID(MF_MT_ORIGINAL_4CC,
		0xd7be3fe0, 0x2bc7, 0x492d, 0xb8, 0x43, 0x61, 0xa1, 0x91, 0x9b, 0x70, 0xc3),

	COMPV_DEFINE_GUID(MF_MT_ORIGINAL_WAVE_FORMAT_TAG,
		0x8cbbc843, 0x9fd9, 0x49c2, 0x88, 0x2f, 0xa7, 0x25, 0x86, 0xc4, 0x08, 0xad),

	COMPV_DEFINE_GUID(MF_MT_FRAME_RATE_RANGE_MIN,
		0xd2e7558c, 0xdc1f, 0x403f, 0x9a, 0x72, 0xd2, 0x8b, 0xb1, 0xeb, 0x3b, 0x5e),

	COMPV_DEFINE_GUID(MF_MT_FRAME_RATE_RANGE_MAX,
		0xe3371d41, 0xb4cf, 0x4a05, 0xbd, 0x4e, 0x20, 0xb8, 0x8b, 0xb2, 0xc4, 0xd6),

	COMPV_DEFINE_GUID(MF_LOW_LATENCY,
		0x9c27891a, 0xed7a, 0x40e1, 0x88, 0xe8, 0xb2, 0x27, 0x27, 0xa0, 0x24, 0xee),

	COMPV_DEFINE_GUID(MF_VIDEO_MAX_MB_PER_SEC,
		0xe3f2e203, 0xd445, 0x4b8c, 0x92, 0x11, 0xae, 0x39, 0xd, 0x3b, 0xa0, 0x17),

	COMPV_DEFINE_GUID(MFMediaType_Default,
		0x81A412E6, 0x8103, 0x4B06, 0x85, 0x7F, 0x18, 0x62, 0x78, 0x10, 0x24, 0xAC),
	COMPV_DEFINE_GUID(MFMediaType_Audio,
		0x73647561, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71),
	COMPV_DEFINE_GUID(MFMediaType_Video,
		0x73646976, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71),
	COMPV_DEFINE_GUID(MFMediaType_Protected,
		0x7b4b6fe6, 0x9d04, 0x4494, 0xbe, 0x14, 0x7e, 0x0b, 0xd0, 0x76, 0xc8, 0xe4),
	COMPV_DEFINE_GUID(MFMediaType_SAMI,
		0xe69669a0, 0x3dcd, 0x40cb, 0x9e, 0x2e, 0x37, 0x08, 0x38, 0x7c, 0x06, 0x16),
	COMPV_DEFINE_GUID(MFMediaType_Script,
		0x72178C22, 0xE45B, 0x11D5, 0xBC, 0x2A, 0x00, 0xB0, 0xD0, 0xF3, 0xF4, 0xAB),
	COMPV_DEFINE_GUID(MFMediaType_Image,
		0x72178C23, 0xE45B, 0x11D5, 0xBC, 0x2A, 0x00, 0xB0, 0xD0, 0xF3, 0xF4, 0xAB),
	COMPV_DEFINE_GUID(MFMediaType_HTML,
		0x72178C24, 0xE45B, 0x11D5, 0xBC, 0x2A, 0x00, 0xB0, 0xD0, 0xF3, 0xF4, 0xAB),
	COMPV_DEFINE_GUID(MFMediaType_Binary,
		0x72178C25, 0xE45B, 0x11D5, 0xBC, 0x2A, 0x00, 0xB0, 0xD0, 0xF3, 0xF4, 0xAB),
	COMPV_DEFINE_GUID(MFMediaType_FileTransfer,
		0x72178C26, 0xE45B, 0x11D5, 0xBC, 0x2A, 0x00, 0xB0, 0xD0, 0xF3, 0xF4, 0xAB),
	COMPV_DEFINE_GUID(MFMediaType_Stream,
		0xe436eb83, 0x524f, 0x11ce, 0x9f, 0x53, 0x00, 0x20, 0xaf, 0x0b, 0xa7, 0x70),

	COMPV_DEFINE_GUID(MFImageFormat_JPEG,
		0x19e4a5aa, 0x5662, 0x4fc5, 0xa0, 0xc0, 0x17, 0x58, 0x02, 0x8e, 0x10, 0x57),

	COMPV_DEFINE_GUID(MFImageFormat_RGB32,
		0x00000016, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71),

	COMPV_DEFINE_GUID(MFStreamFormat_MPEG2Transport,
		0xe06d8023, 0xdb46, 0x11cf, 0xb4, 0xd1, 0x00, 0x80, 0x5f, 0x6c, 0xbb, 0xea),
	COMPV_DEFINE_GUID(MFStreamFormat_MPEG2Program,
		0x263067d1, 0xd330, 0x45dc, 0xb6, 0x69, 0x34, 0xd9, 0x86, 0xe4, 0xe3, 0xe1),

	COMPV_DEFINE_GUID(AM_MEDIA_TYPE_REPRESENTATION,
		0xe2e42ad2, 0x132c, 0x491e, 0xa2, 0x68, 0x3c, 0x7c, 0x2d, 0xca, 0x18, 0x1f),
	COMPV_DEFINE_GUID(FORMAT_MFVideoFormat,
		0xaed4ab2d, 0x7326, 0x43cb, 0x94, 0x64, 0xc8, 0x79, 0xca, 0xb9, 0xc4, 0x3d),
};

CGuidNameList GuidNames;
static const int g_cGuidNames = sizeof(g_GuidNames) / sizeof(g_GuidNames[0]);

char *CGuidNameList::operator [] (const GUID &guid)
{
	if (guid == GUID_NULL) {
		return "GUID_NULL";
	}
	for (int i = 0; i < g_cGuidNames; i++) {
		if (g_GuidNames[i].guid == guid) {
			return g_GuidNames[i].szName;
		}
	}
	return "Unknown GUID Name";
}

