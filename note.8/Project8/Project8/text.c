#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>



//�ػ�����
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown-s-t 60");
//	while (1)
//	{
//		printf("��ע����ĵ��Խ���һ�����ڹػ������룺������ȡ���ػ�\n������>:");
//		scanf("%s", &input);
//		if (strcmp(input, "������") == 0);
//		{
//			system("shutdown-a");
//			break;
//		}
//	}
//	return 0;
//}

//�˷��ھ���
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//			//%2dָ��λ�����Ҷ��룬%-2dָ��λ���������
//		}
//		printf("\n");
//	}
//	return 0;
//}

////��������Ϸ1-100֮��
////ʱ�������ǰ�����ʱ��-�������ʼʱ�䣨1970.1.1.0��0��0��=������
//void menu()
//{
//	printf("#############################\n");
//	printf("##### 1.play   2.exit   #####\n");
//	printf("#############################\n");
//
//}
//
//void game()
//{
//	int ret = 0;
//	int guess = 0;//���ܲµ�����
//	ret = rand() % 100 + 1;//����1-100֮��������
//	while (1)
//	{
//		printf("�������>:");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//srandҪ����ͷ�ļ�<stdlib.h>    timeҪ����ͷ�ļ�<time.h>
//	do
//	{
//		menu();
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//��������Ϸ
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}