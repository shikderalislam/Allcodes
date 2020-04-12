#include<stdio.h>
#include<iostream>
#include<bitset>
using namespace std;
int main()
{
    int n,t,j;
    long long i;
    cin>>t;
    for(j=1;j<=t;j++)
    {
        cin>>n;
    bitset<32> b(n);
   int d=b.count();
   cout<<b<<endl;
     for(i=n+1;;i++)
       {
           bitset<32>b(i);
           if(b.count()== d)
           {
               cout<<"Case "<<j<<": "<<i<<endl;
               break;
           }
            }
    }
    return 0;
}
