#include <bits/stdc++.h>
using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    vector<int> a;
    a.push_back(1);a.push_back(5);a.push_back(3);a.push_back(16);a.push_back(5);a.push_back(13);a.push_back(17);
    sort(a.begin(), a.end());
    for(int i = 0; i < a.size(); i++){
        cout << a[i] << ' ';
    }
    cout << binary_search(a.begin(),a.end(),5) << '\n';
    cout << binary_search(a.begin(),a.end(),6) << '\n';
    cout << *lower_bound(a.begin(),a.end(),5) << '\n';
    cout << *upper_bound(a.begin(),a.end(),5) << '\n';

    return 0;
}
