#include "downloader.h"

Downloader::Downloader(QObject *parent) : QObject(parent)
{
    // Инициализируем менеджер ...
    manager = new QNetworkAccessManager();
    // ... и подключаем сигнал о завершении получения данных к обработчику полученного ответа
    connect(manager, &QNetworkAccessManager::finished, this, &Downloader::onResult);
}

void Downloader::getData(std::vector<std::string> missing)
{
    QString argUrl;
    for(int i=0; i<missing.size(); i++){
        std::string str = (missing[i]);
        argUrl = QString::fromStdString(str);
        QUrl url = argUrl;
        QNetworkRequest request;    // Отправляемый запрос
        request.setUrl(url);        // Устанавлвиваем URL в запрос
        manager->get(request);      // Выполняем запрос
    }
}

void Downloader::onResult(QNetworkReply *reply)
{
    // Если в процесе получения данных произошла ошибка
    if(reply->error()){
        // Сообщаем об этом и показываем информацию об ошибках
        qDebug() << "ERROR";
        qDebug() << reply->errorString();
    } else {
        // В противном случае создаём объект для работы с файлом
        std::ifstream filePath("../data/conf/downloaderPath.txt");
        std::string downloadPath;
        filePath >> downloadPath;
        filePath.close();

        std::string url = (reply->url()).toString().toUtf8().constData();

        std::string t = url;
        std::string s = "https://www.jz-software.com/app/r6s-randomizer/";

        std::string::size_type i = t.find(s);

        if (i != std::string::npos)
           t.erase(i, s.length());

        QFile *file = new QFile(QString::fromStdString("../"+t));
        // Создаём файл или открываем его на перезапись ...
        if(file->open(QFile::WriteOnly)){
            file->write(reply->readAll());  // ... и записываем всю информацию со страницы в файл
            file->close();                  // закрываем файл
        qDebug() << "Downloading is completed";
        qDebug() << "Filename: " << QUrl(reply->url()).fileName();
        qDebug() << "Url: " << (reply->url());
        qDebug() << "Clean url: " << QString::fromStdString(t);
        emit onReady(); // Посылаем сигнал о завершении получения файла
        }
    }
}
