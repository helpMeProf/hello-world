#include "mainwindow.h"
#include "ui_mainwindow.h"


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
    Gamble gamblewindow;
    gamblewindow.setModal(true);
    gamblewindow.exec();
}

void MainWindow::on_pushButton_2_clicked()
{
    NotePad notepadWindow;
    notepadWindow.setModal(true);
    notepadWindow.exec();
}



void MainWindow::on_pushButton_5_clicked()
{
    TeamInfo teaminfo;
    teaminfo.setModal(true);
    teaminfo.exec();
}
