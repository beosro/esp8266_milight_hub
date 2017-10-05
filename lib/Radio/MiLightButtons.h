#ifndef _MILIGHT_BUTTONS
#define _MILIGHT_BUTTONS

enum MiLightRemoteType {
  REMOTE_TYPE_UNKNOWN,
  REMOTE_TYPE_RGBW,
  REMOTE_TYPE_CCT,
  REMOTE_TYPE_RGB_CCT,
  REMOTE_TYPE_RGB,
  REMOTE_TYPE_FUT089
};

enum MiLightStatus {
  ON = 0,
  OFF = 1
};

#endif