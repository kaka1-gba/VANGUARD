#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
    int input;
    // ѭ����ֱ���û����� -1
    while (1) {
        printf("������ -1��0 �� 1��");
        scanf("%d", &input);
        // ������������ж�
        if (input == -1) {
            printf("�����˳�\n");
            break;
        }
        else if (input == 0) {
            printf("helloworld\n");
        }
        else if (input == 1) {
            printf("HELLOWORLD\n");
        }
        else {
            printf("������Ч������������\n");
        }
    }
    return 0;
}