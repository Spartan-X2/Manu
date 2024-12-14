#pragma once
#ifdef MN_PLATFORM_WINDOWS
       #ifdef MN_BUILD_DLL
              #define MANU_API __declspec(dllexport)
       #else    
              #define MANU_API __declspec(dllimport)
       #endif
#else 
     #error MANU ONLY SUPPORT WINDOWS!
#endif // MN_PLATFORM_WINDOWS
