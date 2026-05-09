#ifndef TRUCKBILL
#define TRUCKBILL
#include"BillStrategy.hpp"
class TruckBill: public BillStrategy{
       public:
       double calcuateCharge(double hours)override;
};
#endif
