// variables to do morse code
const int point = 500;
const int trait = 2000;
const int chut = 250;
int s[] = {point, point, point};
int o[] = {trait, trait, trait};

void setup() {
  // put your setup code here, to run once:
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // affichage de s
  for (int signal = 0; signal < 3; signal++) {
    digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(s[signal]);                       // wait for a second
    digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
    delay(chut);                       // wait for a second
  }
  // affichage de o
  for (int signal = 0; signal < 3; signal++) {
    digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(o[signal]);                       // wait for a second
    digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
    delay(chut);                       // wait for a second
  }
  // affichage de s
  for (int signal = 0; signal < 3; signal++) {
    digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(s[signal]);                       // wait for a second
    digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
    delay(chut);                       // wait for a second
  }
  delay(8*chut);                       // wait for a second
}
