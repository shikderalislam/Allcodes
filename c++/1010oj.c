#include<stdio.h>
int main()
{

    int n,m,i,t,c,p;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&n,&m);

                  c=(n*m);
       if(c%2==0)
       {
           p=c/2;
       }
       else
       {
             p=(c/2)+1;

       }
       printf("case %d: %d\n",i+1,p);

    }
    return 0;
}

