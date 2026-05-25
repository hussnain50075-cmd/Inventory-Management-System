#ifndef SALE_H_INCLUDED
#define SALE_H_INCLUDED

#include "Saleitem.h"

class Sale {
private:
    string saleid;
    double totalamount;
    string Paymentmethod;
public:
    Sale(string saleid, double totalamount, string paymentmethod);
    void setsaleid(string saleid);
    void settotalamount(double totalamount);
    void setpaymentmethod(string paymetmethod);
    string getsaleid()const;
    double gettotalamount()const;
    string getpaymentmethod()const;
    void display()const;
    ~Sale();
};

#endif // SALE_H_INCLUDED
