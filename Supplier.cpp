#include "Supplier.h"
//ctor
Supplier::Supplier(string name,string email,string address, string phonenumber, string id, string companyname, string add ):Person::Person(name,email,address,phonenumber){
    this->supplierid= id;
    this->companyname= companyname;
    this->address= add;
    this->email= email;
    this->phonenumber= phonenumber;
}
//setter
void Supplier::setsupplierid(string supplierid){
    this->supplierid= supplierid;
}
void Supplier::setcompanyname(string companyname){
    this->companyname= companyname;
}
void Supplier::setaddress(string address){
    this->Supplier::address= address;
}
void Supplier::setemail(string email){
    this->Supplier::email= email;
}
void Supplier::setphonenumber(string phonenumber){
    this->Supplier::phonenumber= phonenumber;
}
//getter
string Supplier::getsupplierid()const{
    return supplierid;
}
string Supplier::getcompanyname()const{
    return companyname;
}
string Supplier::getemail()const{
    return Supplier::email;
}
string Supplier::getaddress()const{
    return Supplier::address;
}
string Supplier::getphonenumber()const{
    return Supplier::phonenumber;
}
//Memeber function
void Supplier::display() const{
    cout << "=============Person Detail===============" << endl;
    cout << "Name:\t\t" << Person::getname() << endl;
    cout << "Email:\t\t" << Person::getemail() << endl;
    cout << "Address:\t" << Person::getaddress() << endl;
    cout << "Phonenumber:\t" << Person::getphonenumber() << endl;
    cout << "=============Supplier Detail=============" << endl;
    cout << "Name:\t\t" << Supplier::getname()<< endl;
    cout << "CompanyName:\t" << Supplier::getcompanyname() << endl;
    cout << "Email:\t\t" << Supplier::getemail() << endl;
    cout << "Address:\t" << Supplier::getaddress() << endl;
    cout << "Phonenumber:\t" << Supplier::getphonenumber() << endl;
 }
 //dtor
Supplier::~Supplier(){}
