#ifndef INVENTORY_H_INCLUDED
#define INVENTORY_H_INCLUDED

#include <iostream>
#include <vector>
#include "Product.h"
#include "Sale.h"
#include "Supplier.h"
using namespace std;

class Inventory{
private:
    vector<Product> product;
    vector<Supplier> supplier;
    vector<Sale> sales;
public:
    void addproduct(Product p);
    bool removeproduct(string productid);
    Product* searchproduct(string  productid);
    bool updatestock(string productid, int quantity);
    void addsuppliers(Supplier s);
    bool sellproduct(int quantity, string productid);
    vector<Product> getlowstockproducts()const;
    vector<Product> getallproduct()const;
    vector<Sale> getallsales()const;
    void displaydashboard()const;
};


#endif // INVENTORY_H_INCLUDED
