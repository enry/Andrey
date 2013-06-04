#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QtNetwork/QNetworkReply"
#include "title.h"
#include "serie.h"
#include "filedownloader.h"
#include "secondwindow.h"
#include "QSqlDatabase"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public slots:
    void onResult(QNetworkReply*);
    void onFileResult(QNetworkReply*);
    void onLoginResult(QNetworkReply*);
    void GetSeries(QNetworkReply*);
    //void GetSerialsByName();

public:

    secondwindow *f2;
    explicit MainWindow(QWidget *parent = 0);
    QNetworkAccessManager networkManager;
    QVector<title> titles;
    QVector<serie> series;
    QString login;
    QString hash;
    QUrl url;
    QNetworkRequest request;
    QNetworkReply *reply;

    bool GetSerialsByName(QString urlMyshows);

    bool doLogin(QString login, QString pass);
    bool doLogin();
    bool on_pushButton_clicked();
    bool GetSerialsByFile();

    bool loadImage();
    bool renewTable();

    bool firstPic;
    bool isOpened;
    bool firstPush;
    bool loadImg;
    bool renew;
    ~MainWindow();

private:
    QSqlDatabase dbase;
    bool isLogged;
    FileDownloader *m_pImgCtrl;

    void renewEpTable();


private slots:
   // void on_pushButton_clicked();

    //void loadImage();

    void on_tableWidget_cellClicked(int row, int column);

    void on_pushButton_2_clicked();

   // void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    //void on_lineEdit_textEdited(const QString &arg1);

    void on_lineEdit_returnPressed();

public:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
