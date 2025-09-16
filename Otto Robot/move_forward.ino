#include <Otto.h>  // Include the Otto DIY library

Otto Otto;  // Create an Otto object

// Define the pins for servos and buzzer
#define LeftLeg 2
#define RightLeg 3
#define LeftFoot 4
#define RightFoot 5
#define Buzzer 13

// Servo offset values (adjust if your robot is not walking straight)
int leftLegOffset = 0;
int rightLegOffset = 0;
int leftFootOffset = 0;
int rightFootOffset = 0;

void setup() {
    Serial.begin(9600);  // Start serial communication for debug messages

    // Initialize Otto with servo pins and buzzer
    Otto.init(LeftLeg, RightLeg, LeftFoot, RightFoot, true, Buzzer);

    // Set offset values (calibration)
    Otto.setTrims(leftLegOffset, rightLegOffset, leftFootOffset, rightFootOffset);

    // Move to home (neutral) position
    Otto.home();
    Serial.println("Otto is Ready");
    delay(1000);
}

void loop() {
    Serial.println("Otto is Walking Forward");
    
    // Move forward: direction = 1, duration = 800ms per step, steps = 4
    Otto.walk(1, 800, 4);
    
    // Wait before next movement (or repeat)
    delay(2000);
}
