#include "Sale.h"

//ctor
Sale::Sale(string saleid, double totalamount, string paymentmethod){
    this->saleid= saleid;
    this->totalamount= totalamount;
    this->Paymentmethod= paymentmethod;
}
//setter
void Sale::setsaleid(string saleid){
    this->saleid = saleid;
}
void Sale::settotalamount(double totalamount){
    this->totalamount= totalamount;
}
void Sale::setpaymentmethod(string paymetmethod){
    this->Paymentmethod= paymetmethod;
}
//getter
string Sale::getsaleid()const{
    return saleid;
}
double Sale::gettotalamount()const{
    return totalamount;
}
string Sale::getpaymentmethod()const{
    return Paymentmethod;
}
//memeber function
void Sale::display()const{
    cout << "====================Sales Detail======================" << endl;
    cout << "Sales ID:\t\t" << getsaleid() << endl;
    cout << "Total Amount:\t\t" << gettotalamount() << endl;
    cout << "Payment Method:\t\t" << getpaymentmethod() << endl;
}
//dtor
Sale::~Sale(){}
