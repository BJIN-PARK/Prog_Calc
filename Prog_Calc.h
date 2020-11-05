#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Prog_Calc.h"

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
    void onZeroClicked();
    void onOneClicked();
    void onTwoClicked();
    void onThreeClicked();
    void onFourClicked();
    void onFiveClicked();
    void onSixClicked();
    void onSevenClicked();
    void onEightClicked();
    void onNineClicked();
    void onAClicked();
    void onBClicked();
    void onCClicked();
    void onDClicked();
    void onEClicked();
    void onFClicked();
    void onCancelClicked();
    void onBackSpaceClicked();
    void onAddClicked();
    void onSubtractClicked();
    void onMultiplyClicked();
    void onDivisonClicked();
    void onPercentClicked();
    void onEqualClicked();
    void onLeftBracketClicked();
    void onRightBracketClicked();

private:
    Ui::Prog_Calc* ui;
    int numeralSystemMode;
    int cnt;
    int operand;
    QString madeNum;
	QString hex_Result;
	QString dec_Result;
	QString oct_Result;
	QString bin_Result;
    QString hex_formula;
    QString dec_formula;
    QString oct_formula;
    QString bin_formula;
    QString insertedNum;
    bool result_done;

protected:
    void calculate(const QString formula);
    void setEnableHexBtn();
    void setDisableHexBtn();
    void setDisableDecBtn();
    void setDisableOctBtn();
};
