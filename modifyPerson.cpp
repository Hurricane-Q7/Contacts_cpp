#include"modifyPerson.h"
void modifyperson(addressbooks* abs, int ret_value)
{
	cout << ">>请输入姓名：" << endl;
	cin >> abs->personArray[ret_value].name;
	cout << ">>请输入年龄：" << endl;
	cin >> abs->personArray[ret_value].age;
	cout << ">>请输入对应性别数字：" << endl;
	int sex = 0;
	cout << "1 -- 男\n" << "2 -- 女" << endl;
	while (true)
	{
		cin >> sex;
		if (sex == 1 || sex == 2)
		{
			abs->personArray[ret_value].sex = sex;
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
	abs->personArray[ret_value].tele_number = tele_member;

	cout << "请输入家庭住址：" << endl;
	string address;
	cin >> address;
	abs->personArray[ret_value].address = address;
	cout << "修改成功！" << endl;
}