#include <stdlib.h>
#include <iostream>
#include <stdio.h>
using namespace std;
//宣告自訂函式 
void bubbleSort(int[],int);

//主函式(程式起始點)
int main()
{
	int  arr[]={28,22,12,40,13};
	auto int len=sizeof(arr)/4;
	cout << "arr陣列長度:" << len << endl;
	bubbleSort(arr,len);
	 
	//顯示資料 
	for(int i=0;i<len;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}


//自訂氣泡排序法排序函式 
void bubbleSort(int data[],int len)
{
	int testAry[]={10,20,30};
	cout << "testAry陣列長度:" << sizeof(testAry)/4 << endl; 
	//計算陣列長度(無法正確在函式區塊中計算傳入的陣列長度)
	int length=sizeof(data)/4;
	cout << "data陣列長度:" << length << endl; 
	cout << "傳入參數陣列長度:" << len << endl; 
	//氣泡排序
	for(int i=len-2 ; i>=0 ; i--)     /* 外迴圈執行4次 i = 3 ~ 0 */
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

