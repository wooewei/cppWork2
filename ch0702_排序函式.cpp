#include <stdlib.h>
#include <iostream>
#include <stdio.h>
using namespace std;
void bubbleSort(int[]); //�ŧi 

//�D�禡(�{���_�l�I)
int main()
{
	int  arr[]={28,22,12,44,13};
	int len=sizeof(arr)/sizeof(int);
	bubbleSort(arr);
	 
	//��ܸ��
	for(int i=0;i<len;i++)
	{
		printf("%d\t",arr[i]);
	}
	
	system("pause");
	return 0;
}


//�ۭq��w�ƧǪk�ƧǨ禡 
void bubbleSort(int data[])
{
	//�p��}�C����
	int len=sizeof(data)/sizeof(int); 
	cout << "�}�C����:" << len << endl; 
	//��w�Ƨ�
	for(int i=5-2 ; i>=0 ; i--)     /* �~�j�����4�� i = 3 ~ 0 */
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

