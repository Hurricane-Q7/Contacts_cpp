#include"isExit.h"
int isExit(addressbooks* abs, string name)
{
	int i = 0;
	//有人return 该人在数组中的编号
	for (i = 0; i < abs->m_count; i++)
	{
		if (abs->personArray[i].name == name)
		{
			return i;
		}
	}
	return -1;
}