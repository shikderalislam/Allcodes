#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<iterator>
#include<list>

using namespace std;
int main()
{
    int n,x;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    list <int> li(a,a+n);
    list <int>::iterator it;
    for(it=li.begin();it!=li.end();it++)
    {
        cout<<*it<<"\t";
    }

    scanf("%d",&x);

    it=find(li.begin(),li.end(),x);

    if(it==li.end())
    {
        printf("Not found\n");
    }
    else
   {
        printf("found\n");
    }


}
