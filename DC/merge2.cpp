#include <bits/stdc++.h>
using namespace std;
// merge sort
// spajanje dva SORTIRANA niza, BC n = 1
//                                 od     do                         
void spajanje ( vector <int> &a, int i, int m, // prvi sortirani niz
                vector <int> &b, int j, int n, // drugi sortirani niz
                vector <int> &c, int k) { // rezultujuci sortirani niz
    // spajanje nizova a i b...
    while ( i <= m && j <= n ) // sve dok se u nekom ne stigne do kraja...
        c[k++] = a[i] < b[j] ? a[i++] : b[j++];
    // jedan od 2 niza je do kraja...
    while (i <= m)
        c[k++] = a[i++];
    while (j <= n)
        c[k++] = b[j++]; }



// deljenje niza a na otprilike 2 polovine
void msort(vector <int> &a, int l, int d, vector <int> &tmp) {
    // niz se polovi sve dok ima bar 2 elementa
    if ( l < d ) { // bar 2 el.?
        // odredi sredinu za l i d...
        // s = (l + d) / 2
        int s = l + ( d - l ) / 2;
        // deljenje...
        msort(a, l, s, tmp); // prva polovina
        msort(a, s+1, d, tmp); // druga polovina
        spajanje(a, l, s, a, s+1, d, tmp, l);
        // deo tmp niza od l do d se upisuje u a...
        for (int i = l; i <= d; i++)
            a[i] = tmp[i];    } }

int main() {
    //int n; cin >> n;
    vector<int>a = {23, 1, 456, 2, 567, 6, 87, 1, 4, 24, 2, 23, 45, 1, 3, 7};
    int n = a.size();
    vector<int>tmp(n);
    msort(a, 0, n-1, tmp);
    for (int i = 0; i < n; i++) cout << a[i] << ' ';
    return 0; }
