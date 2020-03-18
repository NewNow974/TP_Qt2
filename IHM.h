//
// Created by Anselmet on 18/03/2020.
//

#ifndef TP_QT_IHM_H
#define TP_QT_IHM_H
#include <QtWidgets/QWidget>
#include <QtWidgets/QPushButton>
#include <QMainWindow>
#include <QProgressBar>
#include <QSlider>
#include <QString>
#include <QVBoxLayout>


class IHM : public QMainWindow {
Q_OBJECT
public:
    IHM(QWidget* parent = nullptr);

public slots:
    void slotSetValue(int value);
signals:
    void signalValueChanged(int value);
private:
    QProgressBar* progressBar1;
    QSlider* slider1;
    int value=5;
};


#endif //TP_QT_IHM_H
