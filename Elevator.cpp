// �w�q�q�����O�A�إ߹q�誫����� 
// -----------------elevatorOK  c++-------------------
#include <cstdio>
#include <iostream>
#define FLOORS 30
using namespace std;
class Elevator
{
      private:
       int f_selected;
       int f_number;
       char name;
      public:     
  	   Elevator(int s , int f , char n);
       void select_floor(int floor);
       void go();
  	   ~Elevator();
};
Elevator::Elevator(int s , int f , char n)  // �غc�l 
{  
    f_selected = s;  //�e���Ӽh 
    f_number   = f;  //�Ҧb�Ӽh 
    name       = n;  //�q��s�� 
    cout<<">>>>> I am "<<name<<" I was initialized"<<endl;
}
Elevator::~Elevator(){} // �Ѻc�l 
void Elevator::select_floor(int floor) 
{
     if(floor < 0 || floor > FLOORS) 
     {
        cout<<"*****�q���ܼӼh���~*****"<<endl;  //cpp
        return;
     }   
     f_selected = floor;
}
void Elevator::go()
{
    if(f_number < f_selected) 
    {
      while(++f_number < f_selected)
         printf("Elevator %c : floor %d (up!)\n", name , f_number);
    }
    else if(f_number > f_selected) 
    {
      while(--f_number > f_selected)
  	     printf("Elevator %c : floor %d (down!)\n", name , f_number);
    }
    printf("Elevator %c : floor %d (stop.)\n", name , f_number);
}
int main(void)
{
    int sf;
    //int fn=1;                      
    Elevator Obj1(1,1,'A');    //(�e���Ӽh,�Ҧb�Ӽh,�q��s��) 
    do{                           
       cout<<"�Ы��e�����Ӽh->";
       cin>>sf;
       //fn=sf;
       if(sf==0)                //��0�����{�� 
         break;                 
       Obj1.select_floor(sf);      
       Obj1.go();
    }while(1);               
    
    cout<<"( �{�����槹�� )"<<endl;
    system("pause");
}
