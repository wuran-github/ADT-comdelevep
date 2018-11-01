#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_COMGUI.h"

class COMGUI : public QMainWindow
{
	Q_OBJECT

public:
	COMGUI(QWidget *parent = Q_NULLPTR);

private:
	Ui::COMGUIClass ui;
};
