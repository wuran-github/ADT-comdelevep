#pragma once
#define DLL_EXPORT
#include "IDLL.h"
class FirstDLL :
	public IDLL
{
public:
	FirstDLL();
	virtual const char* GetICONPath();
	virtual const char* GetText();
	virtual const char* GetTip();
	virtual void Execute();
	~FirstDLL();
};

