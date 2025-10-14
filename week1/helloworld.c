#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
    int input;
    // 循环，直到用户输入 -1
    while (1) {
        printf("请输入 -1、0 或 1：");
        scanf("%d", &input);
        // 根据输入进行判断
        if (input == -1) {
            printf("程序退出\n");
            break;
        }
        else if (input == 0) {
            printf("helloworld\n");
        }
        else if (input == 1) {
            printf("HELLOWORLD\n");
        }
        else {
            printf("输入无效，请重新输入\n");
        }
    }
    return 0;
}