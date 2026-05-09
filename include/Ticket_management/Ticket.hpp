#ifndef TICKET_H
#define TICKET_H
#include"../Vehicle_management/Vehicle.hpp"
#include"../Parking_structure/Slot.hpp"
#include<chrono>

class Ticket{
    private:
    int Ticket_Id;
    Vehicle *v;
    Slot*s;
    
     static int  count_ticket;
public:
      chrono::system_clock::time_point start_time;
    Ticket(Vehicle *v,Slot*s);
    int get_ticket_id();
    Vehicle * get_vehicle();
    Slot* get_slot();
    // auto get_strat_time();

};
#endif