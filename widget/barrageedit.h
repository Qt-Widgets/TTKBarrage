#ifndef BARRAGEEDIT_H
#define BARRAGEEDIT_H

/* =================================================
 * This file is part of the Video Barrage project
 * Copyright (c) 2014 - 2015 Greedysky Studio
 * All rights reserved!
 * Redistribution and use of the source code or any derivative
 * works are strictly forbiden.
   =================================================*/

#include <QLineEdit>

class BarrageEdit : public QLineEdit
{
    Q_OBJECT
public:
    explicit BarrageEdit(QWidget *parent = 0);

    void addFilterText(const QString &text);

signals:
    void enterFinished(const QString &text);

protected:
    virtual void focusInEvent(QFocusEvent *event) override;
    virtual void focusOutEvent(QFocusEvent *event) override;
    virtual void contextMenuEvent(QContextMenuEvent *event) override;
    virtual void keyPressEvent(QKeyEvent *event) override;
    virtual void keyReleaseEvent(QKeyEvent *event) override;

    QString m_filterText;

};

#endif // BARRAGEEDIT_H
