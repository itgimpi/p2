#include <bits/stdc++.h>
using namespace std;

// Binary Search O(n log n)

int main()
{
    int s, n, brp = 0;
    cin >> s >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) 
        cin >> a[i];   

    sort(a.begin(), a.end()); // obavezno

    for (int i = 0; i < a.size(); i++) // za svaki el. ai u sortiranom nizu
        if ( binary_search( next(begin(a), i + 1), end(a), s - a[i]  )  )
            brp++;


    cout << brp << endl;
    return 0;
}
