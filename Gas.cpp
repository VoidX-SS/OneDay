// Khai báo chân cắm
int fanPin = 12;
int gasSensorPin = A0;

// Khai báo biến
int gasLevel;

// Hàm setup
void setup() {
  // Khởi tạo Serial
  Serial.begin(9600);

  // Khởi tạo pin
  pinMode(fanPin, OUTPUT);
  pinMode(gasSensorPin, INPUT);
}

// Hàm loop
void loop() {
  // Đọc dữ liệu từ cảm biến khí ga
  gasLevel = analogRead(gasSensorPin);

  // Bật quạt khi có khí ga
  if (gasLevel > 500) {
    digitalWrite(fanPin, HIGH);
  } else {
    digitalWrite(fanPin, LOW);
  }

  // In dữ liệu ra Serial
  Serial.print("Mức khí ga: ");
  Serial.println(gasLevel);

  // Delay
  delay(1000);
}
