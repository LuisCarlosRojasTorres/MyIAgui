#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->cB_ANN->addItem(QString("Perceptron"));
    ui->cB_ANN->addItem(QString("Adaline"));

    setWindowTitle(QString("My IA gui (Miyagi)" + version));
    showMaximized();

    connect(ui->actionAbout, &QAction::triggered, about, &DlgAbout::exec);
}

MainWindow::~MainWindow()
{
    delete ui;
}

