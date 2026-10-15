# The idea

I had an old humidifier in my room that hasn't been used in over a year. When I plugged it in, the adaptor wasn't working so I removed the barrel jack plug and replaced it with a spliced USB A cable. 
But a normal humidifier doesn't turn off by himself when the room's humidity reaches an optimal point (~50% humidity).

# The plan

Use a Raspberry Pi Pico 2 W to control the ON/OFF cycle of the humidifier, have a little display for the room's temperature and humidity, maybe a clock.
Also I think it'd be nice if it can monitor, in quarters, the water level and display it in the corner of the display and a warning when the water is below 25% with an alert when it reaches 0%. 

# Understanding the humidifier's logic

After probing with _a multimeter_, when the ON/OFF button is pressed, one of the pins of the IC that controls the system is pulled down. Same goes for the light one. 
---
<img width="223" height="588" alt="backside of the humidifier's board" src="https://github.com/user-attachments/assets/bf88c6b4-28fb-4069-843e-9f64fd4c378b" />

<img width="223" height="588" alt="frontside of the humidifier's board" src="https://github.com/user-attachments/assets/9a065fc9-8bec-4d84-9869-775a66411ef5" />

## Hacking the logic

I connected **a transistor** between each the buttons' pins, and the gates through **100 Ohms resistors** to logic pins of the **Raspberry Pi Pico 2 W.** 


# The protoboard

On a protoboard I wired a ST7735S TFT display to the Pico's pins, alongside the humidity and temperature sensor.

<img width="364" height="649" alt="image" src="https://github.com/user-attachments/assets/e2b31a6a-dc91-4bd4-83b4-f762cec8c1d2" />
