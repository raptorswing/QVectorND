#include "tst_QVectorNDTests.h"

#include "QVectorND.h"

QVectorNDTests::QVectorNDTests()
{
}

//private test slot
void QVectorNDTests::generalConstructor()
{
    const int count = 50;
    QVectorND a(count);

    for (int i = 0; i < count; i++)
    {
        QVERIFY(a[i] == 0.0);
        QVERIFY(a.val(i) == 0.0);
    }

    QVERIFY(a.dimension() == count);
}

//private test slot
void QVectorNDTests::QListConstructor()
{
    const int count = 50;

    QList<qreal> goods;
    for (int i = 0; i < count; i++)
        goods.append(_randomFloat());

    QVectorND toTest(goods);

    for (int i = 0; i < count; i++)
    {
        QVERIFY(toTest[i] == goods[i]);
        QVERIFY(toTest.val(i) == goods[i]);
    }

    QVERIFY(toTest.dimension() == count);
}

//private test slot
void QVectorNDTests::lengthSquaredBenchmark()
{
    const int count = 50;

    QBENCHMARK
    {
        QList<qreal> goods;
        for (int i = 0; i < count; i++)
            goods.append(_randomFloat());

        const QVectorND toTest(goods);
        toTest.lengthSquared();
    }
}

//private static
qreal QVectorNDTests::_randomFloat()
{
    qreal toRet = (qreal)qrand() / ((qreal)RAND_MAX/1000000.0);
    return toRet;
}
