#infndef animal.h
#define animal.h
#include <iostream>
#include <string>
using namespace std;

class animal{
  
  private :
  
  string name ;
  int age ;
  bool ishungry;
  
  public :
   animal (string name , int age , bool ishungry ){
     
     this->name=name;
     this->age=age;
     this->ishungry=ishungry;
   }
  virtual void display(){
    
    cout<<"name"<<name<<endl;
    cout<<"age"<<age<<endl;
    cout<<"ishungry"<<ishungry<<endl;
  }
  
  virtualvoid feed(){
    if (animal ishungry){
      cout<<"animal is hungry"<<endl;
       return feed ;

    }
    else {
      cout<<"animal is not hungry"<<endl;
      return dont feed ;
    }
  }
  
  subclass mammal{
    string FurColor
    
  }
  subclass bird{
    float wingSpan;
    
  }
  subclass reptile{
    bool isVenomous;
  }
#endif  
};
