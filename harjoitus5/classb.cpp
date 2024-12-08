#include "classb.h"

void ClassB::setInfo(const string &newInfo)
{
    info = newInfo;
}

string ClassB::getInfo() const
{
    return info;
}

ClassB::ClassB() {}
