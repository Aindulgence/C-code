#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

struct Book
{
	char name[20];
	short price;
};


int main()
{
	struct Book b1 = { "c���Գ������" ,55 };
	printf("������%s\n", b1.name);
	printf("�۸�:%dԪ\n", b1.price);
	b1.price = 19;
	printf("�޸ĺ�ļ۸�%dԪ\n", b1.price);
	strcpy(b1.name, "c++");
	printf("�޸ĺ��������%s\n", b1.name);
	return 0;
}

//int main()
//{
//	int line = 0;
//	printf("�������\n");
//
//	while (line < 20);
//	{
//		printf("��һ�д���:%d\n", line);
//		line++;
//	}
//	if (line >= 20);
//	printf("hao\n");
//	return 0;
//}