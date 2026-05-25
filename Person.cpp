#include "Person.h"
//ctor
Person::Person(string name,string email,string address, string phonenumber){
    this->name= name;
    this->email= email;
    this->address= address;
    this->phonenumber= phonenumber;
}
//setter
void Person::setname(string name){
    this->name= name;
}
void Person::setemail(string email){
    this->email= email;
}
void Person::setaddress(string address){
    this->address= address;
}
void Person::setphonenumber(string phonenumber){
    this->phonenumber= phonenumber;
}
//getter
string Person::getname()const{
    return name;
}
string Person::getemail()const{
    return email;
}
string Person::getaddress()const{
    return address;
}
void Person::display()const{
    cout << "============Person Detail==============" << endl;
    cout << "Person Name: " << getname() << endl;
    cout << "Person Email: " << getemail() << endl;
    cout << "Person Address: " << getaddress() << endl;
    cout << "Person Phonenumber: " << getphonenumber()  << endl;
}
string Person::getphonenumber()const{
    return phonenumber;
}
//dtor
Person::~Person(){}
