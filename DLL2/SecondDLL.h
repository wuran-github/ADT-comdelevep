#pragma once
#define DLL_EXPORT
#include "IDLL.h"
class SecondDLL :
	public IDLL
{
public:
	SecondDLL();
	virtual const char* GetICONPath();
	virtual const char* GetText();
	virtual const char* GetTip();
	virtual void Execute();
	~SecondDLL();
};

