#ifndef EXCEPTIONHANDLER_H_INCLUDED
#define EXCEPTIONHANDLER_H_INCLUDED

#include <iostream>
#include "Product.h"
#include "Inventory.h"
#include "Filemanager.h"
using namespace std;

class Exceptionhandler{
public:
    void invalidproductid(string productid,Inventory& inventory);
    void insufficientstock(Product& product, int requiredquantity);
    void fileerror(string filename, Filemanager& filemanager);
    void invalidinput(string fieldname,string value);
};


#endif // EXCEPTIONHANDLER_H_INCLUDED
