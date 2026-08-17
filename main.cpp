//项目名称：通讯录基础版
//创建日期：2026年/8月/12日 18:19分
#include"showmenu.h"
#include"addmember.h"
#include"addressbooks.h"
#include"showPerson.h"
#include"deletPerson.h"
#include"findPerson.h"
#include"modifyPerson.h"
#include"isExit.h"
#define MAX 1000 //通讯录最多存储一千人的信息
//增加枚举常量，提升代码的可读性
enum
{
	AddPerson = 1,
	ShowPerson,
	DeletPerson,
	FindPerson,
	ModifyPerson,
	CleanPerson,
	ExitContacts,
};

void clean_all_person(addressbooks*abs)
{
	abs->m_count = 0;
	cout << "通讯录已经清空!" << endl;
	system("pause");
	system("cls");
}
int main()
{
	int input_user = 0;
	addressbooks abs;//创建通讯录个体变量
	abs.m_count = 0;//初始成员个数为零
	while (true)
	{
		showMenu();
		cout << "待输入选项:>";
		cin >> input_user;
		switch (input_user)
		{
		case AddPerson:
			addmember(&abs);
			break;
		case ShowPerson:
			showperson(&abs);
			break;
		case DeletPerson:
			deletperson(&abs);
			break;
		case FindPerson:
			findperson(&abs);
			break;
		case ModifyPerson:
			modifyperson(&abs);
			break;
		case CleanPerson:
			clean_all_person(&abs);
			break;
		case ExitContacts:
			cout << "欢迎下次使用！" << endl;
			system("pause");
			break;
		}
	}
	system("pause");
	return 0;
}