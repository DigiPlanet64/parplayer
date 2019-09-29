
#include "GUI/Main/FormMain.h"


#include <QtCore/qglobal.h>
#if QT_VERSION >= 0x050000
#include <QtWidgets/QApplication>
#else
#include <QtGui/QApplication>
#endif


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FormMain w;
    w.show();
    return a.exec();
}
