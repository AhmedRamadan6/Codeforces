#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n=0;
    bool M[5][5];
    for (int i=0;i<5;i++)
        for(int j=0;j<5;j++)
        {
            cin >> M[i][j];
            if(M[i][j]==1)
            {
                n+=abs(i-2);
                n+=abs(j-2);
            }
        }
        cout << n;
    return 0;
}