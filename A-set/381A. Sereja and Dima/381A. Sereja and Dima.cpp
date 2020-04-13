#include <iostream>

using namespace std;

int main()
{
    int n,S=0,D=0,b=0,e;
    cin >>n;
    int C[n];
    e=n-1;
    for(int i=0;i<n;i++)
        cin >> C[i];
    for(int i=0;i<n;i++)
    {
        if(C[b]>C[e])
        {
            if(i%2==0)
                S+=C[b];
            else
            D+=C[b];

            b+=1;


        }
        else
        {
            if(i%2==0)
                S+=C[e];
            else
            D+=C[e];
            e-=1;
        }

    }
        cout << S << " " << D;
    return 0;
}