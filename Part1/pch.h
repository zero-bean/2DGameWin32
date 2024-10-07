#pragma once

/* precompiled header */

#include "Types.h"
#include "Defines.h"
#include "Enums.h"
#include "Utils.h"

#include <Windows.h>
#include <vector>
#include <list>
#include <map>
#include <unordered_map>
#include <string>
#include <algorithm>

using namespace std;

#include <format>

#define _CRTDEBG_MAP_ALLOC
#include <cstdlib>
#include <crtdbg.h>

#ifdef _DEBUG
#define new new(_NORMAL_BLOCK, __FILE__, __LINE__)
#endif // _DEBUG
