#ifndef FLOOR_H
#define FLOOR_H
#include"Slot.hpp"
#include<vector>
class Floor{
  private:
  int FloorNo;
   int CarSlot;
   int BikeSlot;
   int TruckSlot;
   string SlotType;

   public:
   vector<Slot>slots;
   Floor(int FloorNO,int CarSlot,int BikeSlot,int TruckSlot);
   Slot* check_avalibility(string Type);
};

#endif