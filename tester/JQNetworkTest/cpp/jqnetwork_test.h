﻿#ifndef __CPP_JQNETWORK_TEST_H__
#define __CPP_JQNETWORK_TEST_H__

// Qt lib import
#include <QObject>

class JQNetworkTest: public QObject
{
     Q_OBJECT

public:
    JQNetworkTest() = default;

    ~JQNetworkTest() = default;

public slots:
    void jqNetworkThreadPoolTest();

public slots:
    void jqNetworkThreadPoolBenchmark();

    void jqNetworkThreadPoolBenchmark2();

public slots:
    void jqNetworkConnectTest();

public slots:
    void jeNetworkPackageTest();

public slots:
    void jqNetworkServerTest();

public slots:
    void jqNetworkClientTest();

private slots:
    void jqNetworkServerAndClientTest();
};

#endif//__CPP_JQNETWORK_TEST_H__
