#include "Prog_Calc.h"

Prog_Calc::Prog_Calc(QWidget* parent)
    : QMainWindow(parent),
    ui(new Ui::Prog_Calc)
{
    ui->setupUi(this);

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
	formula = "";
	hex_Result = 0;
	dec_Result = 0;
	oct_Result = 0;
	bin_Result = 0;
	result_done = 0;
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

}

void Prog_Calc::onOneClicked()
{

}

void Prog_Calc::onTwoClicked()
{

}

void Prog_Calc::onThreeClicked()
{

}

void Prog_Calc::onFourClicked()
{

}

void Prog_Calc::onFiveClicked()
{

}

void Prog_Calc::onSixClicked()
{

}

void Prog_Calc::onSevenClicked()
{

}

void Prog_Calc::onEightClicked()
{

}

void Prog_Calc::onNineClicked()
{

}

void Prog_Calc::onAClicked()
{

}

void Prog_Calc::onBClicked()
{

}

void Prog_Calc::onCClicked()
{
	
}

void Prog_Calc::onDClicked()
{
	
}

void Prog_Calc::onEClicked()
{
	
}

void Prog_Calc::onFClicked()
{
	
}

void Prog_Calc::onBackSpaceClicked()
{

}

void Prog_Calc::onAddClicked()
{

}

void Prog_Calc::onSubtractClicked()
{

}

void Prog_Calc::onMultiplyClicked()
{

}

void Prog_Calc::onDivisonClicked()
{

}

void Prog_Calc::onPercentClicked()
{

}

void Prog_Calc::onEqualClicked()
{

}

void Prog_Calc::onLeftBracketClicked()
{

}

void Prog_Calc::onRightBracketClicked()
{

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
	
}
