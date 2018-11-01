#include "stdafx.h"
#include "FirstDLL.h"


FirstDLL::FirstDLL()
{
}

const char * FirstDLL::GetICONPath()
{
	return "H:/Lession/ico/ico/t1.ico";
}

const char * FirstDLL::GetText()
{
	return "Button1";
}

const char * FirstDLL::GetTip()
{
	return "This is DLL1";
}

void FirstDLL::Execute()
{
	std::cout << "this is DLL1" <<std::endl;
}


FirstDLL::~FirstDLL()
{
}

IDLL* __stdcall GetInstance() {
	IDLL* dll = new FirstDLL();
	return dll;
}
