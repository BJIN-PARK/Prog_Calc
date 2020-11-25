#include "Prog_Calc.h"

Prog_Calc::Prog_Calc(QWidget* parent)
    : QMainWindow(parent),
    ui(new Ui::Prog_Calc)
{
    ui->setupUi(this);

	ui->Edit_Calc_Num->setReadOnly(true);
	ui->Edit_Result_Num->setReadOnly(true);

	// Number btn Click 
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

	// operand click
	connect(ui->Add_btn, &QPushButton::clicked, this, &Prog_Calc::onBtnClick);
	connect(ui->Subtract_btn, &QPushButton::clicked, this, &Prog_Calc::onBtnClick);
	connect(ui->Multiply_btn, &QPushButton::clicked, this, &Prog_Calc::onBtnClick);
	connect(ui->Division_btn, &QPushButton::clicked, this, &Prog_Calc::onBtnClick);
	connect(ui->L_Bracket_btn, &QPushButton::clicked, this, &Prog_Calc::onBtnClick);
	connect(ui->R_Bracket_btn, &QPushButton::clicked, this, &Prog_Calc::onBtnClick);

	// cancel click
	connect(ui->Cancel_btn, &QPushButton::clicked, this, &Prog_Calc::clear);

	// equal click
	connect(ui->Equal_btn, &QPushButton::clicked, this, &Prog_Calc::getResult);

	// convert click
	connect(ui->Hex_btn, &QPushButton::clicked, this, &Prog_Calc::convertResult);
	connect(ui->Dec_btn, &QPushButton::clicked, this, &Prog_Calc::convertResult);
	connect(ui->Oct_btn, &QPushButton::clicked, this, &Prog_Calc::convertResult);
	connect(ui->Bin_btn, &QPushButton::clicked, this, &Prog_Calc::convertResult);
}

Prog_Calc::~Prog_Calc()
{
    delete ui;
}

void Prog_Calc::onBtnClick()
{
	inputBtnNumToStack();	// btn Text -> m_stckCalc
	displayFormula();		// display formula
}

void Prog_Calc::clear()		// reset all data
{
	ui->Edit_Calc_Num->clear();
	ui->Edit_Result_Num->clear();

	int m_result = 0;
	int size = m_stckCalc.size();
	for(int i = 0; i < size; i++)
		m_stckCalc.pop();
}

void Prog_Calc::inputBtnNumToStack()
{
	QString inputNum;
	if (sender() == ui->Num_Zero_btn)
	{
		inputNum = QString("0");
	}
	else if (sender() == ui->Num_One_btn)
	{
		inputNum = QString("1");
	}
	else if (sender() == ui->Num_Two_btn)
	{
		inputNum = QString("2");
	}
	else if (sender() == ui->Num_Three_btn)
	{
		inputNum = QString("3");
	}
	else if (sender() == ui->Num_Four_btn)
	{
		inputNum = QString("4");
	}
	else if (sender() == ui->Num_Five_btn)
	{
		inputNum = QString("5");
	}
	else if (sender() == ui->Num_Six_btn)
	{
		inputNum = QString("6");
	}
	else if (sender() == ui->Num_Seven_btn)
	{
		inputNum = QString("7");
	}
	else if (sender() == ui->Num_Eight_btn)
	{
		inputNum = QString("8");
	}
	else if (sender() == ui->Num_Nine_btn)
	{
		inputNum = QString("9");
	}
	else if (sender() == ui->A_btn)
	{
		inputNum = QString("A");
	}
	else if (sender() == ui->B_btn)
	{
		inputNum = QString("B");
	}
	else if (sender() == ui->C_btn)
	{
		inputNum = QString("C");
	}
	else if (sender() == ui->D_btn)
	{
		inputNum = QString("D");
	}
	else if (sender() == ui->E_btn)
	{
		inputNum = QString("E");
	}
	else if (sender() == ui->F_btn)
	{
		inputNum = QString("F");
	}
	else if (sender() == ui->Add_btn) // "+"
	{
		if (m_stckCalc.empty() || m_stckCalc.top() == "(")
		{
			return;
		}
		else if (isOperand())
		{
			m_stckCalc.pop();
		}
		inputNum = QString("+");
	}
	else if (sender() == ui->Subtract_btn) // "-"
	{
		if (m_stckCalc.empty() || m_stckCalc.top() == "(")
		{
			m_stckCalc.push(QString("0"));
		}
		else if (isOperand())
		{
			m_stckCalc.pop();
		}
		inputNum = QString("-");
	}
	else if (sender() == ui->Multiply_btn) // "*"
	{
		if (m_stckCalc.empty() || m_stckCalc.top() == "(")
		{
			return;
		}
		else if (isOperand())
		{
			m_stckCalc.pop();
		}
		inputNum = QString("*");
	}
	else if (sender() == ui->Division_btn) // "/"
	{
		if (m_stckCalc.empty() || m_stckCalc.top() == "(")
		{
			return;
		}
		else if (isOperand())
		{
			m_stckCalc.pop();
		}
		inputNum = QString("/");
	}
	else if (sender() == ui->L_Bracket_btn) // "("
	{
		inputNum = QString("(");
	}
	else if (sender() == ui->R_Bracket_btn) // ")"
	{
		if (m_stckCalc.empty() || isOperand() || m_stckCalc.top() == "(")
		{
			return;
		}
		else
		{
			inputNum = QString(")");
		}
	}
	if (inputNum == "")
	{
		return;
	}
	else
	{
		m_stckCalc.push(inputNum);
	}
}

