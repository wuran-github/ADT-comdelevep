#include "stdafx.h"
#include "SecondDLL.h"
#include "MessageDLL.h"

#pragma comment(lib,"H:/Lession/code/newcpp/COMDevelop/x64/Debug/QTDLL.lib")

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
	MessageDLL md;
	md.Alert(this->GetTip());
}


SecondDLL::~SecondDLL()
{
}

IDLL* __stdcall GetInstance() {
	IDLL* dll = new SecondDLL();
	return dll;
}
