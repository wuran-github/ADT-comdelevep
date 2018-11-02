/********************************************************************************
** Form generated from reading UI file 'COMGUI.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMGUI_H
#define UI_COMGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_COMGUIClass
{
public:
    QWidget *centralWidget;
    QLineEdit *Num1;
    QLineEdit *Num2;
    QLabel *label;
    QLineEdit *result;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *COMGUIClass)
    {
        if (COMGUIClass->objectName().isEmpty())
            COMGUIClass->setObjectName(QStringLiteral("COMGUIClass"));
        COMGUIClass->resize(600, 400);
        centralWidget = new QWidget(COMGUIClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Num1 = new QLineEdit(centralWidget);
        Num1->setObjectName(QStringLiteral("Num1"));
        Num1->setGeometry(QRect(120, 140, 51, 20));
        Num2 = new QLineEdit(centralWidget);
        Num2->setObjectName(QStringLiteral("Num2"));
        Num2->setGeometry(QRect(210, 140, 51, 20));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(270, 140, 16, 16));
        result = new QLineEdit(centralWidget);
        result->setObjectName(QStringLiteral("result"));
        result->setGeometry(QRect(290, 140, 113, 20));
        COMGUIClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(COMGUIClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        COMGUIClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(COMGUIClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        COMGUIClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(COMGUIClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        COMGUIClass->setStatusBar(statusBar);

        retranslateUi(COMGUIClass);

        QMetaObject::connectSlotsByName(COMGUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *COMGUIClass)
    {
        COMGUIClass->setWindowTitle(QApplication::translate("COMGUIClass", "COMGUI", nullptr));
        label->setText(QApplication::translate("COMGUIClass", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class COMGUIClass: public Ui_COMGUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMGUI_H
