#include"../../include/Vehicle_Management/Car.hpp"

Car::Car(int LicenseNo,string Type){
    this->LicenseNo=LicenseNo;
    this->Type=Type;
}
int Car::getLicenseNo(){
    return LicenseNo;
}
string Car::getType(){
    return Type;
}