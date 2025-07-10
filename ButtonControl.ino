// تعريف المنافذ
int button1 = 5;  // الزر الأول
int button2 = 6;  // الزر الثاني
int button3 = 7;  // الزر الثالث

int led1 = 2;     // الليد الأول
int led2 = 3;     // الليد الثاني
int led3 = 4;     // الليد الثالث

void setup() {
  // إعداد الأزرار كمداخل مع مقاومة داخلية
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
  pinMode(button3, INPUT_PULLUP);

  // إعداد الليدات كمخارج
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  // قراءة حالة كل زر
  int b1 = digitalRead(button1);
  int b2 = digitalRead(button2);
  int b3 = digitalRead(button3);

  // تشغيل الليد إذا تم الضغط على الزر (LOW = مضغوط)
  digitalWrite(led1, b1 == LOW);
  digitalWrite(led2, b2 == LOW);
  digitalWrite(led3, b3 == LOW);
}
