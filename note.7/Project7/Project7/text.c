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
//    //static��̬�ģ������
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
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ�𣿣�1/0��>:");
//	scanf_s("%d,&input");
//	if (input == 1)
//		printf("��offer\n");
//	else
//		printf("������\n");
//
//	return 0;
//}