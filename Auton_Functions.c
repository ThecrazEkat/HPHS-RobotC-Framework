//All custom functions will begin with a lowercase s

//port1-port10
//dgtl1-dgtl-12

/********************************************
                    WIP
********************************************/

#include "Defines.c"

void switchOnPort(S_PORT portNum, int thisSpeed) {
      switch(portNum) {
        case PORT_1:
          motor[port1] = thisSpeed;
          break;
        case PORT_2:
          motor[port2] = thisSpeed;
          break;
        case PORT_3:
          motor[port3] = thisSpeed;
          break;
        case PORT_4:
          motor[port4] = thisSpeed;
          break;
        case PORT_5:
          motor[port5] = thisSpeed;
          break;
        case PORT_6:
          motor[port6] = thisSpeed;
          break;
        case PORT_7:
          motor[port7] = thisSpeed;
          break;
        case PORT_8:
          motor[port8] = thisSpeed;
          break;
        case PORT_9:
          motor[port9] = thisSpeed;
          break;
        case PORT_10:
          motor[port10] = thisSpeed;
          break;
      }
}

void sMove(int speed, int amountOfPorts, S_PORT port_1, S_PORT port_2, S_PORT port_3, S_PORT port_4) {
  switch(amountOfPorts) {

    default:

      printf("Error: Incorrect syntax.");
      break;

    case 4:

      switchOnPort(port_4, speed);

    case 3:

      switchOnPort(port_3, speed);

    case 2:

      switchOnPort(port_2, speed);

    case 1:

      switchOnPort(port_1, speed);

  }
}

void sStopPort(S_PORT portNum) {
  switch(portNum) {
        case PORT_1:
          motor[port1] = 0;
          break;
        case PORT_2:
          motor[port2] = 0;
          break;
        case PORT_3:
          motor[port3] = 0;
          break;
        case PORT_4:
          motor[port4] = 0;
          break;
        case PORT_5:
          motor[port5] = 0;
          break;
        case PORT_6:
          motor[port6] = 0;
          break;
        case PORT_7:
          motor[port7] = 0;
          break;
        case PORT_8:
          motor[port8] = 0;
          break;
        case PORT_9:
          motor[port9] = 0;
          break;
        case PORT_10:
          motor[port10] = 0;
          break;
      }
}

void sStopAll() {
  for(int i = 1; i < 11; i++) {
    motor[port+i] = 0;
  }
}

