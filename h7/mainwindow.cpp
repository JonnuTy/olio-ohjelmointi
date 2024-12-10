#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    // connect(object1, SIGNAL(signaali-funktio), object2, SLOT(slot-funktio) );
}

void MainWindow::on_btnCount_clicked()
{
    qDebug()<<"Klikkasit buttonia Count";

    counter++;

    QString s = QString::number(counter);

    ui->txtResult->setText(s);

    QString labelText = QString("Painiketta painettu %1 kertaa").arg(counter);
    ui->labelInfo->setText(labelText);
}


void MainWindow::on_btnReset_clicked()
{
    qDebug()<<"Klikkasit buttonia Reset";

    counter = 0;

    QString s = QString::number(counter);

    ui->txtResult->setText(s);

    QString labelText = QString("Painiketta painettu %1 kertaa").arg(counter);
    ui->labelInfo->setText(labelText);
}

