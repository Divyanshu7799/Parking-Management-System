#include"../../include/Vehicle_Management/Bike.hpp"

Bike::Bike(int LicenseNo,string Type){
    this->LicenseNo=LicenseNo;
    this->Type=Type;
}
int Bike::getLicenseNo(){
    return LicenseNo;
}
string Bike::getType(){
    return Type;
}