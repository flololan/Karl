#include "lib/MPU6050/MPU6050.h" // Gyroscope library

typedef struct Gyro {
  int16_t ax, ay, az;
  int16_t gx, gy, gz;
} Gyro;
