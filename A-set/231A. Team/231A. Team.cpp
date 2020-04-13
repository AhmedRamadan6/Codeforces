#include <iostream>

using namespace std;

int main()
{
    int n,c=0,p=0;
    cin >> n;
    bool arr[n][3];
    for (int i=0;i<n;i++)
    {
        c=0;
        for (int j=0;j<3;j++)
        {
            cin >> arr[i][j];
            if(arr[i][j]==1)
                c+=1;
        }
        if(c>=2)
            p+=1;
    }
    cout << p;
    return 0;
}