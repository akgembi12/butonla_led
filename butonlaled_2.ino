int x=0;
int buton=0;
int kontrol;
void setup() {
  pinMode(D12, OUTPUT);
  pinMode(D13, INPUT);

}

void loop() {
  buton=digitalRead(D13);
  if (buton==1){
    if(x==0){
      digitalWrite(D12,HIGH);
      x=1;
    }
    else if(x==1){
      digitalWrite(D12,LOW); 
      x=0;
    }
    for (;buton!=0;)
    {
      buton=digitalRead(D13);
    }
  }
   delay(15);
}