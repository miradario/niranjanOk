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
// UnityEngine.Animator
struct Animator_t69676727;
// System.String
struct String_t;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// PlayerMotor/Boundary
struct Boundary_t401811049;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerMotor
struct  PlayerMotor_t2528789646  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.CharacterController PlayerMotor::controller
	CharacterController_t4094781467 * ___controller_2;
	// UnityEngine.Animator PlayerMotor::anim
	Animator_t69676727 * ___anim_3;
	// System.Single PlayerMotor::verticalVelocity
	float ___verticalVelocity_4;
	// System.Single PlayerMotor::gravity
	float ___gravity_5;
	// System.Single PlayerMotor::jumpForce
	float ___jumpForce_6;
	// System.String PlayerMotor::salto
	String_t* ___salto_7;
	// System.Int32 PlayerMotor::saltoRan
	int32_t ___saltoRan_8;
	// UnityEngine.AudioSource PlayerMotor::Piso
	AudioSource_t1135106623 * ___Piso_9;
	// UnityEngine.AudioSource PlayerMotor::Salto
	AudioSource_t1135106623 * ___Salto_10;
	// UnityEngine.AudioSource PlayerMotor::Agacho
	AudioSource_t1135106623 * ___Agacho_11;
	// System.Int32 PlayerMotor::tilt
	int32_t ___tilt_12;
	// System.Single PlayerMotor::Heightoriginal
	float ___Heightoriginal_13;
	// UnityEngine.AudioSource PlayerMotor::audiosource
	AudioSource_t1135106623 * ___audiosource_14;
	// UnityEngine.Quaternion PlayerMotor::calibrationQuaternion
	Quaternion_t4030073918  ___calibrationQuaternion_15;
	// System.Single PlayerMotor::speed
	float ___speed_16;
	// PlayerMotor/Boundary PlayerMotor::boundary
	Boundary_t401811049 * ___boundary_17;

