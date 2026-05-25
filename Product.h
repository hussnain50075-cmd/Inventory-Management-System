#ifndef PRODUCT_H_INCLUDED
#define PRODUCT_H_INCLUDED

#include "Supplier.h"
#include <iostream>
using namespace std;

class Catagory;

class Product{
private:
    string productid;
    string productname;
    int quantity;
    double price;
    Supplier* supplier;
    Catagory* catagory;
public:
    Product(string productid, string productname, int quantity, double price, Supplier* supplier, Catagory* catagory);
    void setproductid(string productid);
    void setproductname(string productname);
    void setcatagory(Catagory* catagory);
    void setquantity(int quantity);
    void setprice(double price);
    string getproductid()const;
    string getproductname()const;
    string getcatagory()const;
    double getprice()const;
    void updateproduct(string productid, string productname, Catagory* catagory);
    void increasequantity(int quantity);
    void decreasequantity(int quantity);
    int getquantity()const;
    void display(Supplier* supplier)const;
    ~Product();
};

#endif // PRODUCT_H_INCLUDED
