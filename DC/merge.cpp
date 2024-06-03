#include <bits/stdc++.h>
using namespace std;
// merge sort
// spajanje dva SORTIRANA niza, BC n = 1
//                          od     do                         
void spoji( vector<int>&a, int i, int m, // dva sortirana niza
            vector<int>&b, int j, int n,
            vector<int>&c, int k) {
    while ( i <= m && j <= n ) 
        c[k++] = a[i] < b[j] ? a[i++] : b[j++];
    while ( i <= m )
        c[k++] = a[i++];
    while ( j <= n )
        c[k++] = b[j++]; }

void podeli(vector<int>&a, int l, int d, vector<int>&tmp) {
    // ako je ispunjen uslov, podeli niz otprilike na pola
    if ( l < d ) { // BC, ima bar 2 elementa
        // int s = ( l + d ) / 2, aritmeticka sredina
        int s = l + ( d - l ) / 2; // izbegava se prekoracenje prilikom sabiranja
        // deljenje...
        podeli(a, l, s, tmp); // leva polovina niza
        podeli(a, s + 1, d, tmp); // desna
        spoji(a, l, s, a, s+1, d, tmp, l); // rezultat ide u tmp...
        for (int i = l; i <= d; i++)
            a[i] = tmp[i];  }

}

int main() {
    //int n; cin >> n;
    vector<int>a = {23, 1, 456, 2, 567, 6, 87, 1, 4, 24, 2};
    int n = a.size();
    vector<int>tmp(n);
    podeli(a, 0, n - 1, tmp);
    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
    return 0; }
