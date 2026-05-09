#ifndef CAR_H
#define CAR_H
#include"Vehicle.hpp"

class Car: public Vehicle{
    private:
    string Type;
    int LicenseNo; 
    public:
    Car(int LicenseNo,string Type);
    int getLicenseNo()override;
    string getType()override;

};
#endif