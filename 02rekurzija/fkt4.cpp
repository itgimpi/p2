#include<bits/stdc++.h> // ZC rek
using namespace std;

// poziv repne rekurzije moze da bude i iz main-a

// i je brojac, n je granica za brojac, res je resenje, rezultat
int f1( int i, int n, int res){ // 3 arg, omogucavaju repnu rek.
    if ( i > n ) return res; // BC
    return f1( i + 1, n, res * i); // repna rekurzija
}

int main() {
    int n; cin >> n;

    cout << f1( 1, n, 1) << '\n';  // poziva f1 i postavlja pocetne vrednosti




    return 0; }