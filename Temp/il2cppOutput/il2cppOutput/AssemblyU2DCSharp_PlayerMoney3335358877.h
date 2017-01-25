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

// PlayerMoney
struct  PlayerMoney_t3335358877  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 PlayerMoney::money
	int32_t ___money_2;
	// UnityEngine.UI.Text PlayerMoney::TextMoney
	Text_t356221433 * ___TextMoney_3;

public:
	inline static int32_t get_offset_of_money_2() { return static_cast<int32_t>(offsetof(PlayerMoney_t3335358877, ___money_2)); }
	inline int32_t get_money_2() const { return ___money_2; }
	inline int32_t* get_address_of_money_2() { return &___money_2; }
	inline void set_money_2(int32_t value)
	{
		___money_2 = value;
	}

	inline static int32_t get_offset_of_TextMoney_3() { return static_cast<int32_t>(offsetof(PlayerMoney_t3335358877, ___TextMoney_3)); }
	inline Text_t356221433 * get_TextMoney_3() const { return ___TextMoney_3; }
	inline Text_t356221433 ** get_address_of_TextMoney_3() { return &___TextMoney_3; }
	inline void set_TextMoney_3(Text_t356221433 * value)
	{
		___TextMoney_3 = value;
		Il2CppCodeGenWriteBarrier(&___TextMoney_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
