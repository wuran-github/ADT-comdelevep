#include "stdafx.h"
#include "Div.h"


Div::Div()
{
}

const char * Div::GetICONPath()
{
	return "./ico/t6.ico";
}

const char * Div::GetText()
{
	return "Div";
}

const char * Div::GetTip()
{
	return "This is Div";
}

double Div::Execute(double n1, double n2)
{
	return n1 / n2;
}


Div::~Div()
{
}

ICalcDLL* __stdcall GetInstance() {
	ICalcDLL* dll = new Div();
	return dll;
}
