#include <iostream>
using namespace std;
//定義類別 
class Person
{
	public:
        int Tall;    //宣告 Tall 身高欄位field為公用
		string Name; //宣告 Name 姓名欄位field為公用
		void Walk(int var)     //定義跑步方法method
        {
			cout << this->Name << " 每小時可跑 " << var << " 公里" << endl;
        }
};
//主函式 
int main()
{
	Person David; //宣告並建立 Person 類別的 David 物件
	Person p1;
	
	David.Tall = 183;             //設定 Tall 欄位
	David.Name = "大衛";          //設定 Name 欄位
	p1.Tall = 165;
	p1.Name = "王小呆";
	
	cout << David.Name << " 身高=" << David.Tall << endl; 
	David.Walk(8);  //呼叫 Walk() 方法，並傅遞參數值 8
	cout << p1.Name << " 身高=" << p1.Tall << endl;
	p1.Walk(12) ;
	
	system("pause");
	return 0;
}
