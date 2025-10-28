# STM32_DC_MOTOR
This Mbed OS program drives a DC motor in a single forward direction using an L298N/L293D driver and STM32 Nucleo board.
PWM output on pin D3 controls motor speed, while D9 and D8 set the motor direction.
The PWM frequency is set to 1 kHz for smooth operation.
IN1 = 1 and IN2 = 0 configure the driver for forward motion.
ENA.write(0.8f) runs the motor at 80% duty cycle (adjustable speed).
The motor runs continuously with no direction change or encoder feedback.
Ideal for simple forward-only motor control applications.
Tested on STM32F401RE Nucleo board using Mbed OS.
Easy to extend with potentiometer or button for dynamic control.
