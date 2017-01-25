#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Image
struct Image_t2042527209;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// deathmenu
struct  deathmenu_t4158006453  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text deathmenu::scoreText
	Text_t356221433 * ___scoreText_2;
	// UnityEngine.UI.Image deathmenu::backgroundImg
	Image_t2042527209 * ___backgroundImg_3;
	// System.Single deathmenu::transition
	float ___transition_4;
	// System.Boolean deathmenu::isShowed
	bool ___isShowed_5;

public:
	inline static int32_t get_offset_of_scoreText_2() { return static_cast<int32_t>(offsetof(deathmenu_t4158006453, ___scoreText_2)); }
	inline Text_t356221433 * get_scoreText_2() const { return ___scoreText_2; }
	inline Text_t356221433 ** get_address_of_scoreText_2() { return &___scoreText_2; }
	inline void set_scoreText_2(Text_t356221433 * value)
	{
		___scoreText_2 = value;
		Il2CppCodeGenWriteBarrier(&___scoreText_2, value);
	}

	inline static int32_t get_offset_of_backgroundImg_3() { return static_cast<int32_t>(offsetof(deathmenu_t4158006453, ___backgroundImg_3)); }
	inline Image_t2042527209 * get_backgroundImg_3() const { return ___backgroundImg_3; }
	inline Image_t2042527209 ** get_address_of_backgroundImg_3() { return &___backgroundImg_3; }
	inline void set_backgroundImg_3(Image_t2042527209 * value)
	{
		___backgroundImg_3 = value;
		Il2CppCodeGenWriteBarrier(&___backgroundImg_3, value);
	}

	inline static int32_t get_offset_of_transition_4() { return static_cast<int32_t>(offsetof(deathmenu_t4158006453, ___transition_4)); }
	inline float get_transition_4() const { return ___transition_4; }
	inline float* get_address_of_transition_4() { return &___transition_4; }
	inline void set_transition_4(float value)
	{
		___transition_4 = value;
	}

	inline static int32_t get_offset_of_isShowed_5() { return static_cast<int32_t>(offsetof(deathmenu_t4158006453, ___isShowed_5)); }
	inline bool get_isShowed_5() const { return ___isShowed_5; }
	inline bool* get_address_of_isShowed_5() { return &___isShowed_5; }
	inline void set_isShowed_5(bool value)
	{
		___isShowed_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
