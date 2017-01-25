#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Canvas
struct Canvas_t209405766;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Market
struct  Market_t2403379856  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Canvas Market::canvas
	Canvas_t209405766 * ___canvas_2;

public:
	inline static int32_t get_offset_of_canvas_2() { return static_cast<int32_t>(offsetof(Market_t2403379856, ___canvas_2)); }
	inline Canvas_t209405766 * get_canvas_2() const { return ___canvas_2; }
	inline Canvas_t209405766 ** get_address_of_canvas_2() { return &___canvas_2; }
	inline void set_canvas_2(Canvas_t209405766 * value)
	{
		___canvas_2 = value;
		Il2CppCodeGenWriteBarrier(&___canvas_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
