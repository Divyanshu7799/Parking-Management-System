#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.hpp"
class Truck: public Vehicle{
     private:
    string Type;
    int LicenseNo; 
    public:
    Truck(int LicenseNo,string Type);
    int getLicenseNo()override;
    string getType()override;

};

#endif