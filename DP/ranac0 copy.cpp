#include <bits/stdc++.h>
using namespace std;
// Knapsack 0/1 BF solution

int ranac(int m[], int v[], int k, int n) {
    int res = 0;
    int brv = 1;
    for (int i = 0; i < n; i++) brv *= 2; // 2 na n

    for ( int i = 0; i < brv; i++ ) { // za sve moguce varijacije...
        int ii = i; 
        int rb = 0;
        int sv = 0, sm = 0;
        while ( ii ) {
            int postoji = ii & 1;
            if (postoji) {
                sv += v[rb]; 
                sm += m[rb]; 
            }
        ii >>= 1;
        rb++;
        }
        if (sm<=k && sv > res) res = sv; }
    return res; }




int main() {
    //ios_base...
    //           0   1   2
    int vre[] = {6, 10, 12}; // vrednosti, vectors
    int mas[] = {1, 2, 3};   // mase, zapremine, vectors
    int kap = 5;             // kapacitet ranca
    int n = 3;               // br. pred.

    cout << ranac(mas, vre, kap, n);

    return 0; }
