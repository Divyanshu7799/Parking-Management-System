#include"../../include/Billing_System/BikeBill.hpp"
double BikeBill::calcuateCharge(double hours){
     if(hours<1){
        return 30;
    }
    return 30*hours;
}