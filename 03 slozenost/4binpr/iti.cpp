#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        a[i] -= i;
    }
    if(!binary_search(a.begin(), a.end(), 0)) {
        cout << "nema" << '\n';
    }
    //cout << lower_bound(a.begin(), a.end(), 0) - a.begin() << '\n';
    cout << distance(a.begin(), lower_bound(a.begin(), a.end(), 0)) << '\n';
    return 0;
}