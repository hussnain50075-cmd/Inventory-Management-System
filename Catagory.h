#ifndef CATAGORY_H_INCLUDED
#define CATAGORY_H_INCLUDED

#include <iostream>
using namespace std;

class Catagory{
private:
    int catagoryid;
    string catagoryname;
    string description;
public:
    Catagory(int catagoryid, string catagoryname, string description);
    void setcatagoryid(int catagroyid);
    void setcatagoryname(string catagoryname);
    void setdescription(string description);
    int getcatagoryid()const;
    string getcatagoryname()const;
    string getdescription()const;
    void display()const;
    ~Catagory();
};

#endif // CATAGORY_H_INCLUDED
