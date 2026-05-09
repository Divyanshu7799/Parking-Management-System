#include"../../include/Vehicle_Management/Truck.hpp"

Truck::Truck(int LicenseNo,string Type){
    this->LicenseNo=LicenseNo;
    this->Type=Type;
}
int Truck::getLicenseNo(){
    return LicenseNo;
}
string Truck::getType(){
    return Type;
}