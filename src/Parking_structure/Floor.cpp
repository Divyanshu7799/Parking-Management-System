#include"../../include/Parking_structure/Floor.hpp"
Floor::Floor(int FloorNO,int CarSlot,int BikeSlot,int TruckSlot){
    this->FloorNo=FloorNO;
    this->CarSlot=CarSlot;
    this->BikeSlot=BikeSlot;
    this->TruckSlot=TruckSlot;
    int count=0;
    for(int i=0;i<CarSlot;i++){
        slots.push_back(Slot(count++,"Car"));
    }
    for(int i=0;i<TruckSlot;i++){
        slots.push_back(Slot(count++,"Truck"));
    }
    for(int i=0;i<BikeSlot;i++){
        slots.push_back(Slot(count++,"Bike"));
    }
}
 Slot* Floor::check_avalibility(string Type){
     for(auto &s:slots){
        if(s.getType()==Type){
          if(s.getstatus()==false){
              return &s;
          }
        }
     }
     return nullptr;
   }
