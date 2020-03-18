//
// Created by Anselmet on 18/03/2020.
//

#include "exo2.h"
using namespace std;

exo2::exo2(QMainWindow *fenetre) {
    QWidget* mainWidget = new QWidget();
    QVBoxLayout* mainLayout = new QVBoxLayout();

    b1 = new QPushButton("Fils");
    b1->setToolTip("Non");
    e1 = new QTextEdit("texte initial");

    mainLayout->addWidget(b1);
    mainLayout->addWidget(e1);
    mainWidget->setLayout(mainLayout);

    this->setCentralWidget(mainWidget);
    this->setWindowTitle("IHM");

    //QObject::connect(b1, SIGNAL (clicked()), qApp, SLOT (quit())); //Ferme la fenetre !
    QObject::connect(b1, SIGNAL (clicked()), this, SLOT (changeButton()));

}

void exo2::changeButton() {
    b1->setText("Example");
    b1->setToolTip("Oui");

    value++;
    QString texte = "Example"+ QString::number(value) + "\n" + e1->toPlainText();
    e1->clear();
    e1->setText(texte);

    cout << "Example" << value << endl;

    IHM *fenetre1=new IHM;
    //fenetre1->show();

}
