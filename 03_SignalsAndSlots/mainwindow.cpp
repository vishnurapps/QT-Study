#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //Sender of the signal, signal function, receiver of the signal, function to execute when receiving function.
    connect(ui->verticalSlider,SIGNAL(valueChanged(int)),ui->progressBar,SLOT(setValue(int)));

    //removed the connection
    disconnect(ui->verticalSlider,SIGNAL(valueChanged(int)),ui->progressBar,SLOT(setValue(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}
