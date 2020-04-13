#include <iostream>

using namespace std;

int main()
{
    short int n,c=0;
    long long int x,z;
    char s;
    cin >> n >>x;
    while(n--)
    {
        cin >> s;
        cin >> z;
        if(s=='+')
            x+=z;
        else
        {
            if(x-z<0)
                c++;
            else
                x-=z;
        }
    }
        cout << x << " " << c << endl;


    return 0;
}