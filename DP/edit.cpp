#include <bits/stdc++.h>
using namespace std;
// lcs
int lcs(const string &s1, const string &s2, int n1, int n2) {
    if ( n1==0 || n2==0 ) return 0; // BC
    int res = max(lcs(s1,s2,n1-1,n2), lcs(s1,s2,n1,n2-1));
    if (s1[n1-1]==s2[n2-1])
        res = max(res, lcs(s1,s2,n1-1,n2-1) + 1);
    return res; }



int main() {
    string s1, s2; cin >> s1 >> s2;
    cout << lcs(s1, s2, s1.size(), s2.size()) << endl;
    //cout << lcsdp(s1, s2) << endl;

    return 0; }
