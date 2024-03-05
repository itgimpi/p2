#include <bits/stdc++.h>
using namespace std;

// Fib Rec.

int fib(int n){
    if ( n==0 || n==1 ) // BC, n < 2
        return 1;
    return fib(n-1)+fib(n-2); // RC
}

int main() {
    int n; cin >> n;
    cout << fib(n);
    return 0; }
