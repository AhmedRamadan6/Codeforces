#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    cin >> a >>b;
    if(a==b)
        cout <<"-1\n";
    else
        cout << max(a.size(),b.size())<<endl;

    return 0;
}