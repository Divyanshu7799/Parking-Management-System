#include"../../include/Ticket_management/Ticket.hpp"
 int Ticket::count_ticket=0;
Ticket::Ticket(Vehicle *v,Slot*s){
  this->v=v;
  this->s=s;
  this->Ticket_Id= ++count_ticket;
  this->start_time = chrono::system_clock::now();

  cout<<"=========Ticket========="<<endl;
  cout<<"Vehicle Type           :"<<v->getType()<<endl;;
  cout<<"Vehicle License Number :"<<v->getLicenseNo()<<endl;
  cout<<"Ticket ID              :"<<this->Ticket_Id<<endl;
  cout<<"Slot Number            :"<<s->getSlotNo()<<endl;


}
 int Ticket::get_ticket_id(){
    return Ticket_Id;
 }
 Vehicle* Ticket::get_vehicle(){
  return v;
 }
 Slot* Ticket::get_slot(){
  return s;
 }
//  auto Ticket::get_strat_time(){
//     return start_time;
//  }
