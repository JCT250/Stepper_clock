
int stp = 7;
int dir = 3;

int resolution1 = 6;
int resolution2 = 4;
int resolution3 = 2;


unsigned long min_random1 = 45000; // min moving time
unsigned long max_random1 = 120000; // max moving time
unsigned long min_random2 = 3000; // min stopped time
unsigned long max_random2 = 10000; // max stopped time
unsigned long state_change = 0; // time to next change from moving to stopped

void setup()
{
  pinMode(stp, OUTPUT);
  pinMode(dir, OUTPUT);
  pinMode(resolution1, OUTPUT);
  pinMode(resolution2, OUTPUT);
  pinMode(resolution3, OUTPUT);

  /* add setup code here */
  digitalWrite(resolution1, HIGH);
  digitalWrite(resolution2, HIGH);
  digitalWrite(resolution3, HIGH
    );
  digitalWrite(dir,HIGH);
  Serial.begin(115200);
}

void loop()
{
  state_change = millis() + random(min_random1,max_random1);
  Serial.println(state_change);
  Serial.println(millis());
  while(state_change >= millis())
  {
    digitalWrite(stp,HIGH);
    delay(1);
    digitalWrite(stp,LOW);
    delay(1);
  }
  state_change = millis() + random(min_random2,max_random2);
  while(state_change >= millis())
  {
    delay(1);
  }

}


