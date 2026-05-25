#ifndef ADMIN_H_INCLUDED
#define ADMIN_H_INCLUDED

#include "Person.h"
using namespace std;

class Admin:public Person{
private:
    string adminid;
    string username;
    string password;
    string userlevel;
public:
    Admin(string name,string email,string address, string phonenumber, string adminid, string username, string password, string userlevel);
    void setadminid(string adminid);
    void setusername(string username);
    void setpassword(string password);
    void setuserlevel(string userlevel);
    string getadminid()const;
    string getusername()const;
    string getpassword()const;
    string getuserlevel()const;
    bool login(string username, string password);
    void logout();
    void display()const;
    ~Admin();
};

#endif // ADMIN_H_INCLUDED
