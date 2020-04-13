#include <iostream>

using namespace std;


int main()
{
    int n,h;
     cin >> n >> h;



    int p[n];
    int width = 0;
    for (int i =0; i<n;i++)
    {
        cin >>p[i];
        if(p[i] > h)
            p[i]=2;
        else
            p[i]=1;
        width+=p[i];

    }
     cout << width;
     return 0 ;
    }


