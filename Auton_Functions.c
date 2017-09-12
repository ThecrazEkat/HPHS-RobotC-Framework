//All custom functions will begin with a lowercase s
#include "Defines.c"

void sMove(int speed, int amountOfPorts, S_PORT port1, S_PORT port2, S_PORT port3, S_PORT port4) {
  switch(amountOfPorts) {

    default:
    
      printf("Error: Incorrect syntax.");
      break;

    case 4:

      switch(port4) {
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
      }

    case 3:

      switch(port3) {
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
      }

    case 2:

      switch(port2) {
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
      }

    case 1:

      switch(port1) {
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
      }

  }
}
