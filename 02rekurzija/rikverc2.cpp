#include<bits/stdc++.h> // ispis unazad
using namespace std;

void ispis( int n ) {
    if ( n >= 0 ) {
        cout << n << endl;
        ispis( n-1 ); }



}



int main() {
    int n; cin >> n;

    ispis(n); cout << '\n';

    return 0; }