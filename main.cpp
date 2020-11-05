#include "Prog_Calc.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Prog_Calc w;
    w.show();
    return a.exec();
}
