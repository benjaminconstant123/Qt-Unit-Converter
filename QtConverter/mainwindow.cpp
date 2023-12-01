#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //Ajout des catégories de la combo box
    ui->CategoryComboBox->addItem("Longeur");
    ui->CategoryComboBox->addItem("Masse");
    ui->CategoryComboBox->addItem("Temps");
}

MainWindow::~MainWindow()
{
    delete ui;
}
