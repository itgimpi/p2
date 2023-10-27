#include<bits/stdc++.h> // ZC rek
using namespace std;

int zc( int n ) {
    //cout << n << ' ' << n / 10 << ' ' << n % 10 << '\n';
    if ( n == 0 ) // BC
        return 0;
    return zc( n / 10 ) + n % 10; // REC
}

int bc( int n ) {
    if ( n < 10 ) // BC
        return 1;
    return bc( n / 10 ) + 1; // REC
}

void f( int n ) {
    if ( n == 0 ) return;

    cout << n%10;
    f(n/10);
}

int main() {
    int n; cin >> n;

    cout << zc(n) << '\n'; 
    cout << bc(n) << '\n'; 

    f(n);

    return 0; }