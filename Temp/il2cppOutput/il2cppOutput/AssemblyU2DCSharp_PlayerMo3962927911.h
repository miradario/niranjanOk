#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.CharacterController
struct CharacterController_t4094781467;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_t1873220070;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerMo
struct  PlayerMo_t3962927911  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.CharacterController PlayerMo::controller
	CharacterController_t4094781467 * ___controller_2;
	// UnityEngine.Vector3 PlayerMo::moveVector
	Vector3_t2243707580  ___moveVector_3;
	// System.Single PlayerMo::speed
	float ___speed_4;
	// System.Single PlayerMo::verticalVelocity
	float ___verticalVelocity_5;
	// System.Single PlayerMo::gravity
	float ___gravity_6;
	// System.Single PlayerMo::animationDuration
	float ___animationDuration_7;
	// System.Boolean PlayerMo::jumping
	bool ___jumping_8;
	// System.Single PlayerMo::starTime
	float ___starTime_9;
	// UnityEngine.GameObject PlayerMo::coin_ps
	GameObject_t1756533147 * ___coin_ps_10;
	// UnityEngine.Rigidbody PlayerMo::body
	Rigidbody_t4233889191 * ___body_11;
	// UnityEngine.AudioSource PlayerMo::CaidaDopler
	AudioSource_t1135106623 * ___CaidaDopler_12;
	// UnityEngine.AudioSource PlayerMo::Piso
	AudioSource_t1135106623 * ___Piso_13;
	// System.Single PlayerMo::duraSalto
	float ___duraSalto_14;
	// UnityEngine.AudioSource[] PlayerMo::Choque
	AudioSourceU5BU5D_t1873220070* ___Choque_15;
	// UnityEngine.AudioSource[] PlayerMo::Copado
	AudioSourceU5BU5D_t1873220070* ___Copado_16;
	// UnityEngine.AudioSource PlayerMo::respiracion
	AudioSource_t1135106623 * ___respiracion_17;
	// UnityEngine.AudioSource PlayerMo::pasos
	AudioSource_t1135106623 * ___pasos_18;
	// UnityEngine.AudioSource PlayerMo::ujjai
	AudioSource_t1135106623 * ___ujjai_19;
	// UnityEngine.AudioSource PlayerMo::music
	AudioSource_t1135106623 * ___music_20;
	// UnityEngine.AudioSource PlayerMo::intro
	AudioSource_t1135106623 * ___intro_21;
	// System.Boolean PlayerMo::IsDeath
	bool ___IsDeath_22;

