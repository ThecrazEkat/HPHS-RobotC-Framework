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

        case PORT_1:

            switch(button) {
                default:
                    printf("Error: Please specify a controller button/joystick channel");
                	break;
				case CH_1:
                    motor[port1] = vexRT[Ch1];
                    break;
				case CH_2:
                    motor[port1] = vexRT[Ch2];
                    break;
				case CH_3:
                    motor[port1] = vexRT[Ch3];
                    break;
				case CH_4:
                    motor[port1] = vexRT[Ch4];
                    break;
				case BTN_7U:
                    motor[port1] = vexRT[Btn7U];
                    break;
				case BTN_7R:
                    motor[port1] = vexRT[Btn7R];
                    break;
				case BTN_7D:
                    motor[port1] = vexRT[Btn7D];
                    break;
				case BTN_7L:
                    motor[port1] = vexRT[Btn7L];
                    break;
				case BTN_8U:
                    motor[port1] = vexRT[Btn8U];
                    break;
				case BTN_8R:
                    motor[port1] = vexRT[Btn8R];
                    break;
				case BTN_8D:
                    motor[port1] = vexRT[Btn8D];
                    break;
				case BTN_8L:
                    motor[port1] = vexRT[Btn8L];
                    break;
				case BTN_5U:
                    motor[port1] = vexRT[Btn5U];
                    break;
				case BTN_5D:
                    motor[port1] = vexRT[Btn5D];
                    break;
				case BTN_6U:
                    motor[port1] = vexRT[Btn6U];
                    break;
				case BTN_6D:
                    motor[port1] = vexRT[Btn6D];
                    break;
            }
            break;
		
        case PORT_2:

            switch(button) {
                default:
                    printf("Error: Please specify a controller button/joystick channel");
                	break;
				case CH_1:
                    motor[port2] = vexRT[Ch1];
                	break;
				case CH_2:
                    motor[port2] = vexRT[Ch2];
                	break;
				case CH_3:
                    motor[port2] = vexRT[Ch3];
                	break;
				case CH_4:
                    motor[port2] = vexRT[Ch4];
                	break;
				case BTN_7U:
                    motor[port2] = vexRT[Btn7U];
                	break;
				case BTN_7R:
                    motor[port2] = vexRT[Btn7R];
                	break;
				case BTN_7D:
                    motor[port2] = vexRT[Btn7D];
                	break;
				case BTN_7L:
                    motor[port2] = vexRT[Btn7L];
                	break;
				case BTN_8U:
                    motor[port2] = vexRT[Btn8U];
                	break;
				case BTN_8R:
                    motor[port2] = vexRT[Btn8R];
                	break;
				case BTN_8D:
                    motor[port2] = vexRT[Btn8D];
                	break;
				case BTN_8L:
                    motor[port2] = vexRT[Btn8L];
                	break;
				case BTN_5U:
                    motor[port2] = vexRT[Btn5U];
                	break;
				case BTN_5D:
                    motor[port2] = vexRT[Btn5D];
                	break;
				case BTN_6U:
                    motor[port2] = vexRT[Btn6U];
                	break;
				case BTN_6D:
                    motor[port2] = vexRT[Btn6D];
            }
            break;
				
        case PORT_3:

            switch(button) {
                default:
                    printf("Error: Please specify a controller button/joystick channel");
                	break;
				case CH_1:
                    motor[port3] = vexRT[Ch1];
                	break;
				case CH_2:
                    motor[port3] = vexRT[Ch2];
                	break;
				case CH_3:
                    motor[port3] = vexRT[Ch3];
                	break;
				case CH_4:
                    motor[port3] = vexRT[Ch4];
                	break;
				case BTN_7U:
                    motor[port3] = vexRT[Btn7U];
                	break;
				case BTN_7R:
                    motor[port3] = vexRT[Btn7R];
                	break;
				case BTN_7D:
                    motor[port3] = vexRT[Btn7D];
                	break;
				case BTN_7L:
                    motor[port3] = vexRT[Btn7L];
                	break;
				case BTN_8U:
                    motor[port3] = vexRT[Btn8U];
                	break;
				case BTN_8R:
                    motor[port3] = vexRT[Btn8R];
                	break;
				case BTN_8D:
                    motor[port3] = vexRT[Btn8D];
                	break;
				case BTN_8L:
                    motor[port3] = vexRT[Btn8L];
                	break;
				case BTN_5U:
                    motor[port3] = vexRT[Btn5U];
                	break;
				case BTN_5D:
                    motor[port3] = vexRT[Btn5D];
                	break;
				case BTN_6U:
                    motor[port3] = vexRT[Btn6U];
                	break;
				case BTN_6D:
                    motor[port3] = vexRT[Btn6D];
            }
            break;
				
        case PORT_4:

            switch(button) {
                default:
                    printf("Error: Please specify a controller button/joystick channel");
                	break;
				case CH_1:
                    motor[port4] = vexRT[Ch1];
                	break;
				case CH_2:
                    motor[port4] = vexRT[Ch2];
                	break;
				case CH_3:
                    motor[port4] = vexRT[Ch3];
                	break;
				case CH_4:
                    motor[port4] = vexRT[Ch4];
                	break;
				case BTN_7U:
                    motor[port4] = vexRT[Btn7U];
                	break;
				case BTN_7R:
                    motor[port4] = vexRT[Btn7R];
                	break;
				case BTN_7D:
                    motor[port4] = vexRT[Btn7D];
                	break;
				case BTN_7L:
                    motor[port4] = vexRT[Btn7L];
                	break;
				case BTN_8U:
                    motor[port4] = vexRT[Btn8U];
                	break;
				case BTN_8R:
                    motor[port4] = vexRT[Btn8R];
                	break;
				case BTN_8D:
                    motor[port4] = vexRT[Btn8D];
                	break;
				case BTN_8L:
                    motor[port4] = vexRT[Btn8L];
                	break;
				case BTN_5U:
                    motor[port4] = vexRT[Btn5U];
                	break;
				case BTN_5D:
                    motor[port4] = vexRT[Btn5D];
                	break;
				case BTN_6U:
                    motor[port4] = vexRT[Btn6U];
                	break;
				case BTN_6D:
                    motor[port4] = vexRT[Btn6D];
            }
            break;
				
        case PORT_5:

            switch(button) {
                default:
                    printf("Error: Please specify a controller button/joystick channel");
                	break;
				case CH_1:
                    motor[port5] = vexRT[Ch1];
                	break;
				case CH_2:
                    motor[port5] = vexRT[Ch2];
                	break;
				case CH_3:
                    motor[port5] = vexRT[Ch3];
                	break;
				case CH_4:
                    motor[port5] = vexRT[Ch4];
                	break;
				case BTN_7U:
                    motor[port5] = vexRT[Btn7U];
                	break;
				case BTN_7R:
                    motor[port5] = vexRT[Btn7R];
                	break;
				case BTN_7D:
                    motor[port5] = vexRT[Btn7D];
                	break;
				case BTN_7L:
                    motor[port5] = vexRT[Btn7L];
                	break;
				case BTN_8U:
                    motor[port5] = vexRT[Btn8U];
                	break;
				case BTN_8R:
                    motor[port5] = vexRT[Btn8R];
                	break;
				case BTN_8D:
                    motor[port5] = vexRT[Btn8D];
                	break;
				case BTN_8L:
                    motor[port5] = vexRT[Btn8L];
                	break;
				case BTN_5U:
                    motor[port5] = vexRT[Btn5U];
                	break;
				case BTN_5D:
                    motor[port5] = vexRT[Btn5D];
                	break;
				case BTN_6U:
                    motor[port5] = vexRT[Btn6U];
                	break;
				case BTN_6D:
                    motor[port5] = vexRT[Btn6D];
            }
            break;
				
        case PORT_6:

            switch(button) {
                default:
                    printf("Error: Please specify a controller button/joystick channel");
                	break;
				case CH_1:
                    motor[port6] = vexRT[Ch1];
                	break;
				case CH_2:
                    motor[port6] = vexRT[Ch2];
                	break;
				case CH_3:
                    motor[port6] = vexRT[Ch3];
                	break;
				case CH_4:
                    motor[port6] = vexRT[Ch4];
                	break;
				case BTN_7U:
                    motor[port6] = vexRT[Btn7U];
                	break;
				case BTN_7R:
                    motor[port6] = vexRT[Btn7R];
                	break;
				case BTN_7D:
                    motor[port6] = vexRT[Btn7D];
                	break;
				case BTN_7L:
                    motor[port6] = vexRT[Btn7L];
                	break;
				case BTN_8U:
                    motor[port6] = vexRT[Btn8U];
                	break;
				case BTN_8R:
                    motor[port6] = vexRT[Btn8R];
                	break;
				case BTN_8D:
                    motor[port6] = vexRT[Btn8D];
                	break;
				case BTN_8L:
                    motor[port6] = vexRT[Btn8L];
                	break;
				case BTN_5U:
                    motor[port6] = vexRT[Btn5U];
                	break;
				case BTN_5D:
                    motor[port6] = vexRT[Btn5D];
                	break;
				case BTN_6U:
                    motor[port6] = vexRT[Btn6U];
                	break;
				case BTN_6D:
                    motor[port6] = vexRT[Btn6D];
            }
            break;
				
        case PORT_7:

            switch(button) {
                default:
                    printf("Error: Please specify a controller button/joystick channel");
                	break;
				case CH_1:
                    motor[port7] = vexRT[Ch1];
                	break;
				case CH_2:
                    motor[port7] = vexRT[Ch2];
                	break;
				case CH_3:
                    motor[port7] = vexRT[Ch3];
                	break;
				case CH_4:
                    motor[port7] = vexRT[Ch4];
                	break;
				case BTN_7U:
                    motor[port7] = vexRT[Btn7U];
                	break;
				case BTN_7R:
                    motor[port7] = vexRT[Btn7R];
                	break;
				case BTN_7D:
                    motor[port7] = vexRT[Btn7D];
                	break;
				case BTN_7L:
                    motor[port7] = vexRT[Btn7L];
                	break;
				case BTN_8U:
                    motor[port7] = vexRT[Btn8U];
                	break;
				case BTN_8R:
                    motor[port7] = vexRT[Btn8R];
                	break;
				case BTN_8D:
                    motor[port7] = vexRT[Btn8D];
                	break;
				case BTN_8L:
                    motor[port7] = vexRT[Btn8L];
                	break;
				case BTN_5U:
                    motor[port7] = vexRT[Btn5U];
                	break;
				case BTN_5D:
                    motor[port7] = vexRT[Btn5D];
                	break;
				case BTN_6U:
                    motor[port7] = vexRT[Btn6U];
                	break;
				case BTN_6D:
                    motor[port7] = vexRT[Btn6D];
            }
            break;
				
        case PORT_8:

            switch(button) {
                default:
                    printf("Error: Please specify a controller button/joystick channel");
                	break;
				case CH_1:
                    motor[port8] = vexRT[Ch1];
                	break;
				case CH_2:
                    motor[port8] = vexRT[Ch2];
                	break;
				case CH_3:
                    motor[port8] = vexRT[Ch3];
                	break;
				case CH_4:
                    motor[port8] = vexRT[Ch4];
                	break;
				case BTN_7U:
                    motor[port8] = vexRT[Btn7U];
                	break;
				case BTN_7R:
                    motor[port8] = vexRT[Btn7R];
                	break;
				case BTN_7D:
                    motor[port8] = vexRT[Btn7D];
                	break;
				case BTN_7L:
                    motor[port8] = vexRT[Btn7L];
                	break;
				case BTN_8U:
                    motor[port8] = vexRT[Btn8U];
                	break;
				case BTN_8R:
                    motor[port8] = vexRT[Btn8R];
                	break;
				case BTN_8D:
                    motor[port8] = vexRT[Btn8D];
                	break;
				case BTN_8L:
                    motor[port8] = vexRT[Btn8L];
                	break;
				case BTN_5U:
                    motor[port8] = vexRT[Btn5U];
                	break;
				case BTN_5D:
                    motor[port8] = vexRT[Btn5D];
                	break;
				case BTN_6U:
                    motor[port8] = vexRT[Btn6U];
                	break;
				case BTN_6D:
                    motor[port8] = vexRT[Btn6D];
            }
            break;
				
        case PORT_9:

            switch(button) {
                default:
                    printf("Error: Please specify a controller button/joystick channel");
                	break;
				case CH_1:
                    motor[port9] = vexRT[Ch1];
                	break;
				case CH_2:
                    motor[port9] = vexRT[Ch2];
                	break;
				case CH_3:
                    motor[port9] = vexRT[Ch3];
                	break;
				case CH_4:
                    motor[port9] = vexRT[Ch4];
                	break;
				case BTN_7U:
                    motor[port9] = vexRT[Btn7U];
                	break;
				case BTN_7R:
                    motor[port9] = vexRT[Btn7R];
                	break;
				case BTN_7D:
                    motor[port9] = vexRT[Btn7D];
                	break;
				case BTN_7L:
                    motor[port9] = vexRT[Btn7L];
                	break;
				case BTN_8U:
                    motor[port9] = vexRT[Btn8U];
                	break;
				case BTN_8R:
                    motor[port9] = vexRT[Btn8R];
                	break;
				case BTN_8D:
                    motor[port9] = vexRT[Btn8D];
                	break;
				case BTN_8L:
                    motor[port9] = vexRT[Btn8L];
                	break;
				case BTN_5U:
                    motor[port9] = vexRT[Btn5U];
                	break;
				case BTN_5D:
                    motor[port9] = vexRT[Btn5D];
                	break;
				case BTN_6U:
                    motor[port9] = vexRT[Btn6U];
                	break;
				case BTN_6D:
                    motor[port9] = vexRT[Btn6D];
            }
            break;
				
        case PORT_10:

            switch(button) {
                default:
                    printf("Error: Please specify a controller button/joystick channel");
                	break;
				case CH_1:
                    motor[port10] = vexRT[Ch1];
                	break;
				case CH_2:
                    motor[port10] = vexRT[Ch2];
                	break;
				case CH_3:
                    motor[port10] = vexRT[Ch3];
                	break;
				case CH_4:
                    motor[port10] = vexRT[Ch4];
                	break;
				case BTN_7U:
                    motor[port10] = vexRT[Btn7U];
                	break;
				case BTN_7R:
                    motor[port10] = vexRT[Btn7R];
                	break;
				case BTN_7D:
                    motor[port10] = vexRT[Btn7D];
                	break;
				case BTN_7L:
                    motor[port10] = vexRT[Btn7L];
                	break;
				case BTN_8U:
                    motor[port10] = vexRT[Btn8U];
                	break;
				case BTN_8R:
                    motor[port10] = vexRT[Btn8R];
                	break;
				case BTN_8D:
                    motor[port10] = vexRT[Btn8D];
                	break;
				case BTN_8L:
                    motor[port10] = vexRT[Btn8L];
                	break;
				case BTN_5U:
                    motor[port10] = vexRT[Btn5U];
                	break;
				case BTN_5D:
                    motor[port10] = vexRT[Btn5D];
                	break;
				case BTN_6U:
                    motor[port10] = vexRT[Btn6U];
                	break;
				case BTN_6D:
                    motor[port10] = vexRT[Btn6D];
            }
            break;
    }
} // SYNTAX: sControl(S_PORT, S_CONTROLLER_BUTTON)
  // OUTPUT: motor[S_PORT] = vexRT[S_CONTROLLER_BUTTON]

