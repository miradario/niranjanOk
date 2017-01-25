#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.TextAsset
struct TextAsset_t3973159845;
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Texto
struct  Texto_t2883284276  : public MonoBehaviour_t1158329972
{
public:
	// System.String Texto::quote
	String_t* ___quote_2;
	// UnityEngine.TextAsset Texto::splashFile
	TextAsset_t3973159845 * ___splashFile_3;
	// UnityEngine.UI.Text Texto::panel
	Text_t356221433 * ___panel_4;
	// UnityEngine.UI.Text Texto::HighScoreText
	Text_t356221433 * ___HighScoreText_5;

public:
	inline static int32_t get_offset_of_quote_2() { return static_cast<int32_t>(offsetof(Texto_t2883284276, ___quote_2)); }
	inline String_t* get_quote_2() const { return ___quote_2; }
	inline String_t** get_address_of_quote_2() { return &___quote_2; }
	inline void set_quote_2(String_t* value)
	{
		___quote_2 = value;
		Il2CppCodeGenWriteBarrier(&___quote_2, value);
	}

	inline static int32_t get_offset_of_splashFile_3() { return static_cast<int32_t>(offsetof(Texto_t2883284276, ___splashFile_3)); }
	inline TextAsset_t3973159845 * get_splashFile_3() const { return ___splashFile_3; }
	inline TextAsset_t3973159845 ** get_address_of_splashFile_3() { return &___splashFile_3; }
	inline void set_splashFile_3(TextAsset_t3973159845 * value)
	{
		___splashFile_3 = value;
		Il2CppCodeGenWriteBarrier(&___splashFile_3, value);
	}

	inline static int32_t get_offset_of_panel_4() { return static_cast<int32_t>(offsetof(Texto_t2883284276, ___panel_4)); }
	inline Text_t356221433 * get_panel_4() const { return ___panel_4; }
	inline Text_t356221433 ** get_address_of_panel_4() { return &___panel_4; }
	inline void set_panel_4(Text_t356221433 * value)
	{
		___panel_4 = value;
		Il2CppCodeGenWriteBarrier(&___panel_4, value);
	}

	inline static int32_t get_offset_of_HighScoreText_5() { return static_cast<int32_t>(offsetof(Texto_t2883284276, ___HighScoreText_5)); }
	inline Text_t356221433 * get_HighScoreText_5() const { return ___HighScoreText_5; }
	inline Text_t356221433 ** get_address_of_HighScoreText_5() { return &___HighScoreText_5; }
	inline void set_HighScoreText_5(Text_t356221433 * value)
	{
		___HighScoreText_5 = value;
		Il2CppCodeGenWriteBarrier(&___HighScoreText_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
