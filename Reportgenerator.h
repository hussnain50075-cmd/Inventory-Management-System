#ifndef REPORTGENERATOR_H_INCLUDED
#define REPORTGENERATOR_H_INCLUDED

#include <iostream>
#include <vector>
#include "Inventory.h"
#include "Product.h"
#include "Sale.h"
using namespace std;

class Reportgenerator{
public:
    void generatestockreport(vector<Product>& product);
    void generatesalesreport(vector<Sale>& Sales,string fromdate, string todate);
    void generatelowstockreport(Inventory& inventory);
};

#endif // REPORTGENERATOR_H_INCLUDED
