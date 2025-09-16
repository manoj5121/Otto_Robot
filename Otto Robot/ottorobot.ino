cpp
#include <Otto.h>
Otto Otto;
```

### Pins declaration

These are the default signal connections for the servos and buzzer for AVR Arduino boards in the examples, you can alternatively connect them to different pins if you also change the pin number.

```cpp
#define LeftLeg 2 // left leg pin
#define RightLeg 3 // right leg pin
#define LeftFoot 4 // left foot pin
#define RightFoot 5 // right foot pin
#define Buzzer 13 //buzzer pin
```

### Initialization

When starting the program, the 'init' function must be called with the use of servo motor calibration as a parameter. <br/>
It is best to place the servo motors in their home position after initialization with the 'home' function.

```cpp
void setup() {
   Otto.init(LeftLeg, RightLeg, LeftFoot, RightFoot, true, Buzzer);
   Otto.home();
}
```
The `home()` function makes the servos move to the center position, with Otto standing in the neutral position.

## Predetermined Functions:
Many preconfigured movements are available in the library:

### Movements:
These are actions that involve the use of the 4 servo motors with the oscillation library combined in synergy and with smooth movements. You can change the values inside the pratensis `()` to alter the speed, direction, and size of the movements.

#### Walk function

```cpp
Otto.walk(steps, time, dir);
```
- `steps` are just how many times you want to repeat that movement without the need for further coding or adding additional rows.
- `time` (noted as `T` below) translated in milliseconds is the duration of the movement. A higher time value slows the movement; try values ranging from 500 to 3000.
- `dir` is the direction: `1` for forward or `-1` backward

Example:
```cpp
Otto.walk(2, 1000, 1);
```
In this example, `2` is the number of steps, `1000` is "TIME" in milliseconds, and it will walk forward.

Try changing T value: Slow=2000 Normal=1000 Fast= 500

```cpp
Otto.turn(steps, T, dir);
```
(# of steps, T, to the left or -1 to the right)

```cpp
Otto.bend (steps, T, dir);
```

(# of steps, T, 1 bends to the left or -1 to the right)

```cpp
Otto.shakeLeg (steps, T, dir);
```
(# of steps, T, 1 bends to the left or -1 to the right)

```cpp
Otto.jump(steps, T);
```
(# of steps up, T) This one does not have a dir parameter.
Otto doesn't really jump. 😜

### Dances:

Similar to movements but more fun! You can adjust the new parameter `h` "height or size of the movements" to make the dance more interesting.

```cpp
Otto.moonwalker(steps, T, h, dir);
```
(# of steps, T, h, 1 to the left or -1 to the right)

`h`: Try changing between 15 and 40.


Example:
```cpp
Otto.moonwalker(3, 1000, 25,1);
```

```cpp
Otto.crusaito(steps, T, h, dir);
```
(# of steps, T, h, 1 to the left or -1 to the right)

`h`: Try changing between 20 and 50.

```cpp
Otto.flapping(steps, T, h, dir);
```
(# of steps, T, h, 1 to the front or -1 to the back)

`h`: Try changing between 10 and 30.

```cpp
Otto.swing(steps, T, h);
```
`h`: Try changing between 0 and 50.

```cpp
Otto.tiptoeSwing(steps, T, h);
```
`h`: Try changing between 0 and 50.

```cpp
Otto.jitter(steps, T, h);
```
`h`: Try changing between 5 and 25.

```cpp
Otto.updown(steps, T, h);  
```
`h`: Try changing between 0 and 90.

```cpp
Otto.ascendingTurn(steps, T, h);
```
`h`: Try changing between 5 and 15.

### Sounds:

```
Otto.sing(songName);
```
By just changing what is inside the () we can change the sounds easily to 19 different ones.
It's as simple as copying and pasting in a new row to make the sounds as many times as you like.

- S_connection
- S_disconnection
- S_buttonPushed
- S_mode1
- S_mode2
- S_mode3
- S_surprise
- S_OhOoh
- S_OhOoh2
- S_cuddly
- S_sleeping
- S_happy
- S_superHappy
- S_happy_short
- S_sad
- S_confused
- S_fart1
- S_fart2
- S_fart3

Otto can emit several sounds with the 'sing' function:
```cpp
Otto._tone(10, 3, 1);
```

(noteFrequency, noteDuration, silentDuration)

```cpp
Otto.bendTones (100, 200, 1.04, 10, 10);
```
(initFrequency, finalFrequency, prop, noteDuration, silentDuration)


### Gestures:
Finally, our favorite. This is a combination of the 2 previous functions we learned: sing + walk
Their goal is to express emotions by combining sounds with movements at the same time, and if you have the LED matrix, you can show them in the robot's mouth!

```cpp
Otto.playGesture(gesture);
```
- `Otto.playGesture(OttoHappy);`
- `Otto.playGesture(OttoSuperHappy);`
- `Otto.playGesture(OttoSad);`
- `Otto.playGesture(OttoVictory);`
- `Otto.playGesture(OttoAngry);`
- `Otto.playGesture(OttoSleeping);`
- `Otto.playGesture(OttoFretful);`
- `Otto.playGesture(OttoLove);`
- `Otto.playGesture(OttoConfused);`
- `Otto.playGesture(OttoFart);`
- `Otto.playGesture(OttoWave);`
- `Otto.playGesture(OttoMagic);`
- `Otto.playGesture(OttoFail);`

As you see, it’s very simple, but what it does is quite advanced.

## How to Contribute:
Contributing to this software is warmly welcomed.
1. Test it, and if you find any problems, then post an issue.
2. Help us solve the issues or other bugs.
3. Improve and optimize the current libraries.
You can do this [basically by forking](https://help.github.com/en/articles/fork-a-repo), committing modifications, and then [pull a request](https://help.github.com/en/articles/about-pull-requests). 

Welcome to the Otto DIY community.

<a href="https://discord.gg/CZZytnw"><img src="https://images.squarespace-cdn.com/content/v1/5cd3e3917046805e4d6700e3/1560193788834-KYURUXVSZAIE4XX1ZB2F/ke17ZwdGBToddI8pDm48kK6MRMHcYvpidTm-7i2qDf_lfiSMXz2YNBs8ylwAJx2qLijIv1YpVq4N1RMuCCrb3iJz4vYg48fcPCuGX417dnbl3kVMtgxDPVlhqW83Mmu6GipAUbdvsXjVksOX7D692AoyyEsAbPHhHcQMU6bWQFI/join_discord_button_small.png" width="25%"></a>

## License

The OttoDIYLib is licensed under the terms of the GPL Open Source
license and is available for free.

## License: CC-BY-SA
You can use all resources of Otto for free, but the Otto DIY website must be included in any redistribution, and remixes must keep the CC-BY-SA license. In open source, the idea is that more people can have access; therefore, if you copy or remix Otto, you must also release it under the same open license, which means you must also release all files to the public.

<a rel="license" href="http://creativecommons.org/licenses/by-sa/4.0/"><img alt="Creative Commons License" style="border-width:0" src="https://i.creativecommons.org/l/by-sa/4.0/88x31.png" /></a><br /><span xmlns:dct="http://purl.org/dc/terms/" property="dct:title">Otto DIY</span> by <a xmlns:cc="http://creativecommons.org/ns#"  property="cc:attributionName"> [www.ottodiy.com](http://www.ottodiy.com) </a> is licensed under a <a rel="license" href="http://creativecommons.org/licenses/by-sa/4.0/">Creative Commons Attribution-ShareAlike 4.0 International License</a>.

Big thanks to all our contributors:
- @JavierIH
- @Obijuan
- @jarsoftelectrical
- @stembotvn
- @sfranzyshen
- @tehniq3
- @logix5
- @DiegoSSJ
- @loreman
- @justinotherguy
- @bhm93
- @wendtbw
- @agomezgar
- @BodoMinea
- @chico
- @PinkDev1
- @MXZZ
- @Pawka
- @per1234
- @FedericoBusero
- @hulkco
- @mishafarms
- @nisha-appanah
- @pabloevaristo
- @ProgrammerBruce
- @Nca78
- @dleval
- @coliss86
- @namepatrik
