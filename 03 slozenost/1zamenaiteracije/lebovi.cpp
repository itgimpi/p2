#include <bits/stdc++.h>
using namespace std;

// Brute Force

int main() {
    int n,broj=0;
    cin >> n;
    for(int m=0;m<=n;m++){
        for(int z=0;z<=n;z++){
            for(int d=0;d<=n;d++){
                // if(z+m+d==n and 2*m+z+d/2==n){ NE VALJA ZBOG d/2
                if(z+m+d==n and 4*m+z*2+d==n*2){
                    broj++;
                    cout<<m<<' '<<z<<' '<<d<<'\n';
                }
            }
        }
    }
    cout << broj;
    
    


    
 }
