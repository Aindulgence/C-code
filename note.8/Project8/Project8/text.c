#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>



//关机程序
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown-s-t 60");
//	while (1)
//	{
//		printf("请注意你的电脑将在一分钟内关机，输入：我是猪，取消关机\n请输入>:");
//		scanf("%s", &input);
//		if (strcmp(input, "我是猪") == 0);
//		{
//			system("shutdown-a");
//			break;
//		}
//	}
//	return 0;
//}

//乘法口诀表
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//			//%2d指两位数向右对齐，%-2d指两位数向左对齐
//		}
//		printf("\n");
//	}
//	return 0;
//}

////猜数字游戏1-100之间
////时间戳：当前计算机时间-计算机起始时间（1970.1.1.0：0：0）=（）秒
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
//	int guess = 0;//接受猜的数字
//	ret = rand() % 100 + 1;//生成1-100之间的随机数
//	while (1)
//	{
//		printf("请猜数字>:");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//srand要引用头文件<stdlib.h>    time要引用头文件<time.h>
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//猜数字游戏
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}