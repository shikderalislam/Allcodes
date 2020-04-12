#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,i,t,c;
    scanf("%d",&t);
    for(i=0;i<=t;i++)
    {
        scanf("%d%d",&n,&m);
        c=ceil((n*m/2));
        printf("case %d: %d\n",i+1,c);
    }
    return 0;
}
