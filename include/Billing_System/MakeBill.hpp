#ifndef MAKEBILL
#define MAKEBILL
#include"CarBill.hpp"
#include"BikeBill.hpp"
#include"TruckBill.hpp"
#include"BillStrategy.hpp"
#include<iostream>
#include<string>
using namespace std;

class MakeBill{
    private:
    BillStrategy * p;
  public:
   MakeBill(string Type,double hours);
};

#endif