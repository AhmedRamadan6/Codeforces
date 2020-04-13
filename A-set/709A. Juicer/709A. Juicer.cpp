#include <iostream>

using namespace std;

int main()
{
    int n,s,d,j=0,t=0,x;
    cin >> n >> s >>d;
    while(n--)
    {
        cin >>x;
        if(x<=s)
        {
            j+=x;
            if(j>d)
            {
                t++;
                j=0;
            }
        }
    }
    cout << t;
    return 0;
}