int sDetect(S_SENSOR sensor, S_DGTL dgtl) {
  int returnVar;
  switch(sensor) {
    case TOUCH_SENS:
      switch(dgtl) {
        case DGTL_1:
          if(SensorValue(dgtl1)) {returnVar = 1;}
          else {returnVar = 0;}
          break;
        case DGTL_2:
          if(SensorValue(dgtl2)) {returnVar = 1;}
          else {returnVar = 0;}
          break;
        case DGTL_3:
          if(SensorValue(dgtl3)) {returnVar = 1;}
          else {returnVar = 0;}
          break;
        case DGTL_4:
          if(SensorValue(dgtl4)) {returnVar = 1;}
          else {returnVar = 0;}
          break;
        case DGTL_5:
          if(SensorValue(dgtl5)) {returnVar = 1;}
          else {returnVar = 0;}
          break;
        case DGTL_6:
          if(SensorValue(dgtl6)) {returnVar = 1;}
          else {returnVar = 0;}
          break;
        case DGTL_7:
          if(SensorValue(dgtl7)) {returnVar = 1;}
          else {returnVar = 0;}
          break;
        case DGTL_8:
          if(SensorValue(dgtl8)) {returnVar = 1;}
          else {returnVar = 0;}
          break;
        case DGTL_9:
          if(SensorValue(dgtl9)) {returnVar = 1;}
          else {returnVar = 0;}
          break;
        case DGTL_10:
          if(SensorValue(dgtl10)) {returnVar = 1;}
          else {returnVar = 0;}
          break;
        case DGTL_11:
          if(SensorValue(dgtl11)) {returnVar = 1;}
          else {returnVar = 0;}
          break;
        case DGTL_12:
          if(SensorValue(dgtl12)) {returnVar = 1;}
          else {returnVar = 0;}
          break;
      }
      break;
    case LIGHT_SENS:
      switch(dgtl) {
        case DGTL_1:
          returnVar = SensorValue(dgtl1);
          break;
        case DGTL_2:
          returnVar = SensorValue(dgtl2);
          break;;
        case DGTL_3:
          returnVar = SensorValue(dgtl3);
          break;
        case DGTL_4:
          returnVar = SensorValue(dgtl4);
          break;
        case DGTL_5:
          returnVar = SensorValue(dgtl5);
          break;
        case DGTL_6:
          returnVar = SensorValue(dgtl6);
          break;
        case DGTL_7:
          returnVar = SensorValue(dgtl7);
          break;
        case DGTL_8:
          returnVar = SensorValue(dgtl8);
          break;
        case DGTL_9:
          returnVar = SensorValue(dgtl9);
          break;
        case DGTL_10:
          returnVar = SensorValue(dgtl10);
          break;
        case DGTL_11:
          returnVar = SensorValue(dgtl11);
          break;
        case DGTL_12:
          returnVar = SensorValue(dgtl12);
          break;
      }
      break;
    case TOUCH_SENS:
      switch(dgtl) {
        case DGTL_1:
          returnVar = SensorValue(dgtl1);
          break;
        case DGTL_2:
          returnVar = SensorValue(dgtl2);
          break;;
        case DGTL_3:
          returnVar = SensorValue(dgtl3);
          break;
        case DGTL_4:
          returnVar = SensorValue(dgtl4);
          break;
        case DGTL_5:
          returnVar = SensorValue(dgtl5);
          break;
        case DGTL_6:
          returnVar = SensorValue(dgtl6);
          break;
        case DGTL_7:
          returnVar = SensorValue(dgtl7);
          break;
        case DGTL_8:
          returnVar = SensorValue(dgtl8);
          break;
        case DGTL_9:
          returnVar = SensorValue(dgtl9);
          break;
        case DGTL_10:
          returnVar = SensorValue(dgtl10);
          break;
        case DGTL_11:
          returnVar = SensorValue(dgtl11);
          break;
        case DGTL_12:
          returnVar = SensorValue(dgtl12);
          break;
      }
      break;
    case SONAR_SENS:
      switch(dgtl) {
        case DGTL_1:
          returnVar = SensorValue(dgtl1);
          break;
        case DGTL_2:
          returnVar = SensorValue(dgtl2);
          break;;
        case DGTL_3:
          returnVar = SensorValue(dgtl3);
          break;
        case DGTL_4:
          returnVar = SensorValue(dgtl4);
          break;
        case DGTL_5:
          returnVar = SensorValue(dgtl5);
          break;
        case DGTL_6:
          returnVar = SensorValue(dgtl6);
          break;
        case DGTL_7:
          returnVar = SensorValue(dgtl7);
          break;
        case DGTL_8:
          returnVar = SensorValue(dgtl8);
          break;
        case DGTL_9:
          returnVar = SensorValue(dgtl9);
          break;
        case DGTL_10:
          returnVar = SensorValue(dgtl10);
          break;
        case DGTL_11:
          returnVar = SensorValue(dgtl11);
          break;
        case DGTL_12:
          returnVar = SensorValue(dgtl12);
          break;
      }
      break;
  }
  return returnVar;
}
/*
***EXAMPLE***
while(sDetect(SONAR_SENS, DGTL_5) < 255 || sDetect(TOUCH_SENS, DGTL_6) == 1) {
  sMove()
}
*/

task main() {
  while(true) {
    robot.speed.port1 = motor[port1];
    robot.speed.port2 = motor[port2];
    robot.speed.port3 = motor[port3];
    robot.speed.port4 = motor[port4];
    robot.speed.port5 = motor[port5];
    robot.speed.port6 = motor[port6];
    robot.speed.port7 = motor[port7];
    robot.speed.port8 = motor[port8];
    robot.speed.port9 = motor[port9];
    robot.speed.port10 = motor[port10];

    robot.value.dgtl1 = SensorValue(dgtl1);
    robot.value.dgtl1 = SensorValue(dgtl2);
    robot.value.dgtl1 = SensorValue(dgtl3);
    robot.value.dgtl1 = SensorValue(dgtl4);
    robot.value.dgtl1 = SensorValue(dgtl5);
    robot.value.dgtl1 = SensorValue(dgtl6);
    robot.value.dgtl1 = SensorValue(dgtl7);
    robot.value.dgtl1 = SensorValue(dgtl8);
    robot.value.dgtl1 = SensorValue(dgtl9);
    robot.value.dgtl1 = SensorValue(dgtl10);
    robot.value.dgtl1 = SensorValue(dgtl11);
    robot.value.dgtl1 = SensorValue(dgtl12);
  }
}