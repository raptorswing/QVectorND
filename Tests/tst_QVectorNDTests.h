#ifndef TST_QVECTORNDTESTS_H
#define TST_QVECTORNDTESTS_H

#include <QString>
#include <QtTest>

class QVectorNDTests : public QObject
{
    Q_OBJECT

public:
    QVectorNDTests();

private Q_SLOTS:
    void generalConstructor();
    void QListConstructor();
    void manhattanDistance();
    void lengthSquaredBenchmark();

    static qreal _randomFloat();
};

#endif // TST_QVECTORNDTESTS_H
