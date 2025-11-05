#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ || ++b || d++;
//	printf("a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	switch (n % 3)
//    {
//	case 0:
//		printf("余数是0\n");
//		break;
//	case 2:
//		printf("余数是2\n");
//		break;
//	case 3:
//		printf("余数是3\n");
//		break;
//	}
//	return 0;
//}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:	
//	case 4:	
//	case 5:	
//		printf("工作日\n");
//		break;
//	case 6:		
//	case 7:			
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入有误\n");
//		break;
//	}
//	return 0;
//}
//int main()
//{
//	int n = 1;//循环变量的初始化
//	while (n <= 10)//循环结束判断
//	{
//		printf("%d ", n);
//		n++;//循环变量的调整
//	}
//	  return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	while (n)
//	{
//		printf("%d ", n % 10);
//		n  /= 10;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for(i=1; i<= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		//判断i里边的值是不是3的倍数
//		if (i % 3 == 0)
//			sum += i;
//	}
//	printf("%d\n", sum);
//		return 0;
//}
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 3; i <= 100; i+=3)
//	{
//		//判断i里边的值是不是3的倍数
//		/*if (i % 3 == 0)*/
//			sum += i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 0);
//	return 0;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//
//	int cnt = 0;//计数器
//
//	while (num > 0)
//	{
//		num /= 10;
//		cnt++;
//	}
//	printf("%d\n", cnt);
//	return 0;
//}
int main()
{
	int num = 0;
	scanf("%d", &num);

	int cnt = 0;//计数器
	do
	{
		num /= 10;
		cnt++;
	} while (num);

	printf("%d\n", cnt);
	return 0;
}