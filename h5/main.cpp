#include "assosiationa.h"
#include "aggregationa.h"
#include "classb.h"

#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int b = 10;

    cout<<"a:n arvo on: "<<a<<" ja osoite on: "<<&a<<endl;
    cout<<"b:n arvo on: "<<b<<" ja osoite on: "<<&b<<endl<<endl;

    int* myPointer = &a;

    cout<<"Pointterin osoittama osoite on: "<<myPointer<<endl;
    cout<<"Pointterin osoittaman muistipaikan arvo on: "<<*myPointer<<endl<<endl;

    myPointer = &b;

    cout<<"Pointterin osoittama osoite on: "<<myPointer<<endl;
    cout<<"Pointterin osoittaman muistipaikan arvo on: "<<*myPointer<<endl<<endl;

    int &refA = a;

    cout<<"refA osoittaa osoitteeseen: "<<&refA<<endl;
    cout<<"refA:n osoittaman muistipaikan arvo on: "<<refA<<endl<<endl;

    refA = b;

    cout<<"refA osoittaa osoitteeseen: "<<&refA<<endl;
    cout<<"refA:n osoittaman muistipaikan arvo on: "<<refA<<endl<<endl;

    ClassB objB;
    objB.setInfo("Olion B asettama info");

    AssosiationA objAss(objB);
    objAss.setBinfo("Olion objAss asettama info");

    cout<<"Assosiaatio esimerkki:"<<endl;
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAss: "<<objAss.getBinfo()<<endl<<endl;

    cout<<"Aggregaatio esimerkki:"<<endl;
    ClassB &refB=objB;
    AggregationA objAggr(refB);
    objAggr.setBinfo("Olion Agr asettama info");
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAggr "<<objAggr.getBinfo()<<endl;
    cout<<endl;

    return 0;
}
