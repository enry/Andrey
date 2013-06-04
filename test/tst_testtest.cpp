#include <QString>
#include <QtTest>
#include <QApplication>
#include "mainwindow.h"
#include "secondwindow.h"
#include "md5.h"
#include "qxtjson.h"
#include <ui_mainwindow.h>
#include "ui_secondwindow.h"
//#include <QMainWindow>
#include <QDebug>

class TestTest : public QObject
{
    Q_OBJECT
    
public:
    TestTest();
    
private Q_SLOTS:
    void initTestCase();

    //void testLoadImage();
    void testGetSerialsByFile();
    void testGetSerialsByName();
    void testSecondForm();
    void testDoLogInWithParams();
    void testRenewTable();

    void cleanupTestCase();

private:
    MainWindow* frm;
    Ui_MainWindow* ui;
};


TestTest::TestTest()
{
}

void TestTest::initTestCase()
{
    frm = new MainWindow();
    ui = frm->ui;
}




/*void TestTest::testLoadImage()
{
    QVERIFY(frm->loadImage());
}*/

void TestTest::testDoLogInWithParams()
{
    QVERIFY(frm->doLogin("test_0_1","1234qwer"));
}


void TestTest::testSecondForm()
{
    secondwindow *Settings = new secondwindow(frm);
    Settings->setModal(true);
    Settings->show();

    Settings->ui->lineEdit->setText("test_0_1");
    Settings->ui->lineEdit_2->setText("1234567890");
    QTest::mouseClick(Settings->ui->pushButton,Qt::LeftButton);
    Settings->close();

    QVERIFY(Settings->on_pushButton_clicked());
}


void TestTest::testGetSerialsByFile()
{
    QVERIFY(frm->GetSerialsByFile());
}

void TestTest::testGetSerialsByName()
{
    QString url = "http://api.myshows.ru/shows/search/?q=";
    QVERIFY(frm->GetSerialsByName(url));
}

void TestTest::testRenewTable()
{
    QVERIFY(frm->renewTable());
}




void TestTest::cleanupTestCase()
{
    frm->close();
}


QTEST_MAIN(TestTest)

#include "tst_testtest.moc"
