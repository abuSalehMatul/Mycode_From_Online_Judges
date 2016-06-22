#include<stdio.h>

int main ()
{
    int lower,higher,i,j,k,max,m=0;

    while ( scanf ("%d%d",&lower,&higher)==2)
   {
    max=m;
    printf("%d %d ",lower,higher);
    if (higher==lower)
    {
      for(i=1;;i++)
    {
        if (higher==1){break;}
        if (higher%2!=0){higher=(higher*3)+1;}
        else{higher=higher/2;}
    }

    if (i>max)  {max=i;}


    printf("%d\n",max);

    }
    else {
     if (higher>lower){ k=higher;j=lower;}
    if (higher<lower){j=higher;k=lower;}

    for(;k>=j;k--)
        {
        higher=k;

    for(i=1;;i++)
    {
        if (higher==1){break;}
        if (higher%2!=0){higher=(higher*3)+1;}
        else{higher=higher/2;}
    }

    if (i>max)  {max=i;}

        }
    printf("%d\n",max);

      }}
        return 0;
}