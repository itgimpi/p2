#include <bits/stdc++.h>
using namespace std;
// Knapsack 0/1 Rec. solution

int ranac(int m[], int v[], int k, int n) {
    // problem se smanjuje...
    if ( n == 0 || // nema vise predmeta?
         k == 0 )  // nema vise mesta?
        return 0;
    // predmet koji se posmatra n-1-i ne moze u ranac?
    if (m[n-1] > k)
        return ranac(m, v, k, n-1); // bez n-1-og
    // ostaju 2 slucaja, n-1-i predmet moze da se koristi ili ne
    return max(
        ranac(m,v,k-m[n-1],n-1) + v[n-1], // koristi se
        ranac(m,v,k,n-1) ); // ne koristi se zadnji
}




int main() {
    //ios_base...
    //           0   1   2
    int vre[] = {60, 100, 120}; // vrednosti, vectors
    int mas[] = {10, 20, 30};   // mase, zapremine, vectors
    int kap = 50;             // kapacitet ranca
    int n = 3;               // br. pred.

    cout << ranac(mas, vre, kap, n);

    return 0; }
