#define LEDRGB_RED     PA8
#define LEDRGB_GREEN   PA15
#define LEDRGB_BLUE    PB3

void setup() {
  pinMode(LEDRGB_RED, OUTPUT);
  pinMode(LEDRGB_GREEN, OUTPUT);
  pinMode(LEDRGB_BLUE, OUTPUT);
  SerialUSB.begin(115200);
  delay(5000);  //Tiempo de espera para abrir el Terminal Serial
  SerialUSB.println("Hello World - USB CDC !!!");
}

void loop() {
  SerialUSB.println("LED RED");
  digitalWrite(LEDRGB_RED, LOW);   
  digitalWrite(LEDRGB_GREEN, HIGH);
  digitalWrite(LEDRGB_BLUE, HIGH);   
  delay(500); 
  SerialUSB.println("LED GREEN");
  digitalWrite(LEDRGB_RED, HIGH);   
  digitalWrite(LEDRGB_GREEN, LOW);
  digitalWrite(LEDRGB_BLUE, HIGH);   
  delay(500); 
  SerialUSB.println("LED BLUE");
  digitalWrite(LEDRGB_RED, HIGH);   
  digitalWrite(LEDRGB_GREEN, HIGH);
  digitalWrite(LEDRGB_BLUE, LOW);   
  delay(500); 
}
