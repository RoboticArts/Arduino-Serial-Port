#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QInputDialog>

MainWindow::MainWindow(QWidget *parent) :

    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    setWindowTitle("Arduino Serial Port");
    statusBar()->showMessage(tr("¡Pulsa el botón de conectar!"));

    // Connectors
    connect(ui->SliderX, SIGNAL(valueChanged(int)), this, SLOT(SetDisplayX()));
    connect(ui->SliderY, SIGNAL(valueChanged(int)), this, SLOT(SetDisplayY()));
    connect(ui->ConnectButton, SIGNAL(clicked(bool)), this, SLOT(SetSerialPort()));

}



MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::SetDisplayX(){

    int n = ui->SliderX-> value();
    ui-> DisplayX -> display(n);

}


void MainWindow::SetDisplayY(){

    int n = ui->SliderY-> value();
    ui-> DisplayY -> display(n);

}

void MainWindow::SetSerialPort(){

    QInputDialog::getInt(this,"Wenasss","Eeey muy buenas a todos guapisimoss");



}
