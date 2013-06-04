#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H

#include <QDialog>

namespace Ui {
class secondwindow;
}

class secondwindow : public QDialog
{
    Q_OBJECT
    
public:
    QString Login;
    QString Pass;

    bool on_pushButton_clicked();

    explicit secondwindow(QWidget *parent = 0);
    ~secondwindow();

private slots:
    void on_checkBox_clicked(bool checked);

    //void on_pushButton_clicked();
    //void on_pushButton_2_clicked();

public:
    Ui::secondwindow *ui;
};

#endif // SECONDWINDOW_H
