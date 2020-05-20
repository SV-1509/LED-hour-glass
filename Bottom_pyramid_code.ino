void setup() {
  // put your setup code here, to run once:
pinMode(0,OUTPUT);
pinMode(1,OUTPUT);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);
pinMode(13,OUTPUT);
pinMode(14,OUTPUT);
pinMode(15,OUTPUT);
pinMode(16,OUTPUT);
pinMode(17,OUTPUT);
pinMode(18,OUTPUT);
pinMode(19,OUTPUT);
}
void def()
{
  digitalWrite(0,LOW);
     digitalWrite(1,HIGH);
     digitalWrite(2,LOW);
     digitalWrite(3,LOW);
     digitalWrite(4,HIGH);
     digitalWrite(5,HIGH);
     digitalWrite(6,HIGH);
     digitalWrite(7,HIGH);
     digitalWrite(8,HIGH);
     digitalWrite(9,LOW);
     digitalWrite(10,LOW);
     digitalWrite(11,LOW);
     digitalWrite(12,HIGH);
     digitalWrite(13,HIGH);
     digitalWrite(14,HIGH);
     digitalWrite(15,HIGH);
     digitalWrite(16,LOW);
     digitalWrite(17,LOW);
     digitalWrite(18,LOW);
     digitalWrite(19,LOW);
     delay(500);

}
void o()
{
  digitalWrite(0,HIGH);
  digitalWrite(1,LOW);
  delay(100);
  digitalWrite(0,LOW);
     digitalWrite(1,HIGH);
}
void of()
{
  digitalWrite(0,HIGH);
  digitalWrite(1,LOW);
  delay(1000);
  
}
void tl1()
{
  digitalWrite(2,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  delay(100);
  digitalWrite(2,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
}
void tl1f()
{
  digitalWrite(2,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  delay(100);
  
}
void tl2()
{
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  delay(100);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
}
void t()
{
  digitalWrite(3,HIGH);
   digitalWrite(2,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  delay(100);
}
void trl1()
{
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  delay(100);
   digitalWrite(6,HIGH);
     digitalWrite(7,HIGH);
     digitalWrite(8,HIGH);
     digitalWrite(9,LOW);
     digitalWrite(10,LOW);
     digitalWrite(11,LOW);
}
void trl1f()
{
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  delay(100);
   
}
void trl2()
{
  digitalWrite(6,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  delay(100);
   digitalWrite(6,HIGH);
     digitalWrite(7,HIGH);
     digitalWrite(8,HIGH);
     digitalWrite(9,LOW);
     digitalWrite(10,LOW);
     digitalWrite(11,LOW);
}
void trl3()
{
  digitalWrite(6,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  delay(100);
   digitalWrite(6,HIGH);
     digitalWrite(7,HIGH);
     digitalWrite(8,HIGH);
     digitalWrite(9,LOW);
     digitalWrite(10,LOW);
     digitalWrite(11,LOW);
}
void tr12()
{
 digitalWrite(11,HIGH);
     digitalWrite(10,HIGH);
     digitalWrite(9,HIGH);
     digitalWrite(8,HIGH);
     digitalWrite(7,LOW);
     digitalWrite(6,LOW);
     delay(100); 
}
void tr()
{
 digitalWrite(11,HIGH);
     digitalWrite(10,HIGH);
     digitalWrite(9,HIGH);
     digitalWrite(8,LOW);
     digitalWrite(7,LOW);
     digitalWrite(6,LOW);
     delay(100); 
}
void f1()
{
  digitalWrite(13,HIGH);
  digitalWrite(14,HIGH);
  digitalWrite(15,HIGH);
  digitalWrite(12,LOW);
  digitalWrite(16,HIGH);
  digitalWrite(17,HIGH);
  digitalWrite(18,HIGH);
  digitalWrite(19,HIGH);
  delay(100);
}
void f12()
{
  digitalWrite(13,LOW);
  digitalWrite(14,HIGH);
  digitalWrite(15,HIGH);
  digitalWrite(12,LOW);
  digitalWrite(16,HIGH);
  digitalWrite(17,HIGH);
  digitalWrite(18,HIGH);
  digitalWrite(19,HIGH);
  delay(100);
}
void f123()
{
  digitalWrite(13,LOW);
  digitalWrite(14,LOW);
  digitalWrite(15,HIGH);
  digitalWrite(12,LOW);
  digitalWrite(16,HIGH);
  digitalWrite(17,HIGH);
  digitalWrite(18,HIGH);
  digitalWrite(19,HIGH);
  delay(100);
}
void f()
{
  digitalWrite(13,LOW);
  digitalWrite(14,LOW);
  digitalWrite(15,LOW);
  digitalWrite(12,LOW);
  digitalWrite(16,HIGH);
  digitalWrite(17,HIGH);
  digitalWrite(18,HIGH);
  digitalWrite(19,HIGH);
  delay(100);
}

void loop() {
  // put your main code here, to run repeatedly:
def();
o();
tl1();
trl1();
f1();
o();
tl1();
trl2();
f12();
o();
tl2();
trl2();
f123();
o();
tl2();
trl3();
f();
o();
tl1();
trl1f();
o();
tl2();
tr12();
o();
tl2();
tr();
o();
tl1f();
o();
t();
of();

   
    }
