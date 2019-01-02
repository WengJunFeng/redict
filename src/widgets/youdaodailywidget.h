#ifndef YOUDAODAILYWIDGET_H
#define YOUDAODAILYWIDGET_H

#include <QWidget>
#include <QLabel>
#include <QStackedLayout>
#include "../api/youdaoapi.h"
#include "../progresspage.h"

class YoudaoDailyWidget : public QWidget
{
    Q_OBJECT

public:
    explicit YoudaoDailyWidget(QWidget *parent = nullptr);

private:
    void handleDailyFinished(std::tuple<QString, QString, QString, QString, QString>);
    void handleLoadImageFinsihed(const QByteArray &data);
    void handleNetworkError();
    void reload();

private:
    YoudaoAPI *youdao_api_;
    QLabel *image_label_;
    QLabel *title_label_;
    QLabel *summary_label_;
    QLabel *datetime_label_;

    QStackedLayout *stacked_layout_;
    ProgressPage *progress_page_;
};

#endif // YOUDAODAILYWIDGET_H
