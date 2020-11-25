#pragma once

#include <QtWidgets/QMainWindow>
#include <QKeyEvent>
#include <iostream>
#include <sstream>
#include <stack>
#include <Qlist>
#include "ui_Prog_Calc.h"

using namespace std;

class Prog_Calc : public QMainWindow
{
    Q_OBJECT

public:
    Prog_Calc(QWidget *parent = Q_NULLPTR);
    ~Prog_Calc();

public slots:
    void onBtnClick();
    void clear();
    void getResult();
    bool isOperand(QChar elem);
    bool isOperand();
    int getOperPrior(QString oper);
    int compareOperPrior(QString oper1, QString oper2);
    void convertResult();

public:
    int m_result;
    int m_numeric_system;
    void inputBtnNumToStack();
    void displayFormula();

private:
    Ui::Prog_Calc* ui;
    stack<QString> m_stckCalc;
};
