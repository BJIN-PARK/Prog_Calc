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
	displayResult(); // display Result
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

void Prog_Calc::displayResult()
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
	displayResult();

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

	ui->Edit_Result_Num->setText(postfixFormula);

	stack<QString> stck_calcNum;
	i = 0;
	while (!postfix.empty())
	{
		if (postfix.at(i) == '*')
		{
		backNum = stck_calcNum.top().toUInt(&ok, 10);
		stck_calcNum.pop();
		frontNum = stck_calcNum.top().toUInt(&ok, 10);
		stck_calcNum.pop();
		stck_calcNum.push(QString::number(frontNum * backNum));
		postfix.removeAt(i);
		i--;
		}
		else if (postfix.at(i) == '/')
		{
			backNum = stck_calcNum.top().toUInt(&ok, 10);
			stck_calcNum.pop();
			frontNum = stck_calcNum.top().toUInt(&ok, 10);
			stck_calcNum.pop();
			stck_calcNum.push(QString::number(frontNum / backNum));
			postfix.removeAt(i);
			i--;
		}
		else if (postfix.at(i) == '+')
		{
		backNum = stck_calcNum.top().toUInt(&ok, 10);
		stck_calcNum.pop();
		frontNum = stck_calcNum.top().toUInt(&ok, 10);
		stck_calcNum.pop();
		stck_calcNum.push(QString::number(frontNum + backNum));
		postfix.removeAt(i);
		i--;
		}
		else if (postfix.at(i) == '-')
		{
		backNum = stck_calcNum.top().toUInt(&ok, 10);
		stck_calcNum.pop();
		frontNum = stck_calcNum.top().toUInt(&ok, 10);
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
// 	if (m_numeric_system == 16)
// 	{
// 		int dec_result = result.toUInt();
// 		convert_hex(dec_result);
// 		ui->Edit_Result_Num->setText(result);
// 	}
// 	else if (m_numeric_system == 10)
// 	{
 		ui->Edit_Result_Num->setText(result);
// 	}
// 	else if (m_numeric_system == 8)
// 	{
// 		int dec_result = result.toUInt();
// 		ui->Edit_Result_Num->setText(result);
// 	}
// 	else if (m_numeric_system == 2)
// 	{
// 		int dec_result = result.toUInt();
// 		ui->Edit_Result_Num->setText(result);
// 	}
// 	
}

// QString convert_hex(int dec_result)
// {
// 	int i = 0;
// 	stack<QString> hex_result;
// 	char code[] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
// 
// 	do {
// 		hex_result.push = QString(code[dec_result % 16]);
// 	} while ((dec_result /= 16) > 0);
// 
// 	return ;
// }

bool Prog_Calc::isOperand(QChar elem)
{
	bool rtnValue;
	if (elem == "+" || elem == "-" || elem == "*" || elem == "/")
		rtnValue = true;
	else
		rtnValue = false;

	return rtnValue;
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