void sControlSlow(S_PORT port, S_CONTROLLER_BUTTON button) {
    switch(port) {
        default:

            printf("Error: Please specify a port number.");
            break;

        case PORT_1:

            switch(button) {
                default:
                    printf("Error: Please specify a controller button/joystick channel");
                	break;
				case CH_1:
                    motor[port1] = vexRT[Ch1]/2;
                    break;
				case CH_2:
                    motor[port1] = vexRT[Ch2]/2;
                    break;
				case CH_3:
                    motor[port1] = vexRT[Ch3]/2;
                    break;
				case CH_4:
                    motor[port1] = vexRT[Ch4]/2;
                    break;
				case BTN_7U:
                    motor[port1] = vexRT[Btn7U]/2;
                    break;
				case BTN_7R:
                    motor[port1] = vexRT[Btn7R]/2;
                    break;
				case BTN_7D:
                    motor[port1] = vexRT[Btn7D]/2;
                    break;
				case BTN_7L:
                    motor[port1] = vexRT[Btn7L]/2;
                    break;
				case BTN_8U:
                    motor[port1] = vexRT[Btn8U]/2;
                    break;
				case BTN_8R:
                    motor[port1] = vexRT[Btn8R]/2;
                    break;
				case BTN_8D:
                    motor[port1] = vexRT[Btn8D]/2;
                    break;
				case BTN_8L:
                    motor[port1] = vexRT[Btn8L]/2;
                    break;
				case BTN_5U:
                    motor[port1] = vexRT[Btn5U]/2;
                    break;
				case BTN_5D:
                    motor[port1] = vexRT[Btn5D]/2;
                    break;
				case BTN_6U:
                    motor[port1] = vexRT[Btn6U]/2;
                    break;
				case BTN_6D:
                    motor[port1] = vexRT[Btn6D]/2;
                    break;
            }
            break;
		
        case PORT_2:

            switch(button) {
                default:
                    printf("Error: Please specify a controller button/joystick channel");
                	break;
				case CH_1:
                    motor[port2] = vexRT[Ch1]/2;
                	break;
				case CH_2:
                    motor[port2] = vexRT[Ch2]/2;
                	break;
				case CH_3:
                    motor[port2] = vexRT[Ch3]/2;
                	break;
				case CH_4:
                    motor[port2] = vexRT[Ch4]/2;
                	break;
				case BTN_7U:
                    motor[port2] = vexRT[Btn7U]/2;
                	break;
				case BTN_7R:
                    motor[port2] = vexRT[Btn7R]/2;
                	break;
				case BTN_7D:
                    motor[port2] = vexRT[Btn7D]/2;
                	break;
				case BTN_7L:
                    motor[port2] = vexRT[Btn7L]/2;
                	break;
				case BTN_8U:
                    motor[port2] = vexRT[Btn8U]/2;
                	break;
				case BTN_8R:
                    motor[port2] = vexRT[Btn8R]/2;
                	break;
				case BTN_8D:
                    motor[port2] = vexRT[Btn8D]/2;
                	break;
				case BTN_8L:
                    motor[port2] = vexRT[Btn8L]/2;
                	break;
				case BTN_5U:
                    motor[port2] = vexRT[Btn5U]/2;
                	break;
				case BTN_5D:
                    motor[port2] = vexRT[Btn5D]/2;
                	break;
				case BTN_6U:
                    motor[port2] = vexRT[Btn6U]/2;
                	break;
				case BTN_6D:
                    motor[port2] = vexRT[Btn6D]/2;
            }
            break;
				
        case PORT_3:

            switch(button) {
                default:
                    printf("Error: Please specify a controller button/joystick channel");
                	break;
				case CH_1:
                    motor[port3] = vexRT[Ch1]/2;
                	break;
				case CH_2:
                    motor[port3] = vexRT[Ch2]/2;
                	break;
				case CH_3:
                    motor[port3] = vexRT[Ch3]/2;
                	break;
				case CH_4:
                    motor[port3] = vexRT[Ch4]/2;
                	break;
				case BTN_7U:
                    motor[port3] = vexRT[Btn7U]/2;
                	break;
				case BTN_7R:
                    motor[port3] = vexRT[Btn7R]/2;
                	break;
				case BTN_7D:
                    motor[port3] = vexRT[Btn7D]/2;
                	break;
				case BTN_7L:
                    motor[port3] = vexRT[Btn7L]/2;
                	break;
				case BTN_8U:
                    motor[port3] = vexRT[Btn8U]/2;
                	break;
				case BTN_8R:
                    motor[port3] = vexRT[Btn8R]/2;
                	break;
				case BTN_8D:
                    motor[port3] = vexRT[Btn8D]/2;
                	break;
				case BTN_8L:
                    motor[port3] = vexRT[Btn8L]/2;
                	break;
				case BTN_5U:
                    motor[port3] = vexRT[Btn5U]/2;
                	break;
				case BTN_5D:
                    motor[port3] = vexRT[Btn5D]/2;
                	break;
				case BTN_6U:
                    motor[port3] = vexRT[Btn6U]/2;
                	break;
				case BTN_6D:
                    motor[port3] = vexRT[Btn6D]/2;
            }
            break;
				
        case PORT_4:

            switch(button) {
                default:
                    printf("Error: Please specify a controller button/joystick channel");
                	break;
				case CH_1:
                    motor[port4] = vexRT[Ch1]/2;
                	break;
				case CH_2:
                    motor[port4] = vexRT[Ch2]/2;
                	break;
				case CH_3:
                    motor[port4] = vexRT[Ch3]/2;
                	break;
				case CH_4:
                    motor[port4] = vexRT[Ch4]/2;
                	break;
				case BTN_7U:
                    motor[port4] = vexRT[Btn7U]/2;
                	break;
				case BTN_7R:
                    motor[port4] = vexRT[Btn7R]/2;
                	break;
				case BTN_7D:
                    motor[port4] = vexRT[Btn7D]/2;
                	break;
				case BTN_7L:
                    motor[port4] = vexRT[Btn7L]/2;
                	break;
				case BTN_8U:
                    motor[port4] = vexRT[Btn8U]/2;
                	break;
				case BTN_8R:
                    motor[port4] = vexRT[Btn8R]/2;
                	break;
				case BTN_8D:
                    motor[port4] = vexRT[Btn8D]/2;
                	break;
				case BTN_8L:
                    motor[port4] = vexRT[Btn8L]/2;
                	break;
				case BTN_5U:
                    motor[port4] = vexRT[Btn5U]/2;
                	break;
				case BTN_5D:
                    motor[port4] = vexRT[Btn5D]/2;
                	break;
				case BTN_6U:
                    motor[port4] = vexRT[Btn6U]/2;
                	break;
				case BTN_6D:
                    motor[port4] = vexRT[Btn6D]/2;
            }
            break;
				
        case PORT_5:

            switch(button) {
                default:
                    printf("Error: Please specify a controller button/joystick channel");
                	break;
				case CH_1:
                    motor[port5] = vexRT[Ch1]/2;
                	break;
				case CH_2:
                    motor[port5] = vexRT[Ch2]/2;
                	break;
				case CH_3:
                    motor[port5] = vexRT[Ch3]/2;
                	break;
				case CH_4:
                    motor[port5] = vexRT[Ch4]/2;
                	break;
				case BTN_7U:
                    motor[port5] = vexRT[Btn7U]/2;
                	break;
				case BTN_7R:
                    motor[port5] = vexRT[Btn7R]/2;
                	break;
				case BTN_7D:
                    motor[port5] = vexRT[Btn7D]/2;
                	break;
				case BTN_7L:
                    motor[port5] = vexRT[Btn7L]/2;
                	break;
				case BTN_8U:
                    motor[port5] = vexRT[Btn8U]/2;
                	break;
				case BTN_8R:
                    motor[port5] = vexRT[Btn8R]/2;
                	break;
				case BTN_8D:
                    motor[port5] = vexRT[Btn8D]/2;
                	break;
				case BTN_8L:
                    motor[port5] = vexRT[Btn8L]/2;
                	break;
				case BTN_5U:
                    motor[port5] = vexRT[Btn5U]/2;
                	break;
				case BTN_5D:
                    motor[port5] = vexRT[Btn5D]/2;
                	break;
				case BTN_6U:
                    motor[port5] = vexRT[Btn6U]/2;
                	break;
				case BTN_6D:
                    motor[port5] = vexRT[Btn6D]/2;
            }
            break;
				
        case PORT_6:

            switch(button) {
                default:
                    printf("Error: Please specify a controller button/joystick channel");
                	break;
				case CH_1:
                    motor[port6] = vexRT[Ch1]/2;
                	break;
				case CH_2:
                    motor[port6] = vexRT[Ch2]/2;
                	break;
				case CH_3:
                    motor[port6] = vexRT[Ch3]/2;
                	break;
				case CH_4:
                    motor[port6] = vexRT[Ch4]/2;
                	break;
				case BTN_7U:
                    motor[port6] = vexRT[Btn7U]/2;
                	break;
				case BTN_7R:
                    motor[port6] = vexRT[Btn7R]/2;
                	break;
				case BTN_7D:
                    motor[port6] = vexRT[Btn7D]/2;
                	break;
				case BTN_7L:
                    motor[port6] = vexRT[Btn7L]/2;
                	break;
				case BTN_8U:
                    motor[port6] = vexRT[Btn8U]/2;
                	break;
				case BTN_8R:
                    motor[port6] = vexRT[Btn8R]/2;
                	break;
				case BTN_8D:
                    motor[port6] = vexRT[Btn8D]/2;
                	break;
				case BTN_8L:
                    motor[port6] = vexRT[Btn8L]/2;
                	break;
				case BTN_5U:
                    motor[port6] = vexRT[Btn5U]/2;
                	break;
				case BTN_5D:
                    motor[port6] = vexRT[Btn5D]/2;
                	break;
				case BTN_6U:
                    motor[port6] = vexRT[Btn6U]/2;
                	break;
				case BTN_6D:
                    motor[port6] = vexRT[Btn6D]/2;
            }
            break;
				
        case PORT_7:

            switch(button) {
                default:
                    printf("Error: Please specify a controller button/joystick channel");
                	break;
				case CH_1:
                    motor[port7] = vexRT[Ch1]/2;
                	break;
				case CH_2:
                    motor[port7] = vexRT[Ch2]/2;
                	break;
				case CH_3:
                    motor[port7] = vexRT[Ch3]/2;
                	break;
				case CH_4:
                    motor[port7] = vexRT[Ch4]/2;
                	break;
				case BTN_7U:
                    motor[port7] = vexRT[Btn7U]/2;
                	break;
				case BTN_7R:
                    motor[port7] = vexRT[Btn7R]/2;
                	break;
				case BTN_7D:
                    motor[port7] = vexRT[Btn7D]/2;
                	break;
				case BTN_7L:
                    motor[port7] = vexRT[Btn7L]/2;
                	break;
				case BTN_8U:
                    motor[port7] = vexRT[Btn8U]/2;
                	break;
				case BTN_8R:
                    motor[port7] = vexRT[Btn8R]/2;
                	break;
				case BTN_8D:
                    motor[port7] = vexRT[Btn8D]/2;
                	break;
				case BTN_8L:
                    motor[port7] = vexRT[Btn8L]/2;
                	break;
				case BTN_5U:
                    motor[port7] = vexRT[Btn5U]/2;
                	break;
				case BTN_5D:
                    motor[port7] = vexRT[Btn5D]/2;
                	break;
				case BTN_6U:
                    motor[port7] = vexRT[Btn6U]/2;
                	break;
				case BTN_6D:
                    motor[port7] = vexRT[Btn6D]/2;
            }
            break;
				
        case PORT_8:

            switch(button) {
                default:
                    printf("Error: Please specify a controller button/joystick channel");
                	break;
				case CH_1:
                    motor[port8] = vexRT[Ch1]/2;
                	break;
				case CH_2:
                    motor[port8] = vexRT[Ch2]/2;
                	break;
				case CH_3:
                    motor[port8] = vexRT[Ch3]/2;
                	break;
				case CH_4:
                    motor[port8] = vexRT[Ch4]/2;
                	break;
				case BTN_7U:
                    motor[port8] = vexRT[Btn7U]/2;
                	break;
				case BTN_7R:
                    motor[port8] = vexRT[Btn7R]/2;
                	break;
				case BTN_7D:
                    motor[port8] = vexRT[Btn7D]/2;
                	break;
				case BTN_7L:
                    motor[port8] = vexRT[Btn7L]/2;
                	break;
				case BTN_8U:
                    motor[port8] = vexRT[Btn8U]/2;
                	break;
				case BTN_8R:
                    motor[port8] = vexRT[Btn8R]/2;
                	break;
				case BTN_8D:
                    motor[port8] = vexRT[Btn8D]/2;
                	break;
				case BTN_8L:
                    motor[port8] = vexRT[Btn8L]/2;
                	break;
				case BTN_5U:
                    motor[port8] = vexRT[Btn5U]/2;
                	break;
				case BTN_5D:
                    motor[port8] = vexRT[Btn5D]/2;
                	break;
				case BTN_6U:
                    motor[port8] = vexRT[Btn6U]/2;
                	break;
				case BTN_6D:
                    motor[port8] = vexRT[Btn6D]/2;
            }
            break;
				
        case PORT_9:

            switch(button) {
                default:
                    printf("Error: Please specify a controller button/joystick channel");
                	break;
				case CH_1:
                    motor[port9] = vexRT[Ch1]/2;
                	break;
				case CH_2:
                    motor[port9] = vexRT[Ch2]/2;
                	break;
				case CH_3:
                    motor[port9] = vexRT[Ch3]/2;
                	break;
				case CH_4:
                    motor[port9] = vexRT[Ch4]/2;
                	break;
				case BTN_7U:
                    motor[port9] = vexRT[Btn7U]/2;
                	break;
				case BTN_7R:
                    motor[port9] = vexRT[Btn7R]/2;
                	break;
				case BTN_7D:
                    motor[port9] = vexRT[Btn7D]/2;
                	break;
				case BTN_7L:
                    motor[port9] = vexRT[Btn7L]/2;
                	break;
				case BTN_8U:
                    motor[port9] = vexRT[Btn8U]/2;
                	break;
				case BTN_8R:
                    motor[port9] = vexRT[Btn8R]/2;
                	break;
				case BTN_8D:
                    motor[port9] = vexRT[Btn8D]/2;
                	break;
				case BTN_8L:
                    motor[port9] = vexRT[Btn8L]/2;
                	break;
				case BTN_5U:
                    motor[port9] = vexRT[Btn5U]/2;
                	break;
				case BTN_5D:
                    motor[port9] = vexRT[Btn5D]/2;
                	break;
				case BTN_6U:
                    motor[port9] = vexRT[Btn6U]/2;
                	break;
				case BTN_6D:
                    motor[port9] = vexRT[Btn6D]/2;
            }
            break;
				
        case PORT_10:

            switch(button) {
                default:
                    printf("Error: Please specify a controller button/joystick channel");
                	break;
				case CH_1:
                    motor[port10] = vexRT[Ch1]/2;
                	break;
				case CH_2:
                    motor[port10] = vexRT[Ch2]/2;
                	break;
				case CH_3:
                    motor[port10] = vexRT[Ch3]/2;
                	break;
				case CH_4:
                    motor[port10] = vexRT[Ch4]/2;
                	break;
				case BTN_7U:
                    motor[port10] = vexRT[Btn7U]/2;
                	break;
				case BTN_7R:
                    motor[port10] = vexRT[Btn7R]/2;
                	break;
				case BTN_7D:
                    motor[port10] = vexRT[Btn7D]/2;
                	break;
				case BTN_7L:
                    motor[port10] = vexRT[Btn7L]/2;
                	break;
				case BTN_8U:
                    motor[port10] = vexRT[Btn8U]/2;
                	break;
				case BTN_8R:
                    motor[port10] = vexRT[Btn8R]/2;
                	break;
				case BTN_8D:
                    motor[port10] = vexRT[Btn8D]/2;
                	break;
				case BTN_8L:
                    motor[port10] = vexRT[Btn8L]/2;
                	break;
				case BTN_5U:
                    motor[port10] = vexRT[Btn5U]/2;
                	break;
				case BTN_5D:
                    motor[port10] = vexRT[Btn5D]/2;
                	break;
				case BTN_6U:
                    motor[port10] = vexRT[Btn6U]/2;
                	break;
				case BTN_6D:
                    motor[port10] = vexRT[Btn6D]/2;
            }
            break;
    }
} // SYNTAX: sControl(S_PORT, S_CONTROLLER_BUTTON)
  // OUTPUT: motor[S_PORT] = vexRT[S_CONTROLLER_BUTTON]/2