public:
	inline static int32_t get_offset_of_controller_2() { return static_cast<int32_t>(offsetof(PlayerMotor_t2528789646, ___controller_2)); }
	inline CharacterController_t4094781467 * get_controller_2() const { return ___controller_2; }
	inline CharacterController_t4094781467 ** get_address_of_controller_2() { return &___controller_2; }
	inline void set_controller_2(CharacterController_t4094781467 * value)
	{
		___controller_2 = value;
		Il2CppCodeGenWriteBarrier(&___controller_2, value);
	}

	inline static int32_t get_offset_of_anim_3() { return static_cast<int32_t>(offsetof(PlayerMotor_t2528789646, ___anim_3)); }
	inline Animator_t69676727 * get_anim_3() const { return ___anim_3; }
	inline Animator_t69676727 ** get_address_of_anim_3() { return &___anim_3; }
	inline void set_anim_3(Animator_t69676727 * value)
	{
		___anim_3 = value;
		Il2CppCodeGenWriteBarrier(&___anim_3, value);
	}

	inline static int32_t get_offset_of_verticalVelocity_4() { return static_cast<int32_t>(offsetof(PlayerMotor_t2528789646, ___verticalVelocity_4)); }
	inline float get_verticalVelocity_4() const { return ___verticalVelocity_4; }
	inline float* get_address_of_verticalVelocity_4() { return &___verticalVelocity_4; }
	inline void set_verticalVelocity_4(float value)
	{
		___verticalVelocity_4 = value;
	}

	inline static int32_t get_offset_of_gravity_5() { return static_cast<int32_t>(offsetof(PlayerMotor_t2528789646, ___gravity_5)); }
	inline float get_gravity_5() const { return ___gravity_5; }
	inline float* get_address_of_gravity_5() { return &___gravity_5; }
	inline void set_gravity_5(float value)
	{
		___gravity_5 = value;
	}

	inline static int32_t get_offset_of_jumpForce_6() { return static_cast<int32_t>(offsetof(PlayerMotor_t2528789646, ___jumpForce_6)); }
	inline float get_jumpForce_6() const { return ___jumpForce_6; }
	inline float* get_address_of_jumpForce_6() { return &___jumpForce_6; }
	inline void set_jumpForce_6(float value)
	{
		___jumpForce_6 = value;
	}

	inline static int32_t get_offset_of_salto_7() { return static_cast<int32_t>(offsetof(PlayerMotor_t2528789646, ___salto_7)); }
	inline String_t* get_salto_7() const { return ___salto_7; }
	inline String_t** get_address_of_salto_7() { return &___salto_7; }
	inline void set_salto_7(String_t* value)
	{
		___salto_7 = value;
		Il2CppCodeGenWriteBarrier(&___salto_7, value);
	}

	inline static int32_t get_offset_of_saltoRan_8() { return static_cast<int32_t>(offsetof(PlayerMotor_t2528789646, ___saltoRan_8)); }
	inline int32_t get_saltoRan_8() const { return ___saltoRan_8; }
	inline int32_t* get_address_of_saltoRan_8() { return &___saltoRan_8; }
	inline void set_saltoRan_8(int32_t value)
	{
		___saltoRan_8 = value;
	}

	inline static int32_t get_offset_of_Piso_9() { return static_cast<int32_t>(offsetof(PlayerMotor_t2528789646, ___Piso_9)); }
	inline AudioSource_t1135106623 * get_Piso_9() const { return ___Piso_9; }
	inline AudioSource_t1135106623 ** get_address_of_Piso_9() { return &___Piso_9; }
	inline void set_Piso_9(AudioSource_t1135106623 * value)
	{
		___Piso_9 = value;
		Il2CppCodeGenWriteBarrier(&___Piso_9, value);
	}

	inline static int32_t get_offset_of_Salto_10() { return static_cast<int32_t>(offsetof(PlayerMotor_t2528789646, ___Salto_10)); }
	inline AudioSource_t1135106623 * get_Salto_10() const { return ___Salto_10; }
	inline AudioSource_t1135106623 ** get_address_of_Salto_10() { return &___Salto_10; }
	inline void set_Salto_10(AudioSource_t1135106623 * value)
	{
		___Salto_10 = value;
		Il2CppCodeGenWriteBarrier(&___Salto_10, value);
	}

	inline static int32_t get_offset_of_Agacho_11() { return static_cast<int32_t>(offsetof(PlayerMotor_t2528789646, ___Agacho_11)); }
	inline AudioSource_t1135106623 * get_Agacho_11() const { return ___Agacho_11; }
	inline AudioSource_t1135106623 ** get_address_of_Agacho_11() { return &___Agacho_11; }
	inline void set_Agacho_11(AudioSource_t1135106623 * value)
	{
		___Agacho_11 = value;
		Il2CppCodeGenWriteBarrier(&___Agacho_11, value);
	}

	inline static int32_t get_offset_of_tilt_12() { return static_cast<int32_t>(offsetof(PlayerMotor_t2528789646, ___tilt_12)); }
	inline int32_t get_tilt_12() const { return ___tilt_12; }
	inline int32_t* get_address_of_tilt_12() { return &___tilt_12; }
	inline void set_tilt_12(int32_t value)
	{
		___tilt_12 = value;
	}

	inline static int32_t get_offset_of_Heightoriginal_13() { return static_cast<int32_t>(offsetof(PlayerMotor_t2528789646, ___Heightoriginal_13)); }
	inline float get_Heightoriginal_13() const { return ___Heightoriginal_13; }
	inline float* get_address_of_Heightoriginal_13() { return &___Heightoriginal_13; }
	inline void set_Heightoriginal_13(float value)
	{
		___Heightoriginal_13 = value;
	}

	inline static int32_t get_offset_of_audiosource_14() { return static_cast<int32_t>(offsetof(PlayerMotor_t2528789646, ___audiosource_14)); }
	inline AudioSource_t1135106623 * get_audiosource_14() const { return ___audiosource_14; }
	inline AudioSource_t1135106623 ** get_address_of_audiosource_14() { return &___audiosource_14; }
	inline void set_audiosource_14(AudioSource_t1135106623 * value)
	{
		___audiosource_14 = value;
		Il2CppCodeGenWriteBarrier(&___audiosource_14, value);
	}

	inline static int32_t get_offset_of_calibrationQuaternion_15() { return static_cast<int32_t>(offsetof(PlayerMotor_t2528789646, ___calibrationQuaternion_15)); }
	inline Quaternion_t4030073918  get_calibrationQuaternion_15() const { return ___calibrationQuaternion_15; }
	inline Quaternion_t4030073918 * get_address_of_calibrationQuaternion_15() { return &___calibrationQuaternion_15; }
	inline void set_calibrationQuaternion_15(Quaternion_t4030073918  value)
	{
		___calibrationQuaternion_15 = value;
	}

	inline static int32_t get_offset_of_speed_16() { return static_cast<int32_t>(offsetof(PlayerMotor_t2528789646, ___speed_16)); }
	inline float get_speed_16() const { return ___speed_16; }
	inline float* get_address_of_speed_16() { return &___speed_16; }
	inline void set_speed_16(float value)
	{
		___speed_16 = value;
	}

	inline static int32_t get_offset_of_boundary_17() { return static_cast<int32_t>(offsetof(PlayerMotor_t2528789646, ___boundary_17)); }
	inline Boundary_t401811049 * get_boundary_17() const { return ___boundary_17; }
	inline Boundary_t401811049 ** get_address_of_boundary_17() { return &___boundary_17; }
	inline void set_boundary_17(Boundary_t401811049 * value)
	{
		___boundary_17 = value;
		Il2CppCodeGenWriteBarrier(&___boundary_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
