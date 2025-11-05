#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int k = 5;
//	if (5 == k)
//		printf("666\n");
//	return 0;
//

//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//
//	b = (a == 5 ? 3 : -3);
//
//	printf("%d\n", b);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = 0;
//		/*if (a > b)
//			m = a;
//		else
//			m = b;*/
//
//	m = (a > b ? a : b);
//
//	printf("%d\n", m);
//	
//	return 0;
//
//}
//int main()
//{
//	int flag = 0;
//	scanf("%d", &flag);
//
//	/*if (flag)
//	{
//		printf("666\n");//flag 如果为真， 就打印
//	}*/
//
//	//if (!flag)
//	//{
//	//	printf("666\n");//flag 如果为假， 就打印
//	//}
//
//	if (flag == 0)
//	{
//		printf("666\n");//flag 如果为假， 就打印
//	}
//
//	return 0;
//}
int main()
{
	int month = 0;
	scanf("%d", &month);
	if (month >= 3 && month <= 5)
		printf("春天\n");

	return 0;
}