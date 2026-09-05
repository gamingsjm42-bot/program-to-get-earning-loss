//includes
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include <sstream>
#include <iostream>
#include <string>
#include "trans.cpp"
/// @brief that function return a if a>=0  and return -a if a<0 
/// @param a that number that abs it
int abs(int a){return (a>0)? a: -a;}
//constractor
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    //set ui
    ui->setupUi(this);
}
///constractor ptr
MainWindow::~MainWindow()
{
    delete ui;
}
//
void MainWindow::on_btn_clicked()
{
    //set hasError
    const size_t lenProgrames=2;
    bool isSave =1;
    bool programIsSave[lenProgrames] ; 
    //set sub = imcome - expence
    int sub=ui->imcomeInput->text().toInt(&programIsSave[0])-ui->expenceInput->text().toInt(&programIsSave[1]);
    //set Text
    std::stringstream transform ;
    //add 
    if(sub!=0) transform<<abs(sub);
    //set and function
    for (size_t i = 0; i < lenProgrames; i++) isSave &=programIsSave[i];
    //set Error
    if(!isSave) {QMessageBox::critical(this,"Error","your Input is valid");return;}
    //
    ui->result->setText((std::string("your ")+((sub>0)?"earnings is:":(sub==0)? "are not earn":"Loss is") +' '+transform.str()).c_str());
}