#include"findPerson.h"
void findperson(addressbooks* abs)
{
	cout << "请输入要查找联系人的姓名：" << endl;
	string name;
	cin >> name;
	int ret_value = isExit(abs, name);
	if (ret_value != -1)
	{
		cout << "名字：" << abs->personArray[ret_value].name << "\t";
		cout << "性别：" << (abs->personArray[ret_value].sex == 1 ? "男" : "女") << "\t";
		cout << "电话：" << abs->personArray[ret_value].tele_number << "\t";
		cout << "住址：" << abs->personArray[ret_value].address << endl;
	}
	else
	{
		cout << "查无此人！" << endl;
	}
	system("pause");
	system("cls");
	
}