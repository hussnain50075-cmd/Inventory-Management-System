#ifndef FILEMANAGER_H_INCLUDED
#define FILEMANAGER_H_INCLUDED

#include <vector>
#include <fstream>
#include "Product.h"
#include "Supplier.h"
#include "Sale.h"
#include "Catagory.h"
#include "Reportgenerator.h"

class Filemanager{
private:
    string basspath;
public:
    Filemanager(string basspath);
    void saveproduct(vector<Product> product,string basspath);
    vector<Product> loadproduct(string basspath);
    void savesupplier(vector<Supplier> supplier,string basspath);
    vector<Supplier> loadsupplier(string basspath);
    void savesales(vector<Sale> sales,string basspath);
    vector<Sale> loadsales(string basspath);
    void savestockreport(vector<Product>& product,string basspath);
    void savesalesreport(vector<Sale>& Sales,string fromdate, string todate,string basspath);
    void savelowstockreport( vector<Product> lowstock,string basspath);
};
#endif // FILEMANAGER_H_INCLUDED
