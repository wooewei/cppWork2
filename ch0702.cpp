#include <iostream> //�ޤJ C++ ���Y��
#include <stdlib.h> //�o�@�ޤJ���Y�ɤ]�i�ٲ��A�]�ǽsĶ���|�۰ʥ[�J
using namespace std;//C++�R�W�Ŷ�
//�D�禡(main function)
int add(int x,int y);
int main()
{
	int a=10,b=20; 
	printf("add(20,30) = %d \n\n",add(20,30)); //�ǭȩI�s 
	printf("add(%d,%d) = %d \n\n",a,b,add(a,b)); //�I�s�禡
	
	int t=add(a,b);
	printf("add(%d,%d) = %d \n\n",a,b,t);
	system("pause");//�I�s���w�禡
    return 0; //��^�öǦ^
}


//�ۭq�禡
int add(int x,int y)
{  
	int temp;
	temp=x+y;
	return temp;
}
