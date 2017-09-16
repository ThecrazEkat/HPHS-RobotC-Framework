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
