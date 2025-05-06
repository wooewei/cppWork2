// 定義電梯類別，建立電梯物件實體 
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
Elevator::Elevator(int s , int f , char n)  // 建構子 
{  
    f_selected = s;  //前往樓層 
    f_number   = f;  //所在樓層 
    name       = n;  //電梯編號 
    cout<<">>>>> I am "<<name<<" I was initialized"<<endl;
}
Elevator::~Elevator(){} // 解構子 
void Elevator::select_floor(int floor) 
{
     if(floor < 0 || floor > FLOORS) 
     {
        cout<<"*****電梯選擇樓層錯誤*****"<<endl;  //cpp
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
    Elevator Obj1(1,1,'A');    //(前往樓層,所在樓層,電梯編號) 
    do{                           
       cout<<"請按前往的樓層->";
       cin>>sf;
       //fn=sf;
       if(sf==0)                //按0結朿程式 
         break;                 
       Obj1.select_floor(sf);      
       Obj1.go();
    }while(1);               
    
    cout<<"( 程式執行完成 )"<<endl;
    system("pause");
}
