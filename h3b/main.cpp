#include "animal.h"
#include "dog.h"

#include <iostream>

using namespace std;

int main()
{
    Animal objAnimal1;
    Dog objDog1;

    objAnimal1.callOut();
    objDog1.callOut();

    return 0;
}
