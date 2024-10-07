#pragma once

/* 편의상 변수 타입을 임의로 변경하는 헤더 */

using int8	 = __int8;
using int16	 = __int16;
using int32	 = __int32;
using int64	 = __int64;
using uint8	 = unsigned __int8;
using uint16 = unsigned __int16;
using uint32 = unsigned __int32;
using uint64 = unsigned __int64;

struct Pos {
	float x = 0;
	float y = 0;
};