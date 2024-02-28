#include<stdio.h>
// deka -> bin, ovi primeri se ne preporucuju!!!!!!!

long long deka2bin(int n) { // sa koracima
    long long res = 0;
    int ost, stepen = 1, korak = 1;
    while ( n > 0 ) {
        ost = n % 2;
        n /= 2;
        printf("%d %d %d\n", korak, n, ost);
        korak++;
        res += ost * stepen;
        stepen *= 10; }
    return res; }

long long deka2bin2(int n) { // krace, bez koraka
    long long res = 0;
    int ost, stepen = 1;
    while ( n > 0 ) {
        ost = n % 2;
        n /= 2;
        res += ost * stepen;
        stepen *= 10; }
    return res; }

int main(){
    int n; scanf("%d", &n);
    printf("%lld\n", deka2bin(n));
    printf("%lld\n", deka2bin2(n));
    return 0;
}