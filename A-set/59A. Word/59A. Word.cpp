#include <iostream>
#include <string>
#include<algorithm>
#include<ctype.h>

using namespace std;

int main()
{
    string s;
    cin >>s;
    int U=0,L=0,n=s.size();
    for(int i =0;i<n;i++)
    {
        if(isupper(s[i]))
            U+=1;
        else
            L+=1;
    }
        if(U>L)

             transform(s.begin(),s.end(),s.begin(), ::toupper);
        else
             transform(s.begin(),s.end(),s.begin(), ::tolower);
        cout << s;
    return 0;
}