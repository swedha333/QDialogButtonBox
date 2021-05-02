#include "infodialog.h"
#include "ui_infodialog.h"

InfoDialog::InfoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InfoDialog)
{
    ui->setupUi(this);
}

InfoDialog::~InfoDialog()
{
    delete ui;
}

void InfoDialog::on_buttonBox_clicked(QAbstractButton *button)
{
    QDialogButtonBox::StandardButton stdButton=ui->buttonBox->standardButton(button);

    if(stdButton==QDialogButtonBox::Ok)

    {

    accept();

    qDebug()<<"Ok button clicked";

    }
    if(stdButton==QDialogButtonBox::Cancel)

    {

    reject();

    qDebug()<<"Cancel button clicked";

    }
    if(stdButton==QDialogButtonBox::Save)

    {

    accepted();

    qDebug()<<"Save button clicked";

    }
    if(stdButton==QDialogButtonBox::SaveAll)

    {

    accept();

    qDebug()<<"SaveAll button clicked";

    }
    if(stdButton==QDialogButtonBox::No)

    {

    reject();

    qDebug()<<"No button clicked";

    }
    if(stdButton==QDialogButtonBox::NoToAll)

    {

    rejected();

    qDebug()<<"NoToAll button clicked";

    }
    if(stdButton==QDialogButtonBox::Open)

    {

    open();

    qDebug()<<"Open button clicked";

    }
}