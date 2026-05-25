#include "Filemanager.h"
#include "Product.h"
#include "Supplier.h"
#include "Sale.h"
#include "Reportgenerator.h"
#include "Catagory.h"

Filemanager::Filemanager(string basspath){
    this->basspath= basspath;
}
void Filemanager::saveproduct(vector<Product> product,string basspath){
    ofstream file (basspath+"Product.txt", ios::app);
    if(!file){
        cout << "File error! " << endl;
        return;
    }
    for (int i=0; i<product.size(); i++){
        file << product[i].getproductid() << " "
             << product[i].getproductname() << " "
             << product[i].getcatagory() << " "
             << product[i].getquantity() << " "
             << product[i].getprice() << endl;
    }
    file.close();

    cout << "Product file created successfully..." << endl;
}
vector<Product> Filemanager::loadproduct(string basspath){
    vector<Product> product;

    ifstream file(basspath+"Product.txt");

    if(!file){
        cout << "File error!" << endl;
    }
    int quantity;
    string id;
    string name ;
    double price;

    while(file >> id >> name  >> quantity >> price){
            Supplier* supplier ;
            Catagory* catagory ;
            supplier->getsupplierid();
            supplier->getcompanyname();
            supplier->getemail();
            catagory->getcatagoryid();
            catagory->getcatagoryname();
            catagory->getdescription();
            Product p(id,name,quantity,price, supplier,catagory);

        product.push_back(p);
    }
    file.close();
     return product;
}
void Filemanager::savesupplier(vector<Supplier> supplier,string basspath){
    ofstream file(basspath+"Supplier.txt", ios::app);

    if(!file){
        cout << "File error!" << endl;
        return ;
    }
    for (int i =0; i<supplier.size(); i++){
        file << supplier[i].getsupplierid() << " "
             << supplier[i].getcompanyname() << " "
             << supplier[i].getaddress() << " "
             << supplier[i].getemail() << " "
             << supplier[i].getphonenumber() << endl;
    }
    file.close();

    cout << "Supplier file created successfully..." << endl;
}
vector<Supplier> Filemanager::loadsupplier(string basspath){
    vector<Supplier> supplier;

    ifstream file(basspath+"Supplier.txt" );

    if(!file){
        cout << "File error" << endl;
    }
    string phonenumber;
    string name;
    string companyname;
    string supplierid;
    string email;
    string person_address;
    string company_address;

    while(file >> name >> phonenumber >> companyname >> supplierid >> email >> person_address >> company_address){

        Supplier s(name,email,person_address,phonenumber,supplierid,companyname,company_address);
         supplier.push_back(s);
    }
    file.close();

    return supplier;
}
void Filemanager::savesales(vector<Sale> sales,string basspath){
    ofstream file(basspath+"Sales.txt", ios::app);

    if(!file){
        cout << "File error!" << endl;
        return;
    }
    for(int i=0; i<sales.size(); i++){
        file << sales[i].getsaleid() << " "
             << sales[i].gettotalamount() << " "
             << sales[i].getpaymentmethod() << endl;
    }
    file.close();

    cout << "Sales file created successfully" << endl;
}
vector<Sale> Filemanager::loadsales(string basspath){
        vector<Sale> sales;

    ifstream file(basspath+"Sales.txt");
    if(!file){
        cout << "File error!" << endl;
    }
    string saleid;
    double totalamount;
    string paymentmethod;

    while(file >> saleid >> totalamount >> paymentmethod){

        Sale s(saleid, totalamount, paymentmethod);

        sales.push_back(s);
    }
}

void Filemanager::savestockreport(vector<Product>& product,string basspath){
    ofstream file(basspath+"Stockreport.txt", ios::app);
    if(!file){
            cout << "File Error!" << endl;
            return;
    }
    for (int i = 0; i<product.size(); i++) {
        file << product[i].getproductname() << " "
             << product[i].getproductid() << " "
             << product[i].getcatagory() << " "
             << product[i].getquantity() << " "
             << product[i].getprice() << endl;
    }
    file.close();

    cout << "Stock report file created successfully..." << endl;
}
void Filemanager::savesalesreport(vector<Sale>& Sales,string fromdate, string todate,string basspath){
    ofstream file(basspath+"Salesreport.txt", ios::app);

    if(!file){
        cout << "File error!" << endl;
        return;
    }
    cout << "From Date: " << fromdate << "  To Date: " << todate << endl;
    for (int i=0; i<Sales.size(); i++) {
        file << Sales[i].getsaleid() << " "
             << Sales[i].gettotalamount() << " "
             << Sales[i].getpaymentmethod() << endl;
    }
    file.close();

    cout << "Sales report file craeted successful" << endl;
}
void Filemanager::savelowstockreport( vector<Product> lowstock,string basspath){
        ofstream file(basspath+"Lowstockreport.txt", ios::app);

        if(!file){
            cout << "File Error!" << endl;
            return;
        }
        for (int i =0; i < lowstock.size(); i++){
            file << lowstock[i].getproductid() << " "
                 << lowstock[i].getproductname() << " "
                 << lowstock[i].getcatagory() << endl;
        }
        file.close();

        cout << "Low stock Report file successfully created..." << endl;
}
