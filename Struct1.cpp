#include <iostream>
#include <stdlib.h>
using namespace std;
//�ۭq���c���OStudent 
struct Student
{
	//field(������)
	string id; 
	string name;
	int score;
	//function
	void go()
	{
		printf("go go go......\n");
	}
};
//���c���O�O���Oclass���e�@ 
int main()
{
  	//�ŧi���c�ܼ�David,�ó]�w��l�� 
	struct Student David = {"FO-1001","�j�ä�",92};
	cout << "�Ǹ�:" << David.id << endl;
  	cout << "�m�W" << "\t" << "���Z" << endl; 
  	cout << David.name << "\t" << David.score << endl; 
  	David.go();
  	system("pause");
  	return 0;
}
