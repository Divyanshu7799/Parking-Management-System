#include"../../include/Vehicle_Management/SelectVehicle.hpp"

Vehicle * SelectVehicle::getVehicle(string Type,int LicenseNo){
    if(Type=="Car"){
       return new Car(LicenseNo,Type);
    }
    else if(Type=="Bike"){
        return new Bike(LicenseNo,Type);
    }
    else{
        return new Truck(LicenseNo,Type);
    }
}