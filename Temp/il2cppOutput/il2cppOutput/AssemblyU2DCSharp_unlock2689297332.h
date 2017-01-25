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
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// unlock
struct  unlock_t2689297332  : public MonoBehaviour_t1158329972
{
public:
	// System.String unlock::caption
	String_t* ___caption_2;
	// System.Int32 unlock::cantidad
	int32_t ___cantidad_3;
	// UnityEngine.UI.Text unlock::Karma
	Text_t356221433 * ___Karma_4;
	// System.Boolean unlock::activado
	bool ___activado_5;
	// UnityEngine.GameObject unlock::Camara
	GameObject_t1756533147 * ___Camara_6;
	// UnityEngine.Transform unlock::MountMedi
	Transform_t3275118058 * ___MountMedi_7;

public:
	inline static int32_t get_offset_of_caption_2() { return static_cast<int32_t>(offsetof(unlock_t2689297332, ___caption_2)); }
	inline String_t* get_caption_2() const { return ___caption_2; }
	inline String_t** get_address_of_caption_2() { return &___caption_2; }
	inline void set_caption_2(String_t* value)
	{
		___caption_2 = value;
		Il2CppCodeGenWriteBarrier(&___caption_2, value);
	}

	inline static int32_t get_offset_of_cantidad_3() { return static_cast<int32_t>(offsetof(unlock_t2689297332, ___cantidad_3)); }
	inline int32_t get_cantidad_3() const { return ___cantidad_3; }
	inline int32_t* get_address_of_cantidad_3() { return &___cantidad_3; }
	inline void set_cantidad_3(int32_t value)
	{
		___cantidad_3 = value;
	}

	inline static int32_t get_offset_of_Karma_4() { return static_cast<int32_t>(offsetof(unlock_t2689297332, ___Karma_4)); }
	inline Text_t356221433 * get_Karma_4() const { return ___Karma_4; }
	inline Text_t356221433 ** get_address_of_Karma_4() { return &___Karma_4; }
	inline void set_Karma_4(Text_t356221433 * value)
	{
		___Karma_4 = value;
		Il2CppCodeGenWriteBarrier(&___Karma_4, value);
	}

	inline static int32_t get_offset_of_activado_5() { return static_cast<int32_t>(offsetof(unlock_t2689297332, ___activado_5)); }
	inline bool get_activado_5() const { return ___activado_5; }
	inline bool* get_address_of_activado_5() { return &___activado_5; }
	inline void set_activado_5(bool value)
	{
		___activado_5 = value;
	}

	inline static int32_t get_offset_of_Camara_6() { return static_cast<int32_t>(offsetof(unlock_t2689297332, ___Camara_6)); }
	inline GameObject_t1756533147 * get_Camara_6() const { return ___Camara_6; }
	inline GameObject_t1756533147 ** get_address_of_Camara_6() { return &___Camara_6; }
	inline void set_Camara_6(GameObject_t1756533147 * value)
	{
		___Camara_6 = value;
		Il2CppCodeGenWriteBarrier(&___Camara_6, value);
	}

	inline static int32_t get_offset_of_MountMedi_7() { return static_cast<int32_t>(offsetof(unlock_t2689297332, ___MountMedi_7)); }
	inline Transform_t3275118058 * get_MountMedi_7() const { return ___MountMedi_7; }
	inline Transform_t3275118058 ** get_address_of_MountMedi_7() { return &___MountMedi_7; }
	inline void set_MountMedi_7(Transform_t3275118058 * value)
	{
		___MountMedi_7 = value;
		Il2CppCodeGenWriteBarrier(&___MountMedi_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
