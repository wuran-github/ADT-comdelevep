#pragma once

#ifdef MY_DLL_API

#define MY_DLL_API _declspec(dllexport)

#else

#define MY_DLL_API _declspec(dllimport)

#endif
class MY_DLL_API MessageDLL
{
public:
	MessageDLL();
	void Alert(const char* str);
	~MessageDLL();
};

