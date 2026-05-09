#ifndef SLOT_H
#define SLOT_H
#include<string>
#include"../../include/Vehicle_Management/Vehicle.hpp"
using namespace std;
class Slot{
private:
int slotNO;
string Type;
bool status;
Vehicle*v;
public :
 Slot(int slotNO,string Type);
 string getType();
 bool getstatus();
 int getSlotNo();
 void park(Vehicle *v);
 void freeSlot();

};

#endif