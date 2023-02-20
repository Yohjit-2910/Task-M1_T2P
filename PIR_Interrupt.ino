// Documentation
// Name : Yohjit Chopra
// Roll No. 2110994798

int SensorPIR = 2;
bool State = false;

void setup()
{
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(SensorPIR, INPUT);

  attachInterrupt(digitalPinToInterrupt(SensorPIR), swap, CHANGE);
}

void loop()
{
  delay(100);
}

void swap()
{
  State = !State;
  digitalWrite(LED_BUILTIN, State);
  Serial.println("Interrupted");
}
