// Khai báo chân cắm
int waterPumpPin = 11;

// Khai báo biến
int waterLevel;

// Hàm setup
void setup() {
  // Khởi tạo Serial
  Serial.begin(9600);

  // Khởi tạo pin
  pinMode(waterPumpPin, OUTPUT);

  // Khởi tạo cảm biến
  // ...
}

// Hàm loop
void loop() {
  // Đọc dữ liệu từ cảm biến
  waterLevel = readWaterLevel();

  // Điều khiển bơm nước
  if (waterLevel < 10) {
    digitalWrite(waterPumpPin, HIGH);
  } else {
    digitalWrite(waterPumpPin, LOW);
  }

  // In dữ liệu ra Serial
  Serial.print("Mực nước: ");
  Serial.println(waterLevel);

  // Delay
  delay(1000);
}
