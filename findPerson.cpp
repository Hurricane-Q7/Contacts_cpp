#include"findPerson.h"
void findperson(addressbooks* abs, int ret_value)
{
	cout << "名字：" << abs->personArray[ret_value].name << "\t";
	cout << "性别：" << (abs->personArray[ret_value].sex == 1 ? "男" : "女") << "\t";
	cout << "电话：" << abs->personArray[ret_value].tele_number << "\t";
	cout << "住址：" << abs->personArray[ret_value].address << endl;
}