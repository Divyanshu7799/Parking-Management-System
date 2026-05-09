#ifndef BIKEBILL
#define BIKEBILL
#include"BillStrategy.hpp"
class BikeBill:public BillStrategy{
       public:
       double calcuateCharge(double hours)override;
};
#endif
