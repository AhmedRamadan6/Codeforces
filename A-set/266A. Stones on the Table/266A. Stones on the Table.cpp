#include <iostream>

using namespace std;

int main()
{
    int n,s=0;
    cin >> n;
    char c[n];
    for (int i=0;i<n;i++)
    {
        cin >> c[i];
        if(c[i-1]==c[i])
            s++;
    }
    cout << s;
    return 0;
}