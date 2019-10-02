//B (digital pin 8 to 13)
//C (analog input pins)
//D (digital pins 0 to 7)

#ifndef CONSTANTS
#define CONSTANTS
// Convention : PIN_{NAME_COMPONENT}_{IN|OUT}
//GYRO_PINS
//char PIN_GYRO_INTERRUPT = 5;
char PIN_GYRO_SDA       = 23;
char PIN_GYRO_SCL       = 24;

//MOTOR_PINS
char PIN_MOTOR_LF_OUT   = 7;
char PIN_MOTOR_LB_OUT   = 8;
char PIN_MOTOR_RB_OUT   = 9;
char PIN_MOTOR_RF_OUT   = 10;

//RECEIVER_PINS
char PIN_YAW_IN         = 11;
char PIN_Pitch_IN       = 12;
char PIN_Roll_IN        = 13;
char PIN_Throttle_IN    = 14;
#endif
