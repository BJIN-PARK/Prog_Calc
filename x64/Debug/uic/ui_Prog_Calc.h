/********************************************************************************
** Form generated from reading UI file 'Prog_Calc.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROG_CALC_H
#define UI_PROG_CALC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Prog_Calc
{
public:
    QWidget *centralWidget;
    QLineEdit *Edit_Calc_Num;
    QPushButton *Hex_btn;
    QPushButton *A_btn;
    QPushButton *L_Shift_btn;
    QPushButton *R_Shift_btn;
    QPushButton *Cancel_btn;
    QPushButton *B_Space_btn;
    QPushButton *Dec_btn;
    QPushButton *Oct_btn;
    QPushButton *Bin_btn;
    QPushButton *B_btn;
    QPushButton *C_btn;
    QPushButton *D_btn;
    QPushButton *E_btn;
    QPushButton *F_btn;
    QPushButton *R_Bracket_btn;
    QPushButton *Percent_btn;
    QPushButton *L_Bracket_btn;
    QPushButton *Division_btn;
    QPushButton *Num_Eight_btn;
    QPushButton *Num_Nine_btn;
    QPushButton *Num_Seven_btn;
    QPushButton *Multiply_btn;
    QPushButton *Num_Five_btn;
    QPushButton *Num_Six_btn;
    QPushButton *Num_Four_btn;
    QPushButton *Subtract_btn;
    QPushButton *Num_Two_btn;
    QPushButton *Num_Three_btn;
    QPushButton *Num_One_btn;
    QPushButton *Add_btn;
    QPushButton *Num_Zero_btn;
    QPushButton *Dec_Point_btn;
    QPushButton *Reversal_btn;
    QPushButton *Equal_btn;
    QLineEdit *Edit_Result_Num;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *Prog_Calc)
    {
        if (Prog_Calc->objectName().isEmpty())
            Prog_Calc->setObjectName(QStringLiteral("Prog_Calc"));
        Prog_Calc->resize(371, 454);
        centralWidget = new QWidget(Prog_Calc);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Edit_Calc_Num = new QLineEdit(centralWidget);
        Edit_Calc_Num->setObjectName(QStringLiteral("Edit_Calc_Num"));
        Edit_Calc_Num->setGeometry(QRect(10, 10, 350, 28));
        QFont font;
        font.setPointSize(27);
        Edit_Calc_Num->setFont(font);
        Edit_Calc_Num->setLayoutDirection(Qt::LeftToRight);
        Edit_Calc_Num->setAutoFillBackground(false);
        Edit_Calc_Num->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Hex_btn = new QPushButton(centralWidget);
        Hex_btn->setObjectName(QStringLiteral("Hex_btn"));
        Hex_btn->setGeometry(QRect(10, 90, 350, 28));
        A_btn = new QPushButton(centralWidget);
        A_btn->setObjectName(QStringLiteral("A_btn"));
        A_btn->setGeometry(QRect(10, 210, 70, 28));
        L_Shift_btn = new QPushButton(centralWidget);
        L_Shift_btn->setObjectName(QStringLiteral("L_Shift_btn"));
        L_Shift_btn->setGeometry(QRect(80, 210, 70, 28));
        R_Shift_btn = new QPushButton(centralWidget);
        R_Shift_btn->setObjectName(QStringLiteral("R_Shift_btn"));
        R_Shift_btn->setGeometry(QRect(150, 210, 70, 28));
        Cancel_btn = new QPushButton(centralWidget);
        Cancel_btn->setObjectName(QStringLiteral("Cancel_btn"));
        Cancel_btn->setGeometry(QRect(220, 210, 70, 28));
        B_Space_btn = new QPushButton(centralWidget);
        B_Space_btn->setObjectName(QStringLiteral("B_Space_btn"));
        B_Space_btn->setGeometry(QRect(290, 210, 70, 28));
        Dec_btn = new QPushButton(centralWidget);
        Dec_btn->setObjectName(QStringLiteral("Dec_btn"));
        Dec_btn->setGeometry(QRect(10, 120, 350, 28));
        Oct_btn = new QPushButton(centralWidget);
        Oct_btn->setObjectName(QStringLiteral("Oct_btn"));
        Oct_btn->setGeometry(QRect(10, 150, 350, 28));
        Bin_btn = new QPushButton(centralWidget);
        Bin_btn->setObjectName(QStringLiteral("Bin_btn"));
        Bin_btn->setGeometry(QRect(10, 180, 350, 28));
        B_btn = new QPushButton(centralWidget);
        B_btn->setObjectName(QStringLiteral("B_btn"));
        B_btn->setGeometry(QRect(10, 240, 70, 28));
        C_btn = new QPushButton(centralWidget);
        C_btn->setObjectName(QStringLiteral("C_btn"));
        C_btn->setGeometry(QRect(10, 270, 70, 28));
        D_btn = new QPushButton(centralWidget);
        D_btn->setObjectName(QStringLiteral("D_btn"));
        D_btn->setGeometry(QRect(10, 300, 70, 28));
        E_btn = new QPushButton(centralWidget);
        E_btn->setObjectName(QStringLiteral("E_btn"));
        E_btn->setGeometry(QRect(10, 330, 70, 28));
        F_btn = new QPushButton(centralWidget);
        F_btn->setObjectName(QStringLiteral("F_btn"));
        F_btn->setGeometry(QRect(10, 360, 70, 28));
        R_Bracket_btn = new QPushButton(centralWidget);
        R_Bracket_btn->setObjectName(QStringLiteral("R_Bracket_btn"));
        R_Bracket_btn->setGeometry(QRect(150, 240, 70, 28));
        Percent_btn = new QPushButton(centralWidget);
        Percent_btn->setObjectName(QStringLiteral("Percent_btn"));
        Percent_btn->setGeometry(QRect(220, 240, 70, 28));
        L_Bracket_btn = new QPushButton(centralWidget);
        L_Bracket_btn->setObjectName(QStringLiteral("L_Bracket_btn"));
        L_Bracket_btn->setGeometry(QRect(80, 240, 70, 28));
        Division_btn = new QPushButton(centralWidget);
        Division_btn->setObjectName(QStringLiteral("Division_btn"));
        Division_btn->setGeometry(QRect(290, 240, 70, 28));
        Num_Eight_btn = new QPushButton(centralWidget);
        Num_Eight_btn->setObjectName(QStringLiteral("Num_Eight_btn"));
        Num_Eight_btn->setGeometry(QRect(150, 270, 70, 28));
        Num_Nine_btn = new QPushButton(centralWidget);
        Num_Nine_btn->setObjectName(QStringLiteral("Num_Nine_btn"));
        Num_Nine_btn->setGeometry(QRect(220, 270, 70, 28));
        Num_Seven_btn = new QPushButton(centralWidget);
        Num_Seven_btn->setObjectName(QStringLiteral("Num_Seven_btn"));
        Num_Seven_btn->setGeometry(QRect(80, 270, 70, 28));
        Multiply_btn = new QPushButton(centralWidget);
        Multiply_btn->setObjectName(QStringLiteral("Multiply_btn"));
        Multiply_btn->setGeometry(QRect(290, 270, 70, 28));
        Num_Five_btn = new QPushButton(centralWidget);
        Num_Five_btn->setObjectName(QStringLiteral("Num_Five_btn"));
        Num_Five_btn->setGeometry(QRect(150, 300, 70, 28));
        Num_Six_btn = new QPushButton(centralWidget);
        Num_Six_btn->setObjectName(QStringLiteral("Num_Six_btn"));
        Num_Six_btn->setGeometry(QRect(220, 300, 70, 28));
        Num_Four_btn = new QPushButton(centralWidget);
        Num_Four_btn->setObjectName(QStringLiteral("Num_Four_btn"));
        Num_Four_btn->setGeometry(QRect(80, 300, 70, 28));
        Subtract_btn = new QPushButton(centralWidget);
        Subtract_btn->setObjectName(QStringLiteral("Subtract_btn"));
        Subtract_btn->setGeometry(QRect(290, 300, 70, 28));
        Num_Two_btn = new QPushButton(centralWidget);
        Num_Two_btn->setObjectName(QStringLiteral("Num_Two_btn"));
        Num_Two_btn->setGeometry(QRect(150, 330, 70, 28));
        Num_Three_btn = new QPushButton(centralWidget);
        Num_Three_btn->setObjectName(QStringLiteral("Num_Three_btn"));
        Num_Three_btn->setGeometry(QRect(220, 330, 70, 28));
        Num_One_btn = new QPushButton(centralWidget);
        Num_One_btn->setObjectName(QStringLiteral("Num_One_btn"));
        Num_One_btn->setGeometry(QRect(80, 330, 70, 28));
        Add_btn = new QPushButton(centralWidget);
        Add_btn->setObjectName(QStringLiteral("Add_btn"));
        Add_btn->setGeometry(QRect(290, 330, 70, 28));
        Num_Zero_btn = new QPushButton(centralWidget);
        Num_Zero_btn->setObjectName(QStringLiteral("Num_Zero_btn"));
        Num_Zero_btn->setGeometry(QRect(150, 360, 70, 28));
        Dec_Point_btn = new QPushButton(centralWidget);
        Dec_Point_btn->setObjectName(QStringLiteral("Dec_Point_btn"));
        Dec_Point_btn->setGeometry(QRect(220, 360, 70, 28));
        Reversal_btn = new QPushButton(centralWidget);
        Reversal_btn->setObjectName(QStringLiteral("Reversal_btn"));
        Reversal_btn->setGeometry(QRect(80, 360, 70, 28));
        Equal_btn = new QPushButton(centralWidget);
        Equal_btn->setObjectName(QStringLiteral("Equal_btn"));
        Equal_btn->setGeometry(QRect(290, 360, 70, 28));
        Edit_Result_Num = new QLineEdit(centralWidget);
        Edit_Result_Num->setObjectName(QStringLiteral("Edit_Result_Num"));
        Edit_Result_Num->setGeometry(QRect(10, 40, 350, 48));
        Edit_Result_Num->setFont(font);
        Edit_Result_Num->setLayoutDirection(Qt::LeftToRight);
        Edit_Result_Num->setAutoFillBackground(false);
        Edit_Result_Num->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Prog_Calc->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(Prog_Calc);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Prog_Calc->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Prog_Calc);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Prog_Calc->setStatusBar(statusBar);
        menuBar = new QMenuBar(Prog_Calc);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 371, 26));
        Prog_Calc->setMenuBar(menuBar);

        retranslateUi(Prog_Calc);

        QMetaObject::connectSlotsByName(Prog_Calc);
    } // setupUi

    void retranslateUi(QMainWindow *Prog_Calc)
    {
        Prog_Calc->setWindowTitle(QApplication::translate("Prog_Calc", "Prog_Calc", nullptr));
        Hex_btn->setText(QApplication::translate("Prog_Calc", "HEX", nullptr));
        A_btn->setText(QApplication::translate("Prog_Calc", "A", nullptr));
        L_Shift_btn->setText(QApplication::translate("Prog_Calc", "<<", nullptr));
        R_Shift_btn->setText(QApplication::translate("Prog_Calc", ">>", nullptr));
        Cancel_btn->setText(QApplication::translate("Prog_Calc", "C", nullptr));
        B_Space_btn->setText(QApplication::translate("Prog_Calc", "\342\206\220", nullptr));
        Dec_btn->setText(QApplication::translate("Prog_Calc", "DEC", nullptr));
        Oct_btn->setText(QApplication::translate("Prog_Calc", "OCT", nullptr));
        Bin_btn->setText(QApplication::translate("Prog_Calc", "BIN", nullptr));
        B_btn->setText(QApplication::translate("Prog_Calc", "B", nullptr));
        C_btn->setText(QApplication::translate("Prog_Calc", "C", nullptr));
        D_btn->setText(QApplication::translate("Prog_Calc", "D", nullptr));
        E_btn->setText(QApplication::translate("Prog_Calc", "E", nullptr));
        F_btn->setText(QApplication::translate("Prog_Calc", "F", nullptr));
        R_Bracket_btn->setText(QApplication::translate("Prog_Calc", ")", nullptr));
        Percent_btn->setText(QApplication::translate("Prog_Calc", "\357\274\205", nullptr));
        L_Bracket_btn->setText(QApplication::translate("Prog_Calc", "(", nullptr));
        Division_btn->setText(QApplication::translate("Prog_Calc", "\303\267", nullptr));
        Num_Eight_btn->setText(QApplication::translate("Prog_Calc", "8", nullptr));
        Num_Nine_btn->setText(QApplication::translate("Prog_Calc", "9", nullptr));
        Num_Seven_btn->setText(QApplication::translate("Prog_Calc", "7", nullptr));
        Multiply_btn->setText(QApplication::translate("Prog_Calc", "\303\227", nullptr));
        Num_Five_btn->setText(QApplication::translate("Prog_Calc", "5", nullptr));
        Num_Six_btn->setText(QApplication::translate("Prog_Calc", "6", nullptr));
        Num_Four_btn->setText(QApplication::translate("Prog_Calc", "4", nullptr));
        Subtract_btn->setText(QApplication::translate("Prog_Calc", "-", nullptr));
        Num_Two_btn->setText(QApplication::translate("Prog_Calc", "2", nullptr));
        Num_Three_btn->setText(QApplication::translate("Prog_Calc", "3", nullptr));
        Num_One_btn->setText(QApplication::translate("Prog_Calc", "1", nullptr));
        Add_btn->setText(QApplication::translate("Prog_Calc", "+", nullptr));
        Num_Zero_btn->setText(QApplication::translate("Prog_Calc", "0", nullptr));
        Dec_Point_btn->setText(QApplication::translate("Prog_Calc", ".", nullptr));
        Reversal_btn->setText(QApplication::translate("Prog_Calc", "\302\261", nullptr));
        Equal_btn->setText(QApplication::translate("Prog_Calc", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Prog_Calc: public Ui_Prog_Calc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROG_CALC_H
