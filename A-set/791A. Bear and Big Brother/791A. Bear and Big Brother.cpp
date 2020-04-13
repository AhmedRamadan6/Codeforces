#include <iostream>

using namespace std;

int main()
{
   int L,B,c=0;
   cin >>L>>B;
   while (L<=B)
   {
       L*=3;
       B*=2;
       c+=1;
   }
   cout << c;

}