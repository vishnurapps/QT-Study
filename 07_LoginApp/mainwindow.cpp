#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("/home/vishnu/Desktop/login.png");
    ui->label_pic->setPixmap(pix.scaled(ui->label_pic->width(), ui->label_pic->height(), Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Login_clicked()
{
    if(ui->lineEdit_Username->text() == "test" && ui->lineEdit_Password->text() == "test123")
    {
//        QMessageBox::information(this, "Login", "Authentication Successful");
//        hide();
//        diag = new Dialog(this);
//        diag->show();
        ui->statusBar->showMessage("Username and password correct", 3000);
    }
    else
    {
//        QMessageBox::warning(this, "Login", "Authentication failed");
        ui->statusBar->showMessage("Username and password incorrect", 3000);
    }
}
