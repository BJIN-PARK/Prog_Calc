#include "Prog_Calc.h"

Prog_Calc::Prog_Calc(QWidget* parent)
    : QMainWindow(parent),
    ui(new Ui::Prog_Calc)
{
    ui->setupUi(this);

	numeralSystemMode = 16;

	connect(ui->Cancel_btn, &QPushButton::clicked, this, &Prog_Calc::onCancelClicked);
    connect(ui->Hex_btn, &QPushButton::clicked, this, &Prog_Calc::onHexClicked);
    connect(ui->Dec_btn, &QPushButton::clicked, this, &Prog_Calc::onDecClicked);
    connect(ui->Oct_btn, &QPushButton::clicked, this, &Prog_Calc::onOctClicked);
    connect(ui->Bin_btn, &QPushButton::clicked, this, &Prog_Calc::onBinClicked);
	connect(ui->Num_Zero_btn, &QPushButton::clicked, this, &Prog_Calc::onZeroClicked);
	connect(ui->Num_One_btn, &QPushButton::clicked, this, &Prog_Calc::onOneClicked);
	connect(ui->Num_Two_btn, &QPushButton::clicked, this, &Prog_Calc::onTwoClicked);
	connect(ui->Num_Three_btn, &QPushButton::clicked, this, &Prog_Calc::onThreeClicked);
	connect(ui->Num_Four_btn, &QPushButton::clicked, this, &Prog_Calc::onFourClicked);
	connect(ui->Num_Five_btn, &QPushButton::clicked, this, &Prog_Calc::onFiveClicked);
	connect(ui->Num_Six_btn, &QPushButton::clicked, this, &Prog_Calc::onSixClicked);
	connect(ui->Num_Seven_btn, &QPushButton::clicked, this, &Prog_Calc::onSevenClicked);
	connect(ui->Num_Eight_btn, &QPushButton::clicked, this, &Prog_Calc::onEightClicked);
	connect(ui->Num_Nine_btn, &QPushButton::clicked, this, &Prog_Calc::onNineClicked);
	connect(ui->A_btn, &QPushButton::clicked, this, &Prog_Calc::onAClicked);
	connect(ui->B_btn, &QPushButton::clicked, this, &Prog_Calc::onBClicked);
	connect(ui->C_btn, &QPushButton::clicked, this, &Prog_Calc::onCClicked);
	connect(ui->D_btn, &QPushButton::clicked, this, &Prog_Calc::onDClicked);
	connect(ui->E_btn, &QPushButton::clicked, this, &Prog_Calc::onEClicked);
	connect(ui->F_btn, &QPushButton::clicked, this, &Prog_Calc::onFClicked);
	connect(ui->Cancel_btn, &QPushButton::clicked, this, &Prog_Calc::onCancelClicked);
	connect(ui->B_Space_btn, &QPushButton::clicked, this, &Prog_Calc::onBackSpaceClicked);
	connect(ui->Add_btn, &QPushButton::clicked, this, &Prog_Calc::onAddClicked);
	connect(ui->Subtract_btn, &QPushButton::clicked, this, &Prog_Calc::onSubtractClicked);
	connect(ui->Multiply_btn, &QPushButton::clicked, this, &Prog_Calc::onMultiplyClicked);
	connect(ui->Division_btn, &QPushButton::clicked, this, &Prog_Calc::onDivisonClicked);
	connect(ui->Percent_btn, &QPushButton::clicked, this, &Prog_Calc::onPercentClicked);
	connect(ui->Equal_btn, &QPushButton::clicked, this, &Prog_Calc::onEqualClicked);
	connect(ui->L_Bracket_btn, &QPushButton::clicked, this, &Prog_Calc::onLeftBracketClicked);
	connect(ui->R_Bracket_btn, &QPushButton::clicked, this, &Prog_Calc::onRightBracketClicked);

    ui->Edit_Calc_Num->setReadOnly(true);
	ui->Edit_Result_Num->setReadOnly(true);
	ui->Dec_Point_btn->setEnabled(false);
	ui->Reversal_btn->setEnabled(false);
}

Prog_Calc::~Prog_Calc()
{
    delete ui;
}

void Prog_Calc::onCancelClicked()
{
	dec_formula = "";
	dec_Result = "";
	result_done = false;
	ui->Edit_Calc_Num->setText("");
	ui->Edit_Result_Num->setText("");
}

void Prog_Calc::onHexClicked()
{
	setEnableHexBtn();
}

void Prog_Calc::onDecClicked()
{
	setDisableHexBtn();
}

void Prog_Calc::onOctClicked()
{
	setDisableDecBtn();
}

void Prog_Calc::onBinClicked()
{
	setDisableOctBtn();
}

void Prog_Calc::onZeroClicked()
{
	madeNum.append("0");
}

void Prog_Calc::onOneClicked()
{
	madeNum.append("1");
}

void Prog_Calc::onTwoClicked()
{
	madeNum.append("2");
}

void Prog_Calc::onThreeClicked()
{
	madeNum.append("3");
}

void Prog_Calc::onFourClicked()
{
	madeNum.append("4");
}

