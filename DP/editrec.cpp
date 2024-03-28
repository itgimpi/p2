#include <bits/stdc++.h>
using namespace std;
// edit distance - rec
int dist(const string &s1, const string &s2, int n1, int n2) {
    // BC
    if ( n1 == 0 ) return n2;
    if ( n2 == 0 ) return n1;
    // rec
    if ( s1[n1-1] == s2[n2-1] ) // ista slova?
        return dist(s1, s2, n1-1, n2-1);
    // nisu ista?
    int r1 = dist(s1, s2, n1-1, n2) + 1;
    int r2 = dist(s1, s2, n1, n2-1) + 1;
    int r3 = dist(s1, s2, n1-1, n2-1) + 1;

    return min({r1,r2,r3}); }

int main() {
    string s1, s2; cin >> s1 >> s2;
    cout << dist(s1, s2, s1.size(), s2.size()) << endl;
    //cout << lcsdp(s1, s2) << endl;

    return 0; }
