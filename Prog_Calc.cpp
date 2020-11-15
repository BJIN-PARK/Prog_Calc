#include "Prog_Calc.h"

Prog_Calc::Prog_Calc(QWidget* parent)
    : QMainWindow(parent),
    ui(new Ui::Prog_Calc)
{
    ui->setupUi(this);

	// Number Btn Click 
	connect(ui->Num_Zero_btn, &QPushButton::clicked, this, &Prog_Calc::onBtnClick);
	connect(ui->Num_One_btn, &QPushButton::clicked, this, &Prog_Calc::onBtnClick);
	connect(ui->Num_Two_btn, &QPushButton::clicked, this, &Prog_Calc::onBtnClick);
	connect(ui->Num_Three_btn, &QPushButton::clicked, this, &Prog_Calc::onBtnClick);
	connect(ui->Num_Four_btn, &QPushButton::clicked, this, &Prog_Calc::onBtnClick);
	connect(ui->Num_Five_btn, &QPushButton::clicked, this, &Prog_Calc::onBtnClick);
	connect(ui->Num_Six_btn, &QPushButton::clicked, this, &Prog_Calc::onBtnClick);
	connect(ui->Num_Seven_btn, &QPushButton::clicked, this, &Prog_Calc::onBtnClick);
	connect(ui->Num_Eight_btn, &QPushButton::clicked, this, &Prog_Calc::onBtnClick);
	connect(ui->Num_Nine_btn, &QPushButton::clicked, this, &Prog_Calc::onBtnClick);
	connect(ui->A_btn, &QPushButton::clicked, this, &Prog_Calc::onBtnClick);
	connect(ui->B_btn, &QPushButton::clicked, this, &Prog_Calc::onBtnClick);
	connect(ui->C_btn, &QPushButton::clicked, this, &Prog_Calc::onBtnClick);
	connect(ui->D_btn, &QPushButton::clicked, this, &Prog_Calc::onBtnClick);
	connect(ui->E_btn, &QPushButton::clicked, this, &Prog_Calc::onBtnClick);
	connect(ui->F_btn, &QPushButton::clicked, this, &Prog_Calc::onBtnClick);

	// operand click...
	connect(ui->Add_btn, &QPushButton::clicked, this, &Prog_Calc::onBtnClick);
	connect(ui->Subtract_btn, &QPushButton::clicked, this, &Prog_Calc::onBtnClick);
	connect(ui->Multiply_btn, &QPushButton::clicked, this, &Prog_Calc::onBtnClick);
	connect(ui->Division_btn, &QPushButton::clicked, this, &Prog_Calc::onBtnClick);

	// cancle click...
	connect(ui->Cancel_btn, &QPushButton::clicked, this, &Prog_Calc::clear);

	//  equal click...
	connect(ui->Equal_btn, &QPushButton::clicked, this, &Prog_Calc::getResult);
}

Prog_Calc::~Prog_Calc()
{
    delete ui;
}

void Prog_Calc::onBtnClick()
{
	inputBtnStringToStack(); // Btn Text -> m_stckCalc
	displayFomula(); // display fomula
}

void Prog_Calc::clear()
{
	ui->Edit_Calc_Num->clear();
	ui->Edit_Result_Num->clear();

	int size = m_stckCalc.size();
	for(int i = 0; i < size; i++)
		m_stckCalc.pop();
}

