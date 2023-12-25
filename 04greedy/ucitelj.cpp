#include <bits/stdc++.h>
using namespace std;
// Зли учитеља
// https://petlja.org/biblioteka/r/Zbirka2/zli_ucitelj




int main() {
    //ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(begin(a), end(a));
    int naj = 0;
    for (int i = 0; i < n/2; i++)
        naj = max(naj, a[i]+a[n-i-1]);


    cout << naj-1;

    return 0; }
