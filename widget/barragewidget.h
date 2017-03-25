#ifndef BARRAGEWIDGET_H
#define BARRAGEWIDGET_H

/* =================================================
 * This file is part of the Video Barrage project
 * Copyright (c) 2014 - 2017 Greedysky Studio
 * All rights reserved!
 * Redistribution and use of the source code or any derivative
 * works are strictly forbiden.
   =================================================*/

#include <QWidget>

class QLabel;
class BarrageAnimation;

class BarrageWidget : public QObject
{
    Q_OBJECT
public:
    explicit BarrageWidget(QObject *parent = 0);
    ~BarrageWidget();

    void start();
    void pause();
    void stop();

    void barrageStateChanged(bool on);
    void setSize(const QSize &size);

    void setLabelBackground(const QColor &color);
    void setLabelTextSize(int size);
    void addBarrage(const QString &string);

protected:
    void deleteItems();
    void createLabel();
    void createLabel(QLabel *label);
    void createAnimation();
    void createAnimation(QLabel *label);
    void setLabelBackground(QLabel *label);
    void setLabelTextSize(QLabel *label);
    void readBarrage();
    void writeBarrage();

    QWidget *m_parentClass;
    bool m_barrageState;
    QSize m_parentSize;
    int m_fontSize;
    QColor m_backgroundColor;
    QList<QLabel*> m_labels;
    QList<BarrageAnimation*> m_animations;
    QStringList m_barrageLists;

};

#endif // BARRAGEWIDGET_H
