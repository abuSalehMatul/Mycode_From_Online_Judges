#include <stdio.h>
int main ()
{
    int ca,i;
    long long a,b;
    scanf ("%d",&ca);
    for (i=0;i<ca;i++)
    {
        scanf ("%lld%lld",&a,&b);
        if (a==b)
            printf ("=\n");
        else if (a>b)
            printf (">\n");
        else
            printf ("<\n");
    }
    return 0;
}