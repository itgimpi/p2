#include <bits/stdc++.h>
using namespace std;
int t[8][8]; // sve 0

void trimini(int n, int r0, int k0, int rr, int kr, int rbr) {
    if ( n > 1 ) { // BC, kvadrat je bar 2x2 da bi mogo da se deli...
        // odredi dva centralna polja
        int rc1 = r0 + n/2 - 1;
        int kc1 = k0 + n/2 - 1;
        int rc4 = r0 + n/2;
        int kc4 = k0 + n/2;

        // u kom kvadrantu fali polje?
        bool kv1 = rr <= rc1 && kr >= kc4 ; // prvi kvadrant?
        bool kv2 = rr <= rc1 && kr <= kc1 ; // drugi kvadrant? 
        bool kv3 = rr >= rc4 && kr <= kc1 ; // treci kvadrant? 
        bool kv4 = rr >= rc4 && kr >= kc4 ; // cetvrti kvadrant?                   



    }

}

int main() {
    int rr, kr; cin >> rr >> kr; // koordinate polja koje fali
    int rbr = 0;
    t[rr][kr] = rbr++; // rbr postane 1
    // n je 8, gornji levi ugao, rupa, rbr = 1
    trimini(8, 0, 0, rr, kr, rbr);
    // ispis...
    for (int i = 0; i < 8; i++) { 
        for (int j = 0; j < 8; j++)
            if ( t[i][j] == 0 ) cout << ' ';
            else cout << t[i][j];
        cout << endl; } }





 }

    
  

