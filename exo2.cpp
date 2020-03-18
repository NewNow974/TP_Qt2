//
// Created by Anselmet on 18/03/2020.
//

#include "exo2.h"

exo2::exo2(QMainWindow *fenetre) {
    QWidget* mainWidget = new QWidget();
    QVBoxLayout* mainLayout = new QVBoxLayout();

    b1 = new QPushButton("Fils");
    b1->setToolTip("Non");

    mainLayout->addWidget(b1);
    mainWidget->setLayout(mainLayout);

    this->setCentralWidget(mainWidget);
    this->setWindowTitle("IHM");

    //QObject::connect(b1, SIGNAL (clicked()), qApp, SLOT (quit())); //Ferme la fenetre !
    QObject::connect(b1, SIGNAL (clicked()), this, SLOT (changeButton()));

}

void exo2::changeButton() {
    b1->setText("Example");
    b1->setToolTip("Oui");

    QWidget* mainWidget = new QWidget();
}
