#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int L1=s.size()/2;
    sort(s.begin(),s.end());
    for(int i =L1,L2=s.size();i<L2;i++)
    {
        cout << s[i];
        if(i!=L2-1)
            cout << "+";
    }
    return 0;
}