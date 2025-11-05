#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main() {
//	printf("%d\n", 1 + 1);
//	return 0;
//}
//int main() {
//	printf("%d\n", 6 / 4);//1
//	// /(除号)的两端如果都是整数，执行的是整数除法，结果取整
//	printf("%f\n", 6 / 4.0);
//	printf("%lf\n", 6 / 4.0);
//	// /(除号)的两端如果出现了浮点数，才执行的是浮点数数除法
//	return 0;
//}
//int main() {
//	printf("%d\n", 5 % 2);//1
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	//a  += 5;
//	/*a -= 5;*/
//	a *= 5;
//	printf("%d\n", a);
//	return 0;
//}
int main()
{
	int a = 10;
	/*a++;*///后置++，先参与表达式运算，再自增1
	++a;//前置++，先自增1，再参与表达式运算
	printf("%d\n", a);
	return 0;
}