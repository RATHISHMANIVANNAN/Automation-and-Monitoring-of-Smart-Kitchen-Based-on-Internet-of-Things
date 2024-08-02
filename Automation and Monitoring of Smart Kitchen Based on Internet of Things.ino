#include <LiquidCrystal_I2C.h>
#include <SoftwareSerial.h>
#include <dht11.h>

#define DHT11PIN 4
#define sedi 2
#define buzz 3
#define sean A1

dht11 DHT11;

int fan = 11;
int led = 8;
int temp;

float tempMin = 28;
float tempMax = 60;

int fanSpeed;
int fanLCD;

LiquidCrystal_I2C lcd(0x27, 16, 2);

SoftwareSerial mySerial(9, 10);

void setup() {
    mySerial.println("AT+CMGF=1");
    delay(1000);
    lcd.init();
    lcd.clear();
    lcd.backlight();

    pinMode(fan, OUTPUT);
    pinMode(led, OUTPUT);
    pinMode(3, INPUT);
    pinMode(sedi, INPUT);
    pinMode(3, OUTPUT);

    mySerial.begin(9600);
    Serial.begin(9600);
    delay(100);
}
void loop() {
    temp = DHT11.read(DHT11PIN);
    
    Serial.print("Humidity (%): ");
    Serial.println((float)DHT11.humidity, 2);

    Serial.print("Temperature (C): ");
    Serial.println((float)DHT11.temperature, 2);

    if (DHT11.temperature < tempMin) {
        fanSpeed = 0;
        analogWrite(fan, fanSpeed);
        fanLCD = 0;
        digitalWrite(fan, LOW);
    }
    if ((DHT11.temperature >= tempMin) && (DHT11.temperature <= tempMax)) {
        fanSpeed = DHT11.temperature;
        fanSpeed = 3 * fanSpeed;
        fanLCD = map(temp, tempMin, tempMax, 0, 100);
        analogWrite(fan, fanSpeed);
        digitalWrite(led, HIGH);
    }
    if (DHT11.temperature > tempMax) {
        digitalWrite(led, HIGH);
    } else {
        digitalWrite(led, LOW);
    }
    
    int digital = digitalRead(sedi);
    int analog = analogRead(sean);
}
    int digital = digitalRead(sedi);
    int analog = analogRead(sean);
    
    Serial.print("Analog value: ");
    Serial.print(analog);
    Serial.print(" ");
    Serial.print("Digital value: ");
    Serial.println(digital);

    lcd.print("TEMP: ");
    lcd.print((float)DHT11.temperature, 2);
    lcd.print("C ");
    lcd.setCursor(0, 1);
    lcd.print("FANS: ");
    lcd.print(fanLCD);
    lcd.print("%");
    delay(2000);
    lcd.clear();
    
    if (digital == 0) {
        digitalWrite(3, OUTPUT);
        SendMessage();
        delay(10000);
        digitalWrite(3, LOW);
    }
}

void SendMessage() {
    mySerial.println("AT+CMGS=\"+919600145808\"\r");
    delay(1000);
    mySerial.println("GAS LEAK DETECTED! EMERGENCY");
    delay(100);
    mySerial.println((char)26);
    delay(1000);
}