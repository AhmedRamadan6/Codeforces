#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    string s;
    cin >>s;
    int strt=0,index=0,steps=0,moves=0;
    for (int i=0,L=s.size();i<L;i++)
    {
        index=s[i]-97;
        steps= abs(strt-index);
        if(steps<=13)
            moves+=steps;
            else
            moves+= 26-steps;
        strt=index;
    }
    cout << moves;
    return 0;
}