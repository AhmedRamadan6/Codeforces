#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1,s2;
    cin >>s1>>s2;
    for (int i=0,n=s1.size();i<n;i++)
    {
        s1[i]=towlower(s1[i]);
        s2[i]=towlower(s2[i]);

    }
    if (s1>s2)
        cout << "1";
    else if (s1<s2)
        cout << "-1";
    else
        cout << "0";
    return 0;
}