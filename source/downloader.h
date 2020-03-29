#ifndef DOWNLOADER_H
#define DOWNLOADER_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QFile>
#include <QUrl>
#include <QDebug>
#include <iostream>
#include <fstream>
#include "text.h"

class Downloader : public QObject
{
    Q_OBJECT
public:
    explicit Downloader(QObject *parent = 0);

signals:
    void onReady();

public slots:
    void getData(std::vector<std::string> conf);     // Метод инициализации запроса на получение данных
    void onResult(QNetworkReply *reply);    // Слот обработки ответа о полученных данных
private:
    Text text;
    QNetworkAccessManager *manager; // менеджер сетевого доступа
};

#endif // DOWNLOADER_H
