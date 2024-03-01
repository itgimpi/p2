#include <iostream>
#include<set>
using namespace std;
int main() {
    multiset<int>m; // moci madjionicara
    char upit; int broj;
    while ( cin >> upit ) {
        cin >> broj;
        if (upit == 'i')
            m.insert(broj);
        else if (upit=='e') { 
            //m.erase(broj); izbaci sve brojeve 
            auto it = m.find(broj);
            if (it != m.end())
                m.erase(it); }
        else if (upit == 'f') {
            auto it = m.lower_bound(broj);
            if (it != m.end()) // postoji
                {cout << *it << '\n'; } // for (auto mm:m) cout <<mm<<' ';
            else 
                cout << '-' << '\n';
        }



    }

   
    return 0; }