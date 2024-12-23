#include "car.h"

string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

void Car::printDetails()
{
    cout<<"Auto : "<<model<<" "<<brand<<endl;
    cout<<"Moottori : "<<objEngine1.getHorsepower()<<" hp, "<<objEngine1.getDisplacement()<<" L"<<endl;
    cout<<"Rengas 1:"<<objWheel1.getSize()<<" tuumaa, "<<objWheel1.getType()<<endl;
    cout<<"Rengas 2:"<<objWheel2.getSize()<<" tuumaa, "<<objWheel2.getType()<<endl;
    cout<<"Rengas 3:"<<objWheel3.getSize()<<" tuumaa, "<<objWheel3.getType()<<endl;
    cout<<"Rengas 4:"<<objWheel4.getSize()<<" tuumaa, "<<objWheel4.getType()<<endl;
}

Car::Car() {}

Car::Car(string m, string b)
{
    model = m;
    brand = b;
}

void Car::setEngine()
{
    objEngine1.setHorsepower(150);
    objEngine1.setDisplacement(2.0);
}

void Car::setWheels()
{
    objWheel1.setSize(17);
    objWheel1.setType("kesarengas");
    objWheel2.setSize(17);
    objWheel2.setType("kesarengas");
    objWheel3.setSize(17);
    objWheel3.setType("kesarengas");
    objWheel4.setSize(17);
    objWheel4.setType("kesarengas");
}
