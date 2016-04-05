#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDialog>
#include <QPropertyAnimation>
#include <QMouseEvent>
#include <QMessageBox>
#include <QPainter>
#include <QLabel>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);//隐藏窗口框
    this->setWindowTitle("电脑管家");//设置软件标题

    /* 显示菜单 */
    QMenu * menu = ui->menuPushButton->getmenu();
    SettingAct = new QAction(QIcon(":/image/setting.png"), tr("&设置"), this);
    AboutAct = new QAction(QIcon(":/image/setting.png"), tr("&关于我们"), this);
    menu->addAction(SettingAct);
    menu->addAction(AboutAct);

    this->movie=new QMovie(":/image/gif1.gif");
    ui->giflabel->setMovie(this->movie);
    this->movie->start();

    this->movie=new QMovie(":/image/gif2.gif");
    ui->gif2label->setMovie(this->movie);
    this->movie->start();

    this->movie=new QMovie(":/image/gif3.gif");
    ui->gif3label->setMovie(this->movie);
    this->movie->start();

    this->movie=new QMovie(":/image/gif4.gif");
    ui->gif4label->setMovie(this->movie);
    this->movie->start();

    this->movie=new QMovie(":/image/gif5.gif");
    ui->gif5label->setMovie(this->movie);
    this->movie->start();

    this->movie=new QMovie(":/image/gif6.gif");
    ui->gif6label->setMovie(this->movie);
    this->movie->start();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_headButton_clicked()
{
    QDialog *dialog = new QDialog(this);
    dialog->setWindowTitle(tr("电脑管家-个人中心"));
    dialog->setFixedSize(300,200);
    dialog->show();
}

void MainWindow::on_a1Button_clicked()
{
    QDialog *dialog = new QDialog(this);
    dialog->setWindowTitle(tr("电脑管家-安全等级"));
    dialog->setFixedSize(300,200);
    dialog->show();
}

void MainWindow::on_a2Button_clicked()
{
    QDialog *dialog = new QDialog(this);
    dialog->setWindowTitle(tr("电脑管家-个人财富"));
    dialog->setFixedSize(300,200);
    dialog->show();
}

void MainWindow::on_fullcheckButton_clicked()
{
    QDialog *dialog = new QDialog(this);
    dialog->setWindowTitle(tr("电脑管家-全面体检"));
    dialog->setFixedSize(300,200);
    dialog->show();
}

void MainWindow::on_checkButton_clicked()
{

    QDialog *dialog = new QDialog(this);
    dialog->setWindowTitle(tr("电脑管家-全面体检"));
    dialog->setFixedSize(300,200);
    dialog->show();

}

void MainWindow::on_softButton_clicked()
{

    QDialog *dialog = new QDialog(this);
    dialog->setWindowTitle(tr("电脑管家-软件管理"));
    dialog->setFixedSize(300,200);
    dialog->show();

}

void MainWindow::on_clothesButton_clicked()
{
    QDialog *dialog = new QDialog(this);
    dialog->setWindowTitle(tr("电脑管家-皮肤中心"));
    dialog->setFixedSize(300,200);
    dialog->show();

}

void MainWindow::on_exitButton_clicked()
{
    /* 慢慢消失的效果 */
    QPropertyAnimation *animation = new QPropertyAnimation(this,"windowOpacity");
    animation->setDuration(1000);
    animation->setStartValue(1);
    animation->setEndValue(0);
    animation->start();

    connect(animation,SIGNAL(finished()),this,SLOT(close()));//效果显示完后关闭
}

void MainWindow::on_miniButton_clicked()
{
    this->showMinimized();//最小化
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if(event->buttons() == Qt::LeftButton)
    {
    //记录窗口此时的坐标
    StartPos = event->globalPos() - this->frameGeometry().topLeft();
    }
}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    QPoint EndPos;
    if ( event->buttons() == Qt::LeftButton )
    {
    EndPos = event->globalPos() - StartPos;
    this->move(EndPos);
    }
}

void MainWindow::setStackCurrentPage(quint8 index)
{
    QWidget *widget = ui->stackedWidget->widget(index);
    ui->stackedWidget->setCurrentWidget(widget);
}

void MainWindow::on_f1Button_clicked()
{
    this->setStackCurrentPage(0);
}

void MainWindow::on_f2Button_clicked()
{
    this->setStackCurrentPage(1);
}

void MainWindow::on_f3Button_clicked()
{
    this->setStackCurrentPage(2);
}

void MainWindow::on_f4Button_clicked()
{
    this->setStackCurrentPage(3);
}

void MainWindow::on_f5Button_clicked()
{
    this->setStackCurrentPage(4);
}

void MainWindow::on_f6Button_clicked()
{
    this->setStackCurrentPage(5);
}

