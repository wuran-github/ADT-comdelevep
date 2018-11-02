

#include "stdafx.h"
#include "FirstDLL.h"
#include "MessageDLL.h"

#pragma comment(lib,"H:/Lession/code/newcpp/COMDevelop/x64/Debug/QTDLL.lib")

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
	MessageDLL md;
	md.Alert(this->GetTip());
}


FirstDLL::~FirstDLL()
{
}

IDLL* __stdcall GetInstance() {
	IDLL* dll = new FirstDLL();
	return dll;
}
