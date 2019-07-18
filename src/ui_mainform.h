/********************************************************************************
** Form generated from reading UI file 'mainform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINFORM_H
#define UI_MAINFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainformClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QCheckBox *checkBox;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainformClass)
    {
        if (MainformClass->objectName().isEmpty())
            MainformClass->setObjectName(QString::fromUtf8("MainformClass"));
        MainformClass->resize(600, 400);
        centralWidget = new QWidget(MainformClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 100, 93, 28));
        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(150, 100, 91, 19));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(40, 150, 291, 87));
        MainformClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainformClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 26));
        MainformClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainformClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainformClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainformClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainformClass->setStatusBar(statusBar);

        retranslateUi(MainformClass);

        QMetaObject::connectSlotsByName(MainformClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainformClass)
    {
        MainformClass->setWindowTitle(QApplication::translate("MainformClass", "Mainform", nullptr));
        pushButton->setText(QApplication::translate("MainformClass", "\345\274\200\345\247\213\345\255\246\344\271\240", nullptr));
        checkBox->setText(QApplication::translate("MainformClass", "\345\235\232\346\214\201\344\270\215\346\207\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainformClass: public Ui_MainformClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINFORM_H
