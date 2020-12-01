#pragma once

#include <QtWidgets/QMainWindow>
#include <QKeyEvent>
#include <QKeySequence>
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
    int compareOperPrior(QString first_oper, QString secont_oper);
    void convertResult();

public:
    int m_nResult;
    int m_nLeftParenCnt = 0;
    int m_nRightParenCnt = 0;
    void inputBtnNumToStack();
    void displayFormula();
    void isRightNumLoc();

private:
    Ui::Prog_Calc* ui;
    stack<QString> m_stckCalc;

protected:
    void keyPressEvent(QKeyEvent* event);
};
