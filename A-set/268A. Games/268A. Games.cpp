#include <iostream>

using namespace std;

int main()
{
    int n,c=0;
    cin >> n;
    int arr[n][2];
    for (int i=0;i<n;i++)
        for (int j=0;j<2;j++)
            cin >>arr[i][j];
     for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
            if(arr[i][1]==arr[j][0])
            c+=1;
        cout << c;
    return 0;
}