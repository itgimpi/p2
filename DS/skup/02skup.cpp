#include <iostream>
#include<set>
using namespace std;
//skup - neupareni el.
int main() {
    //ios_base...
    int n; cin >> n;
    set<int>elementi; // unsigned...
    
    for (int i = 0; i < n; i++) {
        int broj; cin >> broj;
        auto it = elementi.find(broj);
        if ( it == elementi.end() ) // ne postoji u skupu
            elementi.insert(broj); // dodaj u skup
        else // ipak postoji...
            elementi.erase(broj);   }
    
    cout << *elementi.begin();
   
    return 0; }
