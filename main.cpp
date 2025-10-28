#include "mbed.h"

// Motor driver pins
DigitalOut IN1(D9);   // Direction pin 1
DigitalOut IN2(D8);   // Direction pin 2
PwmOut ENA(D3);       // PWM pin for motor speed

int main() {
    printf("DC Motor Forward Rotation - STM32 with Mbed OS\n");

    // Set PWM frequency (1 kHz)
    ENA.period(0.001f);

    // Set motor direction to forward
    IN1 = 1;
    IN2 = 0;

    // Set constant speed (e.g., 80% duty cycle)
    ENA.write(0.8f);  // 0.0 = stop, 1.0 = full speed

    while (true) {
        // Motor runs continuously in forward direction
        ThisThread::sleep_for(1s);
    }
}
