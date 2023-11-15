#include <bits/stdc++.h>
using namespace std;

// O(nlogn)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i = 0; i < n; i++) {
        cin >> vec[i];
        vec[i] = vec[i]*vec[i];
    }
    sort(vec.begin(), vec.end());
    for(int i = 0; i < n; i++) {
        cout << vec[i] << ' ';
    }
    return 0;
}
