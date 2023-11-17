#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    vector<int> a = {20, 15, 11, 10, 5, 5, 5, 1};
    sort(a.begin(), a.end());
    if(binary_search(a.begin(), a.end(), 5)) {
        cout << "postoji" << '\n';
    }
    else {
        cout << "ne postoji" << '\n';
    }
    auto dg = lower_bound(a.begin(), a.end(), 5);
    auto gg = upper_bound(a.begin(), a.end(), 5);
    cout << dg - a.begin() << '\n';
    cout << gg - a.begin() << '\n';
    dg = lower_bound(a.begin(), a.end(), 6);
    gg = upper_bound(a.begin(), a.end(), 6);
    cout << dg - a.begin() << '\n';
    cout << gg - a.begin() << '\n';
    return 0;
}
