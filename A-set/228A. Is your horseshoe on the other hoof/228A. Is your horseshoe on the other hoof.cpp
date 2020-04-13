#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long int arr[4],c=0;
    for (int i=0;i<4;i++)
        cin >>arr[i];
    sort(arr,arr+4);
    for (int i=0;i<3;i++)
        if(arr[i]==arr[i+1])
            c++;

    cout <<c;
    return 0;
}