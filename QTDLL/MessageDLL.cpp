#define MY_DLL_API _declspec(dllexport)
#include "MessageDLL.h"
#include "QtWidgets\qmessagebox.h"



MessageDLL::MessageDLL()
{
}

void MessageDLL::Alert(const char * str)
{
	QMessageBox::about(NULL, "Information", str);
}


MessageDLL::~MessageDLL()
{
}
