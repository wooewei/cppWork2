#include <iostream> //引入 C++ 標頭檔
#include <stdlib.h> //這一引入標頭檔也可省略，也些編譯器會自動加入
using namespace std;//C++命名空間
//主函式(main function)
int add(int x,int y);
int main()
{
	int a=10,b=20; 
	printf("add(20,30) = %d \n\n",add(20,30)); //傳值呼叫 
	printf("add(%d,%d) = %d \n\n",a,b,add(a,b)); //呼叫函式
	
	int t=add(a,b);
	printf("add(%d,%d) = %d \n\n",a,b,t);
	system("pause");//呼叫內定函式
    return 0; //返回並傳回
}


//自訂函式
int add(int x,int y)
{  
	int temp;
	temp=x+y;
	return temp;
}
