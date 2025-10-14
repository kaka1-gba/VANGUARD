#pragma once
#ifndef I2C_H
#define I2C_H


#include "RM.h"


void Start(void);

void Stop(void);

void SendByte(unsigned char byte);

unsigned char ReceiveAck(void);

void SendData(unsigned char data);

#endif