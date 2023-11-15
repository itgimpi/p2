#include <bits/stdc++.h>
using namespace std;

// O(n*n)

int main()
{
    int s, n, brp = 0;
    cin >> s >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int l, d;
    l = 0;
    d = n - 1;
    while(l < d) {
        if(a[l] + a[d] > s) {
            d--;
        }
        if(a[l] + a[d] < s) {
            l++;
        }
        else {
            brp++;
            l++; d--;
        }
    }
    cout << brp << endl;
    return 0;
}
