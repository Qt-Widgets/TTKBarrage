#ifndef BARRAGEANIMATION_H
#define BARRAGEANIMATION_H

/* =================================================
 * This file is part of the Video Barrage project
 * Copyright (c) 2014 - 2017 Greedysky Studio
 * All rights reserved!
 * Redistribution and use of the source code or any derivative
 * works are strictly forbiden.
   =================================================*/

#include <QSize>
#include <QPropertyAnimation>

class BarrageAnimation : public QPropertyAnimation
{
    Q_OBJECT
public:
    explicit BarrageAnimation(QObject *parent = 0);
    BarrageAnimation(QObject *target, const QByteArray &propertyName, QObject *parent = 0);
    ~BarrageAnimation() = default;

    void setSize(const QSize &size);

public slots:
    void animationFinished();

protected:
    void init();
    QSize m_parentSize;

};

#endif // BARRAGEANIMATION_H
