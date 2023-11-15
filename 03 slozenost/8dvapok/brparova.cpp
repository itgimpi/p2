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
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i] + a[j] == s) {
                brp++;
            }
        }
    }
    cout << brp << endl;
    return 0;
}
