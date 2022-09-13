#include "test.h"


test::test(QObject *parent) : QObject(parent)
{
    qInfo()<< this << "Constructed" << parent;
}

test::~test()
{
    qInfo()<< this << "Deconstructed" << parent();
}
