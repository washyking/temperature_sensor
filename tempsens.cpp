int led = D2;  // The on-board LED

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);   // Turn ON the LED

  String temp = String(random(60, 80));
  Particle.publish("temp", temp, PRIVATE);
  delay(15000);               // Wait for 30 seconds

  digitalWrite(led, LOW);    // Turn OFF the LED
  delay(15000);               // Wait for 30 seconds
}