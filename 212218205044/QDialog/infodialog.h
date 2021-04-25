#ifndef INFODIALOG_H
#define INFODIALOG_H

#include <QDialog>

namespace Ui {
class InfoDialog;
}

class InfoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit InfoDialog(QWidget *parent = nullptr);
    ~InfoDialog();
    QString getFavos() const;
    QString getPosition() const;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::InfoDialog *ui;
    QString position;
    QString favos;

};

#endif // INFODIALOG_H
