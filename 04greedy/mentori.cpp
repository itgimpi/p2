#include <bits/stdc++.h>
using namespace std;
//Ментори
//https://petlja.org/biblioteka/r/Zbirka2/mentori

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector<int>rejting(n);
    for (int i = 0; i < n; i++) cin >> rejting[i];
    sort(rejting.begin(), rejting.end());
    int res = 0;
    int djak = 0, mentor = 1;
    while ( mentor < n ) { 
        if ( 2 * rejting[djak] <= rejting[mentor] ) { // jeste mentor
            res++;
            djak++;
            mentor++; }
        else  // nije mentor
            mentor++;  }
    cout << res;

    return 0; }
