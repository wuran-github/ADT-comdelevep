#include "stdafx.h"
#include "Mult.h"


Mult::Mult()
{
}

const char * Mult::GetICONPath()
{
	return "H:/Lession/ico/ico/t5.ico";
}

const char * Mult::GetText()
{
	return "Mult";
}

const char * Mult::GetTip()
{
	return "This is Mult";
}

double Mult::Execute(double n1, double n2)
{
	return n1 * n2;
}


Mult::~Mult()
{
}

ICalcDLL* __stdcall GetInstance() {
	ICalcDLL* dll = new Mult();
	return dll;
}
