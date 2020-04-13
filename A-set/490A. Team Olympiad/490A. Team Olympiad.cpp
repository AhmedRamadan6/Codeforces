#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    int n;
    cin >>n;
    int input,teams[3]={0,0,0},p1[n],p2[n],p3[n],j1=0,j2=0,j3=0;
    for(int i=0;i<n;i++)
    {
        cin >> input;
        switch(input)
        {

            case 1:
                teams[0]+=1;
                p1[j1]=i+1;
                j1++;
                break;


            case 2:
                teams[1]+=1;
                p2[j2]=i+1;
                j2++;
            break;


            case 3:
                teams[2]+=1;
                p3[j3]=i+1;
                j3++;
                break;
            default:
                break;
        }
    }
        int *t=min_element(teams,teams+3);
        teams[0]= *t;
        if(teams[0]==0)
            cout << 0;
        else
        {
            cout << teams[0] << endl;
            for(int i=0;i<teams[0];i++)
            {
                cout << p1[i] << " " << p2[i] << " " << p3[i] << endl;
            }
        }
    return 0;
}