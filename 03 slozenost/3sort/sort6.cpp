#include <bits/stdc++.h>
using namespace std;
// Nerastuce, moja f-ja 1000, 900, 500, 100, 

// f treba da vrati true ako je redosled dobar
// f treba da vrati false ako je redosled los

bool f3 ( int prvi, int drugi ) { // moglo je i a, b ili x i y
    if ( prvi > drugi ) return true;
    else return false; }




bool f2 ( int a, int b ) { // moglo je i a, b ili x i y
    if ( a > b ) return true;
    else return false; }




bool f1 ( int prvi, int drugi ) { // moglo je i a, b ili x i y
    if ( prvi > drugi ) return true;
    return false; }

bool f ( int prvi, int drugi ) { // moglo je i a, b ili x i y
    return prvi > drugi; }

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; i++)
        cin >> a[i];

    // moja f-ja
    sort(a.begin(), a.end(), f);
    //sort(begin(a), end(a));


    for(int i = 0; i < n; i++)
        cout << a[i] << '\n';


    return 0;
}
