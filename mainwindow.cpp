#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->textEdit->setPlainText("5");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    obj.putText(ui->plainTextEdit->toPlainText());
    obj.convertPlain();
    ui->plainTextEdit_2->setPlainText(obj.goCaesar());

}

void MainWindow::on_pushButton_2_clicked()
{
    obj.putText(ui->plainTextEdit_2->toPlainText());
    obj.convertCipher();
    ui->plainTextEdit->setPlainText(obj.goCaesar());
}

void MainWindow::on_pushButton_3_clicked()
{
    obj.setShift((ui->textEdit->toPlainText()).toInt());
}
