/*
MIT License

Copyright (c) 2017 Juan de Urtubey

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

//All custom functions will begin with a lowercase s

/********************************************
                    WIP
********************************************/

#include "Defines.c"

void sControl(S_PORT port, S_JOYSTICK button, S_CONTROL_ARG cArg) {
switch(cArg) {
case DEFAULT: //==================================================//
    switch(port) {
        default:

            writeDebugStreamLine("Error: Please specify a port number.");
            break;

        case PORT_1:

            switch(button) {
                default:
                    writeDebugStreamLine("Error: Please specify a controller joystick channel");
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
            }
            break;
		
        case PORT_2:

            switch(button) {
                default:
                    writeDebugStreamLine("Error: Please specify a controller joystick channel");
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
            }
            break;
				
        case PORT_3:

            switch(button) {
                default:
                    writeDebugStreamLine("Error: Please specify a controller joystick channel");
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
            }
            break;
				
        case PORT_4:

            switch(button) {
                default:
                    writeDebugStreamLine("Error: Please specify a controller joystick channel");
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
            }
            break;
				
        case PORT_5:

            switch(button) {
                default:
                    writeDebugStreamLine("Error: Please specify a controller joystick channel");
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
            }
            break;
				
        case PORT_6:

            switch(button) {
                default:
                    writeDebugStreamLine("Error: Please specify a controller joystick channel");
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
            }
            break;
				
        case PORT_7:

            switch(button) {
                default:
                    writeDebugStreamLine("Error: Please specify a controller joystick channel");
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
            }
            break;
				
        case PORT_8:

            switch(button) {
                default:
                    writeDebugStreamLine("Error: Please specify a controller joystick channel");
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
            }
            break;
				
        case PORT_9:

            switch(button) {
                default:
                    writeDebugStreamLine("Error: Please specify a controller joystick channel");
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
            }
            break;
				
        case PORT_10:

            switch(button) {
                default:
                    writeDebugStreamLine("Error: Please specify a controller joystick channel");
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
            }
            break;
    }

case SLOW:  //==================================================//
    switch(port) {
        default:

            writeDebugStreamLine("Error: Please specify a port number.");
            break;

        case PORT_1:

            switch(button) {
                default:
                    writeDebugStreamLine("Error: Please specify a controller joystick channel");
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
            }
            break;
		
        case PORT_2:

            switch(button) {
                default:
                    writeDebugStreamLine("Error: Please specify a controller joystick channel");
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
            }
            break;
				
        case PORT_3:

            switch(button) {
                default:
                    writeDebugStreamLine("Error: Please specify a controller joystick channel");
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
            }
            break;
				
        case PORT_4:

            switch(button) {
                default:
                    writeDebugStreamLine("Error: Please specify a controller joystick channel");
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
            }
            break;
				
        case PORT_5:

            switch(button) {
                default:
                    writeDebugStreamLine("Error: Please specify a controller joystick channel");
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
            }
            break;
				
        case PORT_6:

            switch(button) {
                default:
                    writeDebugStreamLine("Error: Please specify a controller joystick channel");
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
            }
            break;
				
        case PORT_7:

            switch(button) {
                default:
                    writeDebugStreamLine("Error: Please specify a controller joystick channel");
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
            }
            break;
				
        case PORT_8:

            switch(button) {
                default:
                    writeDebugStreamLine("Error: Please specify a controller joystick channel");
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
            }
            break;
				
        case PORT_9:

            switch(button) {
                default:
                    writeDebugStreamLine("Error: Please specify a controller joystick channel");
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
            }
            break;
				
        case PORT_10:

            switch(button) {
                default:
                    writeDebugStreamLine("Error: Please specify a controller joystick channel");
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
            }
            break;
    }

}
} 
// SYNTAX: sControl(S_PORT, S_CONTROLLER_BUTTON, S_CONTROL_ARG)
// OUTPUT: motor[S_PORT] = vexRT[S_CONTROLLER_BUTTON]