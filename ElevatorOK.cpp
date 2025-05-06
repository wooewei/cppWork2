// �w�q�q�����O�A�إ߹q�誫����� 
// ------elevatorOK  c++---------
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#define FLOORS 30 //�ŧi�`�� 
using namespace std;
class Elevator
{
    private:
      int f_selected; //�e���Ӽh(field)
      int f_number;   //�Ҧb�Ӽh
      char name;      //�q��s��
      
	public:
	  Elevator(int s,int f,char n)//�غc�l(constructor)
	  {
	  	f_selected = s;  //�e���Ӽh 
	  	f_number   = f;  //�Ҧb�Ӽh 
	  	name = n;  //�q��s�� 
	  	cout<<">>> �q��s��:"<<name<<" �w�g��l�Ƨ���."<<endl;
	  }
  	   
	  void select_floor(int floor)//�q���ܼӼh��k(method)
	  {
	  	if(floor<0 || floor>FLOORS) 
	  	{
	  		cout<<"***�q���ܼӼh���~***"<<endl;  //cpp
	        return;
	    }   
	    f_selected = floor;
	  }
	  void go() //�q��W�U�ӧ@�~(method)
	  {
      	if(f_number < f_selected) //�W�ӧ@�~ 
    	{
      		while(++f_number < f_selected)
         	printf("Elevator %c : floor %2d (up!)\n",name,f_number);
    	}
    	else if(f_number > f_selected) //�U�ӧ@�~
    	{
      		while(--f_number > f_selected)
  	     	printf("Elevator %c : floor %2d (down!)\n",name,f_number);
    	}
    	printf("Elevator %c : floor %2d (stop.)\n",name,f_number);
	  }
};
//�D�禡 
int main(void)
{
    int sf;                    
    Elevator Obj1(1,1,'A');  //(�e���Ӽh,�Ҧb�Ӽh,�q��s��) 
    do{                           
       cout<<"�Ы��e�����Ӽh->";
       cin>>sf;
       if(sf==0) //��0�����{�� 
         break;                 
       Obj1.select_floor(sf);      
       Obj1.go();
    }while(true);               
    
    cout<<"(�{���@�~����)"<<endl;
    system("pause");
}
