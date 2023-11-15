#include <bits/stdc++.h>
using namespace std;

// O(nlogn)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, l, d;
    cin >> n;
    vector<int> vec(n);
    for(int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    int i = 0;
    while(vec[i] < 0) {
        i++;
    }
    d = i;
    l = d - 1;
    while(l >= 0 && d < n) {
        if(abs(vec[l]) < abs(vec[d])) {
            cout << vec[l]*vec[l] << ' ';
            l--;
        }
        else if(abs(vec[l]) > abs(vec[d]))
        {
            cout << vec[d]*vec[d] << ' ';
            d++;
        }
        else
        {
            cout << vec[d]*vec[d] << ' ';
            cout << vec[l]*vec[l] << ' ';
            l--;
            d++;
        }
    }
    while(l >= 0) {
        cout << vec[l]*vec[l] << ' ';
        l--;
    }
    while(d < n) {
        cout << vec[d]*vec[d] << ' ';
        d++;
    }
    return 0;
}
