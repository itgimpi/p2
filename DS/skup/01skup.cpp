#include <iostream>
#include<set>
using namespace std;
//skup - uvodni primer, unikati
int main() {
    //ios_base...
    set<int>s; // unsigned...
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int broj; cin >> broj;
        s.insert(broj); }
    
    cout << s.size();
   
    return 0; }
