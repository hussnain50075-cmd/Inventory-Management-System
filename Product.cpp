#include "Product.h"
#include "Supplier.h"
#include "Catagory.h"

//ctor
Product::Product(string productid, string productname, int quantity, double price, Supplier* supplier, Catagory* catagory){
    this->productid= productid;
    this->productname= productname;
    this->catagory= catagory;
    this->quantity= quantity;
    this->price= price;
    this->supplier= supplier;
}
//setter
void Product::setproductid(string productid){
    this->productid = productid;
}
void Product::setproductname(string productname){
    this->productname= productname;
}
void Product::setcatagory(Catagory* catagory){
    this->catagory= catagory;
}
void Product::setquantity(int quantity){
    this->quantity= quantity;
}
void Product::setprice(double price){
    this->price = price;
}
//getter
string Product::getproductid()const{
    return productid;
}
string Product::getproductname()const{
    return productname;
}
string Product::getcatagory()const{
    return catagory->getcatagoryname();
}
double Product::getprice()const{
    return price;
}
//member function
void Product::updateproduct(string productid, string productname, Catagory* catagory){
    this->productid = productid;
    this->productname= productname;
    this->catagory= catagory;
}
void Product::increasequantity(int quantity){
    this->quantity += quantity;
}
void Product::decreasequantity(int quantity){
    if(this->quantity>= quantity){
        this->quantity-=quantity;
    }
    else{
        cout << "Insufficient stock!" << endl;
    }
}
//getter
int Product::getquantity()const{
    return quantity;
}
//member function
void Product::display(Supplier* supplier)const{
    cout << "==================Supplier Detail================" << endl;
    cout << "Supplier CompanyName:\t" << supplier->getcompanyname() << endl;
    cout << "Supplier Email:\t\t" << supplier->getemail() << endl << endl;
    cout << "==================Product Detail=================="  << endl;
    cout << "Product Name:\t\t" << Product::getproductid() << endl;
    cout << "Product ID:\t\t" << Product::getproductname() << endl;
    cout << "Product Catagory:\t" << Product::getcatagory() << endl;
    cout << "Product Quantity:\t" << Product::getquantity() << endl;
    cout << "Product Price:\t\t" << Product::getprice() << endl;
}
//dtor
Product::~Product(){}
