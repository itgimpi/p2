#include<stdio.h>
#include<stdlib.h>
int main() {
    int a = 5; int b = 10;
    int *pa = &a; int *pb = &b; 

    printf("%i %i\n", a, b);
    printf("%p %p\n", pa, pb);

    *pa = 50;
    *pb = 9;

    printf("%i %i\n", a, b);
    printf("%p %p\n", pa, pb);    
    return 0; }