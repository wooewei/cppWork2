#include <iostream>
#include <stdlib.h>
using namespace std;
//自訂結構型別Student 
struct Student
{
	//field(資料欄位)
	string id; 
	string name;
	int score;
	//function
	void go()
	{
		printf("go go go......\n");
	}
};
//結構型別是類別class的前世 
int main()
{
  	//宣告結構變數David,並設定初始值 
	struct Student David = {"FO-1001","大衛王",92};
	cout << "學號:" << David.id << endl;
  	cout << "姓名" << "\t" << "成績" << endl; 
  	cout << David.name << "\t" << David.score << endl; 
  	David.go();
  	system("pause");
  	return 0;
}