void Prog_Calc::displayFormula()
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
	int frontNum;
	int backNum;
	int resultNum;
	bool ok;
	if (m_stckCalc.size() == 1 && m_stckCalc.top() == "(")
	{
		m_stckCalc.push("0");
		m_stckCalc.push(")");
		QString solo_left_bracket;
		solo_left_bracket.append("(");
		solo_left_bracket.append("0");
		solo_left_bracket.append(")");
		ui->Edit_Calc_Num->setText(solo_left_bracket);
	}
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
			if (strDisplayText.at(i) == "(")
			{
				stckCalc_copy.push(strDisplayText.at(i));
			}
			else if (strDisplayText.at(i) == ")")
			{
				stckCalc_copy.push(tempString);
				tempString.clear();
				stckCalc_copy.push(strDisplayText.at(i));
			}
			else
			{
				if (tempString.isEmpty())
				{
					stckCalc_copy.push(strDisplayText.at(i));
				}
				else
				{
					stckCalc_copy.push(tempString);
					tempString.clear();
					stckCalc_copy.push(strDisplayText.at(i));
				}
			}
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

	QList<QString> infix;
	QList<QString> postfix;
	stack<QString> stck_oper;
	int i = 0;

	while (!m_stckCalc.empty())
	{
		infix.push_front(m_stckCalc.top());
		m_stckCalc.pop();
	}

	while(!infix.empty())
	{
		if (infix.at(i) == "(") /* ( 를 만나면 푸시 */
		{
			stck_oper.push("(");
			infix.removeAt(i);
			i--;
		}
		else if (infix.at(i) == ")") /* ) 를 만나면 ( 가 나올 때까지 팝 */
		{
			while (stck_oper.top() != "(")
			{
				postfix.push_back(stck_oper.top());
				stck_oper.pop();
			}
			infix.removeAt(i);
			i--;
			stck_oper.pop();
		}
		else if (infix.at(i) == "*" || infix.at(i) == "/" || infix.at(i) == "+" || infix.at(i) == "-") /* 연산자이면 */
		{
			while (!stck_oper.empty() &&
				getOperPrior(stck_oper.top()) >= getOperPrior(infix.at(i)))
			{ /* 우선순위가 높은 연산자들을 모두 팝 */
				postfix.push_back(stck_oper.top());
				stck_oper.pop();
			}
			stck_oper.push(infix.at(i));
			infix.removeAt(i);
			i--;
		}
		else /* 피연산자는 그냥 출력 */
		{
			postfix.push_back(infix.at(i));
			infix.removeAt(i);
			i--;
		}
		i++;
	}
	while (!stck_oper.empty())
	{
		postfix.push_back(stck_oper.top());
		stck_oper.pop();
	}

	QString postfixFormula;
	for (int i = 0; i < postfix.size(); i++)
	{
		postfixFormula.append(postfix.at(i));
	}

	stack<QString> stck_calcNum;
	i = 0;
	while (!postfix.empty())
	{
		if (postfix.at(i) == '*')
		{
			backNum = stck_calcNum.top().toInt(&ok, 10);
			stck_calcNum.pop();
			frontNum = stck_calcNum.top().toInt(&ok, 10);
			stck_calcNum.pop();
			stck_calcNum.push(QString::number(frontNum * backNum));
			postfix.removeAt(i);
			i--;
		}
		else if (postfix.at(i) == '/')
		{
			backNum = stck_calcNum.top().toInt(&ok, 10);
			stck_calcNum.pop();
			frontNum = stck_calcNum.top().toInt(&ok, 10);
			stck_calcNum.pop();
			stck_calcNum.push(QString::number(frontNum / backNum));
			postfix.removeAt(i);
			i--;
		}
		else if (postfix.at(i) == '+')
		{
			backNum = stck_calcNum.top().toInt(&ok, 10);
			stck_calcNum.pop();
			frontNum = stck_calcNum.top().toInt(&ok, 10);
			stck_calcNum.pop();
			stck_calcNum.push(QString::number(frontNum + backNum));
			postfix.removeAt(i);
			i--;
		}
		else if (postfix.at(i) == '-')
		{
			backNum = stck_calcNum.top().toInt(&ok, 10);
			stck_calcNum.pop();
			frontNum = stck_calcNum.top().toInt(&ok, 10);
			stck_calcNum.pop();
			stck_calcNum.push(QString::number(frontNum - backNum));
			postfix.removeAt(i);
			i--;
		}
		else
		{
			stck_calcNum.push(postfix.at(i));
			postfix.removeAt(i);
			i--;
		}
		i++;
	}
	QString result = stck_calcNum.top();
	ui->Edit_Result_Num->setText(result);
	m_result = result.toInt();
	m_stckCalc.push(result);
}

