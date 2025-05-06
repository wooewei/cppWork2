#include <iostream> //引入 C++ 標頭檔
#include <stdlib.h> //這一引入標頭檔也可省略，也些編譯器會自動加入
using namespace std;//C++命名空間
//主函式(main function)
int main()
{

	system("pause");//呼叫內定函式
    return 0; //返回並傳回0
}




//自訂函式
void add(int x,int y);
{
	int temp;
	temp= x + y;
	printf("add(%d,%d) = %d \n\n",x,y,temp);
 } 
