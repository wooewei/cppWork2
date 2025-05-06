// 定義電梯類別，建立電梯物件實體 
// ------elevatorOK  c++---------
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#define FLOORS 30 //宣告常數 
using namespace std;
class Elevator
{
    private:
      int f_selected; //前往樓層(field)
      int f_number;   //所在樓層
      char name;      //電梯編號
      
	public:
	  Elevator(int s,int f,char n)//建構子(constructor)
	  {
	  	f_selected = s;  //前往樓層 
	  	f_number   = f;  //所在樓層 
	  	name = n;  //電梯編號 
	  	cout<<">>> 電梯編號:"<<name<<" 已經初始化完成."<<endl;
	  }
  	   
	  void select_floor(int floor)//電梯選擇樓層方法(method)
	  {
	  	if(floor<0 || floor>FLOORS) 
	  	{
	  		cout<<"***電梯選擇樓層錯誤***"<<endl;  //cpp
	        return;
	    }   
	    f_selected = floor;
	  }
	  void go() //電梯上下樓作業(method)
	  {
      	if(f_number < f_selected) //上樓作業 
    	{
      		while(++f_number < f_selected)
         	printf("Elevator %c : floor %2d (up!)\n",name,f_number);
    	}
    	else if(f_number > f_selected) //下樓作業
    	{
      		while(--f_number > f_selected)
  	     	printf("Elevator %c : floor %2d (down!)\n",name,f_number);
    	}
    	printf("Elevator %c : floor %2d (stop.)\n",name,f_number);
	  }
};
//主函式 
int main(void)
{
    int sf;                    
    Elevator Obj1(1,1,'A');  //(前往樓層,所在樓層,電梯編號) 
    do{                           
       cout<<"請按前往的樓層->";
       cin>>sf;
       if(sf==0) //按0結朿程式 
         break;                 
       Obj1.select_floor(sf);      
       Obj1.go();
    }while(true);               
    
    cout<<"(程式作業結束)"<<endl;
    system("pause");
}
