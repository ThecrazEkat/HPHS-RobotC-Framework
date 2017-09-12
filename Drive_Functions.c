//All custom functions will begin with a lowercase s

/********************************************
                    WIP
********************************************/

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
                    motor[port1] = vexRT[Ch2];
                case 3:
                    motor[port1] = vexRT[Ch3];
                case 4:
                    motor[port1] = vexRT[Ch4];
                case 5:
                    motor[port1] = vexRT[Btn7U];
                case 6:
                    motor[port1] = vexRT[Btn7R];
                case 7:
                    motor[port1] = vexRT[Btn7D];
                case 8:
                    motor[port1] = vexRT[Btn7L];
                case 9:
                    motor[port1] = vexRT[Btn8U];
                case 10:
                    motor[port1] = vexRT[Btn8R];
                case 11:
                    motor[port1] = vexRT[Btn8D];
                case 12:
                    motor[port1] = vexRT[Btn8L];
                case 13:
                    motor[port1] = vexRT[Btn5U];
                case 14:
                    motor[port1] = vexRT[Btn5D];
                case 15:
                    motor[port1] = vexRT[Btn6U];
                case 17:
                    motor[port1] = vexRT[Btn6D];
            }

    }
}