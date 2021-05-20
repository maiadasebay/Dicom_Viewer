#include "QtWidgetsApplication6.h"


QtWidgetsApplication6::QtWidgetsApplication6(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    scene = new QGraphicsScene(this);
    
    
}
void QtWidgetsApplication6::on_load_btn_clicked()
{
    
    DcmFile file("dc1.DCM");
    DcmDataset dataset = file.read();

    if (file.isError()) {
        qDebug() << "Error reading DICOM file:" << file.errorText();
        ui.test_lb->setText(file.errorText());
    }
    else {
        ui.test_lb->setText("Load Success! ");
        DcmImage image(dataset);
        if (image.photometricInterpretation().isGrayscale())
        {
            DcmMonochromeImage monoImage(dataset);
            DcmImageTransferFunction tf;

            double windowCenter = monoImage.windowCenter();
            double windowWidth = monoImage.windowWidth();

            tf.addReferencePoint(windowCenter - windowWidth / 2, QColor(0, 0, 0));
            tf.addReferencePoint(windowCenter + windowWidth / 2, QColor(255, 255, 255));

            QImage qImage = monoImage.toQImage(tf);
            qImage.save("dicom1.png");

            scene->addPixmap(QPixmap::fromImage(qImage));
            ui.display_view->setScene(scene);
            ui.display_view->show();

        }
    }
}
