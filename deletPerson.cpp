#include"deletPerson.h"
void deletperson(addressbooks*abs,int index_del)
{
	//具体实现删除数组元素的函数;
	int i = 0;
	for (i = index_del; i < abs->m_count; i++)
	{
		abs->personArray[i] = abs->personArray[i + 1];
	}
	abs->m_count--;
	cout << "删除成功" << endl;
}
