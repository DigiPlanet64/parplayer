#ifndef FORMMAIN_H
#define FORMMAIN_H

#include <QtCore/qglobal.h>
#if QT_VERSION >= 0x050000
#include <QtWidgets/QWidget>
#else
#include <QtGui/QWidget>
#endif

#include "ui_FormMain.h"

#include <QMediaPlayer>
#include <QMediaPlaylist>

class FormMain : public QWidget, public Ui::FormMain
{
    Q_OBJECT

public:
    FormMain(QWidget *parent = nullptr);
    ~FormMain();

private slots:
    void play();

private:
    //Ui::FormMain *ui;

    QMediaPlayer *player;
    QMediaPlaylist *playlist;
};
#endif // FORMMAIN_H
