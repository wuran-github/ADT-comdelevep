#include "stdafx.h"
#include "Add.h"


Add::Add()
{
}

const char * Add::GetICONPath()
{
	return "H:/Lession/ico/ico/t3.ico";
}

const char * Add::GetText()
{
	return "ADD";
}

const char * Add::GetTip()
{
	return "This is ADD";
}

double Add::Execute(double n1, double n2)
{
	return n1 + n2;
}


Add::~Add()
{
}

ICalcDLL* __stdcall GetInstance() {
	ICalcDLL* dll = new Add();
	return dll;
}
