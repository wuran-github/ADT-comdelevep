#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_COMGUI.h"
#include <string>
#include "MyAction.h"
class COMGUI : public QMainWindow
{
	Q_OBJECT

public:
	COMGUI(QWidget *parent = Q_NULLPTR);
	void CreateUI();
	~COMGUI();
private:
	Ui::COMGUIClass ui;
	std::vector<MyAction*> actionList;
private:
	QStringList GetFiles();
};
