#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Login_clicked()
{
    if(ui->lineEdit_Username->text() == "test" && ui->lineEdit_Password->text() == "test123")
    {
        QMessageBox::information(this, "Login", "Authentication Successful");
        hide();
        diag = new Dialog(this);
        diag->show();
    }
    else
    {
        QMessageBox::warning(this, "Login", "Authentication failed");
    }
}
