#ifndef SUPPLIER_H_INCLUDED
#define SUPPLIER_H_INCLUDED

#include "Person.h"

class Supplier: public Person{
private:
    string supplierid;
    string companyname;
    string address;
    string email;
    string phonenumber;
public:
    Supplier(string name,string email,string address, string phonenumber, string id, string companyname, string add);
    void setsupplierid(string supplierid);
    void setcompanyname(string companyname);
    void setaddress(string address);
    void setemail(string email);
    void setphonenumber(string phonenumber);
    string getsupplierid()const;
    string getcompanyname()const;
    string getemail()const;
    string getaddress()const;
    string getphonenumber()const;
    void display()const override;
    ~Supplier();
};

#endif // SUPPLIER_H_INCLUDED
