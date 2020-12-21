#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>

int unit_delay=200;
char text[]="";

void dash()
{
    printf("-");
    Sleep(unit_delay*3);
    
     
}

void dot()
{
     printf(".");
     Sleep(unit_delay);
     
    
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

void morse(char textcon[])
{
    int len;
    char c;
    len=strlen(textcon);
    
    for(int i=0;i<len;i++)
    {
        c=tolower(textcon[i]);

        if(c==' ')
        {
            printf("| ");
            Sleep(unit_delay*7);

        }
        else
        {
           
        switch (c)
        {
        case 'a':
            A();
            printf(" ");
            break;

        case 'b':
            B();
            printf(" ");
            break; 

        case 'c':
            C();
            printf(" ");
            break;    

        case 'd':
            D();
            printf(" ");
            break;
        case 'e':
            E();
            printf(" ");
            break;                   
        case 'f':
            f();
            printf(" ");
            break;

        case 'g':
            G();
            printf(" ");
            break;

        case 'h':
            H();
            printf(" ");
            break;
        case 'i':
            I();
            printf(" ");
            break;

        case 'j':   
            J();
            printf(" ");
            break;

        case 'k':
            K();
            printf(" ");
            break;

        case 'l':
            L();
            printf(" ");
            break;

        case 'm':
            M();
            printf(" ");
            break;

        case 'n':
            N();
            printf(" ");
            break;

        case 'o':
            O();
            printf(" ");
            break;

        case 'p':
            P();
            printf(" ");
            break;

        case 'q':
            Q();
            printf(" ");
            break;

        case 'r':
            R();
            printf(" ");
            break;

        case 's':
            S();
            printf(" ");
            break;

        case 't':
            T();
            printf(" ");
            break;

        case 'u':
            U();
            printf(" ");
            break;

        case 'v':
            V();
            printf(" ");
            break;

        case 'w':
            W();
            printf(" ");
            break;

        case 'x':
            X();
            printf(" ");
            break;

        case 'y':
            Y();
            printf(" ");
            break;    

        case 'z':
            Z();
            printf(" ");
            break;

        case '0':
            zero();
            printf(" ");
            break;

        case '1':
            one();
            printf(" ");
            break;

        case '2':
            two();
            printf(" ");
            break;

        case '3':
            three();
            printf(" ");
            break;    

        case '4':
            four();
            printf(" ");
            break;

        case '5':
            five();
            printf(" ");
            break;

        case '6':
            six();
            printf(" ");
            break;

        case '7':
            seven();
            printf(" ");
            break;

        case '8':
            eight();
            printf(" ");
            break;

        case '9':
            nine();
            printf(" ");
            break;

        }

        if (textcon[i+1]==' ')
        {
            Sleep(0);
        }

        
        else
        
        
        Sleep(unit_delay*3);

        }
    }

}






int main()
{   
    printf("________________________________________________Text to morse code convertor__________________________________________\n");
    printf("enter text:");
    gets(text);
    printf("\nMorse code: ");
    morse(text);
    return 0;


}