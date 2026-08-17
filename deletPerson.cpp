#include"deletPerson.h"
void deletperson(addressbooks*abs1)
{
	//具体实现删除数组元素的函数;
	cout << "请输入要删除联系人的姓名：" << endl;
	string name;
	cin >> name;
	int ret_value = isExit(abs1, name);
	if (ret_value != -1)
	{
		int i = 0;
		for (i = ret_value; i < abs1->m_count; i++)
		{
			abs1->personArray[i] = abs1->personArray[i + 1];
		}
		abs1->m_count--;
		cout << "删除成功" << endl;
	}
	else
	{
		cout << "查无此人！" << endl;
	}
	system("pause");
	system("cls");

}
