#include"../../include/Parking_structure/Parking_Lot.hpp"

Parking_Lot::Parking_Lot(int TotalFloor,int CarSlot,int BikeSlot,int TruckSlot){
    this->TotalFoor=TotalFloor;
    for(int i=0;i<TotalFloor;i++){

        Floors.push_back(Floor(i,CarSlot,BikeSlot,TruckSlot));
    }
   
}
 Slot* Parking_Lot::bookParking(Vehicle*v){
     Slot* s;
       for(auto &f:Floors){
           s=f.check_avalibility(v->getType());
       }
       if(s!=nullptr){
         
           s->park(v);
           return s;
       }
        else{
           return NULL;
        }

     }