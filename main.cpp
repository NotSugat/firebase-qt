#include <QCoreApplication>
#include "databasehandler.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    DatabaseHandler dbHandler;

    return a.exec();
}
