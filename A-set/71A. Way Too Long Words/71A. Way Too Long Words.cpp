#include <iostream>

using namespace std;

int main()
{
    int n,L;
    cin >>n;
    string s;
    for(int i=0;i<n;i++)
    {
        cin >> s;
        L=s.size();
        if(L>10)
            cout << s[0] << L-2 << s[L-1] << endl;
        else
            cout << s << endl;

    }
    return 0;
}