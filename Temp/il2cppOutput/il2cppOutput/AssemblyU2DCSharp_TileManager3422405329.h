#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.Transform
struct Transform_t3275118058;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TileManager
struct  TileManager_t3422405329  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject[] TileManager::TilesPrefabs
	GameObjectU5BU5D_t3057952154* ___TilesPrefabs_2;
	// UnityEngine.Transform TileManager::playerTransform
	Transform_t3275118058 * ___playerTransform_3;
	// System.Single TileManager::spawnZ
	float ___spawnZ_4;
	// System.Single TileManager::TileLength
	float ___TileLength_5;
	// System.Int32 TileManager::amnTilesOnScreen
	int32_t ___amnTilesOnScreen_6;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> TileManager::activeTiles
	List_1_t1125654279 * ___activeTiles_7;
	// System.Single TileManager::safeZone
	float ___safeZone_8;
	// System.Single TileManager::easyZone
	float ___easyZone_9;
	// System.Int32 TileManager::lastPrefabIndex
	int32_t ___lastPrefabIndex_10;

public:
	inline static int32_t get_offset_of_TilesPrefabs_2() { return static_cast<int32_t>(offsetof(TileManager_t3422405329, ___TilesPrefabs_2)); }
	inline GameObjectU5BU5D_t3057952154* get_TilesPrefabs_2() const { return ___TilesPrefabs_2; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_TilesPrefabs_2() { return &___TilesPrefabs_2; }
	inline void set_TilesPrefabs_2(GameObjectU5BU5D_t3057952154* value)
	{
		___TilesPrefabs_2 = value;
		Il2CppCodeGenWriteBarrier(&___TilesPrefabs_2, value);
	}

	inline static int32_t get_offset_of_playerTransform_3() { return static_cast<int32_t>(offsetof(TileManager_t3422405329, ___playerTransform_3)); }
	inline Transform_t3275118058 * get_playerTransform_3() const { return ___playerTransform_3; }
	inline Transform_t3275118058 ** get_address_of_playerTransform_3() { return &___playerTransform_3; }
	inline void set_playerTransform_3(Transform_t3275118058 * value)
	{
		___playerTransform_3 = value;
		Il2CppCodeGenWriteBarrier(&___playerTransform_3, value);
	}

	inline static int32_t get_offset_of_spawnZ_4() { return static_cast<int32_t>(offsetof(TileManager_t3422405329, ___spawnZ_4)); }
	inline float get_spawnZ_4() const { return ___spawnZ_4; }
	inline float* get_address_of_spawnZ_4() { return &___spawnZ_4; }
	inline void set_spawnZ_4(float value)
	{
		___spawnZ_4 = value;
	}

	inline static int32_t get_offset_of_TileLength_5() { return static_cast<int32_t>(offsetof(TileManager_t3422405329, ___TileLength_5)); }
	inline float get_TileLength_5() const { return ___TileLength_5; }
	inline float* get_address_of_TileLength_5() { return &___TileLength_5; }
	inline void set_TileLength_5(float value)
	{
		___TileLength_5 = value;
	}

	inline static int32_t get_offset_of_amnTilesOnScreen_6() { return static_cast<int32_t>(offsetof(TileManager_t3422405329, ___amnTilesOnScreen_6)); }
	inline int32_t get_amnTilesOnScreen_6() const { return ___amnTilesOnScreen_6; }
	inline int32_t* get_address_of_amnTilesOnScreen_6() { return &___amnTilesOnScreen_6; }
	inline void set_amnTilesOnScreen_6(int32_t value)
	{
		___amnTilesOnScreen_6 = value;
	}

	inline static int32_t get_offset_of_activeTiles_7() { return static_cast<int32_t>(offsetof(TileManager_t3422405329, ___activeTiles_7)); }
	inline List_1_t1125654279 * get_activeTiles_7() const { return ___activeTiles_7; }
	inline List_1_t1125654279 ** get_address_of_activeTiles_7() { return &___activeTiles_7; }
	inline void set_activeTiles_7(List_1_t1125654279 * value)
	{
		___activeTiles_7 = value;
		Il2CppCodeGenWriteBarrier(&___activeTiles_7, value);
	}

	inline static int32_t get_offset_of_safeZone_8() { return static_cast<int32_t>(offsetof(TileManager_t3422405329, ___safeZone_8)); }
	inline float get_safeZone_8() const { return ___safeZone_8; }
	inline float* get_address_of_safeZone_8() { return &___safeZone_8; }
	inline void set_safeZone_8(float value)
	{
		___safeZone_8 = value;
	}

	inline static int32_t get_offset_of_easyZone_9() { return static_cast<int32_t>(offsetof(TileManager_t3422405329, ___easyZone_9)); }
	inline float get_easyZone_9() const { return ___easyZone_9; }
	inline float* get_address_of_easyZone_9() { return &___easyZone_9; }
	inline void set_easyZone_9(float value)
	{
		___easyZone_9 = value;
	}

	inline static int32_t get_offset_of_lastPrefabIndex_10() { return static_cast<int32_t>(offsetof(TileManager_t3422405329, ___lastPrefabIndex_10)); }
	inline int32_t get_lastPrefabIndex_10() const { return ___lastPrefabIndex_10; }
	inline int32_t* get_address_of_lastPrefabIndex_10() { return &___lastPrefabIndex_10; }
	inline void set_lastPrefabIndex_10(int32_t value)
	{
		___lastPrefabIndex_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
