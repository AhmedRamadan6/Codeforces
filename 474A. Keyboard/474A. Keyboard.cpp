#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 ="qwertyuiopasdfghjkl;zxcvbnm,./",s2;
    char c;
    cin >> c>>s2;
    for(int i=0,L=s2.size(),p;i<L;i++)
    {
        p=s1.find(s2[i]);
        if(c=='R')
            cout << s1[p-1];
        else
            cout << s1[p+1];
    }

    return 0;
}