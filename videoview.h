#ifndef VIDEOVIEW_H
#define VIDEOVIEW_H

/* =================================================
 * This file is part of the TTK Barrage project
 * Copyright (c) 2015 - 2017 Greedysky Studio
 * All rights reserved!
 * Redistribution and use of the source code or any derivative
 * works are strictly forbiden.
   =================================================*/

#include <QWidget>
#include <QMediaPlayer>

class QVideoWidget;
class VideoControl;
class BarrageWidget;

class VideoView : public QWidget
{
    Q_OBJECT
public:
    explicit VideoView(QWidget *parent = 0);
    ~VideoView();

signals:

public slots:
    void play();

private slots:
    void positionChanged(qint64 position);
    void durationChanged(qint64 duration);
    void setPosition(int position);
    void volumnChanged(int volumn);
    void mediaChanged(const QString &data);
    void stateChanged(QMediaPlayer::State state);

    void addBarrageChanged(const QString &string);
    void pushBarrageChanged(bool on);
    void barrageSizeButtonChanged(int size);
    void barrageColorButtonChanged(const QColor &color);

protected:
    virtual void enterEvent(QEvent *event) override;
    virtual void leaveEvent(QEvent *event) override;
    virtual void contextMenuEvent(QContextMenuEvent *event) override;

    QMediaPlayer *m_player;
    QVideoWidget *m_videoWidget;
    VideoControl *m_control;
    BarrageWidget *m_barrageCore;

};

#endif // VIDEOVIEW_H
