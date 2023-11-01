#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m, i, j, k;
    cin >> n;
    vector<int> an(n);
    for(i = 0; i < n; i++) {
        cin >> an[i];
    }
    cin >> m;
    vector<int> am(m);
    for(i = 0; i < m; i++) {
        cin >> am[i];
    }
    vector<int> p(n+m);
    i = 0; j = 0; k = 0;
    while(i < n && j < m) {
        if(an[i] < am[j]) {
            p[k++] = an[i++];
        }
        else {
            p[k++] = am[j++];
        }
    }
    while(i < n) {
        p[k++] = an[i++];
    }
    while(j < m) {
        p[k++] = am[j++];
    }
    for(i = 0; i < n+m; i++) {
        cout << p[i] << ' ';
    }
    return 0;
}
