#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//计算
//	int c = Add(a, b);
//
//	printf("%d\n", c);
//	return 0;
//}

//#include "add.h"
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//计算
//	int c = Add(a, b);
//
//	printf("%d\n", c);
//	return 0;
//}
//void main()
//{
//	
//	int a = 123;
//	int b = 456;
//	int sum = a + b;
//	printf("sum is %d\n", sum);
//	return 0;
//}


//extern int g_val;
////全局变量默认是代码外部链接属性,在其他的.c文件中适当的声明是可以使用的
//// 但是被static修饰后
////这种外部链接属性就变成了内部链接属性，这个变量只能在自己所在的.c文件使用
////其他.c文件无法使用 
//
//extern void test();
//int main()
//{
//	/*printf("%d\n", g_val);*/
//	test();
//	return 0;
//}
int main()
{
	int i = 0;
for (i = 0; i < 10; i++)
{
	printf("%d ", i);
	}
	return 0;
}