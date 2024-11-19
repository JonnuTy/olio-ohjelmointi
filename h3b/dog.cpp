#include "dog.h"

Dog::Dog() {}

Dog::~Dog()
{
    cout<<"Dog destruktori kutsuttu"<<endl;
}

void Dog::callOut()
{
    cout<<"Koira haukkuu!"<<endl;
}
