#include <bits/stdc++.h>
using namespace std;
// najserija pobeda, https://petlja.org/biblioteka/r/Zbirka2/najduza_serija_pobeda 

// BF, malo bolji, vreme O(n^2), mem. O(n)

int main() {
    int n; cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int naj = 0;

    for (int l = 0; l < n; l++) {
        int duz = 0;
        for ( int d = l; d < n && a[d] == 1; d++ ) 
            duz++;
        naj = max(naj, duz);
    }

    cout << naj;


    return 0;
}