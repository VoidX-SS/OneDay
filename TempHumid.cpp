// Khai báo chân cắm
int ledPin = 13;
int fanPin = 12;

// Khai báo biến
int temp;
int humid;

// Hàm setup
void setup() {
  // Khởi tạo Serial
  Serial.begin(9600);

  // Khởi tạo pin
  pinMode(ledPin, OUTPUT);
  pinMode(fanPin, OUTPUT);

  // Khởi tạo cảm biến
  // ...
}

// Hàm loop
void loop() {
  // Đọc dữ liệu từ cảm biến
  temp = readTemp();
  humid = readHumid();

  // Điều khiển quạt
  if (temp > 30) {
    digitalWrite(fanPin, HIGH);
  } else {
    digitalWrite(fanPin, LOW);
  }

  // Điều khiển đèn
  if (humid < 60) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

  // In dữ liệu ra Serial
  Serial.print("Nhiệt độ: ");
  Serial.print(temp);
  Serial.print("°C - Độ ẩm: ");
  Serial.print(humid);
  Serial.println("%");

  // Delay
  delay(1000);
}
