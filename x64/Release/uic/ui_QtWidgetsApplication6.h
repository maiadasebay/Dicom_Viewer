/********************************************************************************
** Form generated from reading UI file 'QtWidgetsApplication6.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTWIDGETSAPPLICATION6_H
#define UI_QTWIDGETSAPPLICATION6_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtWidgetsApplication6Class
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtWidgetsApplication6Class)
    {
        if (QtWidgetsApplication6Class->objectName().isEmpty())
            QtWidgetsApplication6Class->setObjectName(QString::fromUtf8("QtWidgetsApplication6Class"));
        QtWidgetsApplication6Class->resize(600, 400);
        menuBar = new QMenuBar(QtWidgetsApplication6Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        QtWidgetsApplication6Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtWidgetsApplication6Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QtWidgetsApplication6Class->addToolBar(mainToolBar);
        centralWidget = new QWidget(QtWidgetsApplication6Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QtWidgetsApplication6Class->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QtWidgetsApplication6Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QtWidgetsApplication6Class->setStatusBar(statusBar);

        retranslateUi(QtWidgetsApplication6Class);

        QMetaObject::connectSlotsByName(QtWidgetsApplication6Class);
    } // setupUi

    void retranslateUi(QMainWindow *QtWidgetsApplication6Class)
    {
        QtWidgetsApplication6Class->setWindowTitle(QCoreApplication::translate("QtWidgetsApplication6Class", "QtWidgetsApplication6", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtWidgetsApplication6Class: public Ui_QtWidgetsApplication6Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTWIDGETSAPPLICATION6_H
