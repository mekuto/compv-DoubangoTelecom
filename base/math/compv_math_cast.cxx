/* Copyright (C) 2016-2018 Doubango Telecom <https://www.doubango.org>
* File author: Mamadou DIOP (Doubango Telecom, France).
* License: GPLv3. For commercial license please contact us.
* Source code: https://github.com/DoubangoTelecom/compv
* WebSite: http://compv.org
*/
#include "compv/base/math/compv_math_cast.h"
#include "compv/base/math/compv_math.h"
#include "compv/base/parallel/compv_parallel.h"
#include "compv/base/compv_generic_invoke.h"
#include "compv/base/compv_cpu.h"

#define COMPV_MATH_CAST_STATIC_PIXEL8_SAMPLES_PER_THREAD	(50*50)

COMPV_NAMESPACE_BEGIN()

template <> COMPV_BASE_API
COMPV_ERROR_CODE CompVMathCast::process_static(const compv_float32_t* src, compv_float64_t* dst, const size_t width, const size_t height, const size_t stride)
{
	void(*CompVMathCastProcessStatic_32f64f)(const compv_float32_t* src, compv_float64_t* dst, const compv_uscalar_t width, const compv_uscalar_t height, const compv_uscalar_t stride)
		= [](const compv_float32_t* src, compv_float64_t* dst, const compv_uscalar_t width, const compv_uscalar_t height, const compv_uscalar_t stride)
	{
		COMPV_CHECK_CODE_NOP((CompVMathCast::process_static_C<compv_float32_t, compv_float64_t>(src, dst, width, height, stride)));
	};

#if COMPV_ARCH_X86
	if (width >= 4) {
		if (CompVCpu::isEnabled(kCpuFlagSSE2)) {
			//COMPV_EXEC_IFDEF_INTRIN_X86(CompVMathCastProcessStatic_32f64f = CompVMathCastProcessStatic_32f64f_Intrin_SSE2);
		}
	}
	if (CompVCpu::isEnabled(kCpuFlagAVX2) && width >= 8) {
		//COMPV_EXEC_IFDEF_INTRIN_X86(CompVMathCastProcessStatic_32f64f = CompVMathCastProcessStatic_32f64f_Intrin_AVX2);
		//COMPV_EXEC_IFDEF_ASM_X64(CompVMathCastProcessStatic_32f64f = CompVMathCastProcessStatic_32f64f_Asm_X64_AVX2);
	}
#elif COMPV_ARCH_ARM
	if (CompVCpu::isEnabled(kCpuFlagARM_NEON) && width >= 4) {
		//COMPV_EXEC_IFDEF_INTRIN_ARM(CompVMathCastProcessStatic_32f64f = CompVMathCastProcessStatic_32f64f_Intrin_NEON);
		//COMPV_EXEC_IFDEF_ASM_ARM32(CompVMathCastProcessStatic_32f64f = CompVMathCastProcessStatic_32f64f_Asm_NEON32);
		//COMPV_EXEC_IFDEF_ASM_ARM64(CompVMathCastProcessStatic_32f64f = CompVMathCastProcessStatic_32f64f_Asm_NEON64);
	}
#endif

	CompVMathCastProcessStatic_32f64f(src, dst, static_cast<compv_uscalar_t>(width), static_cast<compv_uscalar_t>(height), static_cast<compv_uscalar_t>(stride));

	return COMPV_ERROR_CODE_S_OK;
}

template <> COMPV_BASE_API
COMPV_ERROR_CODE CompVMathCast::process_static(const compv_float64_t* src, compv_float32_t* dst, const size_t width, const size_t height, const size_t stride)
{
	void(*CompVMathCastProcessStatic_64f32f)(const compv_float64_t* src, compv_float32_t* dst, const compv_uscalar_t width, const compv_uscalar_t height, const compv_uscalar_t stride)
		= [](const compv_float64_t* src, compv_float32_t* dst, const compv_uscalar_t width, const compv_uscalar_t height, const compv_uscalar_t stride)
	{
		COMPV_CHECK_CODE_NOP((CompVMathCast::process_static_C<compv_float64_t, compv_float32_t>(src, dst, width, height, stride)));
	};

#if COMPV_ARCH_X86
	if (width >= 4) {
		if (CompVCpu::isEnabled(kCpuFlagSSE2)) {
			//COMPV_EXEC_IFDEF_INTRIN_X86(CompVMathCastProcessStatic_64f32f = CompVMathCastProcessStatic_64f32f_Intrin_SSE2);
		}
	}
	if (CompVCpu::isEnabled(kCpuFlagAVX2) && width >= 8) {
		//COMPV_EXEC_IFDEF_INTRIN_X86(CompVMathCastProcessStatic_64f32f = CompVMathCastProcessStatic_64f32f_Intrin_AVX2);
		//COMPV_EXEC_IFDEF_ASM_X64(CompVMathCastProcessStatic_64f32f = CompVMathCastProcessStatic_64f32f_Asm_X64_AVX2);
	}
#elif COMPV_ARCH_ARM
	if (CompVCpu::isEnabled(kCpuFlagARM_NEON) && width >= 4) {
		//COMPV_EXEC_IFDEF_INTRIN_ARM(CompVMathCastProcessStatic_64f32f = CompVMathCastProcessStatic_64f32f_Intrin_NEON);
		//COMPV_EXEC_IFDEF_ASM_ARM32(CompVMathCastProcessStatic_64f32f = CompVMathCastProcessStatic_64f32f_Asm_NEON32);
		//COMPV_EXEC_IFDEF_ASM_ARM64(CompVMathCastProcessStatic_64f32f = CompVMathCastProcessStatic_64f32f_Asm_NEON64);
	}
#endif

	CompVMathCastProcessStatic_64f32f(src, dst, static_cast<compv_uscalar_t>(width), static_cast<compv_uscalar_t>(height), static_cast<compv_uscalar_t>(stride));

	return COMPV_ERROR_CODE_S_OK;
}

