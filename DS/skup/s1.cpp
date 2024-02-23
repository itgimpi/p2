#include <iostream>
#include <set>

using namespace std;
int main()
{
    int n;
    set<int> s;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int c;
        cin >> c;
        if(s.find(c) == s.end()){
            s.insert(c);
        }
        else{
            s.erase(c);
        }
    }

    cout << *s.begin();

    return 0;
}