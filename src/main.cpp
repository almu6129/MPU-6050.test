#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include <Wire.h>

#include "MPU6050.h"

MPU6050 current_mpu;

void setup(void) {
  Serial.begin(115200);
  while (!Serial)
    delay(10); // will pause Zero, Leonardo, etc until serial console opens

  Serial.println("Adafruit MPU6050 test!");

  current_mpu.init();
}

void loop() {

    //sensors_vec_t a, g, temp;
    //mpu.getEvent(&a, &g, &temp);
    current_mpu.update_MPU6050();

    // a = current_mpu.run_data_accel[(current_mpu.current_index)];

    /* Print out the values */
    // Serial.print("AccelX:");
    // Serial.print(a.acceleration.x);
    // Serial.print(",");
    // Serial.print("AccelY:");
    // Serial.print(a.acceleration.y);
    // Serial.print(",");
    // Serial.print("AccelZ:");
    // Serial.print(a.acceleration.z);
    // Serial.print(", ");
    // Serial.print("GyroX:");
    // Serial.print(g.gyro.x);
    // Serial.print(",");
    // Serial.print("GyroY:");
    // Serial.print(g.gyro.y);
    // Serial.print(",");
    // Serial.print("GyroZ:");
    // Serial.print(g.gyro.z);
    // Serial.println("");

    Serial.print("AccelX:");
    Serial.print(current_mpu.get_accel_previous_x(2));
    Serial.print(",");
    Serial.print("AccelY:");
    Serial.print(current_mpu.get_accel_previous_y(2));
    Serial.print(",");
    Serial.print("AccelZ:");
    Serial.print(current_mpu.get_accel_previous_z(2));
    Serial.print(", ");
    Serial.print("GyroX:");
    Serial.print(current_mpu.get_gyro_previous_x(2));
    Serial.print(",");
    Serial.print("GyroY:");
    Serial.print(current_mpu.get_gyro_previous_y(2));
    Serial.print(",");
    Serial.print("GyroZ:");
    Serial.print(current_mpu.get_gyro_previous_z(2));
    Serial.println("");
  

  delay(30);
}