//Far lampeggiare un LED. By mezi
void setup() { //Scrivi il codice nel "setup" per eseguirlo una sola volta
  pinMode (3,OUTPUT); //Connetti un resistore da 220 Ohm al pin 3 di Arduino e la parte più lunga del LED. Il restante pin connettilo al pin "GND"

}

void loop() {    //Scrivi il codice nel "loop" per eseguirlo all'infinito
 digitalWrite (3,HIGH);  //Ora si accende il LED
 delay (1000);          //Aspetta 1 secondo
 digitalWrite (3,LOW); //Ora si riaccende il LED
 delay (1000);        //Aspetta 1 secondo
}
