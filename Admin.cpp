#include "Admin.h"
//ctor
Admin::Admin(string name,string email,string address, string phonenumber, string adminid, string username, string password, string userlevel):Person::Person(name, email,address,phonenumber){
    this->adminid= adminid;
    this->username= username;
    this->password = password;
    this->userlevel = userlevel;
}
//setter
void Admin::setadminid(string adminid){
    this->adminid= adminid;
}
void Admin::setusername(string username){
    this->username = username;
}
void Admin::setpassword(string password){
    this->password= password;
}
void Admin::setuserlevel(string userlevel){
    this->userlevel= userlevel;
}
//getter
string Admin::getadminid()const{
    return adminid;
}
string Admin::getusername()const{
    return username;
}
string Admin::getpassword()const{
    return password;
}
string Admin::getuserlevel()const{
    return userlevel;
}
//Member function
bool Admin::login(string username, string password){
    do{
    if(this->username==getusername() && this->password== getpassword()){
        cout << "Login successfully..." << endl;
        return true;
    }
    else{
        cout << "Invalid password..." << endl;
        return false;
    }
    }while(this->username== username && this->password== password);
}
void Admin::logout(){
    cout << "Logout successful..." << endl;
}
void Admin::display()const{
    cout << "=============Person Detail===============" << endl;
    cout << "Name:\t\t" << Person::getname() << endl;
    cout << "Email:\t\t" << Person::getemail() << endl;
    cout << "Address:\t" << Person::getaddress() << endl;
    cout << "Phonenumber:\t" << Person::getphonenumber() << endl;
    cout << "=============Admin Detail================" << endl;
    cout << "AdminID:\t" << Admin::getadminid() << endl;
    cout << "UserName:\t" << Admin::getusername() << endl;
    cout << "Password:\t" << Admin::getpassword() << endl;
    cout << "Userlevel:\t" << Admin::getuserlevel() << endl;
}
//dtor
Admin::~Admin(){}
