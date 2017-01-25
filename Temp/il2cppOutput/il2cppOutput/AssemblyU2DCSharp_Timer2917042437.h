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
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Timer
struct  Timer_t2917042437  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Timer::starterTime
	float ___starterTime_2;
	// UnityEngine.UI.Text Timer::Timertext
	Text_t356221433 * ___Timertext_3;
	// UnityEngine.GameObject Timer::mount
	GameObject_t1756533147 * ___mount_4;
	// UnityEngine.Vector3 Timer::original
	Vector3_t2243707580  ___original_5;
	// System.String Timer::nombre
	String_t* ___nombre_6;
	// UnityEngine.GameObject Timer::Canvas
	GameObject_t1756533147 * ___Canvas_7;
	// System.Int32 Timer::escuchado
	int32_t ___escuchado_8;

public:
	inline static int32_t get_offset_of_starterTime_2() { return static_cast<int32_t>(offsetof(Timer_t2917042437, ___starterTime_2)); }
	inline float get_starterTime_2() const { return ___starterTime_2; }
	inline float* get_address_of_starterTime_2() { return &___starterTime_2; }
	inline void set_starterTime_2(float value)
	{
		___starterTime_2 = value;
	}

	inline static int32_t get_offset_of_Timertext_3() { return static_cast<int32_t>(offsetof(Timer_t2917042437, ___Timertext_3)); }
	inline Text_t356221433 * get_Timertext_3() const { return ___Timertext_3; }
	inline Text_t356221433 ** get_address_of_Timertext_3() { return &___Timertext_3; }
	inline void set_Timertext_3(Text_t356221433 * value)
	{
		___Timertext_3 = value;
		Il2CppCodeGenWriteBarrier(&___Timertext_3, value);
	}

	inline static int32_t get_offset_of_mount_4() { return static_cast<int32_t>(offsetof(Timer_t2917042437, ___mount_4)); }
	inline GameObject_t1756533147 * get_mount_4() const { return ___mount_4; }
	inline GameObject_t1756533147 ** get_address_of_mount_4() { return &___mount_4; }
	inline void set_mount_4(GameObject_t1756533147 * value)
	{
		___mount_4 = value;
		Il2CppCodeGenWriteBarrier(&___mount_4, value);
	}

	inline static int32_t get_offset_of_original_5() { return static_cast<int32_t>(offsetof(Timer_t2917042437, ___original_5)); }
	inline Vector3_t2243707580  get_original_5() const { return ___original_5; }
	inline Vector3_t2243707580 * get_address_of_original_5() { return &___original_5; }
	inline void set_original_5(Vector3_t2243707580  value)
	{
		___original_5 = value;
	}

	inline static int32_t get_offset_of_nombre_6() { return static_cast<int32_t>(offsetof(Timer_t2917042437, ___nombre_6)); }
	inline String_t* get_nombre_6() const { return ___nombre_6; }
	inline String_t** get_address_of_nombre_6() { return &___nombre_6; }
	inline void set_nombre_6(String_t* value)
	{
		___nombre_6 = value;
		Il2CppCodeGenWriteBarrier(&___nombre_6, value);
	}

	inline static int32_t get_offset_of_Canvas_7() { return static_cast<int32_t>(offsetof(Timer_t2917042437, ___Canvas_7)); }
	inline GameObject_t1756533147 * get_Canvas_7() const { return ___Canvas_7; }
	inline GameObject_t1756533147 ** get_address_of_Canvas_7() { return &___Canvas_7; }
	inline void set_Canvas_7(GameObject_t1756533147 * value)
	{
		___Canvas_7 = value;
		Il2CppCodeGenWriteBarrier(&___Canvas_7, value);
	}

	inline static int32_t get_offset_of_escuchado_8() { return static_cast<int32_t>(offsetof(Timer_t2917042437, ___escuchado_8)); }
	inline int32_t get_escuchado_8() const { return ___escuchado_8; }
	inline int32_t* get_address_of_escuchado_8() { return &___escuchado_8; }
	inline void set_escuchado_8(int32_t value)
	{
		___escuchado_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
