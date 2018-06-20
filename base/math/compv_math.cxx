/* Copyright (C) 2016-2018 Doubango Telecom <https://www.doubango.org>
* File author: Mamadou DIOP (Doubango Telecom, France).
* License: GPLv3. For commercial license please contact us.
* Source code: https://github.com/DoubangoTelecom/compv
* WebSite: http://compv.org
*/
/*
Most of trig approx. are implemented using document at "documentation/trig_approximations.pdf"
*/
#include "compv/base/math/compv_math.h"
#include "compv/base/math/compv_math_op_sub.h"
#include "compv/base/math/compv_math_op_mul.h"
#include "compv/base/math/compv_math_clip.h"

COMPV_NAMESPACE_BEGIN()

COMPV_BASE_API const float kfMathTrigPi = 3.1415926535897932384626433f; // PI
COMPV_BASE_API const float kfMathTrigPiTimes2 = 2.f * kfMathTrigPi; // PI * 2
COMPV_BASE_API const float kfMathTrigPiOver2 = kfMathTrigPi / 2.f; // PI / 2
COMPV_BASE_API const float kfMathTrigPiOver180 = kfMathTrigPi / 180.f; // PI/180
COMPV_BASE_API const float kfMathTrig180OverPi = 180.f / kfMathTrigPi; // 180/PI

COMPV_BASE_API const float kMathTrigC1 = 0.99940307f;
COMPV_BASE_API const float kMathTrigC2 = -0.49558072f;
COMPV_BASE_API const float kMathTrigC3 = 0.03679168f;

// IMPORTANT: ARM32 and ARM64 asm code have theses numbers embedded which means "NEVER CHANGE THEM". Or if you really think it's a good idea to change them then, also
// change them in "compv_math_trig_arm32_neon.S" and "compv_math_trig_arm64_neon.S"
COMPV_BASE_API const double kMathTrigAtan2Eps = 2.2204460492503131e-016;
COMPV_BASE_API const float kMathTrigAtan2P1 = 57.2836266f;
COMPV_BASE_API const float kMathTrigAtan2P3 = -18.6674461f;
COMPV_BASE_API const float kMathTrigAtan2P5 = 8.91400051f;
COMPV_BASE_API const float kMathTrigAtan2P7 = -2.53972459f;

COMPV_ERROR_CODE CompVMath::sub(const CompVMatPtr& A, const CompVMatPtr& B, CompVMatPtrPtr R)
{
	COMPV_CHECK_CODE_RETURN(CompVMathOpSub::sub(A, B, R));
	return COMPV_ERROR_CODE_S_OK;
}

COMPV_ERROR_CODE CompVMath::mulAB(const CompVMatPtr &A, const CompVMatPtr &B, CompVMatPtrPtr R)
{
	COMPV_CHECK_CODE_RETURN(CompVMathOpMul::mulAB(A, B, R));
	return COMPV_ERROR_CODE_S_OK;
}

COMPV_ERROR_CODE CompVMath::mulABt(const CompVMatPtr &A, const CompVMatPtr &B, CompVMatPtrPtr R)
{
	COMPV_CHECK_CODE_RETURN(CompVMathOpMul::mulABt(A, B, R));
	return COMPV_ERROR_CODE_S_OK;
}

COMPV_ERROR_CODE CompVMath::mulAtA(const CompVMatPtr &A, CompVMatPtrPtr R)
{
	COMPV_CHECK_CODE_RETURN(CompVMathOpMul::mulAtA(A, R));
	return COMPV_ERROR_CODE_S_OK;
}

COMPV_ERROR_CODE CompVMath::clip3(const CompVMatPtr& in, const double minn, const double maxx, CompVMatPtrPtr out)
{
	COMPV_CHECK_CODE_RETURN(CompVMathClip::clip3(in, minn, maxx, out));
	return COMPV_ERROR_CODE_S_OK;
}

COMPV_ERROR_CODE CompVMath::clip2(const CompVMatPtr& in, const double maxx, CompVMatPtrPtr out)
{
	COMPV_CHECK_CODE_RETURN(CompVMathClip::clip2(in, maxx, out));
	return COMPV_ERROR_CODE_S_OK;
}

COMPV_NAMESPACE_END()
