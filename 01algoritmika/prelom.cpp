#include <bits/stdc++.h>
using namespace std;

int prelom(vector<int> a, int n) {
    int l = 0, d = a.size() - 1, s;
    while(l < d) {
        s = l + (d - l) / 2;
        if(a[s] % n == 0) { // deljiv
            l = s + 1;
        }
        else { // nedeljiv
            d = s - 1;
        }
    }
    return d;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    vector<int> a;
    int n, b;
    cin >> n;
    a.resize(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    while(cin >> b) { 
        cout << prelom(a, b) << '\n'; }
    return 0;
}