#include "setserialport.h"
#include "ui_setserialport.h"

SetSerialPort::SetSerialPort(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SetSerialPort)
{
    ui->setupUi(this);
}

SetSerialPort::~SetSerialPort()
{
    delete ui;
}
