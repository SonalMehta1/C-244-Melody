#define BUZZER 23

const int VALUE_THRESHOLD=6;

int TOUCH_SENSOR_VALUE_1;
int TOUCH_SENSOR_VALUE_2;
int TOUCH_SENSOR_VALUE_3;

void setup() {
  // put your setup code here, to run once:
  pinMode(BUZZER, OUTPUT);
  Serial.begin(115200);
  delay(2000);

  digitalWrite(BUZZER,LOW);


}

void loop() {
  // put your main code here, to run repeatedly:
  TOUCH_SENSOR_VALUE_1=touchRead(T4);
  TOUCH_SENSOR_VALUE_2=touchRead(T2);
  TOUCH_SENSOR_VALUE_3=touchRead(T5);

  Serial.print("TOUCH Sensor Value 1:");
  Serial.print(TOUCH_SENSOR_VALUE_1);
  Serial.print(" ");

  Serial.print("TOUCH Sensor Value 2:");
  Serial.print(TOUCH_SENSOR_VALUE_2);
  Serial.print(" ");

  Serial.print("TOUCH Sensor Value 3:");
  Serial.print(TOUCH_SENSOR_VALUE_3);
  Serial.print(" ");

  delay(500);

  if(TOUCH_SENSOR_VALUE_1<VALUE_THRESHOLD){
    for (int i=0;i<2;i++){
      digitalWrite(BUZZER, HIGH);
      delay(100);
      digitalWrite(BUZZER, LOW);
      delay(100);
    }

    for (int i=0;i<5;i++){
      digitalWrite(BUZZER, HIGH);
      delay(50);
      digitalWrite(BUZZER, LOW);
      delay(50);
    }

    for (int i=0;i<8;i++){
      digitalWrite(BUZZER, HIGH);
      delay(25);
      digitalWrite(BUZZER, LOW);
      delay(25);
    }
  }
    else{
      digitalWrite(2, LOW);
    }
  


}
