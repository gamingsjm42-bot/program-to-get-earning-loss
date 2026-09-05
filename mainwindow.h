#ifndef MAINWINDOW_H
#define MAINWINDOW_H
//includes
#include <QMainWindow>
//set name window class
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
//that file on him windows methods
QT_END_NAMESPACE
/// @brief that window of app
class MainWindow : public QMainWindow
{
    Q_OBJECT

public: 
    //constractors
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    /// @brief  a global variable to get all vars
    Ui::MainWindow *ui;
private slots:
   void on_btn_clicked();
};
#endif // MAINWINDOW_H
