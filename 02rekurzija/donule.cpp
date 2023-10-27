#include<bits/stdc++.h> // ispis unazad
using namespace std;

int donule( int n ) {
    int x; cin >> x;
    if ( x != 0 ) // Base case
        return donule( n + 1 );

    return n; } 

int main() {
    cout << donule(0); // brojac se postavlja na 0

    return 0; }