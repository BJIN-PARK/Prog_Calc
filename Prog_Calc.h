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
    int getOperPrior(QString oper);
    int compareOperPrior(QString oper1, QString oper2);
public:
    void inputBtnStringToStack();
    void displayResult();

private:
    Ui::Prog_Calc* ui;
    stack<QString> m_stckCalc;
};
