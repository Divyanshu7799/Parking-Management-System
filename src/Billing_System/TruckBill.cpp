#include"../../include/Billing_System/TruckBill.hpp"
double TruckBill::calcuateCharge(double hours){
    if(hours<1){
        return 100;
    }
    return 100*hours;
}