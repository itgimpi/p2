#include <bits/stdc++.h>
using namespace std;
//Неопадајућа растојања суседних елемената
//https://petlja.org/biblioteka/r/Zbirka2/rastuce_razlike_susednih

int main() {
    ios_base::sync_with_stdio(false);     cin.tie(0);    cout.tie(0);
    int n; cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    vector<int>res(n);
    int l=0, d=n-1, i=n-1;
    while(l<d){
        res[i--]=a[d--];
        res[i--]=a[l++];  }
    if (n%2==1) 
        res[i]=a[n/2];
    
    for (int i = 0; i < n; i++) cout << res[i] << ' ';
    return 0; }
