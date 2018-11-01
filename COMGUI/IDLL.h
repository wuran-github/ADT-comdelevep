#pragma once
#ifndef _IKPERSON_H_
#define _IKPERSON_H_
#endif // !_IKPERSON_H_

#ifdef DLL_EXPORT
#define DLL_API extern "C" __declspec(dllexport)
#else
#define DLL_API extern "C" __declspec(dllimport)
#endif // DLL_EXPORT

class IDLL {
public:
	virtual ~IDLL() {

	}
	virtual const char* GetICONPath() = 0;
	virtual const char* GetText() = 0;
	virtual const char* GetTip() = 0;
	virtual void Execute() = 0;
};

DLL_API IDLL* __stdcall GetInstance();
typedef IDLL* (__stdcall *GetDLL)();

