#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

// Memoization using Map

ull fib(int n, unordered_map<int,ull>&memo){
    auto it = memo.find(n);
    if (it!=memo.end()) // za taj broj je izracunat fib...
        return it->second; // vrati vrednost a ne pozivaj novu f-ju
    // nije izracunat fib. za m...
    if (n==0) return memo[0]=1; // upisi res. u mapu
    if (n==1) return memo[1]=1; // i vrati vrednost
    return memo[n] = fib(n-1, memo) + fib(n-2, memo);
}

int main() {
    int n; cin >> n;
    unordered_map<int, ull>memo; // n -> fib(n), O(1)
    cout << fib(n, memo);
    return 0; }
