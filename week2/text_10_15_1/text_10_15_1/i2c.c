#include "i2c.h"


void Start(void) {
    SDA_High();
    SCL_High();
   
    SDA_Low();
    SCL_Low();
}


void Stop(void) {
    SDA_Low();
    SCL_High();
    
    SDA_High();
}


void SendByte(unsigned char byte) {
    unsigned char i;
    for (i = 0; i < 8; i++) {
        if (byte & 0x80) {
            SDA_High();
        }
        else {
            SDA_Low();
        }
        SCL_High();
       
        SCL_Low();
        byte <<= 1;
    }
}


unsigned char ReceiveAck(void) {
    unsigned char ack;
    SDA_High(); 
    SCL_High();
    
    ack = SDA_Read();
    SCL_Low();
    return ack;
}


void SendData(unsigned char data) {
    Start();
    SendByte(data);
    ReceiveAck();
    Stop();
}