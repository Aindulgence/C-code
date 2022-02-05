#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	int i = 1;
	int j = 1;
	while (i <= 4)
	{
		j = j * i;
		i++;
	}
	printf("%d\n", j);
	return 0;
}

//void text()
//{
//	static int a = 1;
//    //static静态的；静电的
//	a++;
//	printf("a=%d\n", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		text();
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'a';
//	printf("%c\n", ch);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	printf("a=%d\n", a);
//	//printf("a=%p\n", a);
//	//printf("%p\n", p);
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗？（1/0）>:");
//	scanf_s("%d,&input");
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//
//	return 0;
//}