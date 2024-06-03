#include <bits/stdc++.h>
using namespace std;
// trobojka O(n log n)

int main() {
    int n; cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int levo, desno; cin >> levo >> desno;
    sort( a.begin(), a.end() );

    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';    
    return 0; }
