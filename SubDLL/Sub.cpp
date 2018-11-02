#include "stdafx.h"
#include "Sub.h"


Sub::Sub()
{
}

const char * Sub::GetICONPath()
{
	return "H:/Lession/ico/ico/t4.ico";
}

const char * Sub::GetText()
{
	return "Sub";
}

const char * Sub::GetTip()
{
	return "This is Sub";
}

double Sub::Execute(double n1, double n2)
{
	return n1 - n2;
}


Sub::~Sub()
{
}

ICalcDLL* __stdcall GetInstance() {
	ICalcDLL* dll = new Sub();
	return dll;
}
