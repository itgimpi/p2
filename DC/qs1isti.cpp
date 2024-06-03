#include <bits/stdc++.h>
using namespace std;
// Quick Select, 
// k manjih (i jednaki) skroz levo

void qselect( vector<int>&a, int l, int d, int k) {
    if ( k <= 0 || l >= d ) return; // BC
    int m = l; // broj manjih od pivota, init. m = 0
    for ( int i = l + 1; i <= d; i++ ) // poredi pivota i ostale
        if (a[i] <= a[l]) // manji ili jednak, ide levo
            swap(a[++m], a[i]);
    swap(a[l], a[m]); // pivot ide na svoje mesto
    // svih k elemenata je levo od pivota?
    if ( k < m - l + 1 ) // bar k el. je levo od pivota
        qselect(a, l, m - 1, k);
    // nisu svi levo...
    else if ( k > m - l + 1 )
        qselect(a, m + 1, d, k - ( m - l + 1 ));


    return; 
}

int main() {
    int k; cin >> k; // k = 1, 2, 3, ...
    vector<int>a = {5, 2, 1, 9, 2, 2, 2, 3, 6};
    qselect(a, 0, a.size()-1, k); // a, l, d, k
    // for ( int i = 0; i < a.size(); i++ ) cout << a[i] << ' ';
    cout << a[k-1];

    return 0; }
