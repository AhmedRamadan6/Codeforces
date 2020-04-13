#include <iostream>

using namespace std;

int main()
{
    int n,r=0,c=0;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        if(arr[i]!=-1)
            r+=arr[i];
        else
        {
            r--;
            if(r==-1)
            {
                c++;
                r=0;
            }
        }
        }
    cout << c;
    return 0;
}