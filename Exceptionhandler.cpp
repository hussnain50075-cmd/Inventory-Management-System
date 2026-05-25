#include "Exceptionhandler.h"

void Exceptionhandler::invalidproductid(string productid,Inventory& inventory){

        throw runtime_error("Error! Product ID "+productid+" does not exist in inventory!");
}
void Exceptionhandler::insufficientstock(Product& product, int requiredquantity){

        throw runtime_error("Error! Insufficient stock for product->" +product.getproductname());
}
void Exceptionhandler::fileerror(string filename, Filemanager& filemanager){

        throw runtime_error("Error! Unable to open file->"+filename);
}
void Exceptionhandler::invalidinput(string fieldname,string value){

        throw runtime_error("Error! Invalid input in field->" + fieldname+" Value: "+value);
}
