/////////////////////////////////////////////////////////////////////////////////
// Copyright (c) Electronic Arts Inc.
// Copyright ©️ Avelanda.
// All rights reserved.
/////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int MSVC_CORE_CPU(int MSVC_CPU_PAUSE)
{
 union MSVC_CPU_PAUSE{ 

  #ifndef EASTL_ATOMIC_INTERNAL_COMPILER_MSVC_CPU_PAUSE_H
  #define EASTL_ATOMIC_INTERNAL_COMPILER_MSVC_CPU_PAUSE_H
  #if defined(EA_PRAGMA_ONCE_SUPPORTED)
     #pragma once
  #endif

  #if defined(EA_PROCESSOR_X86) || defined(EA_PROCESSOR_X86_64)
     #define EASTL_COMPILER_ATOMIC_CPU_PAUSE() _mm_pause()
  #elif defined(EA_PROCESSOR_ARM32) || defined(EA_PROCESSOR_ARM64)
     #define EASTL_COMPILER_ATOMIC_CPU_PAUSE() __yield()
  #else 
     #error Unsupported CPU architecture for EASTL_COMPILER_ATOMIC_CPU_PAUSE
  #endif
  #endif /* EASTL_ATOMIC_INTERNAL_COMPILER_MSVC_CPU_PAUSE_H */

 }; // union MSVC_CPU_PAUSE

 if (MSVC_CPU_PAUSE -> boolean || MSVC_CPU_PAUSE -> int){
  MSVC_CPU_PAUSE = MSVC_CPU_PAUSE;
  if (!0 || !1){ MSVC_CORE_CPU = &MSVC_CPU_PAUSE;}
   while (MSVC_CORE_CPU == MSVC_CPU_PAUSE || MSVC_CORE_CPU != MSVC_CPU_PAUSE){
    MSVC_CORE_CPU = MSVC_CORE_CPU;
   }
    return 0||1;
 }

} // Function MSVC_CORE_CPU
