#include"../../include/Billing_System/CarBill.hpp"
double CarBill::calcuateCharge(double hours){
     if(hours<1){
        return 50;
    }
    return 50*hours;
}