#pragma once
#ifndef _IKPERSON_H_
#define _IKPERSON_H_
#endif // !_IKPERSON_H_

#ifdef DLL_EXPORT
#define DLL_API extern "C" __declspec(dllexport)
#else
#define DLL_API extern "C" __declspec(dllimport)
#endif // DLL_EXPORT

class ICalcDLL {
public:
	virtual ~ICalcDLL() {

	}
	virtual const char* GetICONPath() = 0;
	virtual const char* GetText() = 0;
	virtual const char* GetTip() = 0;
	virtual double Execute(double n1,double n2) = 0;
};

DLL_API ICalcDLL* __stdcall GetInstance();
typedef ICalcDLL* (__stdcall *GetDLL)();

