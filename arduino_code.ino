
// PORT : /dev/ttyUSB0
void setup() {
  Serial.begin(115200);
}

float phase;
void loop() {
  
  for (phase=0;phase<=2*3.14;phase=phase+0.1){
    Serial.println(sin(phase));
  } 
}
