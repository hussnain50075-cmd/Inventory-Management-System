#include "Reportgenerator.h"

void Reportgenerator::generatestockreport(vector<Product>& product){
    cout << "==============stock Report====================" << endl;
    for (int i=0; i<product.size(); i++){
        cout << "Productname:\t\t" << product[i].getproductname() << endl;
        cout << "Product ID:\t\t" << product[i].getproductid() << endl;
        cout << "Product catagory:\t" << product[i].getcatagory() << endl;
        cout << "Product Quantity:\t" << product[i].getquantity() << endl;
        cout << "Product Price:\t\t" << product[i].getprice() << endl;
    }
}
void Reportgenerator::generatesalesreport(vector<Sale>& Sales,string fromdate, string todate){
    cout << "==================Sale Report=================" << endl;
    cout << "From Date: " << fromdate << "  To Date: " << todate << endl;
    for(int i=0; i<Sales.size();i++){
        cout << "\nSales Information" << endl;
        Sales[i].display();
    }
}
void Reportgenerator::generatelowstockreport(Inventory& inventory){
    vector<Product> lowstock= inventory.getlowstockproducts();

    if(lowstock.empty()){
        cout << "NO low stock Product found!" << endl;
    }
    else{
        for (int i=0; i< lowstock.size();i++){
            cout << lowstock[i].getproductid() << endl;
            cout << lowstock[i].getproductname() << endl;
            cout << lowstock[i].getcatagory() << endl;
        }
    }
}
