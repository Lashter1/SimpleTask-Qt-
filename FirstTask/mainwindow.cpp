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
}


void MainWindow::on_pushButton_clicked()
{
    int a = 5 + rand() %10;
    int b = 15 + rand () %30;
    ui->textBrowser->setText(QString::number(a));
    ui->textBrowser_2->setText(QString::number(b));

}

