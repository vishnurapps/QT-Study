#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);          //opens the window
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_close_clicked()
{
    ui->label->setText("Button is clicked !!!");
}
