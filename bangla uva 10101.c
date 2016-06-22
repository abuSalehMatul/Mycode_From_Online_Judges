#include<stdio.h>
int main ()
{
    long long num,case_no=1;
    while(scanf("%lld",&num)!=EOF)
    {
       printf("%4d.",case_no);
       case_no++;
       if (num==0) {printf(" 0");}
    int bangla[15]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int lomba=0,i,j,digit,index=0;
    for (j=14;;j--)
    {
        digit=num%10;
        num=num/10;
        bangla[j]=digit;
        lomba++;
        if(num==0) {break;}
    }

    if (bangla[0]!=0)
    {
         printf(" ");
        printf ("%d kuti",bangla[0]);
        index++;
    }


    if ((bangla[1]!=0) || (bangla[2]!=0))
    {
       printf(" ");
       if (bangla[1]!=0) {printf ("%d",bangla[1]);}

       printf("%d lakh",bangla[2]);
       index++;
    }


    if ((bangla[3]!=0) || (bangla[4]!=0))
    {
        printf(" ");
        if (bangla[3]!=0) {printf ("%d",bangla[3]);}
        printf("%d hajar",bangla[4]);
        index++;
    }


    if (bangla[5]!=0)
    {
        printf(" ");
        printf ("%d shata",bangla[5]);
        index++;
    }

     if ((bangla[6]!=0) || (bangla[7]!=0))
    {
        printf(" ");
        if (bangla[6]!=0) {printf ("%d",bangla[6]);}
        printf("%d",bangla[7]);
        index++;
    }
    if(index>0)
    {
        printf(" ");
        printf("kuti");
    }

     if ((bangla[8]!=0) || (bangla[9]!=0))
    {
        printf(" ");
        if (bangla[8]!=0)    { printf ("%d",bangla[8]);}
        printf("%d lakh",bangla[9]);
    }


     if ((bangla[10]!=0) || (bangla[11]!=0))
    {
        printf(" ");
       if (bangla[10]!=0) {printf ("%d",bangla[10]);}

         printf("%d hajar",bangla[11]);
    }


    if(bangla[12]!=0)
    {
        printf(" ");
        printf("%d shata",bangla[12]);
    }


    if ((bangla[13]!=0) || (bangla[14]!=0))
    {
        printf(" ");
       if (bangla[13]!=0) {printf ("%d",bangla[13]);}

        printf("%d",bangla[14]);
    }
    printf("\n");

}
    return 0;

}