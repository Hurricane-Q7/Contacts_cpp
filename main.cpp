//项目名称：通讯录基础版
//创建日期：2026年/8月/12日 18:19分
#include"showmenu.h"
#include"addmember.h"
#include"addressbooks.h"
#define MAX 1000 //通讯录最多存储一千人的信息

int main()
{
	int input_user = 0;
	addressbooks abs;//创建通讯录个体变量
	abs.m_count = 0;//初始成员个数为零
	while (true)
	{
		showMenu();
		cout << "待输入选项：";
		cin >> input_user;
		switch (input_user)
		{
		case 1:
			addmember(&abs);
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