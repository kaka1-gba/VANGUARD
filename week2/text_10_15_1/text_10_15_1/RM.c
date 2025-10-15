#include "RM.h"

#include <stdio.h>

void SDA_High(void) {
    
    printf("SDA 线设置为高电平\n");
}

void SDA_Low(void) {
    
    printf("SDA 线设置为低电平\n");
}

void SCL_High(void) {
   
    printf("SCL 线设置为高电平\n");
}

void SCL_Low(void) {
   
    printf("SCL 线设置为低电平\n");
}

unsigned char SDA_Read(void) {
    
    printf("读取 SDA 线电平状态\n");
    return 0;
}