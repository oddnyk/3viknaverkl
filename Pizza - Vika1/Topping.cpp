#include <strings.h>
#include "Topping.h"
using namespace std;
Topping::Topping()
{
    //ctor
}
Topping::Topping(char *name, double price){
    strcpy(this->name, name);
    this->price = price;
}
Topping::~Topping()
{
    //dtor
}
istream& operator >> (istream& in, Topping& topping){
    //cout << "Name: ";
    in >> topping.name;
   // cout << "price: ";
    in >> topping.price;
    return in;
}
ostream& operator << (ostream& out, const Topping& topping){

    out << topping.name << " " << topping.price;

    return out;
}
