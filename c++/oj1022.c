#include<stdio.h>
#include<math.h>
int main()
{
    double pi,r,f;
    int t,i;
    pi=2*acos(0.0);
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lf",&r);
        f=(4*(r*r))-(pi*r*r);
        printf("Case %d: %.2lf\n",i+1,f);
    }
    return 0;

}
