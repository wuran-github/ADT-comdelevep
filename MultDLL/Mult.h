#pragma once
#include "ICalcDLL.h"
#define DLL_EXPORT
class Mult :
	public ICalcDLL
{
public:
	Mult();
	virtual const char* GetICONPath();
	virtual const char* GetText();
	virtual const char* GetTip();
	virtual double Execute(double n1, double n2);
	~Mult();
};

