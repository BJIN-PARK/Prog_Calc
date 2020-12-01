#include "Prog_Calc.h"

Prog_Calc::Prog_Calc(QWidget* parent)
    : QMainWindow(parent),
    ui(new Ui::Prog_Calc)
{
    ui->setupUi(this);

	ui->Edit_Calc_Num->setReadOnly(true);
	ui->Edit_Result_Num->setReadOnly(true);

	this->setFocus();

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

// 진수 입력 계산 미구현
// 	connect(ui->A_btn, &QPushButton::clicked, this, &Prog_Calc::onBtnClick);
// 	connect(ui->B_btn, &QPushButton::clicked, this, &Prog_Calc::onBtnClick);
// 	connect(ui->C_btn, &QPushButton::clicked, this, &Prog_Calc::onBtnClick);
// 	connect(ui->D_btn, &QPushButton::clicked, this, &Prog_Calc::onBtnClick);
// 	connect(ui->E_btn, &QPushButton::clicked, this, &Prog_Calc::onBtnClick);
// 	connect(ui->F_btn, &QPushButton::clicked, this, &Prog_Calc::onBtnClick);

	// Backspace click
	connect(ui->Backspace_btn, &QPushButton::clicked, this, &Prog_Calc::onBtnClick);

	// operand click
	connect(ui->Add_btn, &QPushButton::clicked, this, &Prog_Calc::onBtnClick);
	connect(ui->Subtract_btn, &QPushButton::clicked, this, &Prog_Calc::onBtnClick);
	connect(ui->Multiply_btn, &QPushButton::clicked, this, &Prog_Calc::onBtnClick);
	connect(ui->Division_btn, &QPushButton::clicked, this, &Prog_Calc::onBtnClick);
	connect(ui->Percent_btn, &QPushButton::clicked, this, &Prog_Calc::onBtnClick);
	connect(ui->Paren_Left_btn, &QPushButton::clicked, this, &Prog_Calc::onBtnClick);
	connect(ui->Paren_Right_btn, &QPushButton::clicked, this, &Prog_Calc::onBtnClick);

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

void Prog_Calc::keyPressEvent(QKeyEvent* event)
{

	QString inputNum;
	switch (event->key())
	{
	case Qt::Key_0:
		isRightNumLoc();
		inputNum = QString("0");
		m_stckCalc.push(inputNum);
		break;
	case Qt::Key_1:
		isRightNumLoc();
		inputNum = QString("1");
		m_stckCalc.push(inputNum);
		break;
	case Qt::Key_2:
		isRightNumLoc();
		inputNum = QString("2");
		m_stckCalc.push(inputNum);
		break;
	case Qt::Key_3:
		isRightNumLoc();
		inputNum = QString("3");
		m_stckCalc.push(inputNum);
		break;
	case Qt::Key_4:
		isRightNumLoc();
		inputNum = QString("4");
		m_stckCalc.push(inputNum);
		break;
	case Qt::Key_5:
		isRightNumLoc();
		inputNum = QString("5");
		m_stckCalc.push(inputNum);
		break;
	case Qt::Key_6:
		isRightNumLoc();
		inputNum = QString("6");
		m_stckCalc.push(inputNum);
		break;
	case Qt::Key_7:
		isRightNumLoc();
		inputNum = QString("7");
		m_stckCalc.push(inputNum);
		break;
	case Qt::Key_8:
		isRightNumLoc();
		inputNum = QString("8");
		m_stckCalc.push(inputNum);
		break;
	case Qt::Key_9:
		isRightNumLoc();
		inputNum = QString("9");
		m_stckCalc.push(inputNum);
		break;
	case Qt::Key_Plus:
		if (m_stckCalc.empty() || m_stckCalc.top() == "(")
		{
			return;
		}
		else if (isOperand())
		{
			m_stckCalc.pop();
		}
		inputNum = QString("+");
		m_stckCalc.push(inputNum);
		break;
	case Qt::Key_Minus:
		if (m_stckCalc.empty() || m_stckCalc.top() == "(")
		{
			m_stckCalc.push(QString("0"));
		}
		else if (isOperand())
		{
			m_stckCalc.pop();
		}
		inputNum = QString("-");
		m_stckCalc.push(inputNum);
		break;
	case Qt::Key_Asterisk:
		if (m_stckCalc.empty() || m_stckCalc.top() == "(")
		{
			return;
		}
		else if (isOperand())
		{
			m_stckCalc.pop();
		}
		inputNum = QString("*");
		m_stckCalc.push(inputNum);
		break;
	case Qt::Key_Slash:
		if (m_stckCalc.empty() || m_stckCalc.top() == "(")
		{
			return;
		}
		else if (isOperand())
		{
			m_stckCalc.pop();
		}
		inputNum = QString("/");
		m_stckCalc.push(inputNum);
		break;
	case Qt::Key_Percent:
		if (m_stckCalc.empty() || m_stckCalc.top() == "(")
		{
			return;
		}
		else if (isOperand())
		{
			m_stckCalc.pop();
		}
		inputNum = QString("%");
		m_stckCalc.push(inputNum);
		break;
	case Qt::Key_ParenLeft:
		if (!m_stckCalc.empty() && m_stckCalc.top() == ")")
		{
			return;
		}
		else if (!m_stckCalc.empty() && !isOperand())
		{
			if (m_stckCalc.top() == "(")
			{
				inputNum = QString("(");
				m_stckCalc.push(inputNum);
				m_nLeftParenCnt++;
			}
		}
		else
		{
			inputNum = QString("(");
			m_stckCalc.push(inputNum);
			m_nLeftParenCnt++;
		}
		break;
	case Qt::Key_ParenRight:
		if (m_stckCalc.empty() || isOperand())
		{
			return;
		}
		else if (m_nRightParenCnt >= m_nLeftParenCnt)
		{
			return;
		}
		else if (!m_stckCalc.empty() && m_stckCalc.top() == "(")
		{
			m_stckCalc.push("0");
			inputNum = QString(")");
			m_stckCalc.push(inputNum);
			m_nRightParenCnt++;
		}
		else
		{
			inputNum = QString(")");
			m_stckCalc.push(inputNum);
			m_nRightParenCnt++;
		}
		break;
		//실행 시 왼쪽Alt 혹은 Tap 키 입력 혹은 다른 QPushButton 클릭 후 활성화(원인파악 중)
	case Qt::Key_Backspace:
		if (m_stckCalc.empty())
		{
			return;
		}
		else
		{
			if (m_stckCalc.top() == ("("))
			{
				m_nLeftParenCnt--;
			}
			else if (m_stckCalc.top() == (")"))
			{
				m_nRightParenCnt--;
			}
			m_stckCalc.pop();
		}
		break;
	case Qt::Key_Enter:
		getResult();
		break;
	case Qt::Key_Return:
		getResult();
		break;
	case Qt::Key_Equal:
		getResult();
		break;
	case Qt::Key_Escape:
		clear();
		break;
	//실행 시 왼쪽Alt 혹은 Tap 키 입력 혹은 다른 QPushButton 클릭 후 활성화(원인파악 중)
	case Qt::Key_Delete:
		clear();
		break;
	}
	displayFormula();		// display formula
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

	int m_nResult = 0;
	int size = m_stckCalc.size();
	for (int i = 0; i < size; i++)
	{
		m_stckCalc.pop();
	}
}

void Prog_Calc::inputBtnNumToStack()
{
	QString inputNum;
	if (sender() == ui->Num_Zero_btn)
	{
		isRightNumLoc();
		inputNum = QString("0");
	}
	else if (sender() == ui->Num_One_btn)
	{
		isRightNumLoc();
		inputNum = QString("1");
	}
	else if (sender() == ui->Num_Two_btn)
	{
		isRightNumLoc();
		inputNum = QString("2");
	}
	else if (sender() == ui->Num_Three_btn)
	{
		isRightNumLoc();
		inputNum = QString("3");
	}
	else if (sender() == ui->Num_Four_btn)
	{
		isRightNumLoc();
		inputNum = QString("4");
	}
	else if (sender() == ui->Num_Five_btn)
	{
		isRightNumLoc();
		inputNum = QString("5");
	}
	else if (sender() == ui->Num_Six_btn)
	{
		isRightNumLoc();
		inputNum = QString("6");
	}
	else if (sender() == ui->Num_Seven_btn)
	{
		isRightNumLoc();
		inputNum = QString("7");
	}
	else if (sender() == ui->Num_Eight_btn)
	{
		isRightNumLoc();
		inputNum = QString("8");
	}
	else if (sender() == ui->Num_Nine_btn)
	{
		isRightNumLoc();
		inputNum = QString("9");
	}
// 진수 입력 계산 미구현
// 	else if (sender() == ui->A_btn)
// 	{
// 		inputNum = QString("A");
// 	}
// 	else if (sender() == ui->B_btn)
// 	{
// 		inputNum = QString("B");
// 	}
// 	else if (sender() == ui->C_btn)
// 	{
// 		inputNum = QString("C");
// 	}
// 	else if (sender() == ui->D_btn)
// 	{
// 		inputNum = QString("D");
// 	}
// 	else if (sender() == ui->E_btn)
// 	{
// 		inputNum = QString("E");
// 	}
// 	else if (sender() == ui->F_btn)
// 	{
// 		inputNum = QString("F");
// 	}
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
	else if (sender() == ui->Percent_btn) // "%"
	{
		if (m_stckCalc.empty() || m_stckCalc.top() == "(")
		{
			return;
		}
		else if (isOperand())
		{
			m_stckCalc.pop();
		}
		inputNum = QString("%");
	}
	else if (sender() == ui->Paren_Left_btn) // "("
	{
		if (!m_stckCalc.empty() && m_stckCalc.top() == ")")
		{
			return;
		}
		else if (!m_stckCalc.empty() && !isOperand())
		{
			if (m_stckCalc.top() == "(")
			{
				inputNum = QString("(");
				m_nLeftParenCnt++;
			}
		}
		else
		{
			inputNum = QString("(");
			m_nLeftParenCnt++;
		}
	}
	else if (sender() == ui->Paren_Right_btn) // ")"
	{
		if (m_stckCalc.empty() || isOperand())
		{
			return;
		}
		else if (m_nRightParenCnt >= m_nLeftParenCnt)
		{
			return;
		}
		else if (!m_stckCalc.empty() && m_stckCalc.top() == "(")
		{
			m_stckCalc.push("0");
			inputNum = QString(")");
			m_nRightParenCnt++;
		}
		else
		{
			inputNum = QString(")");
			m_nRightParenCnt++;
		}
	}
	else if (sender() == ui->Backspace_btn)
	{
		if (m_stckCalc.top() == ("("))
		{
			m_nLeftParenCnt--;
		}
		else if (m_stckCalc.top() == (")"))
		{
			m_nRightParenCnt--;
		}
		m_stckCalc.pop();
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
	if (m_stckCalc.empty())
	{
		m_stckCalc.push("0");
	}
	else if (m_stckCalc.top() == "+" || m_stckCalc.top() == "-" || m_stckCalc.top() == "*" || m_stckCalc.top() == "/" || m_stckCalc.top() == "%")
	{
		return;
	}
	else if (m_stckCalc.size() == 1 && m_stckCalc.top() == "(")
	{
		m_stckCalc.push("0");
		m_stckCalc.push(")");
		QString solo_left_paren;
		solo_left_paren.append("(");
		solo_left_paren.append("0");
		solo_left_paren.append(")");
		ui->Edit_Calc_Num->setText(solo_left_paren);
	}
	else if (m_nRightParenCnt != m_nLeftParenCnt)
	{
		return;
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
				if (tempString.isEmpty())
				{
					stckCalc_copy.push(strDisplayText.at(i));
				}
				else
				{
					stckCalc_copy.push(tempString);
					stckCalc_copy.push(strDisplayText.at(i));
					tempString.clear();
				}
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
	{
		m_stckCalc.pop();
	}
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
		else if (infix.at(i) == "*" || infix.at(i) == "/" || infix.at(i) == "%" || infix.at(i) == "+" || infix.at(i) == "-") /* 연산자이면 */
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
	int error_detect_cnt = 0;
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
			if (backNum == 0)
			{
				error_detect_cnt++;
				break;
			}
			else
			{
				stck_calcNum.push(QString::number(frontNum / backNum));
				postfix.removeAt(i);
				i--;
			}
		}
		else if (postfix.at(i) == '%')
		{
			backNum = stck_calcNum.top().toInt(&ok, 10);
			stck_calcNum.pop();
			frontNum = stck_calcNum.top().toInt(&ok, 10);
			stck_calcNum.pop();
			if (backNum == 0)
			{
				error_detect_cnt++;
				break;
			}
			else
			{
				stck_calcNum.push(QString::number(frontNum % backNum));
				postfix.removeAt(i);
				i--;
			}
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
	if (error_detect_cnt > 0)
	{
		ui->Edit_Result_Num->setText("ERROR");
	}
	else
	{
		QString result = stck_calcNum.top();
		ui->Edit_Result_Num->setText(result);
		m_nResult = result.toInt();
		m_stckCalc.push(result);
	}
}

void Prog_Calc::convertResult()
{
	if (sender() == ui->Hex_btn)
	{
		QString hex_result = QString("%1").arg(m_nResult, 0, 16);
		ui->Edit_Result_Num->setText(hex_result);
	}
	else if (sender() == ui->Dec_btn)
	{
		ui->Edit_Result_Num->setText(QString::number(m_nResult));
	}
	else if (sender() == ui->Oct_btn)
	{
		QString oct_result = QString("%1").arg(m_nResult, 0, 8);
		ui->Edit_Result_Num->setText(oct_result);
	}
	else if (sender() == ui->Bin_btn)
	{
		QString bin_result = QString("%1").arg(m_nResult, 0, 2);
		ui->Edit_Result_Num->setText(bin_result);
	}
}

bool Prog_Calc::isOperand(QChar strEndOper)
{
	if (strEndOper == "+" || strEndOper == "-" || strEndOper == "*" || strEndOper == "/" || strEndOper == "%" || strEndOper == "(" || strEndOper == ")")
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Prog_Calc::isOperand()
{
	QString strEndOper;
	strEndOper = m_stckCalc.top();
	if (strEndOper == "+" || strEndOper == "-" || strEndOper == "*" || strEndOper == "/" || strEndOper == "%")
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
	if (oper == "*" || oper == "/" || oper == "%")
		return 4;
	else if (oper == "+" || oper == "-")
		return 3;
	else if (oper == "(")
		return 2;
	else
		return 1;
}

int Prog_Calc::compareOperPrior(QString first_oper, QString second_oper)
{
	int first_oper_prior = getOperPrior(first_oper);
	int second_oper_prior = getOperPrior(second_oper);

	if (first_oper_prior > second_oper_prior)
		return 1;
	else if (second_oper_prior > first_oper_prior)
		return -1;
	else
		return 0;
}

void Prog_Calc::isRightNumLoc()
{
	if (!m_stckCalc.empty() && m_stckCalc.top() == ")")
	{
		return;
	}
}
