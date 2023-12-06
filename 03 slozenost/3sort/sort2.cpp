#include <bits/stdc++.h>
using namespace std;

int a[100010]; // vise mem, sve 0

// Losa strana:
// trosi se mem. za vel br el, bez obzira na br el

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n; cin >> n;
    //int a[100010]; ne valja
    // za main je odvojeno malo mem
    for(int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a+n); // sort C niza
    
    for(int i = 0; i < n; i++)
        cout << a[i] << '\n';

    return 0; }
