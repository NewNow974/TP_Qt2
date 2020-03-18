#include <iostream>
#include <QApplication>
#include <QPushButton>
#include "IHM.h"

int main(int argc, char **argv) {
    QApplication app (argc, argv);


    IHM *fenetre1=new IHM;
    fenetre1->show();

    return app.exec();
}
