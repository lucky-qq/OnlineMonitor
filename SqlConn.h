#ifndef SQLCONN_H
#define SQLCONN_H
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlError>

QSqlDatabase* Conn();

bool QueryRun(QSqlQuery& query, const QString opt, const QString type = "normal");

bool InitTable();

#endif // SQLCONN_H
