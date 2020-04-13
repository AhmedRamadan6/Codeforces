#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,t,baked,build;
    cin >>n>>t>>baked>>build;
    if(ceil(n/float(baked))*t>(build+t))
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}