#include <stdlib.h>
#include <iostream>
#include <stdio.h>
using namespace std;
//�ŧi�ۭq�禡 
void bubbleSort(int[],int);

//�D�禡(�{���_�l�I)
int main()
{
	int  arr[]={28,22,12,40,13};
	auto int len=sizeof(arr)/4;
	cout << "arr�}�C����:" << len << endl;
	bubbleSort(arr,len);
	 
	//��ܸ�� 
	for(int i=0;i<len;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}


//�ۭq��w�ƧǪk�ƧǨ禡 
void bubbleSort(int data[],int len)
{
	int testAry[]={10,20,30};
	cout << "testAry�}�C����:" << sizeof(testAry)/4 << endl; 
	//�p��}�C����(�L�k���T�b�禡�϶����p��ǤJ���}�C����)
	int length=sizeof(data)/4;
	cout << "data�}�C����:" << length << endl; 
	cout << "�ǤJ�Ѽư}�C����:" << len << endl; 
	//��w�Ƨ�
	for(int i=len-2 ; i>=0 ; i--)     /* �~�j�����4�� i = 3 ~ 0 */
	{
		for(int j=0 ; j<=i ; j++)
		{
			if(data[j]>data[j+1])
			{
				int t=data[j]; /*�洫��ƳB�z*/
				data[j]=data[j+1];
				data[j+1]=t;
			}
		}
	}
}

