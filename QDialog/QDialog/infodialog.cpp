#include "infodialog.h"
#include "ui_infodialog.h"

Infodialog::Infodialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Infodialog)
{
    ui->setupUi(this);
}

Infodialog::~Infodialog()
{
    delete ui;
}

void Infodialog::on_pushButton_clicked()
{
    QString userPosition = ui->lineEdit->text();
        if(!userPosition.isEmpty())
        {
            // qDebug() << "In submit";
            position = userPosition;

            if(ui->radioButton->isChecked())
            {
                favouriteos = "Mac";
            }
            if(ui->radioButton_2->isChecked())
            {
                favouriteos = "Windows";
            }
            if(ui->radioButton_3->isChecked())
            {
                favouriteos = "Linux";
            }
        }
        accept();
    }

    QString Infodialog::getfavouriteos() const
    {
        return favouriteos;
    }

    QString Infodialog::getposition() const
    {
        return position;
    }

    void Infodialog::on_pushButton_2_clicked()
    {
          reject();
    }

