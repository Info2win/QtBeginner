#include <QCoreApplication>
#include <test.h>

//Get a list of pointers

typedef QList<test*> testList;

testList getList()
{
    testList list;
    for(int i=0; i<5; i++)
    {
        list.append(new test());
        list.last()->setObjectName("Test"+QString::number(i));
    }
    return list;
}

void display(testList list)
{
    foreach(test* item,list)
    {
        qInfo() << item;

    }

}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    testList list = getList();
    display(list);
    qInfo()<<"Deleting...";
    qDeleteAll(list.begin(),list.end()); // the entire list
    list.clear();
    display(list);

    return a.exec();
}
