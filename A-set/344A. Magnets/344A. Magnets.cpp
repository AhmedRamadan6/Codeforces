#include <iostream>

using namespace std;

int main()
{
    int n,c=0;
    cin >> n;
    int M[n];
    for(int i =0;i<n;i++)
    {
        cin >> M[i];
        if(M[i] != M[i-1])
            c+=1;
    }
    cout << c;
    return 0;
}