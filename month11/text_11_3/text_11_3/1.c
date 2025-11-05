#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//void text()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("hehe\n");
//	if (n == 5)
//	{
//		return;
//	}
//	printf("haha\n");
//}
//int main()
//{
//	text();
//	return 0;
//}

//void text()
//{
//	
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//	}
//}
//int main()
//{
//	text();
//	return 0;
//}

//int test()
//{
//	int n = 5;
//		if (n % 2 == 1)
//			return 1;
//}
//
//int main()
//{
//	int r = test();
//	//printf("%d\n", r);
//	return 0;
//}


//void set_arr(int arr[10], int sz )
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = -1;
//	}
//}
//
//void print_arr(int arr[10], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	set_arr(arr, sz);
//	print_arr(arr, sz);
//	return 0;
//}
//void Print(int arr[3][5], int r, int c)//行可以省略
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]); 
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5 ,2,3,4,5,6,3,4,5,6,7 };
//	Print(arr, 3, 5);
//	return 0;
//}
// int is_leap_year(int y) 
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int get_days_of_month(int y, int m)
//{
//	int days[13] = { 0, 31, 28, 31, 30, 31, 30 ,31 ,31 ,30 ,31 ,30 ,31 };
//	//               0   1  2   3   4   5   6   7   8   9   10  11  12
//	int d = days[m];
//	//判断闰年
//	if (is_leap_year(y) && m == 2)
//		d += 1;
//	return d;
//}
//int main()
//{
//	int year = 0;
//	int month = 0;
//	scanf("%d %d", &year ,&month);
//	int d = get_days_of_month(year, month);
//	printf("%d\n", d);
//	return 0;
//}
//#include <string.h>
//int main()
//{
//	size_t len = strlen("abc");
//	printf("%zd\n", len);
//	return 0;
//}
//
//int main()
//{
//	
//	printf("%zd\n", strlen("abcdef"));
//	return 0;
//}


//int main()
//{
//	printf("%d ", printf("%d ", printf("%d ", 43)));
//}