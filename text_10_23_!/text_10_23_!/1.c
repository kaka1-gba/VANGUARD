#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int num = 0;//输入
//	scanf("%d", &num);//判断
//	if (num % 2 == 1)
//		printf("%d是奇数\n", num);
//	else
//		printf("%d是偶数\n", num);
//	return 0;
//}
//int main()
//{
//	int age = 0;//输入
//	scanf("%d", &age);//判断
//	if (age >= 18)
//	{
//		printf("成年\n");
//	}
//	else
//	{printf("未成年\n");
//    }
//	return 0;
//}
//int main()
//{
//	int num = 0;//输入
//	scanf("%d", &num;//判断
//	if (num >= 0)
//	{
//		printf("正数\n");
//	}
//	else//<=0
//	{
//		if (num < 0)
//			printf("负数\n");
//		else
//			printf("0\n");
//	}
//	return 0;
//}
//int main()
//{
//	int num = 0;//输入
//	scanf("%d", &num);//判断
//	if (num > 0)
//	 printf("正数\n");
//	 else if (num < 0)
//			printf("负数\n");
//	 else
//			printf("0\n");
//
//	return 0;
//}
//int main()
//
//{
//	int num = 0;//输入
//	scanf("%d", &num);//判断
//	if (num > 0)
//	{
//		if (num % 2 == 0)
//			printf("偶数\n");
//		else
//			printf("奇数\n");
//	}
//	else
//		printf("非正数\n" );
//		 
//	return 0;
//}
int main()
{

	int age = 0;//输入
	scanf("%d", &age);//判断
	if (age < 18)
		prinft("少年\n");
	else if (age <= 44)//>=18
		printf("青年\n");
	else if (age <= 59)//>=45
		printf("中老年\n");
	else if (age < 89)//>60
		printf("老年\n");
	else
		printf("老寿星");
		
	return 0;
}