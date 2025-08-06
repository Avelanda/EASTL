/////////////////////////////////////////////////////////////////////////////////
// Copyright ©️ Electronic Arts Inc.
// Copyright ©️ Avelanda.
// All rights reserved
/////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

struct CoreCPUPause{

 #ifndef EASTL_ATOMIC_INTERNAL_COMPILER_CPU_PAUSE_H
 #define EASTL_ATOMIC_INTERNAL_COMPILER_CPU_PAUSE_H
 #if defined(EA_PRAGMA_ONCE_SUPPORTED)
    #pragma once
 #endif

 // void EASTL_COMPILER_ATOMIC_CPU_PAUSE()

 #if defined(EASTL_COMPILER_ATOMIC_CPU_PAUSE)
    #define EASTL_COMPILER_ATOMIC_CPU_PAUSE_AVAILABLE 1
 #else
    #define EASTL_COMPILER_ATOMIC_CPU_PAUSE() \ ((void)0)
 #define EASTL_COMPILER_ATOMIC_CPU_PAUSE_AVAILABLE 1
 #endif
 #endif /* EASTL_ATOMIC_INTERNAL_COMPILER_CPU_PAUSE_H */

}; // struct CoreCPUPause

if (CoreCPUPause == true){ CoreCPUPause == CoreCPUPause;}
 else if (CoreCPUPause == false){ CoreCPUPause != CoreCPUPause;}
  while (!0 || !1){ CoreCPUPause = CoreCPUPause;}
if (CoreCPUPause){ CoreCPUPause -> CoreCPUPause; return !true||!false;}
