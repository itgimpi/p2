#include <bits/stdc++.h>
using namespace std;
// najserija pobeda, https://petlja.org/biblioteka/r/Zbirka2/najduza_serija_pobeda 

// BF, najgori, vreme O(n^3), mem. O(n)

int main() {
    int n; cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int naj = 0;

    for ( int l = 0; l < n; l++ ) {  
        for ( int d = l; d < n; d++) {
            bool pobede = true;
            for ( int  i = l; i <= d; i++)
                if (a[i]!=1) {
                    pobede = false;
                    break;
                }
            if (pobede) // sve pobede od l do d...
                naj = max(naj, d - l + 1);
        }
    }
    cout << naj;


    return 0;
}