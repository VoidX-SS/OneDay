// Khai báo chân cắm
int ledPin = 13;
int lightSensorPin = A1;

// Khai báo biến
int lightLevel;

// Hàm setup
void setup() {
  // Khởi tạo Serial
  Serial.begin(9600);

  // Khởi tạo pin
  pinMode(ledPin, OUTPUT);
  pinMode(lightSensorPin, INPUT);
}

// Hàm loop
void loop() {
  // Đọc dữ liệu từ cảm biến ánh sáng
  lightLevel = analogRead(lightSensorPin);

  // Bật đèn khi trời tối
  if (lightLevel < 500) {
    digitalWrite(ledPin, HIGH);
    delay(3600000); // Bật đèn trong 1 giờ
    digitalWrite(ledPin, LOW);
  }

  // In dữ liệu ra Serial
  Serial.print("Mức độ sáng: ");
  Serial.println(lightLevel);

  // Delay
  delay(1000);
}
