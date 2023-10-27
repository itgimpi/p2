#include<bits/stdc++.h> // ZC rek
using namespace std;

int f(int n, int res){
    int a; cin >> a;
    if( res >= n ) return -1;
    if( a < 0 ) return res;

    return f(n, res+1);

}

int main() {
    int n; cin >> n;

    cout << f( n, 1);

    return 0; }