public:
	inline static int32_t get_offset_of_controller_2() { return static_cast<int32_t>(offsetof(PlayerMo_t3962927911, ___controller_2)); }
	inline CharacterController_t4094781467 * get_controller_2() const { return ___controller_2; }
	inline CharacterController_t4094781467 ** get_address_of_controller_2() { return &___controller_2; }
	inline void set_controller_2(CharacterController_t4094781467 * value)
	{
		___controller_2 = value;
		Il2CppCodeGenWriteBarrier(&___controller_2, value);
	}

	inline static int32_t get_offset_of_moveVector_3() { return static_cast<int32_t>(offsetof(PlayerMo_t3962927911, ___moveVector_3)); }
	inline Vector3_t2243707580  get_moveVector_3() const { return ___moveVector_3; }
	inline Vector3_t2243707580 * get_address_of_moveVector_3() { return &___moveVector_3; }
	inline void set_moveVector_3(Vector3_t2243707580  value)
	{
		___moveVector_3 = value;
	}

	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(PlayerMo_t3962927911, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_verticalVelocity_5() { return static_cast<int32_t>(offsetof(PlayerMo_t3962927911, ___verticalVelocity_5)); }
	inline float get_verticalVelocity_5() const { return ___verticalVelocity_5; }
	inline float* get_address_of_verticalVelocity_5() { return &___verticalVelocity_5; }
	inline void set_verticalVelocity_5(float value)
	{
		___verticalVelocity_5 = value;
	}

	inline static int32_t get_offset_of_gravity_6() { return static_cast<int32_t>(offsetof(PlayerMo_t3962927911, ___gravity_6)); }
	inline float get_gravity_6() const { return ___gravity_6; }
	inline float* get_address_of_gravity_6() { return &___gravity_6; }
	inline void set_gravity_6(float value)
	{
		___gravity_6 = value;
	}

	inline static int32_t get_offset_of_animationDuration_7() { return static_cast<int32_t>(offsetof(PlayerMo_t3962927911, ___animationDuration_7)); }
	inline float get_animationDuration_7() const { return ___animationDuration_7; }
	inline float* get_address_of_animationDuration_7() { return &___animationDuration_7; }
	inline void set_animationDuration_7(float value)
	{
		___animationDuration_7 = value;
	}

	inline static int32_t get_offset_of_jumping_8() { return static_cast<int32_t>(offsetof(PlayerMo_t3962927911, ___jumping_8)); }
	inline bool get_jumping_8() const { return ___jumping_8; }
	inline bool* get_address_of_jumping_8() { return &___jumping_8; }
	inline void set_jumping_8(bool value)
	{
		___jumping_8 = value;
	}

	inline static int32_t get_offset_of_starTime_9() { return static_cast<int32_t>(offsetof(PlayerMo_t3962927911, ___starTime_9)); }
	inline float get_starTime_9() const { return ___starTime_9; }
	inline float* get_address_of_starTime_9() { return &___starTime_9; }
	inline void set_starTime_9(float value)
	{
		___starTime_9 = value;
	}

	inline static int32_t get_offset_of_coin_ps_10() { return static_cast<int32_t>(offsetof(PlayerMo_t3962927911, ___coin_ps_10)); }
	inline GameObject_t1756533147 * get_coin_ps_10() const { return ___coin_ps_10; }
	inline GameObject_t1756533147 ** get_address_of_coin_ps_10() { return &___coin_ps_10; }
	inline void set_coin_ps_10(GameObject_t1756533147 * value)
	{
		___coin_ps_10 = value;
		Il2CppCodeGenWriteBarrier(&___coin_ps_10, value);
	}

	inline static int32_t get_offset_of_body_11() { return static_cast<int32_t>(offsetof(PlayerMo_t3962927911, ___body_11)); }
	inline Rigidbody_t4233889191 * get_body_11() const { return ___body_11; }
	inline Rigidbody_t4233889191 ** get_address_of_body_11() { return &___body_11; }
	inline void set_body_11(Rigidbody_t4233889191 * value)
	{
		___body_11 = value;
		Il2CppCodeGenWriteBarrier(&___body_11, value);
	}

	inline static int32_t get_offset_of_CaidaDopler_12() { return static_cast<int32_t>(offsetof(PlayerMo_t3962927911, ___CaidaDopler_12)); }
	inline AudioSource_t1135106623 * get_CaidaDopler_12() const { return ___CaidaDopler_12; }
	inline AudioSource_t1135106623 ** get_address_of_CaidaDopler_12() { return &___CaidaDopler_12; }
	inline void set_CaidaDopler_12(AudioSource_t1135106623 * value)
	{
		___CaidaDopler_12 = value;
		Il2CppCodeGenWriteBarrier(&___CaidaDopler_12, value);
	}

	inline static int32_t get_offset_of_Piso_13() { return static_cast<int32_t>(offsetof(PlayerMo_t3962927911, ___Piso_13)); }
	inline AudioSource_t1135106623 * get_Piso_13() const { return ___Piso_13; }
	inline AudioSource_t1135106623 ** get_address_of_Piso_13() { return &___Piso_13; }
	inline void set_Piso_13(AudioSource_t1135106623 * value)
	{
		___Piso_13 = value;
		Il2CppCodeGenWriteBarrier(&___Piso_13, value);
	}

	inline static int32_t get_offset_of_duraSalto_14() { return static_cast<int32_t>(offsetof(PlayerMo_t3962927911, ___duraSalto_14)); }
	inline float get_duraSalto_14() const { return ___duraSalto_14; }
	inline float* get_address_of_duraSalto_14() { return &___duraSalto_14; }
	inline void set_duraSalto_14(float value)
	{
		___duraSalto_14 = value;
	}

	inline static int32_t get_offset_of_Choque_15() { return static_cast<int32_t>(offsetof(PlayerMo_t3962927911, ___Choque_15)); }
	inline AudioSourceU5BU5D_t1873220070* get_Choque_15() const { return ___Choque_15; }
	inline AudioSourceU5BU5D_t1873220070** get_address_of_Choque_15() { return &___Choque_15; }
	inline void set_Choque_15(AudioSourceU5BU5D_t1873220070* value)
	{
		___Choque_15 = value;
		Il2CppCodeGenWriteBarrier(&___Choque_15, value);
	}

	inline static int32_t get_offset_of_Copado_16() { return static_cast<int32_t>(offsetof(PlayerMo_t3962927911, ___Copado_16)); }
	inline AudioSourceU5BU5D_t1873220070* get_Copado_16() const { return ___Copado_16; }
	inline AudioSourceU5BU5D_t1873220070** get_address_of_Copado_16() { return &___Copado_16; }
	inline void set_Copado_16(AudioSourceU5BU5D_t1873220070* value)
	{
		___Copado_16 = value;
		Il2CppCodeGenWriteBarrier(&___Copado_16, value);
	}

	inline static int32_t get_offset_of_respiracion_17() { return static_cast<int32_t>(offsetof(PlayerMo_t3962927911, ___respiracion_17)); }
	inline AudioSource_t1135106623 * get_respiracion_17() const { return ___respiracion_17; }
	inline AudioSource_t1135106623 ** get_address_of_respiracion_17() { return &___respiracion_17; }
	inline void set_respiracion_17(AudioSource_t1135106623 * value)
	{
		___respiracion_17 = value;
		Il2CppCodeGenWriteBarrier(&___respiracion_17, value);
	}

	inline static int32_t get_offset_of_pasos_18() { return static_cast<int32_t>(offsetof(PlayerMo_t3962927911, ___pasos_18)); }
	inline AudioSource_t1135106623 * get_pasos_18() const { return ___pasos_18; }
	inline AudioSource_t1135106623 ** get_address_of_pasos_18() { return &___pasos_18; }
	inline void set_pasos_18(AudioSource_t1135106623 * value)
	{
		___pasos_18 = value;
		Il2CppCodeGenWriteBarrier(&___pasos_18, value);
	}

	inline static int32_t get_offset_of_ujjai_19() { return static_cast<int32_t>(offsetof(PlayerMo_t3962927911, ___ujjai_19)); }
	inline AudioSource_t1135106623 * get_ujjai_19() const { return ___ujjai_19; }
	inline AudioSource_t1135106623 ** get_address_of_ujjai_19() { return &___ujjai_19; }
	inline void set_ujjai_19(AudioSource_t1135106623 * value)
	{
		___ujjai_19 = value;
		Il2CppCodeGenWriteBarrier(&___ujjai_19, value);
	}

	inline static int32_t get_offset_of_music_20() { return static_cast<int32_t>(offsetof(PlayerMo_t3962927911, ___music_20)); }
	inline AudioSource_t1135106623 * get_music_20() const { return ___music_20; }
	inline AudioSource_t1135106623 ** get_address_of_music_20() { return &___music_20; }
	inline void set_music_20(AudioSource_t1135106623 * value)
	{
		___music_20 = value;
		Il2CppCodeGenWriteBarrier(&___music_20, value);
	}

	inline static int32_t get_offset_of_intro_21() { return static_cast<int32_t>(offsetof(PlayerMo_t3962927911, ___intro_21)); }
	inline AudioSource_t1135106623 * get_intro_21() const { return ___intro_21; }
	inline AudioSource_t1135106623 ** get_address_of_intro_21() { return &___intro_21; }
	inline void set_intro_21(AudioSource_t1135106623 * value)
	{
		___intro_21 = value;
		Il2CppCodeGenWriteBarrier(&___intro_21, value);
	}

	inline static int32_t get_offset_of_IsDeath_22() { return static_cast<int32_t>(offsetof(PlayerMo_t3962927911, ___IsDeath_22)); }
	inline bool get_IsDeath_22() const { return ___IsDeath_22; }
	inline bool* get_address_of_IsDeath_22() { return &___IsDeath_22; }
	inline void set_IsDeath_22(bool value)
	{
		___IsDeath_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
