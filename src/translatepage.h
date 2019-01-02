#ifndef TRANSLATEPAGE_H
#define TRANSLATEPAGE_H

#include <QWidget>
#include <QPushButton>
#include <QComboBox>
#include <QPlainTextEdit>
#include <QTimer>
#include "api/youdaoapi.h"

class TranslatePage : public QWidget
{
    Q_OBJECT

public:
    TranslatePage(QWidget *parent = nullptr);
    ~TranslatePage();

protected:
    void keyPressEvent(QKeyEvent *);

private:
    void translate();
    void handleTranslateFinished(const QString &result);
    void delayTranslate();

private:
    QPlainTextEdit *origin_edit_;
    QPlainTextEdit *translate_edit_;
    QComboBox *type_combobox_;
    QPushButton *translate_btn_;
    QTimer *m_delayTimer;
    YoudaoAPI *m_api;
};

#endif
