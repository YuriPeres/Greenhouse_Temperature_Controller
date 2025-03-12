![GitHub](https://img.shields.io/github/license/YuriPeres/Greenhouse_Temperature_Controller?color=darkgreen)
![GitHub last commit](https://img.shields.io/github/last-commit/YuriPeres/Greenhouse_Temperature_Controller)

# English Version

See the README file in English [HERE](https://github.com/YuriPeres/Greenhouse_Temperature_Controller/blob/main/README_EN.md) 

# Projeto de Estufa de Hortaliças com Arduino

Este projeto simula uma estufa de hortaliças controlada por um Arduino. O circuito inclui um sensor de temperatura (TMP36), um motor de ventilador, um LED vermelho e uma buzina. O sistema monitora a temperatura e toma as seguintes ações:

- Se a temperatura for **igual ou maior que 30°C**, o motor de ventilador é ligado com controle de velocidade proporcional.
- Se a temperatura for **maior que 50°C**, o LED vermelho e a buzina são acionados para indicar uma situação de emergência.

## Componentes Utilizados

- Arduino Uno R3 
- Sensor de Temperatura TMP36
- Motor CC (ventilador)
- Transistor NPN (2N2222)
- Resistor 1kΩ (base do transistor)
- Diodo 1N4001 (proteção contra corrente reversa)
- LED Vermelho
- Resistor 220Ω (LED)
- Buzina (Piezo)
- Fonte de alimentação externa para o motor (9V, 5A)

## Funcionamento

1. O sensor TMP36 faz a leitura da temperatura ambiente.
2. O Arduino converte o valor analógico lido em temperatura (em °C).
3. Com base na temperatura, o Arduino controla a velocidade do motor, o LED e a buzina.
4. A velocidade do motor é ajustada com PWM de acordo com a temperatura:
   - **30-40°C**: Velocidade média.
   - **40-50°C**: Velocidade alta.
   - **Acima de 50°C**: Velocidade máxima + alerta sonoro e visual.

## Código

O código do projeto está disponível no arquivo [greenhouse_temperature_controller.ino](https://github.com/YuriPeres/Greenhouse_Temperature_Controller/blob/main/greenhouse_temperature_controller.ino). Ele foi desenvolvido no Tinkercad e pode ser simulado diretamente na plataforma.

## Como Simular

1. Acesse o Tinkercad do projeto <a href="https://www.tinkercad.com/things/lyOS5ZWeyzv-greenhouse-temperature-controller?sharecode=lF4ty4eWetJtnuSmc7wYKxi4kZqiwWzG7DvOnNEwfwo" target="_blank">AQUI</a>.
2. Abra o circuito e o código no Tinkercad.
3. Ajuste manualmente o valor do sensor de temperatura para testar diferentes cenários.



## Links Úteis

- [Tinkercad](https://www.tinkercad.com/)
- [Documentação do Arduino](https://www.arduino.cc/reference/en/)