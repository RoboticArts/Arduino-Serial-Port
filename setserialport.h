#ifndef SETSERIALPORT_H
#define SETSERIALPORT_H

#include <QWidget>

namespace Ui {
class SetSerialPort;
}

class SetSerialPort : public QWidget
{
    Q_OBJECT

public:
    explicit SetSerialPort(QWidget *parent = 0);
    ~SetSerialPort();

private:
    Ui::SetSerialPort *ui;
};

#endif // SETSERIALPORT_H
