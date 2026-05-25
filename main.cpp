#include <iostream>
#include "Person.h"
#include "Supplier.h"
#include "Admin.h"
#include "Product.h"
#include "Catagory.h"
#include "Sale.h"
#include "Saleitem.h"
#include "Inventory.h"
#include "Filemanager.h"
#include "Exceptionhandler.h"
#include "Reportgenerator.h"
using namespace std;

int main(){
    int choice;
    int subchoice;
    //supplier class variables
    string person_name;
    string company_name;
    string email;
    string supplier_address;
    string person_address;
    string supplier_id;
    //admin class variable
    string admin_id;
    string user_name;
    string password;
    string user_level;
    string phonenumber;
    //product class variable
    string product_id;
    string product_name;
    int quantity;
    double price;
    //catagory class variable
    int catagory_id;
    string catagory_name;
    string description;
    //sale class variale
    string sale_id;
    double total_amount;
    string payment_method;
    //saleitem class variable
    string item_id;
    double unit_price;
    double sub_total;
    //exceptionhandler class
    int required_quantity;
    string file_name;
    string field_name;
    string value;
    //report generater class
    string fromdate;
    string todate;
    //File manager class variables
    string bass_path;
    //all class objects
    Person person(person_name,email,person_address,phonenumber);
    Supplier supplier(person_name,email,person_address,phonenumber,supplier_id,company_name,supplier_address);
    Admin admin(person_name,email,person_address,phonenumber,admin_id,"Ali","1234",user_level);
    Catagory catagory(catagory_id,catagory_name,description);
    Product product(product_id,product_name,quantity,price,&supplier, &catagory);
    Sale sale(sale_id,total_amount,payment_method);
    Saleitem saleitems(item_id,quantity,unit_price,sub_total);
    Inventory inventory;
    Filemanager filemanager(bass_path);
    Exceptionhandler exceptionhandler;
    Reportgenerator reportgenerator;
    vector<Product> products;
    vector<Sale> sales;
    vector<Supplier> suppliers;
    do{
    cout << "============================================" << endl;
    cout << "\tInventory Management System" << endl;
    cout << "============================================" << endl;
    cout << "1.Edit Person information" << endl;
    cout << "2.Edit supplier and person information" << endl;
    cout << "3.Edit Admin and person information" << endl;
    cout << "4.Edit Product information" << endl;
    cout << "5.Edit Product Catagory information" << endl;
    cout << "6.Edit Sale information" << endl;
    cout << "7.Edit Sale item information" << endl;
    cout << "8.Edit Inventory information" << endl;
    cout << "9.check item stock" << endl;
    cout << "10.Generate Report" << endl;
    cout << "11.Save file " << endl;
    cout << "12.Exit" << endl;
    cout << "=======================================" << endl;
    cout << "Enter choice: " ;
    cin >> choice;
    if(choice == 1){
        do{
        cout << "===============================" << endl;
        cout << "1.Edit specific information" << endl;
        cout << "2.Change information comletely" << endl;
        cout << "3.Display information" << endl;
        cout << "4.Exit" << endl;
        cout << "===============================" << endl;
        cout << "Enter choice: " ;
        cin >> choice;
        if(choice == 1){
            cout << "1.change Person name" << endl;
            cout << "2.Change Person Email" << endl;
            cout << "3.Change Person Address" << endl;
            cout << "4.Change Person Phonenumber" << endl;
            cout << "==============================" << endl;
            cout << "Enter choice: ";
            cin >> subchoice;
        if(subchoice == 1){
                cin.ignore();
            cout << "Enter Person name: " << person_name ;
            getline(cin, person_name);
            person.setname(person_name);
        }
        else if(subchoice == 2){
            cout << "Enter Person Email: " << email ;
            cin >> email;
            person.setemail(email);
        }
        else if(subchoice == 3){
            cout << "Enter Person Address: " << person_address ;
            cin >> person_address;
            person.setaddress(person_address);
        }
        else if(subchoice == 4){
            cout << "Enter Person Phonenumber: " ;
            cin >> phonenumber;
            person.setphonenumber(phonenumber);
        }
        else {
            cout << "Invalid choice!" << endl;
        }
        }
        else if(choice == 2){
            cout << "Enter Person name: " << person_name ;
            cin >> person_name;
            cout << "Enter Person Email: " << email ;
            cin >> email;
            cout << "Enter Person Address: " << person_address ;
            cin >> person_address;
            cout << "Enter Person Address: " << person_address ;
            cin >> person_address;
            person.setname(person_name);
            person.setemail(email);
            person.setaddress(person_address);
            person.setphonenumber(phonenumber);
        }
        else if(choice == 3){
            person.display();
        }
        }while (choice != 4);
    }
    else if(choice ==2){
        do{
        cout << "===============================" << endl;
        cout << "1.Edit specific information" << endl;
        cout << "2.Change information comletely" << endl;
        cout << "3.Display information" << endl;
        cout << "4.Exit" << endl;
        cout << "===============================" << endl;
        cout << "Enter choice: " ;
        cin >> subchoice;
        if(subchoice == 1){
            cout << "1.Change Person name" << endl;
            cout << "2.Change Email" << endl;
            cout << "3.Change Person Address" << endl;
            cout << "4.Change Supplier ID" << endl;
            cout << "5.Change Supplier Address" << endl;
            cout << "6.Change Phone Number" << endl;
            cout << "7.Change Company Name" << endl;
            cout << "=====================" << endl;
            cout << "Enter choice: " ;
            cin >> subchoice;
            if(subchoice == 1){
                    cin.ignore();
                cout << "Enter Person Name: " ;
                getline(cin, person_name);
                supplier.Person::setname(person_name);
            }
            else if(subchoice == 2){
                cout << "Enter Email: " ;
                cin >> email;
                supplier.Person::setemail(email);
            }
            else if(subchoice == 3){
                cout << "Enter Person Address: " ;
                cin >> person_address;
                supplier.Person::setaddress(person_address);
            }
            else if (subchoice == 4){
                cout << "Enter Supplier ID: " ;
                cin >> supplier_id;
                supplier.setsupplierid(supplier_id);
            }
            else if(subchoice == 5){
                cout << "Enter Supplier Address: " ;
                cin >> supplier_address;
                supplier.Supplier::setaddress(supplier_address);
            }
            else if(subchoice== 6){
                cout << "Enter Phone number: " ;
                cin >> phonenumber;
                supplier.Supplier::setphonenumber(phonenumber);
                supplier.Person::setphonenumber(phonenumber);
            }
            else if(subchoice == 7){
                cout << "Enter Company Name: ";
                cin >> company_name;
                supplier.setcompanyname(company_name);
            }
            else{
                cout << "Invaild choice!" << endl;
            }
        }
        else if(subchoice == 2){
                cin.ignore();
            cout << "Enter Person Name: " ;
            getline(cin, person_name);
            cout << "Enter Email: " ;
            cin >> email;
            cout << "Enter Person Address: " ;
            cin >> person_address;
            cout << "Enter Supplier ID: " ;
            cin >> supplier_id;
            cout << "Enter Supplier Address: " ;
            cin >> supplier_address;
            cout << "Enter Phone number: " ;
            cin >> phonenumber;
            cout << "Enter Company Name: ";
            cin >> company_name;
            supplier.Person::setname(person_name);
            supplier.Person::setemail(email);
            supplier.Person::setaddress(person_address);
            supplier.setsupplierid(supplier_id);
            supplier.Supplier::setaddress(supplier_address);
            supplier.Supplier::setphonenumber(phonenumber);
            supplier.Person::setphonenumber(phonenumber);
            supplier.setcompanyname(company_name);
        }
        else if(subchoice == 3){
            supplier.display();
        }
        }while(choice!=4);
    }
    else if(choice == 3){
        do{
           cout << "1.Admin login" << endl;
           cout << "2.Exit" << endl;
           cout << "==========================" << endl;
           cout << "Enter choice: ";
           cin >> choice;
            if(choice == 1){
            cout << "Enter User name: ";
            cin >> user_name;
            cout << "Enter Password: ";
            cin >> password;
            admin.login(user_name,password);
            if(admin.login(user_name,password)== true){
            cout << "===============================" << endl;
            cout << "1.Edit specific information" << endl;
            cout << "2.Change information comletely" << endl;
            cout << "3.Display information" << endl;
            cout << "4.Exit" << endl;
            cout << "===============================" << endl;
            cout << "Enter choice: " ;
            cin >> choice;
            if(choice == 1){
            cout << "1.Change Person name" << endl;
            cout << "2.Change Email" << endl;
            cout << "3.Change Person Address" << endl;
            cout << "4.Change Phone Number" << endl;
            cout << "5.Change Admin ID" << endl;
            cout << "6.Change Username" << endl;
            cout << "7.Change Password " << endl;
            cout << "8.Change Userlevel" << endl;
            cout << "======================" << endl;
            cout << "Enter choice: " ;
            cin >> subchoice;
            if(subchoice == 1){
                    cin.ignore();
                cout << "Enter Person Name: " ;
                getline(cin, person_name);
                admin.Person::setname(person_name);
            }
            else if(subchoice == 2){
                cout << "Enter Email: " ;
                cin >> email;
                admin.Person::setemail(email);
            }
            else if(subchoice == 3){
                cout << "Enter Person Address: " ;
                cin >> person_address;
                admin.Person::setaddress(person_address);
            }
            else if(subchoice == 4){
                cout << "Enter Phone number: " ;
                cin >> phonenumber;
                admin.Person::setphonenumber(phonenumber);
            }
            else if(subchoice == 5){
                cout << "Enter Admin ID: " ;
                cin >> admin_id;
                admin.setadminid(admin_id);
            }
            else if(subchoice == 6){
                cout << "Enter Username: " ;
                cin >> user_name;
                admin.setusername(user_name);
            }
            else if(subchoice == 7){
                cout << "Enter Password: " ;
                cin >> password;
                admin.setpassword(password);
            }
            else if(subchoice == 8){
                cout << "Enter User Level: " ;
                cin >> user_level;
                admin.setuserlevel(user_level);
            }
            else{
                cout << "Invalid choice!" << endl;
            }
        }
        else if(choice == 3){
                cin.ignore();
            cout << "Enter Person Name: " ;
            getline(cin, person_name);
            cout << "Enter Email: " ;
            cin >> email;
            cout << "Enter Person Address: " ;
            cin >> person_address;
            cout << "Enter Phone number: " ;
            cin >> phonenumber;
            cout << "Enter Admin ID: " ;
            cin >> admin_id;
            cout << "Enter Username: " ;
            cin >> user_name;
            cout << "Enter Password: " ;
            cin >> password;
            cout << "Enter Userlevel: " ;
            cin >> user_level;
            admin.Person::setname(person_name);
            admin.Person::setemail(email);
            admin.Person::setaddress(person_address);
            admin.Person::setphonenumber(phonenumber);
            admin.setadminid(admin_id);
            admin.setusername(user_name);
            admin.setpassword(password);
            admin.setuserlevel(user_level);
        }
        else if(choice == 3){
            admin.display();
        }
        else{
            cout << "Invalid choice!" << endl;
        }}}
        }while(choice!= 4);
}
    else if(choice == 4){
            do{
                cout << "===============================" << endl;
                cout << "1.Edit specific information" << endl;
                cout << "2.Change information comletely" << endl;
                cout << "3.Display information" << endl;
                cout << "4.Exit" << endl;
                cout << "===============================" << endl;
                cout << "Enter choice: " ;
                cin >> choice;
                if(choice == 1){
                    cout << "1.Change Product ID" << endl;
                    cout << "2.Change Product name" <<  endl;
                    cout << "3.Change Product quantity " << endl;
                    cout << "4.Change Product Price" << endl;
                    cout << "=========================" << endl;
                    cout << "Enter choice: ";
                    cin >> subchoice;
                    if(subchoice == 1){
                        cout << "Enter Product ID: ";
                        cin >> product_id;
                        product.setproductid(product_id);
                    }
                    else if(subchoice == 2){
                        cin.ignore();
                        cout << "Enter Product name: " ;
                        getline(cin , product_name) ;
                        product.setproductname(product_name);
                    }
                    else if(subchoice == 3){
                        cout << "Enter Product Quantity: ";
                        cin >> quantity;
                        product.setquantity(quantity);
                    }
                    else if(subchoice == 4){
                        cout << "Enter Product Price: ";
                        cin >> price;
                        product.setprice(price);
                    }
                    else {
                        cout << "Invalid choice!" << endl;
                    }
                }
                else if(choice == 2){
                    cout << "Enter Product ID: ";
                    cin >> product_id;
                    cin.ignore();
                    cout << "Enter Product name: " ;
                    getline(cin, product_name) ;
                    cout << "Enter Product Quantity: ";
                    cin >> quantity;
                    cout << "Enter Product Price: ";
                    cin >> price;
                    product.setproductid(product_id);
                    product.setproductname(product_name);
                    product.setquantity(quantity);
                    product.setprice(price);
                }
                else if(choice == 3){
                    product.display(&supplier);
                }
            }while(choice!= 4);
        }
    else if(choice == 5){
        do{
            cout << "===============================" << endl;
            cout << "1.Edit specific information" << endl;
            cout << "2.Change information comletely" << endl;
            cout << "3.Display information" << endl;
            cout << "4.Exit" << endl;
            cout << "===============================" << endl;
            cout << "Enter choice: " ;
            cin >> choice;
            if(choice == 1){
                cout << "1.Change Catagory ID" << endl;
                cout << "2.Change Catagory name" << endl;
                cout << "3.Change Catagory description" << endl;
                cout << "=============================== " << endl;
                cout << "Enter choice: ";
                cin >> subchoice ;
                if(subchoice == 1){
                    cout << "Enter Catagory ID: " ;
                    cin >> catagory_id;
                    catagory.setcatagoryid(catagory_id);
                }
                else if(subchoice == 2){
                    cout << "Enter Catagory Name: " ;
                    cin >> catagory_name;
                    catagory.setcatagoryname(catagory_name);
                }
                else if(subchoice == 3){
                    cout << "Enter Catagory Description: ";
                    cin >> description ;
                    catagory.setdescription(description);
                }
                else {
                    cout << "Invalid choice!" << endl;
                }
            }
            else if(choice == 2){
                cout << "Enter Catagory ID: " ;
                cin >> catagory_id;
                cout << "Enter Catagory Name: " ;
                cin >> catagory_name;
                cout << "Enter Catagory Description: ";
                cin >> description ;
                catagory.setcatagoryid(catagory_id);
                catagory.setcatagoryname(catagory_name);
                catagory.setdescription(description);
            }
            else if(choice == 3){
                catagory.display();
            }
        }while(choice!=4);
    }
    else if(choice == 6){
        do{
            cout << "===============================" << endl;
            cout << "1.Edit specific information" << endl;
            cout << "2.Change information comletely" << endl;
            cout << "3.Display information" << endl;
            cout << "4.Exit" << endl;
            cout << "===============================" << endl;
            cout << "Enter choice: " ;
            cin >> choice;
            if(choice == 1){
                cout << "1.Change Sales ID" << endl;
                cout << "2.Change Total Amount" << endl;
                cout << "3.Change Payment Method" << endl;
                cout << "========================== " << endl;
                cout << "Enter choice: " ;
                cin >> subchoice ;
                if(subchoice == 1){
                    cout << "Enter Sales ID: " ;
                    cin >> sale_id;
                    sale.setsaleid(sale_id);
                }
                else if(subchoice == 2){
                    cout << "Enter Total Amount: ";
                    cin >> total_amount;
                    sale.settotalamount(total_amount);
                }
                else if(subchoice == 3){
                    cout << "Enter Payment Method: " ;
                    cin >> payment_method;
                    sale.setpaymentmethod(payment_method);
                }

                else{
                    cout << "Invalid choice!" << endl;
                }
            }
                else if(choice == 2){
                    cout << "Enter Sales ID: " ;
                    cin >> sale_id;
                    cout << "Enter Total Amount: ";
                    cin >> total_amount;
                    cout << "Enter Payment Method: " ;
                    cin >> payment_method;
                    sale.setsaleid(sale_id);
                    sale.settotalamount(total_amount);
                    sale.setpaymentmethod(payment_method);
                }
                else if(choice == 3){
                    sale.display();
                }

        }while(choice!= 4);
    }
    else if(choice == 7){
        do{
            cout << "===============================" << endl;
            cout << "1.Edit specific information" << endl;
            cout << "2.Change information comletely" << endl;
            cout << "3.Display information" << endl;
            cout << "4.Exit" << endl;
            cout << "===============================" << endl;
            cout << "Enter choice: " ;
            cin >> choice;
            if(choice == 1){
                cout << "1.Change Item ID" << endl;
                cout << "2.Change Quantity" << endl;
                cout << "3.Change Unit Price" << endl;
                cout << "4.Change Sub Total" << endl;
                cout << "=========================" << endl;
                cout << "Enter choice: ";
                cin >> subchoice ;
                if(subchoice == 1){
                    cout << "Enter Item ID: " ;
                    cin >> item_id;
                    saleitems.setitemid(item_id);
                }
                else if(subchoice == 2){
                    cout << "Enter Quantity: ";
                    cin >> quantity ;
                    saleitems.setquantity(quantity);
                }
                else if(subchoice == 3){
                    cout << "Enter Unit Price: ";
                    cin >> unit_price ;
                    saleitems.setunitprice(unit_price);
                }
                else if(subchoice == 4){
                    cout << "Enter Sub Total: ";
                    cin >> sub_total;
                    saleitems.setsubtotal(sub_total);
                }
                else {
                    cout << "Invalid choice!" << endl;
                }
            }
            else if(choice == 2){
                cout << "Enter Item ID: " ;
                cin >> item_id;
                cout << "Enter Quantity: ";
                cin >> quantity ;
                cout << "Enter Unit Price: ";
                cin >> unit_price ;
                cout << "Enter Sub Total: ";
                cin >> sub_total;
                saleitems.setitemid(item_id);
                saleitems.setquantity(quantity);
                saleitems.setunitprice(unit_price);
                saleitems.setsubtotal(sub_total);
            }
            else if(choice == 3){
                saleitems.display();
            }
        }while(choice != 4);
    }
    else if(choice == 8){
            do{
        cout << "1.Add Product" << endl;
        cout << "2.Remove Product" << endl;
        cout << "3.Search Product" << endl;
        cout << "4.Update stock" << endl;
        cout << "5.Add supplier" << endl;
        cout << "6.Sell Product" << endl;
        cout << "7.display dashboard" << endl;
        cout << "8.Exit" << endl;
        cout << "==========================" << endl;
        cout << "Enter choice: " ;
        cin >> subchoice ;
        if(subchoice == 1){
                cout << "Enter Product ID: ";
                cin >> product_id;
                cin.ignore();
                cout << "Enter Product name: " ;
                getline(cin, product_name) ;
                cout << "Enter Product Quantity: ";
                cin >> quantity;
                cout << "Enter Product Price: ";
                cin >> price;
                product.setproductid(product_id);
                product.setproductname(product_name);
                product.setquantity(quantity);
                product.setprice(price);
                inventory.addproduct(product);
        }
        else if(subchoice == 2){
            cout << "Enter Product ID: ";
            cin >> product_id;
            inventory.removeproduct(product_id);
        }
        else if(subchoice == 3){
            cout << "Enter Product ID: ";
            cin >> product_id;
            inventory.searchproduct(product_id);
        }
        else if(subchoice == 4){
            cout << "Enter Product ID: ";
            cin >> product_id;
            cout << "Enter Product Quantity: ";
            cin >> quantity;
            inventory.updatestock(product_id,quantity);
        }
        else if(subchoice == 5){
                cin.ignore();
            cout << "Enter Person Name: " ;
            getline(cin, person_name);
            cout << "Enter Email: " ;
            cin >> email;
            cout << "Enter Person Address: " ;
            cin >> person_address;
            cout << "Enter Supplier ID: " ;
            cin >> supplier_id;
            cout << "Enter Supplier Address: " ;
            cin >> supplier_address;
            cout << "Enter Phone number: " ;
            cin >> phonenumber;
            cout << "Enter Company Name: ";
            cin >> company_name;
            supplier.Person::setname(person_name);
            supplier.Person::setemail(email);
            supplier.Person::setaddress(person_address);
            supplier.setsupplierid(supplier_id);
            supplier.Supplier::setaddress(supplier_address);
            supplier.Supplier::setphonenumber(phonenumber);
            supplier.Person::setphonenumber(phonenumber);
            supplier.setcompanyname(company_name);
            inventory.addsuppliers(supplier);
        }
        else if(subchoice == 6){
            cout << "Enter Product ID: ";
            cin >> product_id;
            cout << "Enter Product Quantity: ";
            cin >> quantity;
            inventory.sellproduct(quantity,product_id);
        }
        else if(subchoice == 7){
            inventory.displaydashboard();
        }
        }while(choice != 8);
    }
    else if(choice == 9){
            do{
        cout << "1.Check Entered product ID" << endl;
        cout << "2.Check Stock amount availability" << endl;
        cout << "3.Check file availability " << endl;
        cout << "4.Check data from file" << endl;
        cout << "5.Exit" << endl;
        cout << "=============================" << endl;
        cout << "Enter choice: ";
        cin >> subchoice ;
        if(subchoice == 1){
            try{
                cout << "Enter Product ID: ";
                cin >> product_id;
                exceptionhandler.invalidproductid(product_id,inventory);
            }
            catch(runtime_error& e){
                cout << e.what() << endl;
            }
        }
        else if(subchoice== 2){
            try{
                cout << "Enter Required Quantity: ";
                cin >> required_quantity;
                exceptionhandler.insufficientstock(product,required_quantity);
            }
            catch(runtime_error& e){
                cout << e.what() << endl;
            }
        }
        else if(subchoice == 3){
            try{
                cout << "Enter File name: ";
                cin >> file_name;
                exceptionhandler.fileerror(file_name,filemanager);
            }
            catch(runtime_error& e){
                cout << e.what() << endl;
            }
        }
        else if(subchoice == 4){
            try{
                cout << "Enter Field name: " ;
                cin >> field_name;
                cout << "Enter Value: ";
                cin >> value;
                exceptionhandler.invalidinput(field_name,value);
            }
            catch (runtime_error& e){
                cout << e.what() <<endl;
            }
        }

        else {
            cout << "Invalid choice!" << endl;
        }
        }while(choice != 5);
    }
    else if(choice == 10){
        do{
            cout << "1.Generate Stock Report" << endl;
            cout << "2.Generate Sales Report" << endl;
            cout << "3.Generate Low Stock Report" << endl;
            cout << "4.Exit" << endl;
            cout << "=============================" << endl;
            cout << "Enter choice: ";
            cin >> choice ;
        if(choice == 1){
                products.push_back(product);
                reportgenerator.generatestockreport(products);
        }
        else if(choice == 2){
                sales.push_back(sale);
                reportgenerator.generatesalesreport(sales,fromdate,todate);
        }
        else if(choice == 3){
            reportgenerator.generatelowstockreport(inventory);
        }
        }while (choice != 4);
    }
    else if(choice == 11){
        do{
            cout << "1.Save Product File" << endl;
            cout << "2.Save Supplier File" << endl;
            cout << "3.Save Sales File" << endl;
            cout << "4.Save stock Report File" << endl;
            cout << "5.Save Sale Report File" << endl;
            cout << "6.Edit Product file" << endl;
            cout << "7.Edit Supplier File" << endl;
            cout << "8.Edit Sale File" << endl;
            cout << "9.Exit" << endl;
            cout << "===============================" << endl;
            cout << "Enter Choice: " ;
            cin >> choice ;
            if(choice == 1){
                cout << "Enter Bass Path: " ;
                cin >> bass_path;
                products.push_back(product);
                filemanager.saveproduct(products, bass_path);
            }
            else if(choice == 2){
                cout << "Enter Bass Path: ";
                cin >> bass_path;
                suppliers.push_back(supplier);
                filemanager.savesupplier(suppliers,bass_path);
            }
            else if(choice == 3){
                cout << "Enter Bass Path: ";
                cin >> bass_path;
                sales.push_back(sale);
                filemanager.savesales(sales,bass_path);
            }
            else if(choice == 4){
                cout << "Enter Bass Path: ";
                cin >> bass_path;
                products.push_back(product);
                filemanager.savestockreport(products,bass_path);
            }
            else if(choice == 5){
                cout << "Enter Bass Path: ";
                cin >> bass_path;
                cout << "Enter from Date: ";
                cin >> fromdate;
                cout << "Enter to Date: " ;
                cin >> todate;
                sales.push_back(sale);
                filemanager.savesalesreport(sales, fromdate, todate,bass_path);
            }
            else if(choice == 6 ){
                cout << "Enter Bass Path: ";
                cin >> bass_path;
                filemanager.loadproduct(bass_path);
            }
            else if(choice == 7){
                cout << "Enter Bass Path: ";
                cin >> bass_path;
                filemanager.loadsupplier(bass_path);
            }
            else if(choice == 8){
                cout << "Enter Bass Path: ";
                cin >> bass_path;
                filemanager.loadsales(bass_path);
            }
        }while(choice != 9);
    }
    }while(choice!=12);
}
