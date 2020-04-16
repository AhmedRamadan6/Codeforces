#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    set <char> x;
    char c;
    for(int i=0;i<n;i++)
    {
        cin >> c;
        x.insert(tolower(c));
    }
        if(x.size()==26)
            cout << "YES\n";
        else
            cout << "NO\n";
    return 0;
}