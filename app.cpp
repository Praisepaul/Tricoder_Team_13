const int LED_n = 3;             // Declaring the no.of LEDs
int leds[LED_n] = {2,3,4};       // Specifying LED pins
int ir_pins[LED_n] = {A0,A1,A2}; // Specifying IR sensor pins
int ldr_pin = A5;               // Specifying Light density resistor

void setup() {                      // Initialize  main  function 
  Serial.begin(9600);
  for (int i = 0; i < LED_n; i++) {   // setting  pinmodes for  each LED
    pinMode(leds[i], OUTPUT);
    pinMode(ir_pins[i], INPUT);        // setting  pinmodes for  each IR sensor 
  }
  pinMode(ldr_pin, INPUT);          // setting  pinmodes for  each LDR
}

int LDR_THRESHOLD = 500;            // setting  LDR threshold
int IR_THRESHOLD = 100;             // setting IR  threshold

void loop() {
  int ldrStatus = analogRead(ldr_pin);          
  int irStatus = analogRead(ir_pins[0]);
  
  if (ldrStatus > LDR_THRESHOLD || irStatus > IR_THRESHOLD) {
    for (int i = 0; i < LED_n; i++) {
      if(ldrStatus>LDR_THRESHOLD){
      analogWrite(leds[i], 0);
      digitalWrite(leds[i], LOW);
      }
      //delay(10000);
    }
  }else if(ldrStatus < LDR_THRESHOLD && irStatus < IR_THRESHOLD){
    for (int i = 0; i < LED_n; i++) {
    analogWrite(leds[i], 100);
    digitalWrite(leds[i], LOW);
    }
    
  } else {
    for (int i = 0; i < LED_n; i++) {
      analogWrite(leds[i], 100);
      digitalWrite(leds[i], LOW);
    }
  }
}