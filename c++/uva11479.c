#include<stdio.h>
int main()
{
    long long  t,i=1,a,b,c;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld %lld",&a,&b,&c);

        if(a+b<=c || b+c<=a || c+a<=b)
        {
            printf("case %lld: Invalid\n",i++);
        }

        else
        {
            if(a==b && b==c &&c==a)
            {
                printf("case %lld:  Equilateral\n",i++);
            }
            else if(a==b || b==c ||c==a)
            {
                printf("case %lld: Isosceles\n",i++);
            }
            else if(a!=b && b!=c && c!=a)
            {
                printf("case %lld: Scalene\n",i++);
            }
        }


    }
    return 0;
}
