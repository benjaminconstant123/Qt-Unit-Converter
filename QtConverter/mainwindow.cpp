#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "formpage0.h"
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

void MainWindow::on_CategoryComboBox_activated(int index) //slot pour selection dans la combo box
{
    QWidget* ptr = new FormPage0; //creation dynamique d'un objet d'un classe graphique
    ui->stackedWidget->addWidget(ptr); //ajout du widget au stackedWidget
    if(index == 0){ //si l'index est sur X alors
        ui->stackedWidget->setCurrentWidget(ptr); //affiche le widget en parametre via sont pointeur
    }
}

