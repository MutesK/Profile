#include <iostream>
#include <Windows.h>
#include "Profiler.h"

#ifdef PROFILE_CHECK
	#define PRO_BEGIN(x)  ProfileBegin(x)
	#define PRO_END(x)  ProfileEnd(x)
#else
	#define PRO_BEGIN(x)
	#define PRO_END(x)
#endif

void main()
{
	PRO_BEGIN("FreqTest");
	Sleep(1000);
	PRO_END("FreqTest");

	PRO_BEGIN("FreqTest");
	Sleep(1000);
	PRO_END("FreqTest");

	PRO_BEGIN("FreqTest");
	Sleep(1000);
	PRO_END("FreqTest");

	PRO_BEGIN("FreqTest");
	Sleep(1000);
	PRO_END("FreqTest");

	ProfileOutText("FreqTest.txt");
}