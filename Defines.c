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

#define LOOP_MAX
#define LOOP_CURRENT timer1[T1]

#define CURRENT_PHASE
#define LAST_PHASE

typedef enum phases {
  PHASE_1,
  PHASE_2,
  PHASE_3,
  PHASE_4,
  PHASE_5,
  PHASE_6,
  PHASE_7,
  PHASE_8,
  PHASE_9,
  PHASE_10
} PHASE

typedef enum ports {
  NO_PORT = 0,

  PORT_1,
  PORT_2,
  PORT_3,
  PORT_4,
  PORT_5,
  PORT_6,
  PORT_7,
  PORT_8,
  PORT_9,
  PORT_10
} S_PORT;

typedef enum dgtlPorts {
  NO_DGTL = 0,

  DGTL_1,
  DGTL_2,
  DGTL_3,
  DGTL_4,
  DGTL_5,
  DGTL_6,
  DGTL_7,
  DGTL_8,
  DGTL_9,
  DGTL_10,
  DGTL_11,
  DGTL_12
} S_DGTL

typedef enum controls {
  NO_JOY = 0,

  CH_1,
  CH_2,
  CH_3,
  CH_4,
} S_JOYSTICK;

typedef enum controlArgs {
  DEFAULT = 0,
  SLOW
} S_CONTROL_ARG;

typedef enum sensors {
  NO_SENS = 0,

  TOUCH_SENS,
  LIGHT_SENS,
  SOUND_SENS,
  SONAR_SENS
} S_SENSOR;

typedef enum statuses {
  DISABLED = -1,
  OFF,
  ON
} S_STATUS;
