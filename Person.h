#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

#include <iostream>
using namespace std;

class Person{
private:
    string name;
    string email;
    string address;
    string phonenumber;
public:
    Person(string name,string email,string address, string phonenumber);
    void setname(string name);
    void setemail(string email);
    void setaddress(string address);
    void setphonenumber(string phonenumber);
    string getname()const;
    string getemail()const;
    string getaddress()const;
    string getphonenumber()const;
    virtual void display()const;
    ~Person();
};


#endif // PERSON_H_INCLUDED
