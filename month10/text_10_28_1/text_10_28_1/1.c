#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int i = 0;// 1 2 3 ~ 10
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//	}
//	return 0;
//}
//int main()
//{
//	//for( 初始化; 判断; 调整)
//	//{
//
//	//}
//	//对于for循环，初始化部分，判断部分，调整部分都可以省略
//	//判断部分省略掉，就意味着判断恒为真
//	for (; ;)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	do {
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//需要拿2~i-1之间的数字去试除i
//		//产生2~i-1之间的数字
//		int j = 0;
//		int flag = 1;//假设i是素数
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0) 
//			{
//				flag = 0;//i不是素数
//				break;//已经找到i的因子，没必要继续试除
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	for (i = 101; i <= 200; i += 2)
//	{
//	    int j = 0;
//		int flag = 1;
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)		
//			printf("%d ", i);		
//	}
//	return 0;
//}
//int main()
//{
//	printf("hehe\n");
//	goto next;//next是由我们自己设置的一个标签，也可以替换成别的
//	printf("haha\n");
//	next:
//	printf("heihei\n");
//	return 0;
//}
//int main()
//{
//	flag:
//	printf("hehe\n");
//	goto flag;	
//	return 0;
//}

// 写一个关机程序
//1.程序运行起来后，电脑在1分钟内关机
//2.但是输入：我是猪，就取消关机
//
//system 函数: 执行系统命令
//stdlib.h
//strcmp 函数: 比较两个字符串是否相等
//strcmp函数返回0，表示两个字符串相等
//string.h
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	again: 
//	printf("请注意， 你的电脑在一分钟内关机， 如果输入“ 我是猪”，就取消关机\n");
//	scanf("%s", input);//数组名本来就是地址
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");//取消关机
//	 }
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("请注意， 你的电脑在一分钟内关机， 如果输入“ 我是猪”，就取消关机\n");
//		scanf("%s", input);//数组名本来就是地址
//		if (strcmp(input, "我是猪") == 0)   //两个字符串比较大小，不能使用 ==，要使用strcmp函数
//		{
//			system("shutdown -a");//取消关机
//			break;
//		}
//	}
//	return 0;
//}
//#include <stdlib.h>
//#include <time.h>
////自己创造的一个函数
//void menu()
//{
//	printf("*****************************\n");
//	printf("***        1. play        ***\n");
//	printf("***        0. exit        ***\n");
//	printf("*****************************\n");
//}
//
//void game()
//{
//
//	int r = rand() % 100 + 1;
//	int guess = 0;
//	system("cls");
//	while (1)
//	{
//		printf("请猜数字：");
//		scanf("%d", &guess);
//		if (guess > r)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < r)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("猜对了,数字是:%d\n", r);
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//
//	do
//	{
//		menu();//打印菜单
//		
//		printf("请选择>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			printf("猜数字游戏\n");
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//
//	} while (input);
//	
//
//	return 0;
//}

//#include <stdlib.h>
//#include <time.h>
//int main()
//{
//	srand((unsigned int)time(NULL));
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	return 0;
//}

//#include <stdlib.h>
//#include <time.h>
////自己创造的一个函数
//void menu()
//{
//	printf("*****************************\n");
//	printf("***        1. play        ***\n");
//	printf("***        0. exit        ***\n");
//	printf("*****************************\n");
//}
//
//void game()
//{
//
//	int r = rand() % 100 + 1;
//	int guess = 0;
//	system("cls");
//	int count = 5;
//	while (count)
//	{
//		printf("还有%d次机会~\n", count);
//		//printf("这是你第%d次机会~\n", count);
//		printf("请猜数字：");
//		scanf("%d", &guess);
//		if (guess > r)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < r)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了,数字是:%d\n", r);
//			break;
//		}
//		count--;
//	}
//	if (count == 0)
//	{
//		printf("5次机会用完了，游戏失败\n");
//		//printf("5次机会用完了，游戏失败\n", r);
//		printf("正确的数字是:%d\n", r);
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//
//	do
//	{
//		menu();//打印菜单
//
//		printf("请选择>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			printf("猜数字游戏\n");
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//
//	} while (input);
//
//
//	return 0;
//}

//int main()
//{
//	int arr1[10] = { 1,2,3,4 };
//	int arr2[10] = { 1,2,3,4 ,5,6,7,8,9,10};
//
//	return 0;
//}

int main()
{
	int arr[10] = { 0 };
	//打印这个数组每个元素的地址
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("&arr[%d] = %p\n", i, &arr[i]);
	}
	return 0;
