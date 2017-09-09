task usercontrol()
{
 
    while(true) {

        motor[backRight] = vexRT[Ch2];
        motor[frontRight] = vexRT[Ch2];
        motor[backLeft] = vexRT[Ch3];
        motor[frontLeft] = vexRT[Ch3];
 
        UserControlCodePlaceholderForTesting();
    }
}