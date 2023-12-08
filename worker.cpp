#include <iostream>
#include "worker.h"

void Worker::doWork(const QString &parameter) {
    QString result;
    /* ... here is the expensive or blocking operation ... */
    std::cout << "working!" << std::endl;
    int sum = 0;
    for (int i = 0; i < 100; i++){
        sum += i;
    }
    result += QString::number(sum);
    emit resultReady(result);
}
