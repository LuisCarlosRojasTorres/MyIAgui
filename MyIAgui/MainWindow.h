#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "DlgAbout.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QString version = QString(" 1.0.0");

    DlgAbout *about = new DlgAbout(version);
};
#endif // MAINWINDOW_H
