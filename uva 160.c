#include <stdio.h>
#include <math.h>
int main ()
{
    int num,i,j=0,k,prime[25],prime1[25],cont,n,n1;
    prime[j]=2;j++;

    for (i=3;i<100;i++)
    {
        cont =0;
        n=sqrt(i);
       for (k=2;k<=n;k++)
       {
           if (i%k==0) {cont++;}
       }
       if (cont ==0)
       {
           prime[j]=i;
           j++;
       }
    }



    while (scanf("%d",&num)&&(num!=0))
    {
         for (i=0;i<25;i++)
    {
        prime1[i]=0;
    }

    n=num;
    n1=num;
    for (k=2;k<=n;k++)
    {
        num=k;

      for (i=0,j=0;i<25;j++,i++)
      {

         while (num%prime[i]==0)
        {
            num=num/prime[i];
             prime1[j]=prime1[j]+prime[j];

        }
      }

    }

    for (i=0;i<25;i++)
    {
       prime1[i]=prime1[i]/prime[i];
    }
    printf ("%3d! =",n1);
    for (i=0;i<25;i++)
    {
        if (prime1[i]==0)
        {
            break;
        }
        if (i==15) {printf("\n      ");}
        printf("%3d",prime1[i]);


    }
    printf("\n");
    }

    return 0;
}
