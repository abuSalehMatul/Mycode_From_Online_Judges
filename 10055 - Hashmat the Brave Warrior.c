#include<stdio.h>

int main ()
{
    long long x,y,z;

    while (scanf ("%lld%lld",&x,&y)!=EOF)
    {
         z=x-y;
    if (z<0) z=z*(-1);
    printf ("%lld\n",z);
    }
    return 0;

}