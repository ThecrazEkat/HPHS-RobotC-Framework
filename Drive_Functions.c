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
                	break;
				case 1:
                    motor[port1] = vexRT[Ch1];
                    break;
				case 2:
                    motor[port1] = vexRT[Ch2];
                    break;
				case 3:
                    motor[port1] = vexRT[Ch3];
                    break;
				case 4:
                    motor[port1] = vexRT[Ch4];
                    break;
				case 5:
                    motor[port1] = vexRT[Btn7U];
                    break;
				case 6:
                    motor[port1] = vexRT[Btn7R];
                    break;
				case 7:
                    motor[port1] = vexRT[Btn7D];
                    break;
				case 8:
                    motor[port1] = vexRT[Btn7L];
                    break;
				case 9:
                    motor[port1] = vexRT[Btn8U];
                    break;
				case 10:
                    motor[port1] = vexRT[Btn8R];
                    break;
				case 11:
                    motor[port1] = vexRT[Btn8D];
                    break;
				case 12:
                    motor[port1] = vexRT[Btn8L];
                    break;
				case 13:
                    motor[port1] = vexRT[Btn5U];
                    break;
				case 14:
                    motor[port1] = vexRT[Btn5D];
                    break;
				case 15:
                    motor[port1] = vexRT[Btn6U];
                    break;
				case 16:
                    motor[port1] = vexRT[Btn6D];
                    break;
            }
            break;
		
        case 2:

            switch(button) {
                default:
                    printf("Error: Please specify a controller button/joystick channel");
                	break;
				case 1:
                    motor[port2] = vexRT[Ch1];
                	break;
				case 2:
                    motor[port2] = vexRT[Ch2];
                	break;
				case 3:
                    motor[port2] = vexRT[Ch3];
                	break;
				case 4:
                    motor[port2] = vexRT[Ch4];
                	break;
				case 5:
                    motor[port2] = vexRT[Btn7U];
                	break;
				case 6:
                    motor[port2] = vexRT[Btn7R];
                	break;
				case 7:
                    motor[port2] = vexRT[Btn7D];
                	break;
				case 8:
                    motor[port2] = vexRT[Btn7L];
                	break;
				case 9:
                    motor[port2] = vexRT[Btn8U];
                	break;
				case 10:
                    motor[port2] = vexRT[Btn8R];
                	break;
				case 11:
                    motor[port2] = vexRT[Btn8D];
                	break;
				case 12:
                    motor[port2] = vexRT[Btn8L];
                	break;
				case 13:
                    motor[port2] = vexRT[Btn5U];
                	break;
				case 14:
                    motor[port2] = vexRT[Btn5D];
                	break;
				case 15:
                    motor[port2] = vexRT[Btn6U];
                	break;
				case 16:
                    motor[port2] = vexRT[Btn6D];
            }
            break;
				
        case 3:

            switch(button) {
                default:
                    printf("Error: Please specify a controller button/joystick channel");
                	break;
				case 1:
                    motor[port3] = vexRT[Ch1];
                	break;
				case 2:
                    motor[port3] = vexRT[Ch2];
                	break;
				case 3:
                    motor[port3] = vexRT[Ch3];
                	break;
				case 4:
                    motor[port3] = vexRT[Ch4];
                	break;
				case 5:
                    motor[port3] = vexRT[Btn7U];
                	break;
				case 6:
                    motor[port3] = vexRT[Btn7R];
                	break;
				case 7:
                    motor[port3] = vexRT[Btn7D];
                	break;
				case 8:
                    motor[port3] = vexRT[Btn7L];
                	break;
				case 9:
                    motor[port3] = vexRT[Btn8U];
                	break;
				case 10:
                    motor[port3] = vexRT[Btn8R];
                	break;
				case 11:
                    motor[port3] = vexRT[Btn8D];
                	break;
				case 12:
                    motor[port3] = vexRT[Btn8L];
                	break;
				case 13:
                    motor[port3] = vexRT[Btn5U];
                	break;
				case 14:
                    motor[port3] = vexRT[Btn5D];
                	break;
				case 15:
                    motor[port3] = vexRT[Btn6U];
                	break;
				case 16:
                    motor[port3] = vexRT[Btn6D];
            }
            break;
				
        case 4:

            switch(button) {
                default:
                    printf("Error: Please specify a controller button/joystick channel");
                	break;
				case 1:
                    motor[port4] = vexRT[Ch1];
                	break;
				case 2:
                    motor[port4] = vexRT[Ch2];
                	break;
				case 3:
                    motor[port4] = vexRT[Ch3];
                	break;
				case 4:
                    motor[port4] = vexRT[Ch4];
                	break;
				case 5:
                    motor[port4] = vexRT[Btn7U];
                	break;
				case 6:
                    motor[port4] = vexRT[Btn7R];
                	break;
				case 7:
                    motor[port4] = vexRT[Btn7D];
                	break;
				case 8:
                    motor[port4] = vexRT[Btn7L];
                	break;
				case 9:
                    motor[port4] = vexRT[Btn8U];
                	break;
				case 10:
                    motor[port4] = vexRT[Btn8R];
                	break;
				case 11:
                    motor[port4] = vexRT[Btn8D];
                	break;
				case 12:
                    motor[port4] = vexRT[Btn8L];
                	break;
				case 13:
                    motor[port4] = vexRT[Btn5U];
                	break;
				case 14:
                    motor[port4] = vexRT[Btn5D];
                	break;
				case 15:
                    motor[port4] = vexRT[Btn6U];
                	break;
				case 16:
                    motor[port4] = vexRT[Btn6D];
            }
            break;
				
        case 5:

            switch(button) {
                default:
                    printf("Error: Please specify a controller button/joystick channel");
                	break;
				case 1:
                    motor[port5] = vexRT[Ch1];
                	break;
				case 2:
                    motor[port5] = vexRT[Ch2];
                	break;
				case 3:
                    motor[port5] = vexRT[Ch3];
                	break;
				case 4:
                    motor[port5] = vexRT[Ch4];
                	break;
				case 5:
                    motor[port5] = vexRT[Btn7U];
                	break;
				case 6:
                    motor[port5] = vexRT[Btn7R];
                	break;
				case 7:
                    motor[port5] = vexRT[Btn7D];
                	break;
				case 8:
                    motor[port5] = vexRT[Btn7L];
                	break;
				case 9:
                    motor[port5] = vexRT[Btn8U];
                	break;
				case 10:
                    motor[port5] = vexRT[Btn8R];
                	break;
				case 11:
                    motor[port5] = vexRT[Btn8D];
                	break;
				case 12:
                    motor[port5] = vexRT[Btn8L];
                	break;
				case 13:
                    motor[port5] = vexRT[Btn5U];
                	break;
				case 14:
                    motor[port5] = vexRT[Btn5D];
                	break;
				case 15:
                    motor[port5] = vexRT[Btn6U];
                	break;
				case 16:
                    motor[port5] = vexRT[Btn6D];
            }
            break;
				
        case 6:

            switch(button) {
                default:
                    printf("Error: Please specify a controller button/joystick channel");
                	break;
				case 1:
                    motor[port6] = vexRT[Ch1];
                	break;
				case 2:
                    motor[port6] = vexRT[Ch2];
                	break;
				case 3:
                    motor[port6] = vexRT[Ch3];
                	break;
				case 4:
                    motor[port6] = vexRT[Ch4];
                	break;
				case 5:
                    motor[port6] = vexRT[Btn7U];
                	break;
				case 6:
                    motor[port6] = vexRT[Btn7R];
                	break;
				case 7:
                    motor[port6] = vexRT[Btn7D];
                	break;
				case 8:
                    motor[port6] = vexRT[Btn7L];
                	break;
				case 9:
                    motor[port6] = vexRT[Btn8U];
                	break;
				case 10:
                    motor[port6] = vexRT[Btn8R];
                	break;
				case 11:
                    motor[port6] = vexRT[Btn8D];
                	break;
				case 12:
                    motor[port6] = vexRT[Btn8L];
                	break;
				case 13:
                    motor[port6] = vexRT[Btn5U];
                	break;
				case 14:
                    motor[port6] = vexRT[Btn5D];
                	break;
				case 15:
                    motor[port6] = vexRT[Btn6U];
                	break;
				case 16:
                    motor[port6] = vexRT[Btn6D];
            }
            break;
				
        case 7:

            switch(button) {
                default:
                    printf("Error: Please specify a controller button/joystick channel");
                	break;
				case 1:
                    motor[port7] = vexRT[Ch1];
                	break;
				case 2:
                    motor[port7] = vexRT[Ch2];
                	break;
				case 3:
                    motor[port7] = vexRT[Ch3];
                	break;
				case 4:
                    motor[port7] = vexRT[Ch4];
                	break;
				case 5:
                    motor[port7] = vexRT[Btn7U];
                	break;
				case 6:
                    motor[port7] = vexRT[Btn7R];
                	break;
				case 7:
                    motor[port7] = vexRT[Btn7D];
                	break;
				case 8:
                    motor[port7] = vexRT[Btn7L];
                	break;
				case 9:
                    motor[port7] = vexRT[Btn8U];
                	break;
				case 10:
                    motor[port7] = vexRT[Btn8R];
                	break;
				case 11:
                    motor[port7] = vexRT[Btn8D];
                	break;
				case 12:
                    motor[port7] = vexRT[Btn8L];
                	break;
				case 13:
                    motor[port7] = vexRT[Btn5U];
                	break;
				case 14:
                    motor[port7] = vexRT[Btn5D];
                	break;
				case 15:
                    motor[port7] = vexRT[Btn6U];
                	break;
				case 16:
                    motor[port7] = vexRT[Btn6D];
            }
            break;
				
        case 8:

            switch(button) {
                default:
                    printf("Error: Please specify a controller button/joystick channel");
                	break;
				case 1:
                    motor[port8] = vexRT[Ch1];
                	break;
				case 2:
                    motor[port8] = vexRT[Ch2];
                	break;
				case 3:
                    motor[port8] = vexRT[Ch3];
                	break;
				case 4:
                    motor[port8] = vexRT[Ch4];
                	break;
				case 5:
                    motor[port8] = vexRT[Btn7U];
                	break;
				case 6:
                    motor[port8] = vexRT[Btn7R];
                	break;
				case 7:
                    motor[port8] = vexRT[Btn7D];
                	break;
				case 8:
                    motor[port8] = vexRT[Btn7L];
                	break;
				case 9:
                    motor[port8] = vexRT[Btn8U];
                	break;
				case 10:
                    motor[port8] = vexRT[Btn8R];
                	break;
				case 11:
                    motor[port8] = vexRT[Btn8D];
                	break;
				case 12:
                    motor[port8] = vexRT[Btn8L];
                	break;
				case 13:
                    motor[port8] = vexRT[Btn5U];
                	break;
				case 14:
                    motor[port8] = vexRT[Btn5D];
                	break;
				case 15:
                    motor[port8] = vexRT[Btn6U];
                	break;
				case 16:
                    motor[port8] = vexRT[Btn6D];
            }
            break;
				
        case 9:

            switch(button) {
                default:
                    printf("Error: Please specify a controller button/joystick channel");
                	break;
				case 1:
                    motor[port9] = vexRT[Ch1];
                	break;
				case 2:
                    motor[port9] = vexRT[Ch2];
                	break;
				case 3:
                    motor[port9] = vexRT[Ch3];
                	break;
				case 4:
                    motor[port9] = vexRT[Ch4];
                	break;
				case 5:
                    motor[port9] = vexRT[Btn7U];
                	break;
				case 6:
                    motor[port9] = vexRT[Btn7R];
                	break;
				case 7:
                    motor[port9] = vexRT[Btn7D];
                	break;
				case 8:
                    motor[port9] = vexRT[Btn7L];
                	break;
				case 9:
                    motor[port9] = vexRT[Btn8U];
                	break;
				case 10:
                    motor[port9] = vexRT[Btn8R];
                	break;
				case 11:
                    motor[port9] = vexRT[Btn8D];
                	break;
				case 12:
                    motor[port9] = vexRT[Btn8L];
                	break;
				case 13:
                    motor[port9] = vexRT[Btn5U];
                	break;
				case 14:
                    motor[port9] = vexRT[Btn5D];
                	break;
				case 15:
                    motor[port9] = vexRT[Btn6U];
                	break;
				case 16:
                    motor[port9] = vexRT[Btn6D];
            }
            break;
				
        case 10:

            switch(button) {
                default:
                    printf("Error: Please specify a controller button/joystick channel");
                	break;
				case 1:
                    motor[port10] = vexRT[Ch1];
                	break;
				case 2:
                    motor[port10] = vexRT[Ch2];
                	break;
				case 3:
                    motor[port10] = vexRT[Ch3];
                	break;
				case 4:
                    motor[port10] = vexRT[Ch4];
                	break;
				case 5:
                    motor[port10] = vexRT[Btn7U];
                	break;
				case 6:
                    motor[port10] = vexRT[Btn7R];
                	break;
				case 7:
                    motor[port10] = vexRT[Btn7D];
                	break;
				case 8:
                    motor[port10] = vexRT[Btn7L];
                	break;
				case 9:
                    motor[port10] = vexRT[Btn8U];
                	break;
				case 10:
                    motor[port10] = vexRT[Btn8R];
                	break;
				case 11:
                    motor[port10] = vexRT[Btn8D];
                	break;
				case 12:
                    motor[port10] = vexRT[Btn8L];
                	break;
				case 13:
                    motor[port10] = vexRT[Btn5U];
                	break;
				case 14:
                    motor[port10] = vexRT[Btn5D];
                	break;
				case 15:
                    motor[port10] = vexRT[Btn6U];
                	break;
				case 16:
                    motor[port10] = vexRT[Btn6D];
            }
            break;
    }
}