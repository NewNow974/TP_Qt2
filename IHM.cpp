//
// Created by Anselmet on 18/03/2020.
//

#include "IHM.h"

IHM::IHM(QWidget *parent) : QMainWindow(parent){

    this->setWindowTitle("IHM");
    this->setMinimumWidth(500);
    QWidget* mainWidget = new QWidget();

    QVBoxLayout* mainLayout = new QVBoxLayout();
    this->progressBar1 = new QProgressBar();
    mainLayout->addWidget(progressBar1);
    this->slider1=new QSlider(Qt::Horizontal);

    mainLayout->addWidget(slider1);
    mainWidget->setLayout(mainLayout);
    this->setCentralWidget(mainWidget);

    QObject::connect(slider1, SIGNAL (valueChanged(int)), progressBar1, SLOT (setValue(int)));
    emit signalValueChanged(3);

}

void IHM::slotSetValue(int value) {

    this->value=value;

}
