#include "Catagory.h"

//ctor
Catagory::Catagory(int catagoryid, string catagoryname, string description){
    this->catagoryid = catagoryid;
    this->catagoryname= catagoryname;
    this->description = description;
}
//setter
void Catagory::setcatagoryid(int catagroyid){
    this->catagoryid= catagoryid;
}
void Catagory::setcatagoryname(string catagoryname){
    this->catagoryname= catagoryname;
}
void Catagory::setdescription(string description){
    this->description= description;
}
//getter
int Catagory::getcatagoryid()const{
    return catagoryid;
}
string Catagory::getcatagoryname()const{
    return catagoryname;
}
string Catagory::getdescription()const{
    return description;
}
//memeber function
void Catagory::display()const{
    cout << "===================Catagory Detail====================" << endl;
    cout << "Catagory Name:\t\t" << getcatagoryname() << endl;
    cout << "Catagory ID:\t\t" << getcatagoryid() << endl;
    cout << "Catagory Description:\t" << getdescription() << endl;
}
//dtor
Catagory::~Catagory(){}
