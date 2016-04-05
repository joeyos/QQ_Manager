#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QPoint>
#include <QMenu>
#include <QAction>
#include<QMovie>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    /* AboutpushButton按钮下的菜单 */
    QAction *AboutAct;
    QAction *SettingAct;

    QMovie *movie;


private slots:
    void on_headButton_clicked();

    void on_a1Button_clicked();

    void on_a2Button_clicked();

    void on_exitButton_clicked();

    void on_miniButton_clicked();

    void on_f1Button_clicked();

    void on_f2Button_clicked();

    void on_f3Button_clicked();

    void on_f4Button_clicked();

    void on_f5Button_clicked();

    void on_f6Button_clicked();

    void on_fullcheckButton_clicked();

    void on_checkButton_clicked();

    void on_softButton_clicked();

    void on_clothesButton_clicked();

private:
    Ui::MainWindow *ui;

    /* 创建子窗口 */
    void setStackCurrentPage(quint8 index);

    /* 鼠标拖动窗口 */
    void mouseMoveEvent(QMouseEvent *event);
    void mousePressEvent(QMouseEvent *event);
    /* 记录窗口当前的位置 */
    QPoint StartPos;
};

#endif // MAINWINDOW_H
