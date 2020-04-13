#include <iostream>
#include <string>
using namespace std;

int main()
{
    int arr[4],i=0,c=0;
    for (int i=0;i<4;i++)
        cin >> arr[i];
    string s;
    cin >>s;
    while(s[i]!='\0')
    {
        if(s[i]=='1')
            c+=arr[0];
        else if(s[i]=='2')
            c+=arr[1];
            else if(s[i]=='3')
            c+=arr[2];
            else
            c+=arr[3];
            i++;
    }
    cout << c;
    return 0;
}