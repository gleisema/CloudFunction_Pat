int led = D6;


void myHandler(const char *event, const char *data);


void setup() {
	pinMode(led,OUTPUT);

	Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", myHandler);


}


void loop() {

}

void myHandler(const char *event, const char *data)    {
    
    if (strcmp(data,"wave")==0) {
        digitalWrite(led, HIGH);
        delay(500);
        digitalWrite(led, LOW);
        delay(500);
        
        digitalWrite(led, HIGH);
        delay(500);
        digitalWrite(led, LOW);
        delay(500);
        
        digitalWrite(led, HIGH);
        delay(500);
        digitalWrite(led, LOW);
        delay(500);
   }
   
       else if (strcmp(data,"pat")==0) {
        digitalWrite(led, HIGH);
        delay(3000);
        digitalWrite(led, LOW);
        delay(3000);

   }
 
   
}