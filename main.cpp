//项目名称：通讯录基础版
//创建日期：2026年/8月/12日 18:19分
#include"showmenu.h"
#define MAX 1000 //通讯录最多存储一千人的信息

//设计通讯录成员的结构体
struct Person
{
	string name;
	int age;
	int sex;//用数字来表示性别，1是boy，2是girl
	string tele_number;
	string address;

};

struct addressbooks
{
	struct Person personArray[MAX];
	//用数组来存放通讯录成员的信息
	int count_of_person;
	//记录当前通讯录成员个数

};
int main()
{
	int input_user = 0;
	
	
	while (true)
	{
		showMenu();
		cin >> input_user;
		switch (input_user)
		{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 0:
			cout << "欢迎下次使用！" << endl;
			system("pause");
			break;
		}
	}
	system("pause");
	return 0;
}