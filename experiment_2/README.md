## آزمایش شماره دو 💡

### گزارش کار و مراحل 📝

در این آزمایش نیز همچون آزمایش قبلی هدف ما تنظیم کردن یک کلید به صورتی است که در صورت بسته شدن آن، لامپ LED روشن شود فقط با این تفاوت که در این مدار مقاومت به صورت بالا کش ( pullup ) بسته شده است یعنی اینکه در حالت عادی که کلید باز می باشد سطح ولتاژ پایه یک به آن وارد می شود اما به محض بسته شدن کلید مسیر جریان تغییر کرده و سطح ولتاژ پایه صفر به آن وارد خواهد شد.  
بنابراین در این حالت باید کد های برنامه را طوری تغییر دهیم که در صورت اینکه **ولتاژ منطقی صفر** از ورودی کلید دریافت شد لامپ LED روشن شود.

---

### توصیف کد های برنامه 💻

```cpp
int button = 8;
int led = 7;
int buttonState;
void setup() {
pinMode(button, INPUT);
pinMode(led, OUTPUT);
}
void loop() {
buttonState = digitalRead(button);
if (buttonState == LOW)   // اگر ولتاژ ورودی کلید پایین بود شرط اجرا می شود
  {
  digitalWrite(led, HIGH);
  }
  else {
    digitalWrite(led, LOW);
  }
}
```

---

### شرح کارکرد مدار به صورت ویدیویی 📽️

![micro and circuit](/media/microprocessor_4.gif)

---

### شماتیک مدار 🗺️

![micro and circuit](/media/schematic_4.jpg)
