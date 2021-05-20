#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtWidgetsApplication6.h"
#include <dcmcore\DcmDataset.h>
#include <dcmcore\DcmTagPixelData.h>
#include <dcmcore\DcmFile.h>
#include<dcmimage\DcmImage.h>
#include <qdebug.h>
#include <dcmimage\DcmMonochromeImage.h>




class QtWidgetsApplication6 : public QMainWindow
{
    Q_OBJECT

public:
    QtWidgetsApplication6(QWidget *parent = Q_NULLPTR);

private slots:
    void on_load_btn_clicked();

private:
    Ui::QtWidgetsApplication6Class ui;
    QGraphicsScene* scene;
   

};
