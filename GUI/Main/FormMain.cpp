

#include "FormMain.h"


FormMain::FormMain(QWidget *parent) : QWidget(parent)
{
    setupUi(this);

    connect(btnPlay, SIGNAL(clicked(bool)), SLOT(play()));
}

FormMain::~FormMain()
{
}

void FormMain::play()
{
    player = new QMediaPlayer;

    playlist = new QMediaPlaylist(player);
    playlist->addMedia(QUrl("http://example.com/myfile1.mp3"));
    playlist->addMedia(QUrl("http://example.com/myfile2.mp3"));
      // ...
    playlist->setCurrentIndex(1);
    player->play();
}

