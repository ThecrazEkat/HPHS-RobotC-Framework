//All custom functions will begin with a lowercase s

/********************************************
                    WIP
********************************************/

#include "Defines.c"

void switchOnPort(S_PORT portNum) {
      switch(portNum) {
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

void sMove(int speed, int amountOfPorts, S_PORT port_1, S_PORT port_2, S_PORT port_3, S_PORT port_4) {
  switch(amountOfPorts) {

    default:
    
      printf("Error: Incorrect syntax.");
      break;

    case 4:

      switchOnPort(port_4);

    case 3:

      switchOnPort(port_3);

    case 2:

      switchOnPort(port_2);

    case 1:

      switchOnPort(port_1);

  }
} // SYNTAX: sMove(int, int, S_PORT, S_PORT, S_PORT, S_PORT)
  // OUTPUT: {motor[S_PORT] = int}*int
