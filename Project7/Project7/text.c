#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <math.h>


int main()
{
    double a = 1, sum=0, pi;
    int f = 1;
    for (a = 1; a <= 1e+6; a += 2)
    {
        sum += f * 1.0 / a;
        f = -f;
    }
    pi = sum * 4.0;
    printf("pi=%10.4lf", pi);
    return 0;
}


//�ж�������(�Գ���) 100��200֮�������
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++) //sqrt(i)��ʾi��ƽ��������ѧ�⺯��
//		{
//			if(i%j==0)
//			{
//				break;
//			}
//		}
//	    if (j > sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

//1000��2000֮�������
//��һ��
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//�ڶ���
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || y % 100 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (1 == is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}


////շת������������������Լ��
//int main()
//{
//	int m = 24;
//	int n = 18;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (r = m % n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}

//4����ֵ
//int main()
//{
//	int i = 1;
//	int j = 1;
//	while (i <= 4)
//	{
//		j = j * i;
//		i++;
//	}
//	printf("%d\n", j);
//	return 0;
//}

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
//	scanf_s("%d",&input);
//	if (input == 1)
//		printf("��offer\n");
//	else
//		printf("������\n");
//
//	return 0;
//}