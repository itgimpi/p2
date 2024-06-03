#include <bits/stdc++.h>
using namespace std;
// trimini
int t[8][8];
int rb = 1;

void trimini(int n, int r0, int k0, int rr, int kr) {
   
    if ( n > 1 )   {      // B.C. tabla bar 2x2...  
        // odredi koordinate centra, zbog deljenja na podprobleme
        int rc1 = r0 + n / 2 - 1;
        int kc1 = k0 + n / 2 - 1;
        int rc4 = r0 + n / 2;
        int kc4 = k0 + n / 2;

        // u kom kvadrantu fali polje?
        bool kv1 = rr <= rc1 && kr >= kc4; // prvom?
        bool kv2 = rr <= rc1 && kr <= kc1; // drugom?

        bool kv3 = rr >= rc4 && kr <= kc1; // trecem?
        bool kv4 = rr >= rc4 && kr >= kc4; // cetvrtom?

        // 1 log. prom. je T, ostale 3 su F
        if ( !kv1 ) // ako rupa nije u kvadrantu 1...
            t[rc1][kc4] = rb;
        if ( !kv2 ) // ako nije u kvadrantu 2...
            t[rc1][kc1] = rb;        
        if ( !kv3 ) // ako nije u kvadrantu 3...
            t[rc4][kc1] = rb;  
        if ( !kv4 ) // ako nije u kvadrantu 4...
            t[rc4][kc4] = rb; 

        rb++; // sledeci trimino
        // postavljen je 1 trimino u centru...

        // deli se problem na 4 podproblema...
        if ( kv1 ) // ako je rupa u prvom kvadrantu...
            trimini( n/2, r0, kc4, rr, kr);
        else // ako nije u 1. kv.
            trimini( n/2, r0, kc4, rc1, kc4);


        if ( kv2 ) // ako je rupa u drugom...
            trimini( n/2, r0, k0, rr, kr);
        else
            trimini( n/2, r0, k0, rc1, kc1);

        if ( kv3 ) // ako je rupa u trecem...
            trimini( n/2, rc4, k0, rr, kr);
        else 
            trimini( n/2, rc4, k0, rc4, kc1);

        if ( kv4 ) // ako je rupa u cetvrtom...
            trimini( n/2, rc4, kc4, rr, kr);
        else 
            trimini( n/2, rc4, kc4, rc4, kc4);     } }

int main() {
    int rr, kr; cin >> rr >> kr;
    int n = 8;
    //t[rr][kr] = rb++; // sl. r.b. je 1
    // n = 8 , pocetak, rupa, 1 
    trimini(n, 0, 0, rr, kr); // DC
    for (int i = 0; i < n; i++) {  
        for (int j = 0; j < n; j++)
            if ( t[i][j] == 0 ) cout << ' ';
            else cout << (char) ('a' - 1 + t[i][j]);
        cout << '\n'; } }

    
  

