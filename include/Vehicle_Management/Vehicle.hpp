#ifndef VEHICLE_H
#define VEHICLE_H
#include<string>
#include<iostream>

using namespace std;
class Vehicle{
  public :
//   virtual void setLicenseNo(int LiNo)=0;
  virtual int getLicenseNo()=0;
//   virtual void setType(string Type)=0;
  virtual string getType()=0;
};
#endif