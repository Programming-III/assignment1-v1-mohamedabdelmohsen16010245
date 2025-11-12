#ifndef vistor.h
#indefine vistor.h
#include <iostream>
#include<string>
using namespace std;

class vistor {
  
  private :
  
  string vistorName;
  int ticketsBought;
  
  public vistor(string vistorName,int ticketsBought){
  this->vistorName=vistorName;
  this->ticketsBought=ticketsBought;
  
  
}
void displayinfo(){
  cout<<vistorName<<vistorName<<endl;
  cout<<ticketsBought<<ticketsBought<<endl;
  
}
#endif
};
