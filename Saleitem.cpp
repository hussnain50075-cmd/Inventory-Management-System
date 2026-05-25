#include "Saleitem.h"

//ctor
Saleitem::Saleitem(string itemid, int quantity, double unitprice, double subtotal){
    this->itemid = itemid;
    this->quantity = quantity;
    this->unitprice = unitprice;
    this->subtotal = subtotal;
}
//setter
void Saleitem::setitemid(string itemid){
    this->itemid;
}
void Saleitem::setquantity(int quantity){
    this->quantity = quantity;
}
void Saleitem::setunitprice(double unitprice){
    this->unitprice  = unitprice;
}
void Saleitem::setsubtotal(double subtotal){
    this->subtotal= subtotal;
}
//getter
string Saleitem::getitemid()const{
    return itemid;
}
int Saleitem::getquantity()const{
    return quantity;
}
double Saleitem::getunitprice()const{
    return unitprice;
}
double Saleitem::getsubtotal()const{
    return subtotal;
}
//memeber function
void Saleitem::display()const{
    cout << "=============Sale item Detail===================" << endl;
    cout << "Item ID:\t\t" << getitemid() << endl;
    cout << "Unitprice:\t\t" << getunitprice() << endl;
    cout << "Quantity:\t\t" << getquantity() << endl;
    cout << "Subtotal:\t\t" << getsubtotal() << endl;
}
//dtor
Saleitem::~Saleitem(){}
