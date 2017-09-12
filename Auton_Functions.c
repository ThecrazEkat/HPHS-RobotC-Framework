//All custom functions will begin with a lowercase s

/********************************************
                    WIP
********************************************/

#include "Defines.c"

void sMove(int speed, int amountOfPorts, S_PORT port_1, S_PORT port_2, S_PORT port_3, S_PORT port_4) {
  switch(amountOfPorts) {

    default:
    
      printf("Error: Incorrect syntax.");
      break;

    case 4:

      switch(port_4) {
        case PORT_1:
          motor[port1] = speed;
          break;
        case PORT_2:
          motor[port2] = speed;
          break;
        case PORT_3:
          motor[port3] = speed;
          break;
        case PORT_4:
          motor[port4] = speed;
          break;
        case PORT_5:
          motor[port5] = speed;
          break;
        case PORT_6:
          motor[port6] = speed;
          break;
        case PORT_7:
          motor[port7] = speed;
          break;
        case PORT_8:
          motor[port8] = speed;
          break;
        case PORT_9:
          motor[port9] = speed;
          break;
        case PORT_10:
          motor[port10] = speed;
          break;
      }

    case 3:

      switch(port_3) {
        case PORT_1:
          motor[port1] = speed;
          break;
        case PORT_2:
          motor[port2] = speed;
          break;
        case PORT_3:
          motor[port3] = speed;
          break;
        case PORT_4:
          motor[port4] = speed;
          break;
        case PORT_5:
          motor[port5] = speed;
          break;
        case PORT_6:
          motor[port6] = speed;
          break;
        case PORT_7:
          motor[port7] = speed;
          break;
        case PORT_8:
          motor[port8] = speed;
          break;
        case PORT_9:
          motor[port9] = speed;
          break;
        case PORT_10:
          motor[port10] = speed;
          break;
      }

    case 2:

      switch(port_2) {
        case PORT_1:
          motor[port1] = speed;
          break;
        case PORT_2:
          motor[port2] = speed;
          break;
        case PORT_3:
          motor[port3] = speed;
          break;
        case PORT_4:
          motor[port4] = speed;
          break;
        case PORT_5:
          motor[port5] = speed;
          break;
        case PORT_6:
          motor[port6] = speed;
          break;
        case PORT_7:
          motor[port7] = speed;
          break;
        case PORT_8:
          motor[port8] = speed;
          break;
        case PORT_9:
          motor[port9] = speed;
          break;
        case PORT_10:
          motor[port10] = speed;
          break;
      }

    case 1:

      switch(port_1) {
        case PORT_1:
          motor[port1] = speed;
          break;
        case PORT_2:
          motor[port2] = speed;
          break;
        case PORT_3:
          motor[port3] = speed;
          break;
        case PORT_4:
          motor[port4] = speed;
          break;
        case PORT_5:
          motor[port5] = speed;
          break;
        case PORT_6:
          motor[port6] = speed;
          break;
        case PORT_7:
          motor[port7] = speed;
          break;
        case PORT_8:
          motor[port8] = speed;
          break;
        case PORT_9:
          motor[port9] = speed;
          break;
        case PORT_10:
          motor[port10] = speed;
          break;
      }

  }
} // SYNTAX: sMove(int, int, S_PORT, S_PORT, S_PORT, S_PORT)
  // OUTPUT: {motor[S_PORT] = int}*int