void Prog_Calc::inputBtnStringToStack()
{
	QString inputString;
	if (sender() == ui->Num_Zero_btn)
	{
		inputString = QString("0");
	}
	else if (sender() == ui->Num_One_btn)
	{
		inputString = QString("1");
	}
	else if (sender() == ui->Num_Two_btn)
	{
		inputString = QString("2");
	}
	else if (sender() == ui->Num_Three_btn)
	{
		inputString = QString("3");
	}
	else if (sender() == ui->Num_Four_btn)
	{
		inputString = QString("4");
	}
	else if (sender() == ui->Num_Five_btn)
	{
		inputString = QString("5");
	}
	else if (sender() == ui->Num_Six_btn)
	{
		inputString = QString("6");
	}
	else if (sender() == ui->Num_Seven_btn)
	{
		inputString = QString("7");
	}
	else if (sender() == ui->Num_Eight_btn)
	{
		inputString = QString("8");
	}
	else if (sender() == ui->Num_Nine_btn)
	{
		inputString = QString("9");
	}
	else if (sender() == ui->A_btn)
	{
		inputString = QString("A");
	}
	else if (sender() == ui->B_btn)
	{
		inputString = QString("B");
	}
	else if (sender() == ui->C_btn)
	{
		inputString = QString("C");
	}
	else if (sender() == ui->D_btn)
	{
		inputString = QString("D");
	}
	else if (sender() == ui->E_btn)
	{
inputString = QString("E");
	}
	else if (sender() == ui->F_btn)
	{
	inputString = QString("F");
	}
	else if (sender() == ui->Add_btn) // "+"
	{
	inputString = QString("+");
	}
	else if (sender() == ui->Subtract_btn) // "-"
	{
	inputString = QString("-");
	}
	else if (sender() == ui->Multiply_btn) // "*"
	{
	inputString = QString("*");
	}
	else if (sender() == ui->Division_btn) // "/"
	{
	inputString = QString("/");
	}
	m_stckCalc.push(inputString);
}

void Prog_Calc::displayFomula()
{
	ui->Edit_Calc_Num->clear();
	stack<QString> stckCalc_copy; // stack copy...
	stack<QString> stckTemp; // stack reverse...
	stckCalc_copy = m_stckCalc; // copy
	for (int i = 0; i < m_stckCalc.size(); i++)
	{
		stckTemp.push(stckCalc_copy.top()); // top elem...
		stckCalc_copy.pop(); // pop...
	}

	QString strDisplayText;
	for (int i = 0; i < m_stckCalc.size(); i++)
	{
		strDisplayText.append(stckTemp.top()); // top elem...
		stckTemp.pop(); // pop...
	}
	ui->Edit_Calc_Num->setText(strDisplayText);
}

void Prog_Calc::getResult()
{
	// 숫자 합치기...
	stack<QString> stckCalc_copy; // stack copy...
	stack<QString> stckTemp; // stack reverse...
	stckCalc_copy = m_stckCalc; // copy
	for (int i = 0; i < m_stckCalc.size(); i++)
	{
		stckTemp.push(stckCalc_copy.top()); // top elem...
		stckCalc_copy.pop(); // pop...
	}

	QString strDisplayText;
	for (int i = 0; i < m_stckCalc.size(); i++)
	{
		strDisplayText.append(stckTemp.top()); // top elem...
		stckTemp.pop(); // pop...
	}
	QString tempString;
	for (int i = 0; i < strDisplayText.size(); i++)
	{
		if (isOperand(strDisplayText.at(i)))
		{
			stckCalc_copy.push(tempString);
			tempString.clear();
			stckCalc_copy.push(strDisplayText.at(i));
		}
		else if (i == strDisplayText.size() - 1)
		{
			tempString.append(strDisplayText.at(i));
			stckCalc_copy.push(tempString);
			tempString.clear();
		}
		else
		{
			tempString.append(strDisplayText.at(i));
		}
	}

	//temp
	int size = m_stckCalc.size();
	for (int i = 0; i < size; i++)
		m_stckCalc.pop();
	m_stckCalc = stckCalc_copy;
	displayFomula();

	// 계산
// 	while (strDisplayText.size() != 0)
// 	{
// 		for (int i = 0; i < strDisplayText.size(); i++)
// 		{
// 
// 		}
// 	}
}

bool Prog_Calc::isOperand(QChar elem)
{
	bool rtnValue;
	if (elem == "+" || elem == "-" || elem == "*" || elem == "/")
		rtnValue = true;
	else
		rtnValue = false;

	return rtnValue;
}