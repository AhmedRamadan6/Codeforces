#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n],c=n;
    for(int i=0;i<n;i++)
    {
        cin >>arr[i];
    }


    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[n-1] ||arr[0]==arr[i])
            c--;

    }



    cout <<c <<endl;



    return 0;
}