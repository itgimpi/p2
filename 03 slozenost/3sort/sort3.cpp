#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    // za fisni niz
    int a[] = {123, 345, 3, 3454, 2534, 3, 123, 245, 45673456, 245, 35, 325};
    int n = sizeof(a) / sizeof(int);
    //int n = sizeof(a) / sizeof(a[0]);

    sort(a, a+n);
    
    for(int i = 0; i < n; i++)
        cout << a[i] << ' ';

    return 0; }
