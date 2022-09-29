int PIR_pin = 8;
int Buzzer_pin = 6;
int LED_pin = 4;
int Push_Button_pin = 2;
int state = LOW;
long start_time = 0;
long curr_time = 0;
String passcode = "password";
String input = "";

void setup()
{
  pinMode(PIR_pin, INPUT);
  pinMode(Buzzer_pin, OUTPUT);
  pinMode(LED_pin, OUTPUT);
  pinMode(Push_Button_pin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  state = LOW;
  input = "";
  Serial.println("Arduino based Home Barge Alert");
  int state = digitalRead(PIR_pin);
  if(state == HIGH)
  {
    start_time = millis() / 1000;
    Serial.println("Motion Detected!");
    Serial.println("Please enter the Passcode (within 15 sec) : ");
    while(curr_time - start_time < 15)
    {
      if(Serial.available() > 0)
      {
        input = Serial.readString();
        break;
      }
      curr_time = millis() / 1000;
    }
    if(input == passcode)
    {
      Serial.println("Welcome!");
    }
    else
    {
      Serial.println("INTRUDER ALERT!");
      while(digitalRead(Push_Button_pin) != HIGH)
      {
        digitalWrite(Buzzer_pin, HIGH);
        digitalWrite(LED_pin, HIGH);
    	delay(200);
    	digitalWrite(Buzzer_pin, LOW);
    	digitalWrite(LED_pin, LOW);
    	delay(200);
  	  }
    }
  }
  Serial.println("******************************");
  delay(1000);
}