#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


namespace Ui {
class MainWindow;

}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:


public slots:

    void SetDisplayX(); // Read slider X position and set display
    void SetDisplayY(); // Read slider Y position and set display
    void SetSerialPort(); // Set and find COM port


private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
