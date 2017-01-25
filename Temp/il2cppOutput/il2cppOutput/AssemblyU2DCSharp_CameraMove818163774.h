#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraMove
struct  CameraMove_t818163774  : public MonoBehaviour_t1158329972
{
public:
	// System.Single CameraMove::moveSpeed
	float ___moveSpeed_2;
	// UnityEngine.GameObject CameraMove::mainCamera
	GameObject_t1756533147 * ___mainCamera_3;

public:
	inline static int32_t get_offset_of_moveSpeed_2() { return static_cast<int32_t>(offsetof(CameraMove_t818163774, ___moveSpeed_2)); }
	inline float get_moveSpeed_2() const { return ___moveSpeed_2; }
	inline float* get_address_of_moveSpeed_2() { return &___moveSpeed_2; }
	inline void set_moveSpeed_2(float value)
	{
		___moveSpeed_2 = value;
	}

	inline static int32_t get_offset_of_mainCamera_3() { return static_cast<int32_t>(offsetof(CameraMove_t818163774, ___mainCamera_3)); }
	inline GameObject_t1756533147 * get_mainCamera_3() const { return ___mainCamera_3; }
	inline GameObject_t1756533147 ** get_address_of_mainCamera_3() { return &___mainCamera_3; }
	inline void set_mainCamera_3(GameObject_t1756533147 * value)
	{
		___mainCamera_3 = value;
		Il2CppCodeGenWriteBarrier(&___mainCamera_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
