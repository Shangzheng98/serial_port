#include <iostream>
#include "serial_port.h"

int main() {
    char *name = "/dev/ttyUSB0";
    serial_port sp(name, B115200);
    struct serial_gimbal_data a_data;
    int a_yaw = int(1.66667 * 10000);
    a_data.rowData[0] = a_data.head;
    a_data.rowData[1] = a_data.id;
    a_data.rowData[2] = 0;
    a_data.rowData[3] = 0;
    a_data.rowData[4] = a_yaw;
    a_data.rowData[5] = a_yaw >> 8;

    struct serial_gimbal_data b_data;

    int b_yaw = int(-1.66667 * 10000);
    b_data.rowData[0] = b_data.head;
    b_data.rowData[1] = b_data.id;
    b_data.rowData[2] = 0;
    b_data.rowData[3] = 0;
    b_data.rowData[4] = b_yaw;
    b_data.rowData[5] = b_yaw >> 8;

    sp.send_data(a_data);
    //sleep(1);



    return 0;
}
