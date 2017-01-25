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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MenuCamController
struct  MenuCamController_t3819973462  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform MenuCamController::currentMount
	Transform_t3275118058 * ___currentMount_2;
	// System.Single MenuCamController::speedFactor
	float ___speedFactor_3;

public:
	inline static int32_t get_offset_of_currentMount_2() { return static_cast<int32_t>(offsetof(MenuCamController_t3819973462, ___currentMount_2)); }
	inline Transform_t3275118058 * get_currentMount_2() const { return ___currentMount_2; }
	inline Transform_t3275118058 ** get_address_of_currentMount_2() { return &___currentMount_2; }
	inline void set_currentMount_2(Transform_t3275118058 * value)
	{
		___currentMount_2 = value;
		Il2CppCodeGenWriteBarrier(&___currentMount_2, value);
	}

	inline static int32_t get_offset_of_speedFactor_3() { return static_cast<int32_t>(offsetof(MenuCamController_t3819973462, ___speedFactor_3)); }
	inline float get_speedFactor_3() const { return ___speedFactor_3; }
	inline float* get_address_of_speedFactor_3() { return &___speedFactor_3; }
	inline void set_speedFactor_3(float value)
	{
		___speedFactor_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
