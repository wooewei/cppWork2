#include <stdlib.h>
#include <iostream>
#include <stdio.h>
using namespace std;
void bubbleSort(int[]); //宣告 

//主函式(程式起始點)
int main()
{
	int  arr[]={28,22,12,44,13};
	int len=sizeof(arr)/sizeof(int);
	bubbleSort(arr);
	 
	//顯示資料
	for(int i=0;i<len;i++)
	{
		printf("%d\t",arr[i]);
	}
	
	system("pause");
	return 0;
}


//自訂氣泡排序法排序函式 
void bubbleSort(int data[])
{
	//計算陣列長度
	int len=sizeof(data)/sizeof(int); 
	cout << "陣列長度:" << len << endl; 
	//氣泡排序
	for(int i=5-2 ; i>=0 ; i--)     /* 外迴圈執行4次 i = 3 ~ 0 */
	{
		for(int j=0 ; j<=i ; j++)
		{
			if(data[j]>data[j+1])
			{
				int t=data[j]; /*交換資料處理*/
				data[j]=data[j+1];
				data[j+1]=t;
			}
		}
	}
}

