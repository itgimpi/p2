#include<bits/stdc++.h> // ZC rek
using namespace std;

int prvineg(int n, int res){
    int a; cin >> a;
    if(n<res) return -1;
    if(a<0) return res;
    return prvineg(n, res+1);
}

int main() {
    int n; cin >> n;
    cout << prvineg(n, 1);


    return 0; }