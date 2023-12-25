#include <bits/stdc++.h>
using namespace std;
// Најмањи број надовезивањем више бројева
// https://petlja.org/biblioteka/r/Zbirka2/najmanji_broj_nadovezivanjem

//bool f( string s1, string s2 ) { // kopiraju se stringovi s1 i s2
bool f( const string &s1, const string &s2 ) { // prenos po adresi
    //if...else... da skratimo...
    return s1+s2<s2+s1; }

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector<string>a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(begin(a), end(a), f); // stringovsko poredjenje ne valja...

    for (int i = 0; i < n; i++) cout << a[i];

    return 0; }
