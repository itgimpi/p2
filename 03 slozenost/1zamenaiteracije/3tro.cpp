#include<bits/stdc++.h>
using namespace std;

unsigned long long red ( unsigned long long k ) {
    return (2 * k  - 1) * (  k * k - k + 1); }  

int main() {
    //ios_base::sync_with_stdio(false); cin.tie(0);
    unsigned long long n; scanf("%llu", &n);
    for (unsigned long long i = 0; i < n; i++) {
        unsigned long long k;
        scanf("%llu", &k);
        printf("%llu\n", red(k));     }



    return 0; }