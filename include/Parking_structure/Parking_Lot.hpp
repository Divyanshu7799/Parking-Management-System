#ifndef PARKING_LOT
#define PARKING_LOT
#include"Floor.hpp"
#include<string>
#include<vector>
#include<iostream>

using namespace std;
class Parking_Lot{
     private: 
      int TotalFoor;
    // string Vehicle_type;
    public:
        vector<Floor>Floors;
   Parking_Lot(int TotalFloor,int CarSlot,int BikeSlot,int TruckSlot);

     Slot* bookParking(Vehicle*v);
       
      

};
#endif