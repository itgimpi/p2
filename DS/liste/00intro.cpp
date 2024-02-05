#include<bits/stdc++.h>
using namespace std;

int main() {
    int a = 5; int b = 10;
    int *pa = &a; int *pb = &b; 

    cout << a << ' ' << b << endl;
    cout << pa << ' ' << pb << endl;

    *pa = 50;
    *pb = 9;

    cout << a << ' ' << b << endl;
    cout << pa << ' ' << pb << endl;    
    return 0; }