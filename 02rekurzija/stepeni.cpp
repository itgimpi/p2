#include<bits/stdc++.h> // ZC rek
using namespace std;

int stepen( int x, int n ) { // O(n)
    if ( n == 0 ) return 1; // BC, n==0
    return x * stepen(x, n-1); }

int stepen2( int x, int n) {
    if ( n == 0 ) return 1;
    //if ( n & 1 )
    if ( n % 2 == 1 ) // napar?
        return x * stepen2(x, n-1);
    return stepen2( x * x , n / 2); 
}

int main() {
    int x, n; cin >> x >> n;

    cout << stepen(x, n) << '\n'; 
    cout << stepen2(x, n) << '\n';




    return 0; }