#include"include/Vehicle_Management/SelectVehicle.hpp"
#include"include/Parking_structure/Parking_Lot.hpp"
#include"include/Ticket_management/Ticket.hpp"
#include"include/Billing_System/MakeBill.hpp"
#include<iostream>

using namespace std;
vector<Ticket*>storedTickets;
void ExitVehicle(int ticket_id){
    for(int i=0;i<storedTickets.size();i++){
        if(storedTickets[i]->get_ticket_id()==ticket_id){
            Ticket* t=storedTickets[i];
            auto exit_time=chrono::system_clock::now();
   
             auto h= chrono::duration_cast<chrono::seconds>(exit_time - t->start_time);
             double hours=h.count()/3600.0;
             MakeBill m=MakeBill(t->get_vehicle()->getType(),hours);
             t->get_slot()->freeSlot();
             storedTickets.erase(storedTickets.begin()+i);
             cout<<"Vehicle Exited "<<endl;
             delete(t);
             return;
     
        }
    }
    cout<<"Invalid Ticket Id"<<endl;


}
void ParkVehicle(Vehicle *v,Parking_Lot &p){

  Slot*s1= p.bookParking(v);
   if(s1==nullptr){
    cout<<"Parking is Full"<<endl;
    return;
   }
   Ticket *t= new Ticket(v,s1);
    storedTickets.push_back(t);
    cout<<"Vehicle is Parked Successfully"<<endl;
    cout<<"Ticket id is :"<<t->get_ticket_id();

}
int main(){
    int totalslots=6;
     Parking_Lot p1(1,2,2,2);
     
     while(1){
        int choice;
        cout<<"\nEnter :";
        cout<<"\n1. Park Vehicle "<<endl;
        cout<<"2. Exit Vehicle "<<endl;
        cout<<"3. Total slots available "<<endl;
        cout<<"4. Exit Program "<<endl;
        cin>>choice;
        if(choice==1){
            string Type;
            int LicenseNO;
            cout<<"Enter the Type of Vehicle (Car/Bike/Truck) :"<<endl;
            cin>>Type;
            cout<<"Enter the LicenseNo "<<endl;
            cin>>LicenseNO;
            Vehicle*v= SelectVehicle::getVehicle(Type,LicenseNO);
             ParkVehicle(v,p1);
        }
        else if(choice==2){
          int ticket_id ;
          cout<<"Enter the Ticket Id :"<<endl;
          cin>>ticket_id;
          ExitVehicle(ticket_id);
        }
        else if (choice==3){
          cout<<"Total Empty slots are :"<<totalslots-storedTickets.size()<<endl;
        }
        else{
            break;
        }
        

     }
   
}