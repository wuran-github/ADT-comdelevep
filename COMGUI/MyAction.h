#pragma once
#include <QtWidgets/QMainWindow>
#include <QAction> 
#include <QtWidgets/QLineEdit>
#include "IDLL.h"
#include "ICalcDLL.h"
class MyAction:public QAction
{
	Q_OBJECT
public:
	MyAction(const QString &text, QObject *parent = nullptr);
	IDLL* dll;
	ICalcDLL* calcDLL;
	QLineEdit *Num1;
	QLineEdit *Num2;
	QLineEdit *result;
	~MyAction();
public slots:
	void Execute();
	void Calc();
};

