﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.ParticleSystem
struct ParticleSystem_t3394631041;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ParticleScript
struct  ParticleScript_t3548433477  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.ParticleSystem ParticleScript::ps
	ParticleSystem_t3394631041 * ___ps_2;

public:
	inline static int32_t get_offset_of_ps_2() { return static_cast<int32_t>(offsetof(ParticleScript_t3548433477, ___ps_2)); }
	inline ParticleSystem_t3394631041 * get_ps_2() const { return ___ps_2; }
	inline ParticleSystem_t3394631041 ** get_address_of_ps_2() { return &___ps_2; }
	inline void set_ps_2(ParticleSystem_t3394631041 * value)
	{
		___ps_2 = value;
		Il2CppCodeGenWriteBarrier(&___ps_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
