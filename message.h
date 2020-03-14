//
// Created by jsz on 3/8/20.
//

#ifndef SERIAL_PORT_MESSAGE_H
#define SERIAL_PORT_MESSAGE_H
struct serial_gimbal_data
{
    uint8_t rowData[20];
    uint8_t head = 0xaf;
    uint8_t id = 1;
    int size;
};

struct serial_friction_data
{
    char rowData[20];
    uint8_t head = 0xaf;
    uint8_t id  = 2;
    int size;
};

struct serical_recive_data
{
    char rowData[10];
    uint8_t  head = 0xaf;
    uint8_t id = 3;
    int size;
};

struct gimbal_msg
{
    uint8_t head;
    uint8_t id;
    int16_t pitch;
    int16_t yaw;
};

struct friction_msg
{
    uint16_t left;
    uint16_t right;

};

struct recive_msg
{
    uint8_t robot_id;
    uint8_t rebot_level;
    uint8_t vison_mode;
};
#endif //SERIAL_PORT_MESSAGE_H
