#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QObject>
#include <QThread>

class Controller : public QObject
{
    Q_OBJECT
    QThread workerThread;
public:
    Controller();
    ~Controller();
public slots:
    void handleResults(const QString &q);
signals:
    void operate(const QString &m);
};



#endif // CONTROLLER_H
