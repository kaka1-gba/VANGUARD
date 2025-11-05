#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][5] = { 0 };
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	int arr[3][5] = { 0 };
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("&arr[%d][%d] = %p\n",i , j , &arr[i][j]);
//		}
//	}
//	return 0;
//}


//变长数组 ：长度是由变量来指定的
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr3[n];
//	int i = 0;
//
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr3[i]);
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr3[i]);
//	}
//	return 0;
//}
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
//int main()
//{
//	 //welcome to bit!!!!!!
//	char arr1[] = "欢迎来到比特";
//	char arr2[] = "############";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//		Sleep(500);//单位是毫秒
//		system("cls");
//		
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1, 2,3,4,5,6,7,8,9,10 };
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int flag = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == n)
//		{
//			printf("找到了，下标是:%d\n", i);
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
//		printf("找不到\n");
//		return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 0;
//	scanf("%d", &n);
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int flag = 0;
//	while (left <= right)
//	{
//	    int mid = (left + right) / 2;//每一次二分查找要求出中间元素的下标一定是在循环里边
//
//		if (arr[mid] < n)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > n)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是:%d\n", mid);
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
//		printf("找不到\n");
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 0;
//	scanf("%d", &n);
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int flag = 0;
//	while (left <= right)
//	{
//		int mid = left + (right-left) / 2;//优化处
//
//		if (arr[mid] < n)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > n)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是:%d\n", mid);
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
//		printf("找不到\n");
//	return 0;
//}


//#include <math.h>
//int main()
//{
//	double r = sqrt(16.0);
//	printf("%f\n", r);
//	printf("%.1f\n", r);
//	return 0;
//}


//int Add(int x,int y)
//{
// int z = 0;
//	return x + y;
// return z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = Add(a, b);//函数Add被使用的场景 - 函数的调用	
//	printf("c = %d\n", c);//函数的调用	
//
//		return 0;
//}


//写一个函数，在屏幕上打印hehe
void Print(void)
{
	printf("hehe\n");
}

int main()
 {
     Print();
	 return 0;
 }