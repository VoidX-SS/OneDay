// Khai báo chân cắm
int ledPin = 13;

// Hàm setup
void setup() {
  // Khởi tạo Serial
  Serial.begin(9600);

  // Khởi tạo pin
  pinMode(ledPin, OUTPUT);
}

// Hàm loop
void loop() {
  // Lấy thời gian hiện tại
  int hour = hour();

  // Bật đèn lúc 17 giờ tối
  if (hour == 17) {
    digitalWrite(ledPin, HIGH);
  }

  // Tắt đèn lúc 6 giờ sáng
  if (hour == 6) {
    digitalWrite(ledPin, LOW);
  }

  // Delay
  delay(1000);
}

