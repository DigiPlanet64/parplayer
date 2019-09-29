#ifndef FORMMAIN_H
#define FORMMAIN_H

#include <QtCore/qglobal.h>
#if QT_VERSION >= 0x050000
#include <QtWidgets/QWidget>
#else
#include <QtGui/QWidget>
#endif

QT_BEGIN_NAMESPACE
namespace Ui { class FormMain; }
QT_END_NAMESPACE

class FormMain : public QWidget
{
    Q_OBJECT

public:
    FormMain(QWidget *parent = nullptr);
    ~FormMain();

private:
    Ui::FormMain *ui;
};
#endif // FORMMAIN_H
