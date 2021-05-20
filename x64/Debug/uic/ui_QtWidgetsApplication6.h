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
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtWidgetsApplication6Class
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QGraphicsView *display_view;
    QLabel *test_lb;
    QPushButton *load_btn;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtWidgetsApplication6Class)
    {
        if (QtWidgetsApplication6Class->objectName().isEmpty())
            QtWidgetsApplication6Class->setObjectName(QString::fromUtf8("QtWidgetsApplication6Class"));
        QtWidgetsApplication6Class->resize(600, 400);
        centralWidget = new QWidget(QtWidgetsApplication6Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        display_view = new QGraphicsView(centralWidget);
        display_view->setObjectName(QString::fromUtf8("display_view"));

        verticalLayout->addWidget(display_view);

        test_lb = new QLabel(centralWidget);
        test_lb->setObjectName(QString::fromUtf8("test_lb"));

        verticalLayout->addWidget(test_lb);

        load_btn = new QPushButton(centralWidget);
        load_btn->setObjectName(QString::fromUtf8("load_btn"));
        load_btn->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(load_btn);

        QtWidgetsApplication6Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtWidgetsApplication6Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        QtWidgetsApplication6Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtWidgetsApplication6Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QtWidgetsApplication6Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtWidgetsApplication6Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QtWidgetsApplication6Class->setStatusBar(statusBar);

        retranslateUi(QtWidgetsApplication6Class);

        QMetaObject::connectSlotsByName(QtWidgetsApplication6Class);
    } // setupUi

    void retranslateUi(QMainWindow *QtWidgetsApplication6Class)
    {
        QtWidgetsApplication6Class->setWindowTitle(QCoreApplication::translate("QtWidgetsApplication6Class", "QtWidgetsApplication6", nullptr));
        test_lb->setText(QCoreApplication::translate("QtWidgetsApplication6Class", "TextLabel", nullptr));
        load_btn->setText(QCoreApplication::translate("QtWidgetsApplication6Class", "Load DICOM Image", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtWidgetsApplication6Class: public Ui_QtWidgetsApplication6Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTWIDGETSAPPLICATION6_H
