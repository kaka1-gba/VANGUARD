#include "RM.h"

#include <stdio.h>

void SDA_High(void) {
    
    printf("SDA ������Ϊ�ߵ�ƽ\n");
}

void SDA_Low(void) {
    
    printf("SDA ������Ϊ�͵�ƽ\n");
}

void SCL_High(void) {
   
    printf("SCL ������Ϊ�ߵ�ƽ\n");
}

void SCL_Low(void) {
   
    printf("SCL ������Ϊ�͵�ƽ\n");
}

unsigned char SDA_Read(void) {
    
    printf("��ȡ SDA �ߵ�ƽ״̬\n");
    return 0;
}