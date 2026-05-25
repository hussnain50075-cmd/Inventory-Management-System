#include "Inventory.h"
#include "Product.h"
#include "Sale.h"
#include "Supplier.h"

void Inventory::addproduct(Product p){
    product.push_back(p);
    cout << "Product Added successfully..." << endl;
}
bool Inventory::removeproduct(string productid){
    for (int i =0; i<product.size(); i++){
        if(product[i].getproductid() == productid){
            product.erase(product.begin()+ i);
            cout << "Product remove Successful..." << endl;
            return true;
        }
    }
     return false;
}
Product* Inventory::searchproduct(string productid){
    for (int i =0; i< product.size(); i++){
        if(product[i].getproductid()== productid){
            return &product[i];
        }
    }
     return nullptr;
}
bool Inventory::updatestock(string productid, int quantity){
    Product* p = searchproduct(productid);

    if(p!= nullptr){
        p->increasequantity(quantity);
        return true;
    }
}
void Inventory::addsuppliers(Supplier s){
    supplier.push_back(s);
}
bool Inventory::sellproduct(int quantity, string productid){
    Product* p = searchproduct(productid);

    if(p!= nullptr){
        if(p->getquantity()>= quantity){
            p->decreasequantity(quantity);
            cout << "Product sold successful..." << endl;
            return true;
        }
        else{
            cout << "Insufficient stock!" << endl;
            return false;
        }
    }
    cout << "Product not found!" << endl;
    return false;
}
vector<Product> Inventory::getlowstockproducts()const{
    vector<Product> lowstock;
    for (int i =0; i< product.size(); i++){
        if(product[i].getquantity() < 5){
            lowstock.push_back(product[i]);
        }
    }
    return lowstock;
}
vector<Product> Inventory::getallproduct()const{
    return product;
}
vector<Sale> Inventory::getallsales()const{
    return sales;
}
void Inventory::displaydashboard()const{
    cout << "===================Inventory Dashboard=================" << endl;
    cout << "Total Product: " << product.size() << endl;
    cout << "Total Sales: " << sales.size() << endl;
    cout << "Total Suppliers: " << supplier.size() << endl;
}
