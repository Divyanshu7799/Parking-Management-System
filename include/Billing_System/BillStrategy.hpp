#ifndef BILLSTRATEGY
#define BILLSTRATEGY

class BillStrategy{

    public:
    virtual double calcuateCharge(double hours)=0;
};

#endif