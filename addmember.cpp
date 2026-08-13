#include"addmember.h"
void addmember( addressbooks * abs)
{
	//通讯录最大存放为1000人，所有在添加通讯录成员的时候先判断人满没有
	if (abs->m_count == MAX)
	{
		cout << "通讯录已经到达存放数量上限！" << endl;
		return;
	}
	//信息输入环节
	cout << ">>请输入姓名：" << endl;
	cin >> abs->personArray[abs->m_count].name;
	cout << ">>请输入年龄：" << endl;
	cin >> abs->personArray[abs->m_count].age;
	cout << ">>请输入对应性别数字：" << endl;
	int sex = 0;
	cout << "1 -- 男\n"<< "2 -- 女" << endl;
	while (true)
	{
		cin >> sex;
		if (sex == 1 || sex == 2)
		{
			abs->personArray[abs->m_count].sex = sex;
			break;
		}
		else
		{
			cout << "输入错误，请重新输入！" << endl;
		}
	}
	cout << "请输入电话号码：" << endl;
	string tele_member;
	cin >> tele_member;
	abs->personArray[abs->m_count].tele_number = tele_member;

	cout << "请输入家庭住址：" << endl;
	string address;
	cin >> address;
	abs->personArray[abs->m_count].address = address;

	abs->m_count++;

	cout << "添加成功！" << endl;
	system("pause");
	system("cls");
	
}