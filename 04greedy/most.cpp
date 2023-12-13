#include <bits/stdc++.h>
using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);     cin.tie(0);    cout.tie(0);

    int n; cin >> n;
    vector<int>v(n); // vremena

    for(int i = 0; i < n; i++) cin >> v[i]; // vremena

    sort( begin(v), end(v) );

    int res = 0; 

    while ( n > 0 ) { // sve dok ima za prelazak....
        if ( n == 1 ) { // samo 1
            res += v[0];
            n--; }

        else if ( n==2 ) { // ako su 2
            res += v[1];
            n -= 2; // n = 0
        }

        else if ( n==3 ) { // ako su 3
            res += v[0] + v[1] + v[2];
            n-=3; // n = 0
        }

        else { // dva slucaja
        // prvi: najbrzi prevodi 2 najsporija
            int v1 = 2*v[0] + v[n-1] + v[n-2];
        // drudi: 2 najbza prevode 2 najsporija
            int v2 = 2*v[1] + v[0] + v[n-1];
            res += min(v1, v2);
            n -= 2;
        }
    }

    cout << res;

    return 0;
}
