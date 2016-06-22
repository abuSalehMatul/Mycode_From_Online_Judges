#include<stdio.h>
int main ()
    {
        int n,limit;
       while( scanf("%d%d",&n,&limit)&& (n!=0&& limit!=0))
       {

        int number_of_std[n],i,j,k,coin,res=0,ugly=0,res1=0;
        for (k=0;k<n;k++)
        {
            number_of_std[k]=0;
        }

        for (i=0,coin=0;coin<=limit+1;i++)
        { if(i==0){i=i/n;}
         if (i!=0) {i=i%n;}
         if (number_of_std[i]>=40) {continue;}
         res1=res;
         if (res==0) {coin++;}
         if (coin>limit) {coin=1;}

         if (number_of_std[i]<40)
            {
                if (res==0)
                {
                    number_of_std[i]=number_of_std[i]+coin;
                    res=0;

                    if (number_of_std[i]>=40)
                    {
                    res=number_of_std[i]-40;
                    }

                }

                if (res1 !=0)
                {
                    number_of_std[i]=number_of_std[i]+res;
                    res=0;

                    if (number_of_std[i]>=40)
                    {
                        res=number_of_std[i]-40;
                    }
                }
            }


         if(number_of_std[i]>=40)
            {
                printf("%3d",i+1);
                ugly++;

            }


         if(ugly==n) {break;}
        }
        printf("\n");
       }
        return 0;

    }