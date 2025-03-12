![GitHub](https://img.shields.io/github/license/YuriPeres/Greenhouse_Temperature_Controller?color=darkgreen)
![GitHub last commit](https://img.shields.io/github/last-commit/YuriPeres/Greenhouse_Temperature_Controller)

# Versão em Português

Veja o arquivo README em Português [AQUI](https://github.com/YuriPeres/Greenhouse_Temperature_Controller/blob/main/README.md)

# Greenhouse Temperature Controller with Arduino

This project simulates a vegetable greenhouse controlled by an Arduino. The circuit includes a temperature sensor (TMP36), a fan motor, a red LED, and a buzzer. The system monitors the temperature and takes the following actions:

- If the temperature is **equal to or higher than 30°C**, the fan motor turns on with proportional speed control.
- If the temperature is **higher than 50°C**, the red LED and buzzer are activated to indicate an emergency situation.

## Components Used

- Arduino Uno R3
- TMP36 Temperature Sensor
- DC Motor (fan)
- NPN Transistor (2N2222)
- 1kΩ Resistor (transistor base)
- 1N4001 Diode (reverse current protection)
- Red LED
- 220Ω Resistor (LED)
- Buzzer (Piezo)
- External power supply for the motor (9V, 5A)

## Operation

1. The TMP36 sensor reads the ambient temperature.
2. The Arduino converts the analog value into temperature (in °C).
3. Based on the temperature, the Arduino controls the motor speed, LED, and buzzer.
4. The motor speed is adjusted with PWM according to the temperature:
   - **30-40°C**: Medium speed.
   - **40-50°C**: High speed.
   - **Above 50°C**: Maximum speed + sound and visual alert.

## Code

The project code is available in the [greenhouse_temperature_controller.ino](https://github.com/YuriPeres/Greenhouse_Temperature_Controller/blob/main/greenhouse_temperature_controller.ino) file. It was developed in Tinkercad and can be simulated directly on the platform.

## How to Simulate

1. Access the Tinkercad project [HERE](https://www.tinkercad.com/things/lyOS5ZWeyzv-greenhouse-temperature-controller?sharecode=lF4ty4eWetJtnuSmc7wYKxi4kZqiwWzG7DvOnNEwfwo).
2. Open the circuit and code in Tinkercad.
3. Manually adjust the temperature sensor value to test different scenarios.

## Useful Links

- [Tinkercad](https://www.tinkercad.com/)
- [Arduino Documentation](https://www.arduino.cc/reference/en/)
