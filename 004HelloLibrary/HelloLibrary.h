#ifndef __HELLO_LIBRARY
#define __HELLO_LIBRARY

#define EXPORTTING

#include <iostream>

#ifndef EXPORTTING
#define DECLSPEC __declspec(dllimport)
#else
#define DECLSPEC __declspec(dllexport)
#endif // EXPORTTING

void DECLSPEC hello_library();

#endif //__HELLO_LIBRARY
