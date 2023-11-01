#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, a;
    cin >> n;
    set<ull> skup;
    for(int i = 0; i < n; i++) {
        cin >> a;
        skup.insert(a);
    }
    cout << skup.size() << endl;
    return 0;
}