void Prog_Calc::convertResult()
{
	if (sender() == ui->Hex_btn)
	{
		QString hex_result = QString("%1").arg(m_result, 0, 16);
		ui->Edit_Result_Num->setText(hex_result);
	}
	else if (sender() == ui->Dec_btn)
	{
		ui->Edit_Result_Num->setText(QString::number(m_result));
	}
	else if (sender() == ui->Oct_btn)
	{
		QString oct_result = QString("%1").arg(m_result, 0, 8);
		ui->Edit_Result_Num->setText(oct_result);
	}
	else if (sender() == ui->Bin_btn)
	{
		QString bin_result = QString("%1").arg(m_result, 0, 2);
		ui->Edit_Result_Num->setText(bin_result);
	}
}

bool Prog_Calc::isOperand(QChar elem)
{
	bool bRtnValue;
	if (elem == "+" || elem == "-" || elem == "*" || elem == "/" || elem == "(" || elem == ")")
		bRtnValue = true;
	else
		bRtnValue = false;

	return bRtnValue;
}

bool Prog_Calc::isOperand()
{
	QString strEndOper;
	strEndOper = m_stckCalc.top();
	if (strEndOper == "+" || strEndOper == "-" || strEndOper == "*" || strEndOper == "/")
	{
		return true;
	}
	else
	{
		return false;
	}
}

int Prog_Calc::getOperPrior(QString oper)
{
	if (oper == "*" || oper == "/")
		return 4;
	else if (oper == "+" || oper == "-")
		return 3;
	else if (oper == "(")
		return 2;
	else
		return 1;
}

int Prog_Calc::compareOperPrior(QString oper1, QString oper2)
{
	int oper1prior = getOperPrior(oper1);
	int oper2prior = getOperPrior(oper2);

	if (oper1prior > oper2prior)
		return 1;
	else if (oper2prior > oper1prior)
		return -1;
	else
		return 0;
}
