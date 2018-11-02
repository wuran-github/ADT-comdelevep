#pragma once
#include "ICalcDLL.h"
#define DLL_EXPORT
class Sub :
	public ICalcDLL
{
public:
	Sub();
	virtual const char* GetICONPath();
	virtual const char* GetText();
	virtual const char* GetTip();
	virtual double Execute(double n1, double n2);
	~Sub();
};

