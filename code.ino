/*feel free to contact
 * sreeramaj53@gmail.com
 * www.youtube.com/ZenoModiff
 * last updated - time 10:30 AM - date 14 December 2024
 * Github Link :-- https://github.com/Zenomodiff/Rotating-Table-
 */


 
#define EN 8
#define X_DIR 5
#define X_STP 2

int delayTime = 350;
int stps=6400;

void step(boolean dir, byte dirPin, byte stepperPin, int steps)
{
  digitalWrite(dirPin, dir);
  delay(0);
  for (int i = 0; i< steps; i++)
  {
    digitalWrite(stepperPin, HIGH);
    delayMicroseconds(delayTime);
    digitalWrite(stepperPin, LOW);
    delayMicroseconds(delayTime);
  }
}

void setup()
{
  pinMode(X_DIR, OUTPUT); pinMode(X_STP,OUTPUT);
  pinMode(EN, OUTPUT);
  digitalWrite(EN,LOW);
}
void loop()
{
  step(true, X_DIR, X_STP, stps);
  delay(0);
  step(true, X_DIR, X_STP, stps);
  delay(0);
}