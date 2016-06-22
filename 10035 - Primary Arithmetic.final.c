#include <stdio.h>
int main ()
{
    unsigned long a,b,num1,num2,carry=0,i,i2;
    for (;;)
    {    carry=0;i2=0;
        scanf ("%lu%lu",&a,&b);
        if (a==0&&b==0)
        {
            break;
        }
        for (i=2;i<11;i++)
        {
            num1=a%10;
            a=a/10;
            num2=b%10;
            if (i2+1==i){num2=num2+1;}
            b=b/10;
            if (num1+num2>9)
            {
                carry=carry+1;
                i2=i;
            }
        }
        if (carry==0)
            printf ("No carry operation.\n");
        else if (carry==1)
        printf ("1 carry operation.\n");
            else
            printf ("%lu carry operations.\n",carry);
    }
    return 0;
}