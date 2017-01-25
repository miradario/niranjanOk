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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MainMenu
struct  MainMenu_t4009084430  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text MainMenu::highScore
	Text_t356221433 * ___highScore_2;
	// UnityEngine.UI.Text MainMenu::karma
	Text_t356221433 * ___karma_3;

public:
	inline static int32_t get_offset_of_highScore_2() { return static_cast<int32_t>(offsetof(MainMenu_t4009084430, ___highScore_2)); }
	inline Text_t356221433 * get_highScore_2() const { return ___highScore_2; }
	inline Text_t356221433 ** get_address_of_highScore_2() { return &___highScore_2; }
	inline void set_highScore_2(Text_t356221433 * value)
	{
		___highScore_2 = value;
		Il2CppCodeGenWriteBarrier(&___highScore_2, value);
	}

	inline static int32_t get_offset_of_karma_3() { return static_cast<int32_t>(offsetof(MainMenu_t4009084430, ___karma_3)); }
	inline Text_t356221433 * get_karma_3() const { return ___karma_3; }
	inline Text_t356221433 ** get_address_of_karma_3() { return &___karma_3; }
	inline void set_karma_3(Text_t356221433 * value)
	{
		___karma_3 = value;
		Il2CppCodeGenWriteBarrier(&___karma_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
