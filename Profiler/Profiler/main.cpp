#include <iostream>
#include <Windows.h>
#include <locale.h>
#include "CProfiler.h"



void main()
{
	setlocale(LC_ALL, "");

	PRO_BEGIN(L"FreqTest");
	Sleep(1000);
	PRO_END(L"FreqTest");

	PRO_BEGIN(L"FreqTest");
	Sleep(1000);
	PRO_END(L"FreqTest");

	PRO_BEGIN(L"FreqTest");
	Sleep(1000);
	PRO_END(L"FreqTest");

	PRO_BEGIN(L"FreqTest");
	Sleep(1000);
	PRO_END(L"FreqTest");

	PRO_TEXT(L"FreqTest.txt");
}