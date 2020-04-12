#include<stdio.h>
int main()
{
    int t,n,i,j,m,s=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
       while(n--)
        {
            scanf("%d",&m);
            if(m>0)
            s=s+m;
        }
        if(s>=0)
        printf("Case %d: %d\n",i+1,s);
        s=0;
    }
    return 0;
}
