﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Shader
struct Shader_t2430389951;
// UnityEngine.Material
struct Material_t193706927;

#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_2152133263.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_I430511954.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_2215595694.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.TiltShift
struct  TiltShift_t3401316463  : public PostEffectsBase_t2152133263
{
public:
	// UnityStandardAssets.ImageEffects.TiltShift/TiltShiftMode UnityStandardAssets.ImageEffects.TiltShift::mode
	int32_t ___mode_5;
	// UnityStandardAssets.ImageEffects.TiltShift/TiltShiftQuality UnityStandardAssets.ImageEffects.TiltShift::quality
	int32_t ___quality_6;
	// System.Single UnityStandardAssets.ImageEffects.TiltShift::blurArea
	float ___blurArea_7;
	// System.Single UnityStandardAssets.ImageEffects.TiltShift::maxBlurSize
	float ___maxBlurSize_8;
	// System.Int32 UnityStandardAssets.ImageEffects.TiltShift::downsample
	int32_t ___downsample_9;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.TiltShift::tiltShiftShader
	Shader_t2430389951 * ___tiltShiftShader_10;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.TiltShift::tiltShiftMaterial
	Material_t193706927 * ___tiltShiftMaterial_11;

public:
	inline static int32_t get_offset_of_mode_5() { return static_cast<int32_t>(offsetof(TiltShift_t3401316463, ___mode_5)); }
	inline int32_t get_mode_5() const { return ___mode_5; }
	inline int32_t* get_address_of_mode_5() { return &___mode_5; }
	inline void set_mode_5(int32_t value)
	{
		___mode_5 = value;
	}

	inline static int32_t get_offset_of_quality_6() { return static_cast<int32_t>(offsetof(TiltShift_t3401316463, ___quality_6)); }
	inline int32_t get_quality_6() const { return ___quality_6; }
	inline int32_t* get_address_of_quality_6() { return &___quality_6; }
	inline void set_quality_6(int32_t value)
	{
		___quality_6 = value;
	}

	inline static int32_t get_offset_of_blurArea_7() { return static_cast<int32_t>(offsetof(TiltShift_t3401316463, ___blurArea_7)); }
	inline float get_blurArea_7() const { return ___blurArea_7; }
	inline float* get_address_of_blurArea_7() { return &___blurArea_7; }
	inline void set_blurArea_7(float value)
	{
		___blurArea_7 = value;
	}

	inline static int32_t get_offset_of_maxBlurSize_8() { return static_cast<int32_t>(offsetof(TiltShift_t3401316463, ___maxBlurSize_8)); }
	inline float get_maxBlurSize_8() const { return ___maxBlurSize_8; }
	inline float* get_address_of_maxBlurSize_8() { return &___maxBlurSize_8; }
	inline void set_maxBlurSize_8(float value)
	{
		___maxBlurSize_8 = value;
	}

	inline static int32_t get_offset_of_downsample_9() { return static_cast<int32_t>(offsetof(TiltShift_t3401316463, ___downsample_9)); }
	inline int32_t get_downsample_9() const { return ___downsample_9; }
	inline int32_t* get_address_of_downsample_9() { return &___downsample_9; }
	inline void set_downsample_9(int32_t value)
	{
		___downsample_9 = value;
	}

	inline static int32_t get_offset_of_tiltShiftShader_10() { return static_cast<int32_t>(offsetof(TiltShift_t3401316463, ___tiltShiftShader_10)); }
	inline Shader_t2430389951 * get_tiltShiftShader_10() const { return ___tiltShiftShader_10; }
	inline Shader_t2430389951 ** get_address_of_tiltShiftShader_10() { return &___tiltShiftShader_10; }
	inline void set_tiltShiftShader_10(Shader_t2430389951 * value)
	{
		___tiltShiftShader_10 = value;
		Il2CppCodeGenWriteBarrier(&___tiltShiftShader_10, value);
	}

	inline static int32_t get_offset_of_tiltShiftMaterial_11() { return static_cast<int32_t>(offsetof(TiltShift_t3401316463, ___tiltShiftMaterial_11)); }
	inline Material_t193706927 * get_tiltShiftMaterial_11() const { return ___tiltShiftMaterial_11; }
	inline Material_t193706927 ** get_address_of_tiltShiftMaterial_11() { return &___tiltShiftMaterial_11; }
	inline void set_tiltShiftMaterial_11(Material_t193706927 * value)
	{
		___tiltShiftMaterial_11 = value;
		Il2CppCodeGenWriteBarrier(&___tiltShiftMaterial_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
