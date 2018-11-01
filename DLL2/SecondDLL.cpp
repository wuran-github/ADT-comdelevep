#include "stdafx.h"
#include "SecondDLL.h"


SecondDLL::SecondDLL()
{
}

const char * SecondDLL::GetICONPath()
{
	return "H:/Lession/ico/ico/t2.ico";
}

const char * SecondDLL::GetText()
{
	return "DLL2";
}

const char * SecondDLL::GetTip()
{
	return "This is DLL2";
}

void SecondDLL::Execute()
{
}


SecondDLL::~SecondDLL()
{
}

IDLL* __stdcall GetInstance() {
	IDLL* dll = new SecondDLL();
	return dll;
}
