#include <iostream>

using namespace std;

int main()
{
    int price,coin,i=1,sum=0;
    cin >> price>>coin;
    sum = price;


    while (sum%10!=0 && (sum-coin)%10!=0)
    {
        i++;
        sum+=price;
    }
    cout <<i;

    return 0;
}