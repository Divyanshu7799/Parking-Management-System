#ifndef SELECTVEHICLE_H
#define SELECTVEHICLE_H
#include "Vehicle.hpp"
#include"Car.hpp"
#include"Bike.hpp"
#include"Truck.hpp"
class SelectVehicle{
  
 public:
     static Vehicle* getVehicle(string Type,int LicenseNo);

};

#endif