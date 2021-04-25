#ifndef INFODIALOG_H
#define INFODIALOG_H

#include <QDialog>

namespace Ui {
class Infodialog;
}

class Infodialog : public QDialog
{
    Q_OBJECT

public:
    explicit Infodialog(QWidget *parent = nullptr);
    ~Infodialog();
    QString getfavouriteos() const;
    QString getposition() const;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    QString position;
    QString favouriteos;
    Ui::Infodialog *ui;

};

#endif // INFODIALOG_H
