#ifndef SALEITEM_H_INCLUDED
#define SALEITEM_H_INCLUDED

#include <iostream>
using namespace std;

class Saleitem{
private:
    string itemid;
    int quantity;
    double unitprice;
    double subtotal;
public:
    Saleitem(string itemid, int quantity, double unitprice, double subtotal);
    void setitemid(string itemid);
    void setquantity(int quantity);
    void setunitprice(double unitprice);
    void setsubtotal(double subtotal);
    string getitemid()const;
    int getquantity()const;
    double getunitprice()const;
    double getsubtotal()const;
    void display()const;
    ~Saleitem();
};

#endif // SALEITEM_H_INCLUDED
