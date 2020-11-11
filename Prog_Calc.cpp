#include "Prog_Calc.h"

Prog_Calc::Prog_Calc(QWidget* parent)
    : QMainWindow(parent),
    ui(new Ui::Prog_Calc)
{
    ui->setupUi(this);

	numeralSystemMode = 16;

    connect(ui->Hex_btn, &QPushButton::clicked, this, &Prog_Calc::onHexClicked);
    connect(ui->Dec_btn, &QPushButton::clicked, this, &Prog_Calc::onDecClicked);
    connect(ui->Oct_btn, &QPushButton::clicked, this, &Prog_Calc::onOctClicked);
    connect(ui->Bin_btn, &QPushButton::clicked, this, &Prog_Calc::onBinClicked);
/*	connect(ui->Num_Zero_btn, &QPushButton::clicked, this, &Prog_Calc::onClicked);*/
/*	connect(ui->Cancel_btn, &QPushButton::clicked, this, &Prog_Calc::onCalcClicked);*/

    ui->Edit_Calc_Num->setReadOnly(true);
	ui->Edit_Result_Num->setReadOnly(true);
	ui->Dec_Point_btn->setEnabled(false);
	ui->Reversal_btn->setEnabled(false);
}

Prog_Calc::~Prog_Calc()
{
    delete ui;
}

