#include <QCoreApplication>
#include <QScopedPointer>
#include <QSharedPointer>
#include "test.h"

void testScope()
{
    QScopedPointer<Test> ptr(new Test());
    ptr->message("Hello");
}
void Finish(QSharedPointer<Test> ptr)
{
    ptr->message("Finished");
}
void Work(QSharedPointer<Test> ptr)
{
    ptr->message("Working");
    Finish(ptr);
}
void Step(QSharedPointer<Test> ptr)
{
    ptr->message("Stepping");
    for(int i=0; i<3; i++)
    {
        Work(ptr);
    }
}
void testShared(Test* test)
{
    QSharedPointer<Test> ptr(test);
    ptr->message("Starting");
    Step(ptr);
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    //testScope();
    testShared(new Test());
    return a.exec();
}
