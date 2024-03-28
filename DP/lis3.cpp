#include <bits/stdc++.h>
using namespace std;
// LIS O(n logn)

int main() {
    //ios_base...
    int n; cin >> n;
    vector<int>dp;

    for (int i = 0; i < n; i++) {
        int el; cin >> el;
        // vraca pok. na prvi koji je >= el
        auto it = lower_bound( dp.begin(), dp.end(), el );

        if ( it == dp.end() ) // nije nadjen?
            dp.push_back(el);
        else
            *it = el; }

    cout << dp.size();

    return 0; }
