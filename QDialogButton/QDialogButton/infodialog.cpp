#include "infodialog.h"
#include "ui_infodialog.h"
#include <QDebug>

infodialog::infodialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::infodialog)
{
    ui->setupUi(this);
}

infodialog::~infodialog()
{
    delete ui;
}

void infodialog::on_buttonBox_clicked(QAbstractButton *button)
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

    qDebug()<<"cancel button clicked";

    }
    if(stdButton==QDialogButtonBox::Save)

    {

    accept();

    qDebug()<<"save button clicked";

    }
    if(stdButton==QDialogButtonBox::SaveAll)

    {

    accepted();

    qDebug()<<"saveall button clicked";

    }
    if(stdButton==QDialogButtonBox::No)

    {

    reject();

    qDebug()<<"no button clicked";

    }
    if(stdButton==QDialogButtonBox::NoToAll)

    {

    rejected();

    qDebug()<<"notoall button clicked";

    }

    if(stdButton==QDialogButtonBox::Open)

    {

    open();

    qDebug()<<"open button clicked";

    }
}
