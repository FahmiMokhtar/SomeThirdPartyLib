// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files
#include <windows.h>



// reference additional headers your program requires here
#ifndef INDLL_H
#define INDLL_H

#ifdef EXPORTING_DLL
extern "C" { extern __declspec(dllexport) int addnumbers(int, int); }
#else
extern "C" { extern __declspec(dllimport) int addnumbers(int, int); }
#endif

#endif