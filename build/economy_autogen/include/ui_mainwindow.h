/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextBrowser *ImcomeTxt;
    QTextBrowser *ExpenceTxt;
    QLineEdit *imcomeInput;
    QLineEdit *expenceInput;
    QPushButton *btn;
    QLabel *result;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        QPalette palette;
        QBrush brush(QColor(153, 193, 241, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        QBrush brush1(QColor(192, 191, 188, 255));
        brush1.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush1);
        MainWindow->setPalette(palette);
        QFont font;
        font.setPointSize(7);
        MainWindow->setFont(font);
        MainWindow->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        MainWindow->setContextMenuPolicy(Qt::ContextMenuPolicy::NoContextMenu);
        MainWindow->setWindowOpacity(0.000000000000000);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        ImcomeTxt = new QTextBrowser(centralwidget);
        ImcomeTxt->setObjectName("ImcomeTxt");
        ImcomeTxt->setGeometry(QRect(40, 60, 101, 41));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        ImcomeTxt->setFont(font1);
        ImcomeTxt->setFrameShape(QFrame::Shape::NoFrame);
        ExpenceTxt = new QTextBrowser(centralwidget);
        ExpenceTxt->setObjectName("ExpenceTxt");
        ExpenceTxt->setGeometry(QRect(40, 160, 101, 41));
        ExpenceTxt->setFont(font1);
        ExpenceTxt->setFrameShape(QFrame::Shape::NoFrame);
        imcomeInput = new QLineEdit(centralwidget);
        imcomeInput->setObjectName("imcomeInput");
        imcomeInput->setGeometry(QRect(150, 60, 271, 41));
        QFont font2;
        font2.setPointSize(21);
        imcomeInput->setFont(font2);
        expenceInput = new QLineEdit(centralwidget);
        expenceInput->setObjectName("expenceInput");
        expenceInput->setGeometry(QRect(150, 160, 271, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Noto Sans")});
        font3.setPointSize(22);
        expenceInput->setFont(font3);
        btn = new QPushButton(centralwidget);
        btn->setObjectName("btn");
        btn->setGeometry(QRect(50, 250, 141, 61));
        QFont font4;
        font4.setPointSize(19);
        font4.setBold(true);
        btn->setFont(font4);
        btn->setCursor(QCursor(Qt::CursorShape::OpenHandCursor));
        btn->setIconSize(QSize(16, 16));
        result = new QLabel(centralwidget);
        result->setObjectName("result");
        result->setGeometry(QRect(70, 360, 531, 51));
        QPalette palette1;
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::BrushStyle::SolidPattern);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush2);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush2);
        result->setPalette(palette1);
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Sans")});
        font5.setPointSize(24);
        font5.setBold(true);
        result->setFont(font5);
        result->setMouseTracking(false);
        result->setContextMenuPolicy(Qt::ContextMenuPolicy::NoContextMenu);
        result->setTextFormat(Qt::TextFormat::PlainText);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        ImcomeTxt->setDocumentTitle(QString());
        ImcomeTxt->setMarkdown(QCoreApplication::translate("MainWindow", "**Income**\n"
"\n"
"", nullptr));
        ExpenceTxt->setDocumentTitle(QString());
        ExpenceTxt->setMarkdown(QCoreApplication::translate("MainWindow", "**Expence**\n"
"\n"
"", nullptr));
        ExpenceTxt->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:16pt; font-weight:700; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Expence</p></body></html>", nullptr));
        expenceInput->setText(QString());
        btn->setText(QCoreApplication::translate("MainWindow", "Calc", nullptr));
        result->setText(QCoreApplication::translate("MainWindow", "No Input", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
