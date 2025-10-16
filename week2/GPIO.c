#include <stdio.h>

typedef enum {
    GPIO_Speed_2MHz,
    GPIO_Speed_10MHz,
    GPIO_Speed_50MHz
} GPIO_Speed_TypeDef;

typedef struct {
    GPIO_Speed_TypeDef GPIO_Speed;
} GPIO_InitTypeDef;

void GPIO_StructureInit(GPIO_InitTypeDef* GPIO_InitStruct) {
  GPIO_InitStruct->GPIO_Speed = GPIO_Speed_2MHz;
}
int main() {
    GPIO_InitTypeDef GPIO_InitStruct;
    GPIO_StructureInit(&GPIO_InitStruct);
       printf("GPIO_Speed 的默认值为：%d\n", GPIO_InitStruct.GPIO_Speed);
    return 0;
}