template <> COMPV_BASE_API
COMPV_ERROR_CODE CompVMathCast::process_static(const uint8_t* src, compv_float32_t* dst, const size_t width, const size_t height, const size_t stride)
{
	void(*CompVMathCastProcessStatic_8u32f)(const uint8_t* src, compv_float32_t* dst, const compv_uscalar_t width, const compv_uscalar_t height, const compv_uscalar_t stride)
		= [](const uint8_t* src, compv_float32_t* dst, const compv_uscalar_t width, const compv_uscalar_t height, const compv_uscalar_t stride)
	{
		COMPV_CHECK_CODE_NOP((CompVMathCast::process_static_C<uint8_t, compv_float32_t>(src, dst, width, height, stride)));
	};

#if COMPV_ARCH_X86
	if (width >= 16) {
		if (CompVCpu::isEnabled(kCpuFlagSSE2)) {
			//COMPV_EXEC_IFDEF_INTRIN_X86(CompVMathCastProcessStatic_8u32f = CompVMathCastProcessStatic_8u32f_Intrin_SSE2);
		}
	}
	if (CompVCpu::isEnabled(kCpuFlagAVX2) && width >= 32) {
		//COMPV_EXEC_IFDEF_INTRIN_X86(CompVMathCastProcessStatic_8u32f = CompVMathCastProcessStatic_8u32f_Intrin_AVX2);
		//COMPV_EXEC_IFDEF_ASM_X64(CompVMathCastProcessStatic_8u32f = CompVMathCastProcessStatic_8u32f_Asm_X64_AVX2);
	}
#elif COMPV_ARCH_ARM
	if (CompVCpu::isEnabled(kCpuFlagARM_NEON) && width >= 16) {
		//COMPV_EXEC_IFDEF_INTRIN_ARM(CompVMathCastProcessStatic_8u32f = CompVMathCastProcessStatic_8u32f_Intrin_NEON);
		//COMPV_EXEC_IFDEF_ASM_ARM32(CompVMathCastProcessStatic_8u32f = CompVMathCastProcessStatic_8u32f_Asm_NEON32);
		//COMPV_EXEC_IFDEF_ASM_ARM64(CompVMathCastProcessStatic_8u32f = CompVMathCastProcessStatic_8u32f_Asm_NEON64);
	}
#endif

	CompVMathCastProcessStatic_8u32f(src, dst, static_cast<compv_uscalar_t>(width), static_cast<compv_uscalar_t>(height), static_cast<compv_uscalar_t>(stride));

	return COMPV_ERROR_CODE_S_OK;
}

template<typename T>
static void CompVMathCastProcess_static_pixel8(const CompVMatPtr& srcMat, CompVMatPtr& dstMat)
{
	// Private function, no need to check input parameters

	const size_t width = srcMat->cols();
	const size_t height = srcMat->rows();
	const size_t stride = srcMat->stride();

	const T* src = srcMat->ptr<const T>();
	uint8_t* dst = dstMat->ptr<uint8_t>();

	COMPV_DEBUG_INFO_CODE_NOT_OPTIMIZED("No SIMD or GPU implementation could be found");
	for (size_t j = 0; j < height; ++j) {
		for (size_t i = 0; i < width; ++i) {
			dst[i] = static_cast<uint8_t>(COMPV_MATH_CLIP3(0, 255, src[i])); // TODO(dmi): SIMD, use saturation
		}
		src += stride;
		dst += stride;
	}
}

COMPV_ERROR_CODE CompVMathCast::process_static_pixel8(const CompVMatPtr& src, CompVMatPtrPtr dst)
{
	COMPV_CHECK_EXP_RETURN(!src || src->planeCount() != 1 || !dst, COMPV_ERROR_CODE_E_INVALID_PARAMETER);
	const size_t width = src->cols();
	const size_t height = src->rows();
	const size_t stride = src->stride();

	CompVMatPtr dst_ = (*dst == src) ? nullptr : *dst;
	COMPV_CHECK_CODE_RETURN(CompVMat::newObjAligned<uint8_t>(&dst_, height, width, stride));

	auto funcPtr = [&](const size_t ystart, const size_t yend) -> COMPV_ERROR_CODE {
		const CompVRectFloat32 roi = {
			0.f, // left
			static_cast<compv_float32_t>(ystart), // top
			static_cast<compv_float32_t>(width - 1), // right
			static_cast<compv_float32_t>(yend - 1) // bottom
		};
		CompVMatPtr srcBind, dstBind;
		COMPV_CHECK_CODE_RETURN(src->bind(&srcBind, roi));
		COMPV_CHECK_CODE_RETURN(dst_->bind(&dstBind, roi));
		CompVGenericInvokeVoidRawType(srcBind->subType(), CompVMathCastProcess_static_pixel8, srcBind, dstBind);
		return COMPV_ERROR_CODE_S_OK;
	};
	COMPV_CHECK_CODE_RETURN(CompVThreadDispatcher::dispatchDividingAcrossY(
		funcPtr,
		width,
		height,
		COMPV_MATH_CAST_STATIC_PIXEL8_SAMPLES_PER_THREAD
	));

	*dst = dst_;
	return COMPV_ERROR_CODE_S_OK;
}

COMPV_NAMESPACE_END()
