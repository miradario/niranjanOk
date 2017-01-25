#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// cameraMotor
struct  cameraMotor_t3667161628  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform cameraMotor::LookAt
	Transform_t3275118058 * ___LookAt_2;
	// UnityEngine.Vector3 cameraMotor::Startoffset
	Vector3_t2243707580  ___Startoffset_3;
	// UnityEngine.Vector3 cameraMotor::moveVector
	Vector3_t2243707580  ___moveVector_4;
	// System.Single cameraMotor::transition
	float ___transition_5;
	// System.Single cameraMotor::animationDuration
	float ___animationDuration_6;
	// UnityEngine.Vector3 cameraMotor::animationOffset
	Vector3_t2243707580  ___animationOffset_7;

public:
	inline static int32_t get_offset_of_LookAt_2() { return static_cast<int32_t>(offsetof(cameraMotor_t3667161628, ___LookAt_2)); }
	inline Transform_t3275118058 * get_LookAt_2() const { return ___LookAt_2; }
	inline Transform_t3275118058 ** get_address_of_LookAt_2() { return &___LookAt_2; }
	inline void set_LookAt_2(Transform_t3275118058 * value)
	{
		___LookAt_2 = value;
		Il2CppCodeGenWriteBarrier(&___LookAt_2, value);
	}

	inline static int32_t get_offset_of_Startoffset_3() { return static_cast<int32_t>(offsetof(cameraMotor_t3667161628, ___Startoffset_3)); }
	inline Vector3_t2243707580  get_Startoffset_3() const { return ___Startoffset_3; }
	inline Vector3_t2243707580 * get_address_of_Startoffset_3() { return &___Startoffset_3; }
	inline void set_Startoffset_3(Vector3_t2243707580  value)
	{
		___Startoffset_3 = value;
	}

	inline static int32_t get_offset_of_moveVector_4() { return static_cast<int32_t>(offsetof(cameraMotor_t3667161628, ___moveVector_4)); }
	inline Vector3_t2243707580  get_moveVector_4() const { return ___moveVector_4; }
	inline Vector3_t2243707580 * get_address_of_moveVector_4() { return &___moveVector_4; }
	inline void set_moveVector_4(Vector3_t2243707580  value)
	{
		___moveVector_4 = value;
	}

	inline static int32_t get_offset_of_transition_5() { return static_cast<int32_t>(offsetof(cameraMotor_t3667161628, ___transition_5)); }
	inline float get_transition_5() const { return ___transition_5; }
	inline float* get_address_of_transition_5() { return &___transition_5; }
	inline void set_transition_5(float value)
	{
		___transition_5 = value;
	}

	inline static int32_t get_offset_of_animationDuration_6() { return static_cast<int32_t>(offsetof(cameraMotor_t3667161628, ___animationDuration_6)); }
	inline float get_animationDuration_6() const { return ___animationDuration_6; }
	inline float* get_address_of_animationDuration_6() { return &___animationDuration_6; }
	inline void set_animationDuration_6(float value)
	{
		___animationDuration_6 = value;
	}

	inline static int32_t get_offset_of_animationOffset_7() { return static_cast<int32_t>(offsetof(cameraMotor_t3667161628, ___animationOffset_7)); }
	inline Vector3_t2243707580  get_animationOffset_7() const { return ___animationOffset_7; }
	inline Vector3_t2243707580 * get_address_of_animationOffset_7() { return &___animationOffset_7; }
	inline void set_animationOffset_7(Vector3_t2243707580  value)
	{
		___animationOffset_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