void Prog_Calc::onFiveClicked()
{
	madeNum.append("5");
}

void Prog_Calc::onSixClicked()
{
	madeNum.append("6");
}

void Prog_Calc::onSevenClicked()
{
	madeNum.append("7");
}

void Prog_Calc::onEightClicked()
{
	madeNum.append("8");
}

void Prog_Calc::onNineClicked()
{
	madeNum.append("9");
}

void Prog_Calc::onAClicked()
{
	madeNum.append("A");
}

void Prog_Calc::onBClicked()
{
	madeNum.append("B");
}

void Prog_Calc::onCClicked()
{
	madeNum.append("C");
}

void Prog_Calc::onDClicked()
{
	madeNum.append("D");
}

void Prog_Calc::onEClicked()
{
	madeNum.append("E");
}

void Prog_Calc::onFClicked()
{
	madeNum.append("F");
}

void Prog_Calc::onBackSpaceClicked()
{
	madeNum.append("BackSpace");
}

void Prog_Calc::onAddClicked()
{
	madeNum.append("+");
}

void Prog_Calc::onSubtractClicked()
{
	madeNum.append("-");
}

void Prog_Calc::onMultiplyClicked()
{
	madeNum.append("*");
}

void Prog_Calc::onDivisonClicked()
{
	madeNum.append("/");
}

void Prog_Calc::onPercentClicked()
{
	madeNum.append("%");
}

void Prog_Calc::onEqualClicked()
{
	madeNum.append("=");
}

void Prog_Calc::onLeftBracketClicked()
{
	madeNum.append("(");
}

void Prog_Calc::onRightBracketClicked()
{
	madeNum.append(")");
}

void Prog_Calc::setEnableHexBtn()
{
	numeralSystemMode = 16;
	ui->A_btn->setEnabled(true);
	ui->B_btn->setEnabled(true);
	ui->C_btn->setEnabled(true);
	ui->D_btn->setEnabled(true);
	ui->E_btn->setEnabled(true);
	ui->F_btn->setEnabled(true);
	ui->Num_Nine_btn->setEnabled(true);
	ui->Num_Eight_btn->setEnabled(true);
	ui->Num_Seven_btn->setEnabled(true);
	ui->Num_Six_btn->setEnabled(true);
	ui->Num_Five_btn->setEnabled(true);
	ui->Num_Four_btn->setEnabled(true);
	ui->Num_Three_btn->setEnabled(true);
	ui->Num_Two_btn->setEnabled(true);
}

void Prog_Calc::setDisableHexBtn()
{
	numeralSystemMode = 10;
	ui->A_btn->setEnabled(false);
	ui->B_btn->setEnabled(false);
	ui->C_btn->setEnabled(false);
	ui->D_btn->setEnabled(false);
	ui->E_btn->setEnabled(false);
	ui->F_btn->setEnabled(false);
	ui->Num_Nine_btn->setEnabled(true);
	ui->Num_Eight_btn->setEnabled(true);
	ui->Num_Seven_btn->setEnabled(true);
	ui->Num_Six_btn->setEnabled(true);
	ui->Num_Five_btn->setEnabled(true);
	ui->Num_Four_btn->setEnabled(true);
	ui->Num_Three_btn->setEnabled(true);
	ui->Num_Two_btn->setEnabled(true);
}

void Prog_Calc::setDisableDecBtn()
{
	numeralSystemMode = 8;
	ui->A_btn->setEnabled(false);
	ui->B_btn->setEnabled(false);
	ui->C_btn->setEnabled(false);
	ui->D_btn->setEnabled(false);
	ui->E_btn->setEnabled(false);
	ui->F_btn->setEnabled(false);
	ui->Num_Nine_btn->setEnabled(false);
	ui->Num_Eight_btn->setEnabled(false);
	ui->Num_Seven_btn->setEnabled(true);
	ui->Num_Six_btn->setEnabled(true);
	ui->Num_Five_btn->setEnabled(true);
	ui->Num_Four_btn->setEnabled(true);
	ui->Num_Three_btn->setEnabled(true);
	ui->Num_Two_btn->setEnabled(true);
}

void Prog_Calc::setDisableOctBtn()
{
	numeralSystemMode = 2;
	ui->A_btn->setEnabled(false);
	ui->B_btn->setEnabled(false);
	ui->C_btn->setEnabled(false);
	ui->D_btn->setEnabled(false);
	ui->E_btn->setEnabled(false);
	ui->F_btn->setEnabled(false);
	ui->Num_Nine_btn->setEnabled(false);
	ui->Num_Eight_btn->setEnabled(false);
	ui->Num_Seven_btn->setEnabled(false);
	ui->Num_Six_btn->setEnabled(false);
	ui->Num_Five_btn->setEnabled(false);
	ui->Num_Four_btn->setEnabled(false);
	ui->Num_Three_btn->setEnabled(false);
	ui->Num_Two_btn->setEnabled(false);
}

void Prog_Calc::calculate(const QString )
{
/*	if (madeNum.end() == "+")*/
}
