#include <iostream>

using namespace std;

int main()
{
    string s,t;
    int j=0,p=1;
    cin >> s >> t;
    for(int i=0,L=t.size();i<L;i++)
    {
        if(t[i]==s[j])
        {
            p++;
            j++;
        }
    }
    cout << p;
    return 0;
}