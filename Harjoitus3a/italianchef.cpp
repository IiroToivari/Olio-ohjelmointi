#include "italianchef.h"

//ItalianChef::ItalianChef() {}

ItalianChef::ItalianChef(string name): Chef(name)
{
cout << "ItalianChef " << name << " konstruktori" << endl;
}

string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta()
{
    cout << "Italian Chef " <<name<< " makes pasta"<< endl;
}

ItalianChef::~ItalianChef()
{
    cout << "ItalianChef " << name << " dekonstruktori" << endl;
}
