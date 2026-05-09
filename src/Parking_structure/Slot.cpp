#include"../../include/Parking_structure/Slot.hpp"
Slot::Slot(int slotNO,string Type){
    this->slotNO=slotNO;
    this->Type=Type;
    this->status=false;
}
 string Slot::getType(){
    return Type;
}
bool Slot::getstatus(){
    return status;
}
int Slot::getSlotNo(){
    return slotNO;
}
void Slot::park(Vehicle *v){
    this->status=true;
    this->v=v;
}
void Slot:: freeSlot(){
    this->status=false;
    this->v=nullptr;
}
