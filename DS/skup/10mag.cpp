#include <iostream>
#include<set>
using namespace std;

int main() {
    //ios_base...
    multiset<int>z; // moci madjionicara
    
    char c;
    while (cin>>c) {
        int x; cin >> x;
        if (c=='i') z.insert(x);
        else if (c=='e') { 
            auto it = z.find(x); 
            if (it!=z.end()) 
                //z.erase(x); }
                z.erase(it); }
        else if (c=='f') { 
            auto it = z.lower_bound(x); 
            if (it!=z.end()) 
                cout << *it << '\n'; 
            else 
                cout <<'-'<<'\n'; }


    }
   
    return 0; }
