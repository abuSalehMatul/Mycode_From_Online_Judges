#include<stdio.h>
int main ()
{
    long long  year,i,leap=0,ordi=0,hululu=0,gululu=0,c=0;
    while (scanf ("%lld",&year)!=EOF)
    {
      if (c>0){ printf ("\n");}
      c++;
     leap=0,ordi=0,hululu=0,gululu=0;
        if (year%4==0 && year%100 !=0 )
        {
                 leap=1;

        }
        if(year%400==0)
        {
            leap=1;
        }
        if (year%15==0)
        {
            hululu=1;
        }
        if (year%4==0 && year %55==0)
        {
            gululu=1;
        }
        if (year%4 !=0 && year%15 !=0 && year%55!=0 )
        {
            ordi=1;
        }

            if (leap==1&&hululu==1&&gululu==1)    {printf ("This is leap year.\nThis is huluculu festival year.\nThis is bulukulu festival year.");}
       else if (leap==1&&hululu==1)   {printf ("This is leap year.\nThis is huluculu festival year.");}
       else if (leap==1)   {printf ("This is leap year.");}
        else printf ("This is an ordinary year.");
    }

        return 0;
}