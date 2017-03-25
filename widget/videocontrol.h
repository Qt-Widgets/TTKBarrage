#ifndef VIDEOCONTROL_H
#define VIDEOCONTROL_H

/* =================================================
 * This file is part of the Video Barrage project
 * Copyright (c) 2014 - 2017 Greedysky Studio
 * All rights reserved!
 * Redistribution and use of the source code or any derivative
 * works are strictly forbiden.
   =================================================*/

#include <QMenu>
#include <QWidget>

class QLabel;
class QSlider;
class QToolButton;
class QPushButton;

class VideoControl : public QWidget
{
    Q_OBJECT
public:
    explicit VideoControl(QWidget *parent = 0);
    ~VideoControl();

    void setValue(qint64 position) const;
    void durationChanged(qint64 duration) const;
    void setButtonStyle(bool style) const;
    void setFixedSize(int w, int h);

signals:
    void sliderValueChanged(int value);
    void mediaChanged(const QString &data);

    void addBarrageChanged(const QString &string);
    void pushBarrageChanged(bool on);
    void barrageSizeButtonChanged(int size);
    void barrageColorButtonChanged(const QColor &color);

public slots:
    void sliderReleased();
    void openFileDialog();

    void pushBarrageClicked();
    void barrageSizeButtonClicked(int index);
    void barrageColorButtonClicked(int index);

protected:
    QWidget* createBarrageWidget();
    QPushButton* createBarrageSizeButton(int index);
    QPushButton* createBarrageColorButton(int index);

    QMenu m_popupVolumn, m_popupBarrage;
    QSlider *m_timeSlider, *m_volumnSlider;
    QToolButton *m_menuButton, *m_volumnButton;
    QPushButton *m_playButton, *m_pushBarrage;
    bool m_pushBarrageOn;

};

#endif // VIDEOCONTROL_H
