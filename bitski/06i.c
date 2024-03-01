#include<stdio.h>
#define CLRBIT(x,i) (x &= ~(1 << i))
// i-ti bit postavlja na 0 (Clear Bit)
void ispis(unsigned);
// bitsko i, bitska konjukcija, conjunction



int main(){
    unsigned x = 123, y = 124, z = 125;
    ispis(x); ispis(y); ispis(z);

    // neparni brojevi imaju krajnji desni bit 1, parni 0
    if ( x % 2 == 1 ) printf ("nepar"); // sporije
    if ( x & 1 == 1 ) printf ("nepar\n"); // najbrze

    unsigned maska1 = 0b1111; // 4 jedinice krajnje desno
    ispis(x); ispis(maska1);
    // citanje zadnja 4 bita 
    unsigned zadnja4 = x & maska1; ispis(zadnja4);


    unsigned broj = 123456789; ispis(broj);
    // citanje odabranih bitova
    unsigned maska2 = 0b00000000000000111100111100110011; ispis(maska2);
    unsigned rez = broj & maska2; ispis(rez);

    // postavljanje odredjenih bitova na 0
    unsigned maska3 = 0b011111111; // postavlja 24 leva bita na 0, desnih 8 ne menja
    ispis(broj & maska3);
    // postavlja krajnje desni bit na 0(nulti), leve ne dira
    unsigned nulti0 = broj & 0b1111111111111111111111111111111110; ispis(nulti0);
    // postavlja prvi...
    unsigned prvi0 = broj &  0b1111111111111111111111111111111101; ispis(prvi0);
    // postavlja drugi...
    unsigned drugi0 = broj & 0b1111111111111111111111111111111011; ispis(drugi0);
    ispis(broj); CLRBIT(broj,20); ispis(broj);    
    return 0;
}





void ispis(unsigned x){
    int vel = sizeof( unsigned int ) * 8; // int vel = 32;
    
    unsigned int maska = 1 << vel-1; // 1000...000
    for (; maska != 0; maska >>= 1)
        putchar(maska & x ? '1' : '0');
        /*if ( maska & x == 1) 
            putchar('1');
        else
            putchar('0');}*/
    putchar('\n');
}

void naopako(unsigned x){
    //int vel = sizeof( unsigned int ) * 8;
    int vel = 32;
    unsigned int maska = 1;
    for (; maska != 0; maska <<= 1)
        putchar(maska & x ? '1' : '0');
        {if ( maska & x == 1) 
            putchar('1');
        else
            putchar('0');}
    putchar('\n');
}