#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main()
{
    string s;
    cin >>s;
    int L = s.size(),n=0;
    sort(s.begin(),s.end());
    for(int i =0;i<L;i++)
    {
        if(s[i]==s[i+1])
            continue;
        n+=1;
    }
    if(n%2==0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
    return 0;
}