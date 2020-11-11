#pragma once

#include <QtWidgets/QMainWindow>
#include <QKeyEvent>
#include <iostream>
#include <sstream>
#include <stack>
#include "ui_Prog_Calc.h"

using namespace std;

class Prog_Calc : public QMainWindow
{
    Q_OBJECT

public:
    Prog_Calc(QWidget *parent = Q_NULLPTR);
    ~Prog_Calc();

public slots:
    void onHexClicked();
    void onDecClicked();
    void onOctClicked();
    void onBinClicked();
    void onNumClicked();
    void onCalcClicked();

private:
    Ui::Prog_Calc* ui;
    int numeralSystemMode;
    int cnt;
    struct operand
    {
        int operandPriority;
        string oper;
    };

    stack<int> numStack;
    stack<operand> operStack;
    QString m_insertedNum;
	QString m_hex_Result;
	QString m_dec_Result;
	QString m_oct_Result;
	QString m_bin_Result;
    QString m_hex_formula;
    QString m_dec_formula;
    QString m_oct_formula;
    QString m_bin_formula;
    bool m_result_done;

protected:
    void keyPressEvent(QKeyEvent* event);
    void calculate(QString m_dec_formula);
    void decToHex(QString m_insertedNum);
    void decToOct(QString m_insertedNum);
    void decToBin(QString m_insertedNum);
    void hexToDec(QString m_insertedNum);
    void octToDec(QString m_insertedNum);
    void binToDec(QString m_insertedNum);
    void setEnableHexBtn();
    void setDisableHexBtn();
    void setDisableDecBtn();
    void setDisableOctBtn();
};
