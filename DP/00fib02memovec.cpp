#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

// Memoization using Vector

ull fib(int n, vector<ull>&memo){
    if (memo[n]!=-1) // za broj n je izracunat fib...
        return memo[n]; // vrati vrednost a ne pozivaj novu f-ju
    // nije izracunat fib. za m...
    if (n==0) return memo[0]=1; // upisi res. u mapu
    if (n==1) return memo[1]=1; // i vrati vrednost
    return memo[n] = fib(n-1, memo) + fib(n-2, memo);
}

int main() {
    int n; cin >> n;
    vector<ull>memo(n+1, -1); // -1, nije izracunato
    cout << fib(n, memo);
    return 0; }
