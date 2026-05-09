#include"../../include/Billing_System/MakeBill.hpp"

MakeBill::MakeBill(string Type,double hours){
    if(Type=="Car"){
        this->p = new CarBill();
       double fee= p->calcuateCharge(hours);
       cout<<"Your Bill of Parking is :"<<fee<<endl;

    }
    else if(Type=="Bike"){
          this->p = new BikeBill();
       double fee= p->calcuateCharge(hours);
       cout<<"Your Bill of Parking is :"<<fee<<endl;
    }
    else{
          this->p = new TruckBill();
       double fee= p->calcuateCharge(hours);
       cout<<"Your Bill of Parking is :"<<fee<<endl;
    }
}