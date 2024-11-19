#include "animal.h"

Animal::Animal() {

}

Animal::~Animal()
{
    cout<<"Animal destruktori kutsuttu"<<endl;
}

void Animal::callOut()
{
    cout<<"Eläin ääntelee."<<endl;
}
