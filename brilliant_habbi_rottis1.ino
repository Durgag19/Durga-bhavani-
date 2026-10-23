
const int tensPins[] = {2, 3, 4, 5};
const int unitsPins[] = {6, 7, 8, 9};

void showDigit(int digit, const int pins[]) {
  for (int i = 0; i < 4; i++) {
    digitalWrite(pins[i], (digit >> i) & 1);
  }
}

void setup() {
  for (int i = 0; i < 4; i++) {
    pinMode(tensPins[i], OUTPUT);
    pinMode(unitsPins[i], OUTPUT);
  }
}

void loop() {
  for (int number = 0; number <= 30; number++) {
    int tens = number / 10;
    int units = number % 10;

    showDigit(tens, tensPins);
    showDigit(units, unitsPins);

    delay(1000);
  }
}
