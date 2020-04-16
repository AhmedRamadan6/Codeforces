#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >>n;
    int arr[n],sum1=0,sum2=0,c=0;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        sum1+=arr[i];
    }
    sort(arr,arr+n);
    reverse(arr,arr+n);

    for(int i=0;i<n;i++)
    {
        sum2+=arr[i];
        c++;
        if(sum2>sum1/2)
            break;
    }
    cout << c << endl;
        return 0;
}