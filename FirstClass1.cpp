#include <iostream>
using namespace std;
//�w�q���O 
class Person
{
	public:
        int Tall;    //�ŧi Tall �������field������
		string Name; //�ŧi Name �m�W���field������
		void Walk(int var)     //�w�q�]�B��kmethod
        {
			cout << this->Name << " �C�p�ɥi�] " << var << " ����" << endl;
        }
};
//�D�禡 
int main()
{
	Person David; //�ŧi�ëإ� Person ���O�� David ����
	Person p1;
	
	David.Tall = 183;             //�]�w Tall ���
	David.Name = "�j��";          //�]�w Name ���
	p1.Tall = 165;
	p1.Name = "���p�b";
	
	cout << David.Name << " ����=" << David.Tall << endl; 
	David.Walk(8);  //�I�s Walk() ��k�A�óŻ��Ѽƭ� 8
	cout << p1.Name << " ����=" << p1.Tall << endl;
	p1.Walk(12) ;
	
	system("pause");
	return 0;
}
