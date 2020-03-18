#include <iostream>
#include <QApplication>
#include <QPushButton>
#include "IHM.h"

int main(int argc, char **argv) {
    QApplication app (argc, argv);

    QWidget fenetre;
    fenetre.setFixedSize(1000,500);

    QPushButton parent ("Parent", &fenetre);
    parent.setFixedSize(300,200);

    QPushButton fils("Fils", &fenetre);
    fils.setFixedSize(200,100);
    fils.setGeometry(50,50,80,30);

    IHM *fenetre1=new IHM;
    fenetre1->show();

    return app.exec();
}
