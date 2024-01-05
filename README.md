# Joystick_Led_Control
This repo content is about LEDs controlled by Joystick

**And there is a challenge!**                                                 
## all you need in this tutorial is:                                            
1. follow this connections table.
2. compile and run.
   
|     pins       |  components   |
| -------------  | ------------- |
|        GND     | joystick GND  |
|        +5v     | joystick 5v   |
|         A0     |     URX       |
|         A1     |     URY       |
|     pin 2      |     SW        |
|     pin 3      |  led right    |
|     pin 4      |  led left     |
|     pin 5      |  led up       |
|     pin 6      |  down led     |

## you shold end up with something like this:
[![result](https://img.youtube.com/vi/Otsp1KkH4mo/0.jpg)](https://www.youtube.com/watch?v=Otsp1KkH4mo)
# The challege is! 
This code contain six main methods:
```
     SwitchState();
     X_AxisRead();
     Y_AxisRead();
     up_down(); 
     left_right();
     turnAllOff();
```
**You need to work on turnAllOn() method when all LED's are off and share it with me**
