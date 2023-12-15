#include <bits/stdc++.h>
using namespace std;



int main() {
    ios_base::sync_with_stdio(false);     cin.tie(0);    cout.tie(0);

    string s1, s2; cin >> s1 >> s2;
    int i1=0, i2=0;

    while ( i1 < s1.size() && i2 < s2.size() ) {
        if ( s1[i1] == s2[i2] )
            i2++;
        i1++;     }

    if (i2 == s2.size())
        cout << "da";
    else
        cout << "ne";

    return 0; }
