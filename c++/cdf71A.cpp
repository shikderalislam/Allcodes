#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
using namespace std;
int main()
{
    char ch[100];
    int v,t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
               cin>>ch;
    int a=strlen(ch);
    if(a<=10)
    cout<<ch<<endl;
    else
    {
        for(int i=0;i<strlen(ch);i++)
        {
            v=a;
        }
        cout<<ch[0]<<v-2<<ch[a-1]<<endl;
    }
    }
    return 0;
}
