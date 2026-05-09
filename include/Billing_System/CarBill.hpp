#ifndef CARBILL
#define CARBILL
#include"BillStrategy.hpp"
class CarBill:public BillStrategy{
       public:
       double calcuateCharge(double hours)override;
};
#endif
