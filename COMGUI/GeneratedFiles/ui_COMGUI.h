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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_COMGUIClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *COMGUIClass)
    {
        if (COMGUIClass->objectName().isEmpty())
            COMGUIClass->setObjectName(QStringLiteral("COMGUIClass"));
        COMGUIClass->resize(600, 400);
        menuBar = new QMenuBar(COMGUIClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        COMGUIClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(COMGUIClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        COMGUIClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(COMGUIClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        COMGUIClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(COMGUIClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        COMGUIClass->setStatusBar(statusBar);

        retranslateUi(COMGUIClass);

        QMetaObject::connectSlotsByName(COMGUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *COMGUIClass)
    {
        COMGUIClass->setWindowTitle(QApplication::translate("COMGUIClass", "COMGUI", nullptr));
    } // retranslateUi

};

namespace Ui {
    class COMGUIClass: public Ui_COMGUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMGUI_H
