#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include <stdbool.h>
//int main()
//{
//	bool  flag = true;
//	if (flag)
//		printf("i like c\n");
//	return 0;
//}
//#include <stdio.h>
//int main() {
//	sizeof(char);
//	return 0;
//}
//#include <stdio.h>
//int main() {
//	int num = 100;
//
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(num));
//	printf("%zd\n", sizeof num);
//
//	short s = 10;
//	int num = 100;
//	printf("%zd\n", sizeof(s = num + 2));
//	printf("%d\n", s);
//	return 0;
//}
#include <stdio.h>
int main() {
	int num = 10 ;
	num = -10;
	// 对于int类型的数据打印用%d
	printf(" % d\n", num);
	unsigned int num2 = 100 ;
	num2 = -100;
	//对于unsigned int类型的数据打印用%u
	printf("%u\n", num2);
	
	return 0;
}