
const int led = 13;
const int buz = 8;
String text="";


int unit_delay = 60;   //can change the delay 
void dot()
{
Serial.print(".");
digitalWrite(led, HIGH);
digitalWrite(buz, HIGH);
delay(unit_delay);
digitalWrite(led, LOW);
digitalWrite(buz, LOW);
delay(unit_delay);
}
void dash()
{
Serial.print("-");
digitalWrite(led, HIGH);
digitalWrite(buz, HIGH);
delay(unit_delay * 3);
digitalWrite(led, LOW);
digitalWrite(buz, LOW);
delay(unit_delay);
}

void A()
{
dot();

dash();

}
void B()
{
dash();
 
dot();
 
dot();
 
dot();
 
}
void C()
{
dash();
 
dot();
 
dash();
 
dot();
 
}
void D()
{
dash();
 
dot();
 
dot();
 
}
void E()
{
dot();
 
}
void f()
{
dot();
 
dot();
 
dash();
 
dot();
 
}
void G()
{
dash();
 
dash();
 
dot();
 
}
void H()
{
dot();
 
dot();
 
dot();
 
dot();
 
}
void I()
{
dot();
 
dot();
 
}
void J()
{
dot();
 
dash();
 
dash();
 
dash();
 
}
void K()
{
dash();
 
dot();
 
dash();
 
}
void L()
{
dot();
 
dash();
 
dot();
 
dot();
 
}
void M()
{
dash();
 
dash();
 
}
void N()
{
dash();
 
dot();
 
}
void O()
{
dash();
 
dash();
 
dash();
 
}
void P()
{
dot();
 
dash();
 
dash();
 
dot();
}
void Q()
{
dash();
 
dash();
 
dot();
 
dash();
 
}
void R()
{
dot();
 
dash();
 
dot();
 
}
void S()
{
dot();
 
dot();
 
dot();
 
}
void T()
{
dash();
 
}
void U()
{
dot();
 
dot();
 
dash();
 
}
void V()
{
dot();
 
dot();
 
dot();
 
dash();
 
}
void W()
{
dot();
 
dash();
 
dash();
 
}
void X()
{
dash();
 
dot();
 
dot();
 
dash();
 
}
void Y()
{
dash();
 
dot();
 
dash();
 
dash();
 
}
void Z()
{
dash();
 
dash();
 
dot();
 
dot();
 
}
void one()
{
dot();
 
dash();
 
dash();
 
dash();
 
dash();
 
}
void two()
{
dot();
 
dot();
 
dash();
 
dash();
 
dash();
 
}
void three()
{
dot();
 
dot();
 
dot();
 
dash();
 
dash();
 
}
void four()
{
dot();
 
dot();
 
dot();
 
dot();
 
dash();
 
}
void five()
{
dot();
 
dot();
 
dot();
 
dot();
 
dot();
 
}
void six()
{
dash();
 
dot();
 
dot();
 
dot();
 
dot();
 
}
void seven()
{
dash();
 
dash();
 
dot();
 
dot();
 
dot();
 
}
void eight()
{
dash();
 
dash();
 
dash();
 
dot();
 
dot();
 
}
void nine()
{
dash();
 
dash();
 
dash();
 
dash();
 
dot();
 
}
void zero()
{
dash();
 
dash();
 
dash();
 
dash();
 
dash();
 
}

void morse(String textcon)
{
    int len;
    char c;
    len=textcon.length();
    textcon.toLowerCase();
    for(int i=0;i<len;i++)
    {
        c=textcon[i];

        if(c==' ')
        {
            Serial.print("| ");;
            delay(7*unit_delay);

        }
        else
        {
           
        switch (c)
        {
        case 'a':
            A();
            Serial.print(" ");
            break;

        case 'b':
            B();
            Serial.print(" ");
            break; 

        case 'c':
            C();
            Serial.print(" ");
            break;    

        case 'd':
            D();
            Serial.print(" ");
            break;
        case 'e':
            E();
            Serial.print(" ");
            break;                   
        case 'f':
            f();
            Serial.print(" ");
            break;

        case 'g':
            G();
            Serial.print(" ");
            break;

        case 'h':
            H();
            Serial.print(" ");
            break;
        case 'i':
            I();
            Serial.print(" ");
            break;

        case 'j':   
            J();
            Serial.print(" ");
            break;

        case 'k':
            K();
            Serial.print(" ");
            break;

        case 'l':
            L();
            Serial.print(" ");
            break;

        case 'm':
            M();
            Serial.print(" ");
            break;

        case 'n':
            N();
            Serial.print(" ");
            break;

        case 'o':
            O();
            Serial.print(" ");
            break;

        case 'p':
            P();
            Serial.print(" ");
            break;

        case 'q':
            Q();
            Serial.print(" ");
            break;

        case 'r':
            R();
            Serial.print(" ");
            break;

        case 's':
            S();
            Serial.print(" ");
            break;

        case 't':
            T();
            Serial.print(" ");
            break;

        case 'u':
            U();
            Serial.print(" ");
            break;

        case 'v':
            V();
            Serial.print(" ");
            break;

        case 'w':
            W();
            Serial.print(" ");
            break;

        case 'x':
            X();
            Serial.print(" ");
            break;

        case 'y':
            Y();
            Serial.print(" ");
            break;    

        case 'z':
            Z();
            Serial.print(" ");
            break;

        case '0':
            zero();
            Serial.print(" ");
            break;

        case '1':
            one();
            Serial.print(" ");
            break;

        case '2':
            two();
            Serial.print(" ");
            break;

        case '3':
            three();
            Serial.print(" ");
            break;    

        case '4':
            four();
            Serial.print(" ");
            break;

        case '5':
            five();
            Serial.print(" ");
            break;

        case '6':
            six();
            Serial.print(" ");
            break;

        case '7':
            seven();
            Serial.print(" ");
            break;

        case '8':
            eight();
            Serial.print(" ");
            break;

        case '9':
            nine();
            Serial.print(" ");
            break;

        }
        

        if(textcon[i+1]==' ')
        delay(0);
        else
        delay(unit_delay * 3);
        

        }
    }

}
void setup() {
Serial.begin(9600);
pinMode(led, OUTPUT);
pinMode(buz, OUTPUT);
Serial.println("I am ready...");
}
void loop() {
while (Serial.available())
{
text = Serial.readString();
Serial.print(text);
Serial.print(" = ");
morse(text);
Serial.println("");
}
delay(1000);
}
