#include <bits/stdc++.h>
using namespace std;
// Intro to Quick Select, 
// veci (i jednaki) levo, manji desno, >=
// Single Iteration

void qs_single( vector<int>&a, int l, int d) {
    // pivot je prvi element a[l]
    int m = l; // broj manjih od pivota, init. m = 0
    for ( int i = l + 1; i <= d; i++ ) // poredi pivota i ostale
        if (a[i] >= a[l]) // manji ili jednak, ide levo
            swap(a[++m], a[i]);
    //for ( int i = 0; i < a.size(); i++ ) cout << a[i] << ' '; cout << endl;
    swap(a[l], a[m]); // pivot ide na svoje mesto
    return; 
}

int main() {
    vector<int>a = {5, 2, 1, 9, 8, 7, 4, 3, 6};
    qs_single(a, 0, a.size()-1); // a, l, d
    for ( int i = 0; i < a.size(); i++ ) cout << a[i] << ' ';

    return 0; }
