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
	struct Book b1 = { "c语言程序设计" ,55 };
	printf("书名：%s\n", b1.name);
	printf("价格:%d元\n", b1.price);
	b1.price = 19;
	printf("修改后的价格：%d元\n", b1.price);
	strcpy(b1.name, "c++");
	printf("修改后的书名：%s\n", b1.name);
	return 0;
}

//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//
//	while (line < 20);
//	{
//		printf("敲一行代码:%d\n", line);
//		line++;
//	}
//	if (line >= 20);
//	printf("hao\n");
//	return 0;
//}