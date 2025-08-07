# Arduino-humidity,temperature,light intensity-portable
This program will enable the user to read the light intensity, humidity and temperature of the environment wherever he/she finds him/herself.

Project is very simple and uses arudino IDE, arduino nano board, DHT11 sensor, LDR sensor, LCD display (4 bit), a battery and a bunch of wires.
I added battery to the list for the freedom of movement. Then you're able to use the board wherever you go.

Note that these cheap sensors are not very accurate (obviously). But they're good enough.

## Connecting the board
### LCD Display
VSS - GND /
VDD - 5V /
VO - middle of potenciometer which is connected to 5V and GND /
RS - D12 /
RW - GND /
E - D11 /
D4 - D5 pin /
D5 - D4 /
D6 - D3 /
D7 -D2 /
A - 330 Ohm resistor which goes to 5V /
K - GND /

### LDR
1st pin - 5V /
2nd pin - A0 pin - 10k ohm resistor which goes to GND /

### DHT11
VCC - 5V - 10k ohm resistor which goes to DATA /
DATA - D8 /
NC - None /
GND - GND
