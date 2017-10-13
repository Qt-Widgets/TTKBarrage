#ifndef BARRAGEANIMATION_H
#define BARRAGEANIMATION_H

/* =================================================
 * This file is part of the TTK Barrage project
 * Copyright (C) 2014 - 2017 Greedysky Studio

 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License along
 * with this program; If not, see <http://www.gnu.org/licenses/>.
 ================================================= */

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
