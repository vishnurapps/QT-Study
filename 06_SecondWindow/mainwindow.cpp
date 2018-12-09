#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"

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


void MainWindow::on_pushButton_clicked()
{
    /*
        If we want the main window to be hidden when opening the second
        window, we can use the hide method.
    */
    hide();

    /*
        In this approach the parent window is not accessable.
        To make it accessable, we need to create a pointer of Diag
    */
//    Dialog diag;
//    diag.setModal(true);
//    diag.exec();

    /*
        If we use this approach, both windows will be accessable
    */
    Dialog *diag = new Dialog(this);
    diag->show();
}
