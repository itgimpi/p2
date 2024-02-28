#include<stdio.h>
// deka -> bin, ovi primeri se preporucuju.

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

void dec2bin(unsigned x){
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

int main(){
    int n; scanf("%d", &n);
    naopako(n);
    dec2bin(n);
    return 0;
}