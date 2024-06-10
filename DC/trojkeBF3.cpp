#include <bits/stdc++.h>
using namespace std;
// broj sortiranih trojki, malo bolje, 

int main() {
    int n; cin >> n;
    vector<int>a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    long long int res = 0;

    for ( int s = 1; s < n-1; s++ ) {
        int ml = 0; // broj manjih levo
        for ( int l = 0; l < s; l++ )
            if ( a[l] < a[s] )
                ml++;
        int vd = 0; // broj vecih desno
        for ( int d = s+1; d < n; d++ )
            if ( a[s] < a[d] )
                vd++;
        res = ( res + ml * vd ) % 1000000000;
    }

    
    cout << res;
    

    return 0; }
