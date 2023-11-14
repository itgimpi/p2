#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    vector<int>ps(n+1); // zbog ps[0]=0;

    ps[0]=0;

    for ( int i = 1; i <= n; i++ ) {
        int el; cin >> el;
        ps[i] = ps[i-1] + el;
    }

    // spremni za upite
    int q; cin >> q;

    while (q--) {
        int l, d; cin >> l >> d; // od l do d
        cout << ps[d+1] - ps[l] << '\n';

    }


    return 0;
}
