//All custom functions will begin with a lowercase s
#include "Defines.c"

void sControl(S_PORT port, S_CONTROLLER_BUTTON button) {
    switch(port) {
        default:

            printf("Error: Please specify a port number.");
            break;

        case 1:

            switch(button) {
                default:
                    printf("Error: Please specify a controller button/joystick channel");
                case 1:
                    motor[port1] = vexRT[Ch1];
                case 2:
                    motor[port2] = vexRT[Ch1];
                case 3:
                    motor[port3] = vexRT[Ch1];
                case 4:
                    motor[port4] = vexRT[Ch1];
                case 5:
                    motor[port5] = vexRT[Ch1];
                case 6:
                case 7:
                case 8:
                case 9:
                case 10:
                case 11:
                case 12:
                case 13:
                case 14:
                case 15:
                case 17:
            }

    }
}