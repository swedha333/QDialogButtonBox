#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QDebug>

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
    QString dir = QFileDialog::getExistingDirectory(this,tr("Open Directory"),
                                                           "C://",QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
    qDebug()<<"your chosen directory is:"<<dir;
    QString fileName = QFileDialog::getOpenFileName(this,tr("Open Image"), "C://", tr("Image Files (*.png *.jpg *.bmp)"));
    qDebug()<<"your chosen image is:"<<fileName;
    QStringList files = QFileDialog::getOpenFileNames(
                             this,
                             "Select one or more files to open",
                             "/home",
                             "Images (*.png *.xpm *.jpg);;Text files (*.txt);;XML files (*.xml)");
    qDebug()<<"your chosen images is:"<<files;


    QString file = QFileDialog::getSaveFileName(this, tr("Save File"),
                                "C://untitled.png",
                                tr("Images (*.png *.xpm *.jpg);;Text files (*.txt);;XML files (*.xml)"));
    qDebug()<<"your saved files are:"<<file;
}
