#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a;
    cin >> n;
    vector<int> np, pa;
    for(int i = 0; i < n; i++) {
        cin >> a;
        if(a % 2 == 0) {
            pa.push_back(a);
        }
        else {
            np.push_back(a);
        }
    }
    for(int i = 0; i < pa.size(); i++) {
        cout << pa[i] << ' ';
    }
    for(int i = 0; i < np.size(); i++) {
        cout << np[i] << ' ';
    }
    cout << endl;
    return 0;
}