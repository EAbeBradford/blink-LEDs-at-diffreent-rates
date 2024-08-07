#define RED_LED 8
#define GREEN_LED 2


boolean redOn = true;
boolean greenOn = true;

unsigned long prevTimeRed = 0;
unsigned long delayRed = 470;

unsigned long prevTimeGreen = 0;
unsigned long delayGreen = 430;

void setup() {
  // put your setup code here, to run once:
  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  unsigned long currTime = millis();
  //blink red led
  if(currTime-prevTimeRed > delayRed){
    if(redOn){
      digitalWrite(RED_LED, HIGH);
      redOn = false;
    } else {
      digitalWrite(RED_LED, LOW);
      redOn = true;
    }
    prevTimeRed += delayRed;
  }


  //blink green led
  if(currTime-prevTimeGreen > delayGreen){
    if(greenOn){
      digitalWrite(GREEN_LED, HIGH);
      greenOn = false;
    } else {
      digitalWrite(GREEN_LED, LOW);
      greenOn = true;
    }
    prevTimeGreen += delayGreen;
  }


}
