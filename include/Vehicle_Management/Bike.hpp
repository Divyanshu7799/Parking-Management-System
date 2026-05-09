#ifndef BIKE_H
#define BIKE_H
#include"Vehicle.hpp"

class Bike: public Vehicle{
     private:
    string Type;
    int LicenseNo; 
    public:
    Bike(int LicenseNo,string Type);
    int getLicenseNo()override;
    string getType()override;

};

#endif