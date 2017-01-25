#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t69676727;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// mov
struct  mov_t774519994  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Animator mov::anim
	Animator_t69676727 * ___anim_2;
	// System.Int32 mov::lane
	int32_t ___lane_3;

public:
	inline static int32_t get_offset_of_anim_2() { return static_cast<int32_t>(offsetof(mov_t774519994, ___anim_2)); }
	inline Animator_t69676727 * get_anim_2() const { return ___anim_2; }
	inline Animator_t69676727 ** get_address_of_anim_2() { return &___anim_2; }
	inline void set_anim_2(Animator_t69676727 * value)
	{
		___anim_2 = value;
		Il2CppCodeGenWriteBarrier(&___anim_2, value);
	}

	inline static int32_t get_offset_of_lane_3() { return static_cast<int32_t>(offsetof(mov_t774519994, ___lane_3)); }
	inline int32_t get_lane_3() const { return ___lane_3; }
	inline int32_t* get_address_of_lane_3() { return &___lane_3; }
	inline void set_lane_3(int32_t value)
	{
		___lane_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
