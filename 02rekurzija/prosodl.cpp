#include<bits/stdc++.h> // ZC rek
using namespace std;

void ispis( int n ) {
    if ( n >= 0 ) { // obrnuta logika
        
        ispis( n - 1 ); 
        cout << n << endl;
        
        } }

int main() {
    int n; cin >> n;


    ispis(n); cout << '\n';
    //ispis2( n ); cout << '\n';
    return 0; }