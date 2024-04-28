#define laserPin 13

// TODO: keypad

void setup() {
  pinMode(laserPin, OUTPUT);
  digitalWrite(laserPin, LOW);
  Serial.begin(9600);
}
void loop() {
  while (Serial.available() == 0) {}
  String message = Serial.readString();
  message.toUpperCase();
  for (int i = 0; i < message.length(); i++) {
    switch (message[i]) {
      case 'A':
        A();
        delay(180)
        break;
      case 'B':
        B();
        delay(180)
        break;
      case 'C':
        C();
        delay(180)
        break;
      case 'D':
        D();
        delay(180)
        break;
      case 'E':
        E();
        delay(180)
        break;
      case 'F':
        FF();
        delay(180)
        break;
      case 'G':
        G();
        delay(180)
        break;
      case 'H':
        H();
        delay(180)
        break;
      case 'I':
        I();
        delay(180)
        break;
      case 'J':
        J();
        delay(180)
        break;
      case 'K':
        K();
        delay(180)
        break;
      case 'L':
        L();
        delay(180)
        break;
      case 'M':
        M();
        delay(180)
        break;
      case 'N':
        N();
        delay(180)
        break;
      case 'O':
        O();
        delay(180)
        break;
      case 'P':
        P();
        delay(180)
        break;
      case 'Q':
        Q();
        delay(180)
        break;
      case 'R':
        R();
        delay(180)
        break;
      case 'S':
        S();
        delay(180)
        break;
      case 'T':
        T();
        delay(180)
        break;
      case 'U':
        U();
        delay(180)
        break;
      case 'V':
        V();
        delay(180)
        break;
      case 'W':
        W();
        delay(180)
        break;
      case 'X':
        X();
        delay(180)
        break;
      case 'Y':
        Y();
        delay(180)
        break;
      case 'Z':
        Z();
        delay(180)
        break;
      case ' ':
        delay(420);
      default:
        break;
    }
  }
}
void dot() {
  Serial.print(".");
  digitalWrite(laserPin, HIGH);
  delay(60);
  digitalWrite(laserPin, LOW);
  delay(60);
}
void dash() {
  Serial.print("-");
  digitalWrite(laserPin, HIGH);
  delay(180);
  digitalWrite(laserPin, LOW);
  delay(60);
}
void A() {
  dot();
  dash();
  Serial.print(" ");
  return;
}
void B() {
  dash();
  dot();
  dot();
  dot();
  Serial.print(" ");
  return;
}
void C() {
  dash();
  dot();
  dash();
  dot();
  Serial.print(" ");
  return;
}
void D() {
  dash();
  dot();
  dot();
  Serial.print(" ");
  return;
}
void E() {
  dot();
  Serial.print(" ");
  return;
}
void FF() {
  dot();
  dot();
  dash();
  dot();
  Serial.print(" ");
  return;
}
void G() {
  dash();
  dash();
  Serial.print(" ");
  return;
}
void H() {
  dot();
  dot();
  dot();
  dot();
  Serial.print(" ");
  return;
}
void I() {
  dot();
  dot();
  Serial.print(" ");
  return;
}
void J() {
  dot();
  dash();
  dash();
  dash();
  Serial.print(" ");
  return;
}
void K() {
  dash();
  dot();
  dash();
  Serial.print(" ");
  return;
}
void L() {
  dot();
  dash();
  dot();
  dot();
  Serial.print(" ");
  return;
}
void M() {
  dash();
  dash();
  Serial.print(" ");
  return;
}
void N() {
  dash();
  dot();
  Serial.print(" ");
  return;
}
void O() {
  dash();
  dash();
  dash();
  Serial.print(" ");
  return;
}
void P() {
  dot();
  dash();
  dash();
  dot();
  Serial.print(" ");
  return;
}
void Q() {
  dash();
  dash();
  dot();
  dash();
  Serial.print(" ");
  return;
}
void R() {
  dot();
  dash();
  dot();
  Serial.print(" ");
  return;
}
void S() {
  dot();
  dot();
  dot();
  Serial.print(" ");
  return;
}
void T() {
  dash();
  Serial.print(" ");
  return;
}
void U() {
  dot();
  dot();
  dash();
  Serial.print(" ");
  return;
}
void V() {
  dot();
  dot();
  dot();
  dash();
  Serial.print(" ");
  return;
}
void W() {
  dot();
  dash();
  dash();
  Serial.print(" ");
  return;
}
void X() {
  dash();
  dot();
  dot();
  dash();
  Serial.print(" ");
  return;
}
void Y() {
  dash();
  dot();
  dash();
  dash();
  Serial.print(" ");
  return;
}
void Z() {
  dash();
  dash();
  dot();
  dot();
  Serial.print(" ");
  return;
}
