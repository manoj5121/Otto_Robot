#include <Otto.h>
#include <Servo.h>

Otto Otto;   

#define PIN_YL 2 
#define PIN_YR 3 
#define PIN_RL 4
#define PIN_RR 5
#define PIN_BUZZER 6 
void setup() {
    Otto.init(PIN_YL, PIN_YR, PIN_RL, PIN_RR, true, PIN_BUZZER); 
  Otto.home();     delay(1000);
}

void loop() {
  Otto.walk(2, 1000, -1);    delay(1000);
}