void Prog_Calc::keyPressEvent(QKeyEvent* event)
{
	if (numeralSystemMode == 16)
	{
		switch (event->key())
		{
		case Qt::Key_Enter:
			calculate(m_dec_formula);
			break;
		case Qt::Key_Equal:
			calculate(m_dec_formula);
			break;
		case Qt::Key_Delete:

			break;
		case Qt::Key_Escape:

			break;
		case Qt::Key_Backspace:

			break;
		case Qt::Key_Plus:

			break;
		case Qt::Key_Minus:

			break;
		case Qt::Key_multiply:

			break;
		case Qt::Key_division:

			break;
		case Qt::Key_Percent:

			break;
		case Qt::Key_BracketLeft:

			break;
		case Qt::Key_BracketRight:

			break;
		case Qt::Key_0:
			if (m_insertedNum.contains("0", Qt::CaseInsensitive))
				return;
			else
				m_insertedNum.append("0");
			break;
		case Qt::Key_1:
			m_insertedNum.append("1");
			break;
		case Qt::Key_2:
			m_insertedNum.append("2");
			break;
		case Qt::Key_3:
			m_insertedNum.append("3");
			break;
		case Qt::Key_4:
			m_insertedNum.append("4");
			break;
		case Qt::Key_5:
			m_insertedNum.append("5");
			break;
		case Qt::Key_6:
			m_insertedNum.append("6");
			break;
		case Qt::Key_7:
			m_insertedNum.append("7");
			break;
		case Qt::Key_8:
			m_insertedNum.append("8");
			break;
		case Qt::Key_9:
			m_insertedNum.append("9");
			break;
		case Qt::Key_A:
			m_insertedNum.append("A");
			break;
		case Qt::Key_B:
			m_insertedNum.append("B");
			break;
		case Qt::Key_C:
			m_insertedNum.append("C");
			break;
		case Qt::Key_D:
			m_insertedNum.append("D");
			break;
		case Qt::Key_E:
			m_insertedNum.append("E");
			break;
		case Qt::Key_F:
			m_insertedNum.append("F");
			break;
		}
	}
	else if (numeralSystemMode == 10)
	{
		switch (event->key())
		{
		case Qt::Key_Enter:
			calculate(m_dec_formula);
			break;
		case Qt::Key_Equal:
			calculate(m_dec_formula);
			break;
		case Qt::Key_Delete:

			break;
		case Qt::Key_Escape:

			break;
		case Qt::Key_Backspace:

			break;
		case Qt::Key_Plus:

			break;
		case Qt::Key_Minus:

			break;
		case Qt::Key_multiply:

			break;
		case Qt::Key_division:

			break;
		case Qt::Key_Percent:

			break;
		case Qt::Key_BracketLeft:

			break;
		case Qt::Key_BracketRight:

			break;
		case Qt::Key_0:
			if (m_insertedNum.contains("0", Qt::CaseInsensitive))
				return;
			else
				m_insertedNum.append("0");
			break;
		case Qt::Key_1:
			m_insertedNum.append("1");
			break;
		case Qt::Key_2:
			m_insertedNum.append("2");
			break;
		case Qt::Key_3:
			m_insertedNum.append("3");
			break;
		case Qt::Key_4:
			m_insertedNum.append("4");
			break;
		case Qt::Key_5:
			m_insertedNum.append("5");
			break;
		case Qt::Key_6:
			m_insertedNum.append("6");
			break;
		case Qt::Key_7:
			m_insertedNum.append("7");
			break;
		case Qt::Key_8:
			m_insertedNum.append("8");
			break;
		case Qt::Key_9:
			m_insertedNum.append("9");
			break;
		}
	}
	else if (numeralSystemMode == 8)
	{
		switch (event->key())
		{
		case Qt::Key_Enter:
			calculate(m_dec_formula);
			break;
		case Qt::Key_Equal:
			calculate(m_dec_formula);
			break;
		case Qt::Key_Delete:

			break;
		case Qt::Key_Escape:

			break;
		case Qt::Key_Backspace:

			break;
		case Qt::Key_Plus:

			break;
		case Qt::Key_Minus:

			break;
		case Qt::Key_multiply:

			break;
		case Qt::Key_division:

			break;
		case Qt::Key_Percent:

			break;
		case Qt::Key_BracketLeft:

			break;
		case Qt::Key_BracketRight:

			break;
		case Qt::Key_0:
			if (m_insertedNum.contains("0", Qt::CaseInsensitive))
				return;
			else
				m_insertedNum.append("0");
			break;
		case Qt::Key_1:
			m_insertedNum.append("1");
			break;
		case Qt::Key_2:
			m_insertedNum.append("2");
			break;
		case Qt::Key_3:
			m_insertedNum.append("3");
			break;
		case Qt::Key_4:
			m_insertedNum.append("4");
			break;
		case Qt::Key_5:
			m_insertedNum.append("5");
			break;
		case Qt::Key_6:
			m_insertedNum.append("6");
			break;
		case Qt::Key_7:
			m_insertedNum.append("7");
			break;
		}
	}
	else
	{
		switch (event->key())
		{
		case Qt::Key_Enter:
			calculate(m_dec_formula);
			break;
		case Qt::Key_Equal:
			calculate(m_dec_formula);
			break;
		case Qt::Key_Delete:

			break;
		case Qt::Key_Escape:

			break;
		case Qt::Key_Backspace:

			break;
		case Qt::Key_Plus:

			break;
		case Qt::Key_Minus:

			break;
		case Qt::Key_multiply:

			break;
		case Qt::Key_division:

			break;
		case Qt::Key_Percent:

			break;
		case Qt::Key_BracketLeft:

			break;
		case Qt::Key_BracketRight:

			break;
		case Qt::Key_0:
			if (m_insertedNum.contains("0", Qt::CaseInsensitive))
				return;
			else
				m_insertedNum.append("0");
			break;
		case Qt::Key_1:
			m_insertedNum.append("1");
			break;
		case Qt::Key_2:
			m_insertedNum.append("2");
			break;
		}
	}
	ui->Edit_Result_Num->setText(m_insertedNum);
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

// 0123456789ABCDEF버튼을 하나로 묶은 함수
void Prog_Calc::onNumClicked()
{
// 	switch ()
// 	{
// 	case:
// 	}
	m_insertedNum.append("0");
	m_insertedNum.append("1");
	m_insertedNum.append("2");
	m_insertedNum.append("3");
	m_insertedNum.append("4");
	m_insertedNum.append("5");
	m_insertedNum.append("6");
	m_insertedNum.append("7");
	m_insertedNum.append("8");
	m_insertedNum.append("9");
	m_insertedNum.append("A");
	m_insertedNum.append("B");
	m_insertedNum.append("C");
	m_insertedNum.append("D");
	m_insertedNum.append("E");
	m_insertedNum.append("F");
	ui->Edit_Result_Num->setText(m_insertedNum);
}

void Prog_Calc::calculate(QString m_dec_formula)
{
	int frontNum, backNum, result;
	string oper = operStack.top().oper;
	operStack.pop();
	if (oper == "*")
		result = frontNum * backNum;
	else if (oper == "/")
		result = frontNum / backNum;
	else if (oper == "%")
		result = frontNum % backNum;
	else if (oper == "+")
		result = frontNum + backNum;
	else if (oper == "-")
		result = frontNum - backNum;
	numStack.push(result);
}

// + -  * / % = ( )버튼을 하나로 묶은 함수
void Prog_Calc::onCalcClicked()
{

}

// void Prog_Calc::onCancelClicked()
// {
// 	m_hex_formula = "";
// 	m_hex_Result = "";
// 	m_dec_formula = "";
// 	m_dec_Result = "";
// 	m_oct_formula = "";
// 	m_oct_Result = "";
// 	m_bin_formula = "";
// 	m_bin_Result = "";
// 	m_insertedNum = "";
// 	m_result_done = false;
// 
// 	ui->Edit_Calc_Num->setText("");
// 	ui->Edit_Result_Num->setText("");
// }
// 
// void Prog_Calc::onBackSpaceClicked()
// {
// 	if (m_insertedNum.length() == 0)
// 		return;
// 	else
// 		m_insertedNum.chop(1);
// }
// 
// void Prog_Calc::onAddClicked()
// {
// 	m_insertedNum.append("+");
// }
// 
// void Prog_Calc::onSubtractClicked()
// {
// 	m_insertedNum.append("-");
// }
// 
// void Prog_Calc::onMultiplyClicked()
// {
// 	m_insertedNum.append("*");
// }
// 
// void Prog_Calc::onDivisonClicked()
// {
// 	m_insertedNum.append("/");
// }
// 
// void Prog_Calc::onPercentClicked()
// {
// 	m_insertedNum.append("%");
// }
// 
// void Prog_Calc::onEqualClicked()
// {
// 	m_insertedNum.append("=");
// }
// 
// void Prog_Calc::onLeftBracketClicked()
// {
// 	m_insertedNum.append("(");
// }
// 
// void Prog_Calc::onRightBracketClicked()
// {
// 	m_insertedNum.append(")");
// }

//16진수 모드 활성화
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

//10진수 모드 활성화
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

//8진수 모드 활성화
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


//2진수 모드 활성화
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

void Prog_Calc::decToHex(QString m_insertedNum)
{
	char* charInsertedNum;
	strcpy(charInsertedNum, m_insertedNum.toStdString().c_str());
	std::istringstream(charInsertedNum) >> std::hex >> charInsertedNum;
	m_insertedNum = QString (charInsertedNum);
}

void Prog_Calc::decToOct(QString m_insertedNum)
{
	char* charInsertedNum;
	strcpy(charInsertedNum, m_insertedNum.toStdString().c_str());
	std::istringstream(charInsertedNum) >> std::oct >> charInsertedNum;
	m_insertedNum = QString(charInsertedNum);
}
void Prog_Calc::decToBin(QString m_insertedNum)
{
	int binInsertedNum = 0;
	int insertedNum = m_insertedNum.toInt();
	for (int i = 0; insertedNum > 0; i *= 10)
	{
		int binaryNum = insertedNum % 2;
		binInsertedNum += binaryNum * i;
		insertedNum /= 2;
	}
	m_insertedNum = binInsertedNum;
}

void Prog_Calc::hexToDec(QString m_insertedNum)
{

}

void Prog_Calc::octToDec(QString m_insertedNum)
{

}

void Prog_Calc::binToDec(QString m_insertedNum)
{

}
