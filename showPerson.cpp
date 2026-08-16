#include"showPerson.h"
//显示所有联系人信息
void showperson(addressbooks* abs)
{
	if (abs->m_count == 0)
	{
		//先判断通讯录里面有没有存放联系人信息
		cout << "当前通讯录无任何联系人信息！" << endl;
	}
	else
	{
		int i = 0;
		for (i = 0; i < abs->m_count; i++)
		{
			cout << "名字：" << abs->personArray[i].name <<"\t";
			cout << "性别：" << (abs->personArray[i].sex==1?"男":"女") << "\t";
			cout << "电话：" << abs->personArray[i].tele_number<< "\t";
			cout << "住址：" << abs->personArray[i].address << endl;
		}
	}
	system("pause");
	system("cls");
}