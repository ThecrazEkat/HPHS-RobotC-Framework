typedef enum {
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

typedef enum {
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

typedef enum {
  NO_JOY = 0,

  CH_1,
  CH_2,
  CH_3,
  CH_4,
} S_JOYSTICK;

typedef enum {
  DEFAULT = 0,
  SLOW
} S_CONTROL_ARG;

typedef enum {
  NO_SENS = 0,

  TOUCH_SENS,
  LIGHT_SENS,
  SOUND_SENS,
  SONAR_SENS
} S_SENSOR;

struct Stats {
  char *name;
  int modelNo;
  struct Speeds {
    int port1;
    int port2;
    int port3;
    int port4;
    int port5;
    int port6;
    int port7;
    int port8;
    int port9;
    int port10;
  } speed;
  struct SensorValues {
    int dgtl1;
    int dgtl2;
    int dgtl3;
    int dgtl4;
    int dgtl5;
    int dgtl6;
    int dgtl7;
    int dgtl8;
    int dgtl9;
    int dgtl10;
    int dgtl11;
    int dgtl12;
  } value;
} robot;

