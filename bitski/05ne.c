#include<stdio.h>
// bitska negacija
void ispis(unsigned); // deklaracija f-ja

int main(){
    unsigned x = 123;
    ispis(x);  // ...01111011
    ispis(~x); // ...10000100, nepotpun komplement

    unsigned nula = 0; ispis(nula); // 32 nule, sve nule
    unsigned sve1 = ~nula; // 32 jedinice, sve jedinice
    ispis(sve1);

    int n = 10; // broj bitova
    unsigned n0desno = sve1 << n; ispis(n0desno); // pomeri za 10 mesta ulevo
    // na to primeni nepotpun komplement
    unsigned n1desno = ~n0desno; ispis(n1desno);
    int p = 20; // pozicija
    // pomeri 20 - 10 + 1 = 11 mesta ulevo
    unsigned novo = n1desno << p - n + 1; ispis(novo); // n 1 od p-te pozicije
    return 0;
}





void ispis(unsigned x){ // definicija f-je
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