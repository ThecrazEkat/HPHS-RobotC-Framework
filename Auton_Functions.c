//All custom functions will begin with a lowercase s
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
      }

  }
}
