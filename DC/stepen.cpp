#include <bits/stdc++.h>
using namespace std;
// y = x ^ n

int stepen(int x, int n){ // rec M(n), O(n)
    if ( n == 0 ) return 1;
    return stepen( x, n-1 ) * x; }

int stepen2(int x, int n){ // O(n)
    int res = 1;
    for ( int i = 0; i < n; i++)
        res *= x;
    return res; }



int stepen3(int x, int n){ // rec, O(log n)
    if ( n == 0 ) return 1;
    if ( n % 2 == 0 ) // stepen je paran
        return stepen3(x * x, n/2);
    return stepen3(x, n-1) * x; }


int stepen4(int x, int n){ // O(log n)
    int res = 1;
    while ( n > 0 ) {
        if ( n % 2 == 0 ) {
            x = x * x;
            n = n / 2; }
        else {
            res = res * x;
            n--; } }
    return res; }

int main() {
    int x, n; cin >> x >> n;
    cout << stepen4(x, n);
    return 0; }
