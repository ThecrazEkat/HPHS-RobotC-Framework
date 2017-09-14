# Highland Park Highschool RobotC Framework
Really early beta, so assume most things will be broken.  
To use, simply `#include "HPHS_RobotC_Framework.c"` in your competition template file.

## List of functions with arguments (// = not tested)
### Auton_Functions.c
- phase(PHASE)
- //sMove(int, int, S_PORT, S_PORT, S_PORT, S_PORT)
- //sStopPort(S_PORT)
- //sStopAll()
- //sDetect(S_SENSOR, S_DGTL)
### Drive_Functions.c
- sControl(S_PORT, S_JOYSTICK, S_CONTROL_ARG)
### Misc.c
- defineRobot(string, int)
- limit(int, int, int)
- infiniteLoop()
- loop(S_STATUS)
- setTimer(int, int)
- round(float)
