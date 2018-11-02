#include "MyAction.h"



MyAction::MyAction(const QString &text, QObject *parent):QAction(text,parent)
{

}


void MyAction::Execute()
{
	if (this->dll != NULL) {
		this->dll->Execute();
	}
}

void MyAction::Calc() {
	if (this->calcDLL != NULL) {
		double n1 = this->Num1->text().toDouble();
		double n2 = this->Num2->text().toDouble();
		double re= this->calcDLL->Execute(n1,n2);
		this->result->setText(QString::number(re));
		//this->calcDLL->Execute();
	}
}

MyAction::~MyAction()
{
}
