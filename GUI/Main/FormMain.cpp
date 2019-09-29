

#include "FormMain.h"


FormMain::FormMain(QWidget *parent) : QWidget(parent)
{
    setupUi(this);

    player = new QMediaPlayer;
    playlist = new QMediaPlaylist(player);

    player = new QMediaPlayer(this);
    player->setAudioRole(QAudio::MusicRole);
    qInfo() << "Supported audio roles:";
    for (QAudio::Role role : player->supportedAudioRoles())
        qInfo() << "    " << role;
    // owned by PlaylistModel
    playlist = new QMediaPlaylist();
    player->setPlaylist(playlist);
//! [create-objs]

    connect(player, SIGNAL(durationChanged(qint64)), this, SLOT(durationChanged(qint64)));
    connect(player, SIGNAL(positionChanged(qint64)), this, SLOT(positionChanged(qint64)));
    //connect(player, QOverload<>::of(&QMediaPlayer::metaDataChanged), this, &Player::metaDataChanged);
    //connect(playlist, &QMediaPlaylist::currentIndexChanged, this, &Player::playlistPositionChanged);
    //connect(player, &QMediaPlayer::mediaStatusChanged, this, &Player::statusChanged);
    //connect(player, &QMediaPlayer::bufferStatusChanged, this, &Player::bufferingProgress);
    //connect(player, &QMediaPlayer::videoAvailableChanged, this, &Player::videoAvailableChanged);
    //connect(player, QOverload<QMediaPlayer::Error>::of(&QMediaPlayer::error), this, &Player::displayErrorMessage);
    //connect(player, &QMediaPlayer::stateChanged, this, &Player::stateChanged);





    connect(btnPlay, SIGNAL(clicked(bool)), SLOT(play()));
}

FormMain::~FormMain()
{
}

void FormMain::play()
{
    //playlist->addMedia( QUrl::fromLocalFile("E:/sample.mp3"));
    //playlist->setCurrentIndex(0);
    //qDebug()<<playlist->currentMedia().canonicalUrl()<<playlist->currentMedia().canonicalResource().audioBitRate();
    //qDebug()<<playlist->errorString();

    player->setMedia(QUrl::fromLocalFile("E:/sample.mp3"));

    player->play();
    qDebug()<<player->errorString();
    //qDebug()<<player->currentMedia().duration();
    //lblFileName->setText(player->currentMedia().canonicalUrl().fileName());

    sldrPos->setRange(0, player->duration());
    //lblDuration->setText(QString::number(player->duration()));
}

void FormMain::durationChanged(qint64 d)
{
    lblFileName->setText(player->currentMedia().canonicalUrl().fileName());
    lblDuration->setText(QString::number(d));
    sldrPos->setMaximum(d / 1000);
}

void FormMain::positionChanged(qint64 v)
{
    sldrPos->setValue(v / 1000);
}

