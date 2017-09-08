#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "login.h"
#include "client_socket.h"
#include "signup.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
     ClientSocket* mcs;
     Login*  l;
     Signup*  ss;

private slots:

    void on_pushButton_3_clicked();
    
    void on_su_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
