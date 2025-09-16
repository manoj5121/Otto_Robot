![image alt](https://github.com/manoj5121/Otto_Robot/blob/main/Otto_Robot.jpg?raw=true)

# Otto DIY Arduino Robot - Moves, Dances & Gestures

This project features code and libraries for the Otto DIY robot—an open source, biped humanoid robot that can walk, dance, sing, display animated faces, and perform gestures using 4 servo motors and an optional 8x8 LED matrix.

## Hardware Requirements

- **Microcontroller:** Arduino Nano, Uno, or compatible AVR board
- **Servos:** 4x micro servos (for legs and feet)
- **Buzzer:** 1x active buzzer for sound output
- **Optional:** 8x8 LED matrix (Max7219) for expressive mouth animations
- **Wiring:** See pin assignments below

## Pin Assignments

| Function   | Default Pin |
|------------|:-----------:|
| Left Leg   |     2       |
| Right Leg  |     3       |
| Left Foot  |     4       |
| Right Foot |     5       |
| Buzzer     |     13      |

If using the LED matrix:

| LED Matrix Function | Default Analog Pin |
|---------------------|:------------------:|
| Data In (DIN)       |       A3           |
| Chip Select (CS)    |       A2           |
| Clock (CLK)         |       A1           |

## File Overview

- **all_moves.ino** – Demonstrates all basic moves, gestures, LED expressions, and sounds.
- **move_forward.ino** – Shows a simple forward walk movement.
- **Otto.cpp/h** – Core library files. Implements motion, gestures, sound, LED matrix control.
- **otto_all.ino** – Full dance program with detailed choreography for Otto’s moves.
- **Otto_Waling.ino** – Minimal walking example (backward).
- **ottorobot.ino** – Documentation and reference for functions, usage, and gestures.

## Library Dependencies

- **OttoDIYLib** ([GitHub](https://github.com/OttoDIY/OttoDIYLib))  
  This library handles servo movements, gestures, matrix LED display, and sounds.
- **EEPROM** – For storing calibration trims
- **Servo** – Arduino servo control library

Install the dependencies via Arduino Library Manager or clone/download manually.

## Usage

1. **Hardware Setup:** Connect servos and buzzer to the Arduino as per pin assignments.
2. **Library Installation:**  
   - Download the OttoDIYLib and include it in your Arduino IDE.
   - Ensure `Otto.h`, `Otto.cpp`, and dependencies are present in your project or libraries folder.
3. **Upload Example:**  
   - Open one of the `.ino` files in the Arduino IDE (e.g., `all_moves.ino`).
   - Select your board and COM port.
   - Upload the sketch.

### Example: Making Otto Walk Forward

```cpp
#include <Otto.h>
Otto Otto;
#define LeftLeg 2
#define RightLeg 3
#define LeftFoot 4
#define RightFoot 5
#define Buzzer 13

void setup() {
  Otto.init(LeftLeg, RightLeg, LeftFoot, RightFoot, true, Buzzer);
  Otto.home();
}

void loop() {
  Otto.walk(2, 1000, 1); // 2 steps forward, 1000 ms per step
}
```

For more examples and customization, see `all_moves.ino` and `otto_all.ino`.

## Features

- **Walking & Turning:** Forward/backward, left/right turns.
- **Dances & Moves:** Moonwalk, flapping, crusaito, swing, jitter, tiptoe swing, updown, ascending turn, and jump.
- **Gestures & Emotions:** Happy, sad, victory, angry, sleeping, love, fart, wave, magic, fail, confused, fretful.
- **Sounds:** 19 unique sounds mapped to different gestures and states.
- **Expressive LED Mouth (optional):** Display numerals, icons, emotions, or animate the matrix.

## Customization

- **Servo Trim Calibration:**  
  Adjust offsets in code or through EEPROM to ensure walking stability.
- **Speed & Step Count:**  
  Modify T (time per step) and steps in function calls for different speeds and repetition.
- **Gestures:**  
  Mix and match gestures, sounds, and mouth displays for custom expression.

## Contributing

- Test and report issues
- Suggest or implement new gestures, dances, or expressions
- Submit pull requests for code and documentation improvements

## Licensing

This project and its code are open source under the GNU GPL and Creative Commons CC-BY-SA licenses.  
Please credit [Otto DIY - www.ottodiy.com](https://www.ottodiy.com) in all redistributions, forks, or remixes, and release derivative works under the same license.

> Otto DIY by [www.ottodiy.com](https://www.ottodiy.com) is licensed under a Creative Commons Attribution-ShareAlike 4.0 International License.

***

**Created & Maintained by the Otto DIY Community**

For questions, join the [Otto DIY community](https://www.ottodiy.com) or check out the full documentation and support forums.
