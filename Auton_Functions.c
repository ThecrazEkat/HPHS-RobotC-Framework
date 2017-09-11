//All custom functions will begin with a lowercase s

void sMove(int speed, int amountOfPorts, S_PORTS port1, S_PORTS port2 = NONE, S_PORTS port3 = NONE, S_PORTS port4 = NONE, S_PORTS port5 = NONE) {
  switch(amountOfPorts) {
    default:
      printf("Error: Incorrect syntax.");
    case 10:
    case 9:
    case 8:
    case 7:
    case 6:
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
  }
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
