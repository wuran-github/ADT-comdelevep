#include "COMGUI.h"
#include <Windows.h>
#include <io.h>
#include <qdir.h>
#include "IDLL.h"
COMGUI::COMGUI(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	CreateUI();
}

void COMGUI::CreateUI()
{
	ui.mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
	QStringList dllList =GetFiles();
	for (int i = 0; i < dllList.size(); i++) {

		auto ss = dllList[i].toStdString();
		const char* name = ss.c_str();
		HINSTANCE hdll = LoadLibraryA(name);
		if (hdll != NULL) {
			GetDLL dfun = (GetDLL)::GetProcAddress(hdll, "GetInstance");
			if (dfun != NULL) {
				IDLL* dll = (*dfun)();
				if (dll != NULL) {

					QAction *q = new QAction(dll->GetText(), this);
					q->setStatusTip(dll->GetTip());
					q->setIconText(dll->GetText());
					q->setIcon(QIcon(dll->GetICONPath()));
					actionList.push_back(q);
					ui.mainToolBar->addAction(q);
					
				}
			}
			::FreeLibrary(hdll);

		}
	}
	
	
}

COMGUI::~COMGUI()
{
	for (int i = 0; i < actionList.size(); i++) {
		delete actionList[i];
		actionList[i] = NULL;
	}
}

QStringList COMGUI::GetFiles()
{

	QString path= QCoreApplication::applicationDirPath();
	QDir dir(path);
	QStringList filters;
	filters.push_back("*.dll");
	QStringList dllList=dir.entryList(filters, QDir::Files);
	return dllList;
}



