#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>

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
    QString f="All File (*.*) ;; Text File (*.txt) ;; XML File (*.xml)";
    QString files=QFileDialog::getOpenFileName(this,tr("Open Image"), "C://",f);
    QFile file(files);
    if(!file.open(QFile::WriteOnly|QFile::Text)){
        QMessageBox :: warning(this,"Shalini-212218205049","File not found");
    }
    QTextStream out(&file);
    QString text= ui->textEdit->toPlainText();
    out << text;
    file.flush();
    file.close();
}

void MainWindow::on_pushButton_2_clicked()
{
    QString f="All File (*.*) ;; Text File (*.txt) ;; XML File (*.xml)";
    QString files=QFileDialog::getOpenFileName(this,tr("Open Image"), "C://",f);
    QFile file(files);
    if(!file.open(QFile::ReadOnly|QFile::Text)){
        QMessageBox :: warning(this,"Shalini-212218205049","File not found");
    }
    QTextStream in(&file);
    QString text= in.readAll();
    ui->textEdit->setPlainText(text);
    file.close();
}
