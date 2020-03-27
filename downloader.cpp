#include "downloader.h"

Downloader::Downloader(QObject *parent) : QObject(parent)
{
    // Инициализируем менеджер ...
    manager = new QNetworkAccessManager();
    // ... и подключаем сигнал о завершении получения данных к обработчику полученного ответа
    connect(manager, &QNetworkAccessManager::finished, this, &Downloader::onResult);
}

void Downloader::getData()
{
    txtToVector transform;
    std::vector<std::string> conf = transform.transform("data/toDownload.txt");

    std::vector<std::string> missing;
    missing = transform.transform(conf[0]);

    QString argUrl;
    for(int i=0; i<missing.size(); i++){
        std::string str = ("https://www.jz-software.com/app/r6s-randomizer/"+missing[i]);
        argUrl = QString::fromStdString(str);
        QUrl url = argUrl;
        QNetworkRequest request;    // Отправляемый запрос
        request.setUrl(url);        // Устанавлвиваем URL в запрос
        manager->get(request);      // Выполняем запрос
    }
    QFile toDownloadFile(QString::fromStdString(conf[0]));
    toDownloadFile.remove();
}

void Downloader::onResult(QNetworkReply *reply)
{
    // Если в процесе получения данных произошла ошибка
    if(reply->error()){
        // Сообщаем об этом и показываем информацию об ошибках
        qDebug() << "ERROR";
        qDebug() << reply->errorString();
    } else {
        txtToVector transform;
        std::vector<std::string> conf = transform.transform("data/toDownload.txt");

        // В противном случае создаём объект для работы с файлом
        QFile *file = new QFile(QString::fromStdString(conf[1])+QUrl(reply->url()).fileName());
        // Создаём файл или открываем его на перезапись ...
        if(file->open(QFile::WriteOnly)){
            file->write(reply->readAll());  // ... и записываем всю информацию со страницы в файл
            file->close();                  // закрываем файл
        qDebug() << "Downloading is completed";
        qDebug() << "Filename: " << QUrl(reply->url()).fileName();
        emit onReady(); // Посылаем сигнал о завершении получения файла

        QFile toDownloadFile(QString::fromStdString(conf[1]));
        toDownloadFile.remove();
        }
    }
}

void Downloader::createDownloadFile(std::string toDownloadLocation, std::string whereToSave){
    std::ofstream file("data/toDownload.txt");
    file << toDownloadLocation << "\n";
    file << whereToSave;
    file.close();
}
