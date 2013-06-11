
int step = 0;
int dir = 0;

int resolution1 = 0;
int resolution2 = 0;
int resolution3 = 0;

int max_limit1 = 0;
int max_limit2 = 0;
int min_limit1 = 0;
int min_limit2 = 0;

int max_delay = 0;
int min_delay = 0;
int current_delay = 0;

void setup()
{
	pinMode(step, OUTPUT);
	pinMode(dir, OUTPUT);
	pinMode(resolution1, OUTPUT);
	pinMode(resolution2, OUTPUT);
	pinMode(resolution3, OUTPUT);
	
  /* add setup code here */
	digitalWrite(resolution1, HIGH);
	digitalWrite(resolution2, HIGH);
	digitalWrite(resolution3, HIGH);

}

void loop()
{
	for(current_delay = max_delay; current_delay < min_delay; current_delay--)
	{
		delay(current_delay);
		digitalWrite(step, HIGH);
		delay(2);
		digitalWrite(step, LOW);
	}

	max_delay = random(max_limit1,max_limit2);

	for(current_delay = min_delay; current_delay > max_delay; current_delay++)
	{
		delay(current_delay);
		digitalWrite(step, HIGH);
		delay(2);
		digitalWrite(step, LOW);
	}

	min_delay = random(min_limit1,min_limit2);

  /* add main program code here */

}
