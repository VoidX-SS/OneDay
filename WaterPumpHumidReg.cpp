// Khai báo chân cắm
int waterPumpPin = 11;
int humiditySensorPin = A2;

// Khai báo biến
int humidityLevel;

// Hàm setup
void setup() {
  // Khởi tạo Serial
  Serial.begin(9600);

  // Khởi tạo pin
  pinMode(waterPumpPin, OUTPUT);
  pinMode(humiditySensorPin, INPUT);
}

// Hàm loop
void loop() {
  // Đọc dữ liệu từ cảm biến độ ẩm
  humidityLevel = analogRead(humiditySensorPin);

  // Bơm nước khi độ ẩm thấp
  if (humidityLevel < 500) {
    digitalWrite(waterPumpPin, HIGH);
  } else {
    digitalWrite(waterPumpPin, LOW);
  }

  // In dữ liệu ra Serial
  Serial.print("Độ ẩm: ");
  Serial.println(humidityLevel);

  // Delay
  delay(1000);
}

