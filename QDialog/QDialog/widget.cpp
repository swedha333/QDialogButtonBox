#include "widget.h"
#include "ui_widget.h"
#include <infodialog.h>
#include <QDialog>
#include<QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    // Modal
        /*Infodialog *dialog = new Infodialog(this);
        dialog->setModal(true);
        int result = dialog->exec();
        if(result == QDialog::Accepted)
        {
            QString position = dialog->getposition();
            QString favorite = dialog->getfavouriteos();
            qDebug() << "Dialog Accepted.... Position is : " << position << " and favorite OS: " << favorite;
            ui->label->setText("Your Position is : " + position + " and Your Favorite OS is : " + favorite);
        }
        else
        {
            qDebug() << "Dialog Rejected";
        }*/



        // Non Modal
        Infodialog *dialog = new Infodialog(this);

        connect(dialog, &Infodialog::accepted, [=](){
            QString position = dialog->getposition();
            QString favorite = dialog->getfavouriteos();
            qDebug() << "Dialog Accepted.... Position is : " << position << " and favorite OS: " << favorite;
            ui->label->setText("Your Position is : " + position + " and Your Favorite OS is : " + favorite);

        });

        connect(dialog, &Infodialog::rejected, [=](){
            qDebug() << "Dialog Rejected";
        });

        dialog->show();
        dialog->raise();
        dialog->activateWindow();

}
