#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
 
using namespace std;
 
int main()
{
    string s1,s2;
    getline(cin,s1);
    for(int i=0,L=s1.size();i<L;i++)
    {
        if(isalpha(s1[i]))
        {
            s2+=s1[i];
        }
    }
    sort(s2.begin(),s2.end());
    auto ip = unique(s2.begin(),s2.end());
    s2.erase(ip,s2.end());
    cout <<s2.size();
 
    return 0;
}