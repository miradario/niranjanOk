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
// deathmenu
struct deathmenu_t4158006453;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Score
struct  Score_t1518975274  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Score::score
	float ___score_2;
	// System.Int32 Score::difficultyLevel
	int32_t ___difficultyLevel_3;
	// System.Int32 Score::maxDifficultyLevel
	int32_t ___maxDifficultyLevel_4;
	// System.Int32 Score::scoretoNextLevel
	int32_t ___scoretoNextLevel_5;
	// UnityEngine.UI.Text Score::scoreText
	Text_t356221433 * ___scoreText_6;
	// UnityEngine.UI.Text Score::HighscoreText
	Text_t356221433 * ___HighscoreText_7;
	// deathmenu Score::deathMenu
	deathmenu_t4158006453 * ___deathMenu_8;
	// UnityEngine.AudioSource Score::VamoVamo
	AudioSource_t1135106623 * ___VamoVamo_9;
	// System.Boolean Score::isDeath
	bool ___isDeath_10;

public:
	inline static int32_t get_offset_of_score_2() { return static_cast<int32_t>(offsetof(Score_t1518975274, ___score_2)); }
	inline float get_score_2() const { return ___score_2; }
	inline float* get_address_of_score_2() { return &___score_2; }
	inline void set_score_2(float value)
	{
		___score_2 = value;
	}

	inline static int32_t get_offset_of_difficultyLevel_3() { return static_cast<int32_t>(offsetof(Score_t1518975274, ___difficultyLevel_3)); }
	inline int32_t get_difficultyLevel_3() const { return ___difficultyLevel_3; }
	inline int32_t* get_address_of_difficultyLevel_3() { return &___difficultyLevel_3; }
	inline void set_difficultyLevel_3(int32_t value)
	{
		___difficultyLevel_3 = value;
	}

	inline static int32_t get_offset_of_maxDifficultyLevel_4() { return static_cast<int32_t>(offsetof(Score_t1518975274, ___maxDifficultyLevel_4)); }
	inline int32_t get_maxDifficultyLevel_4() const { return ___maxDifficultyLevel_4; }
	inline int32_t* get_address_of_maxDifficultyLevel_4() { return &___maxDifficultyLevel_4; }
	inline void set_maxDifficultyLevel_4(int32_t value)
	{
		___maxDifficultyLevel_4 = value;
	}

	inline static int32_t get_offset_of_scoretoNextLevel_5() { return static_cast<int32_t>(offsetof(Score_t1518975274, ___scoretoNextLevel_5)); }
	inline int32_t get_scoretoNextLevel_5() const { return ___scoretoNextLevel_5; }
	inline int32_t* get_address_of_scoretoNextLevel_5() { return &___scoretoNextLevel_5; }
	inline void set_scoretoNextLevel_5(int32_t value)
	{
		___scoretoNextLevel_5 = value;
	}

	inline static int32_t get_offset_of_scoreText_6() { return static_cast<int32_t>(offsetof(Score_t1518975274, ___scoreText_6)); }
	inline Text_t356221433 * get_scoreText_6() const { return ___scoreText_6; }
	inline Text_t356221433 ** get_address_of_scoreText_6() { return &___scoreText_6; }
	inline void set_scoreText_6(Text_t356221433 * value)
	{
		___scoreText_6 = value;
		Il2CppCodeGenWriteBarrier(&___scoreText_6, value);
	}

	inline static int32_t get_offset_of_HighscoreText_7() { return static_cast<int32_t>(offsetof(Score_t1518975274, ___HighscoreText_7)); }
	inline Text_t356221433 * get_HighscoreText_7() const { return ___HighscoreText_7; }
	inline Text_t356221433 ** get_address_of_HighscoreText_7() { return &___HighscoreText_7; }
	inline void set_HighscoreText_7(Text_t356221433 * value)
	{
		___HighscoreText_7 = value;
		Il2CppCodeGenWriteBarrier(&___HighscoreText_7, value);
	}

	inline static int32_t get_offset_of_deathMenu_8() { return static_cast<int32_t>(offsetof(Score_t1518975274, ___deathMenu_8)); }
	inline deathmenu_t4158006453 * get_deathMenu_8() const { return ___deathMenu_8; }
	inline deathmenu_t4158006453 ** get_address_of_deathMenu_8() { return &___deathMenu_8; }
	inline void set_deathMenu_8(deathmenu_t4158006453 * value)
	{
		___deathMenu_8 = value;
		Il2CppCodeGenWriteBarrier(&___deathMenu_8, value);
	}

	inline static int32_t get_offset_of_VamoVamo_9() { return static_cast<int32_t>(offsetof(Score_t1518975274, ___VamoVamo_9)); }
	inline AudioSource_t1135106623 * get_VamoVamo_9() const { return ___VamoVamo_9; }
	inline AudioSource_t1135106623 ** get_address_of_VamoVamo_9() { return &___VamoVamo_9; }
	inline void set_VamoVamo_9(AudioSource_t1135106623 * value)
	{
		___VamoVamo_9 = value;
		Il2CppCodeGenWriteBarrier(&___VamoVamo_9, value);
	}

	inline static int32_t get_offset_of_isDeath_10() { return static_cast<int32_t>(offsetof(Score_t1518975274, ___isDeath_10)); }
	inline bool get_isDeath_10() const { return ___isDeath_10; }
	inline bool* get_address_of_isDeath_10() { return &___isDeath_10; }
	inline void set_isDeath_10(bool value)
	{
		___isDeath_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
