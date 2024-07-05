
const int ldrPin = 2; // Connect the LDR to digital pin 2 unsigned
long startTime = 0; // Variable to store the start time
void setup() {
Serial.begin(9600); // Initialize Serial communication
pinMode(ldrPin, INPUT); // Set the LDR pin as INPUT
}
void loop() {
int ldrValue = digitalRead(ldrPin); // Read the digital state of the LDR pin
if (ldrValue == LOW && startTime == 0) {
// If LDR is in the dark and the timer is not running, start measuring duration
startTime = millis(); // Record the start time
Serial.println("SEND ANY MESSAGE");
} else if (ldrValue == HIGH &&startTime != 0) {
// If LDR is exposed to light and the timer is running, calculate and print the
duration
unsigned long duration = millis() - startTime; // Calculate duration
if(duration>=399&&duration<=500){
Serial.println("hi");
startTime = 0; // Reset start time for the next cycle
}
if(duration>=600&&duration<=701){Serial.println("hello");
startTime = 0; // Reset start time for the next cycle
 if(duration>=1000&&duration<=1101)
{
 Serial.println("Iamfine");
 startTime = 0; // Reset start time for the next cycle
 }
 if(duration>=1200&&duration<=1301){Serial.println("ok");
startTime = 0; // Reset start time for the next cycle
}
if(duration>=1400&&duration<=1501){
Serial.println("goodmorning");
startTime = 0; // Reset start time for the next cycle
}
if(duration>=1600&&duration<=1701){
Serial.println("goodafternoon");
startTime = 0; // Reset start time for the next cycle
}
if(duration>=1800&&duration<=1901){
Serial.println("goodevening");
startTime = 0; // Reset start time for the next cycle
}
if(duration>=2000&&duration<=2101){
Serial.println("thankyou");
startTime = 0; // Reset start time for the next cycle
}
if(duration>=2200&&duration<=2301){Serial.println("sorry");
startTime = 0; // Reset start time for the next cycle
}
startTime = 0; // Reset start time for the next cycle
}
delay(100); // Adjust delay based on your requirements
}

