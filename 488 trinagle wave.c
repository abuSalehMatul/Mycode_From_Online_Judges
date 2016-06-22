#include <stdio.h>
int main ()
{   int cas,p;
   scanf ("%d",&cas);
   for (p=0;p<cas;p++)
   {

    if(p>0) printf ("\n");
    int amplititude,frequency,i,k,j,con=0;
    scanf("%d%d",&amplititude,&frequency);
    if (p>0) printf ("\n");
    for (k=1;k<=frequency;k++)
    {
      if (k>1) printf("\n\n");
    for(i=1;i<=amplititude;i++)
    {
        j=0;
       for (j=1;j<=i;j++)
       {
           printf("%d",i);
       }
    if (amplititude >1)   printf("\n");
    }
     for(i=amplititude-1;i>=1;i--)
    {
        j=0;
       for (j=1;j<=i;j++)
       {
           printf("%d",i);
       }
     if (i>1)  printf("\n");
    }

    }
   if ((cas!=1)&&(p==cas-1)) printf ("\n");
   }
    return 0;
}
