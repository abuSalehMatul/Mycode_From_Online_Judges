#include <stdio.h>
int divisor_2(int num);
int divisor_3(int num);
int divisor_5(int num);
int divisor_2(int num)
{
    while (num%2==0)
    {
        num=num/2;
    }
    return num;

}
int divisor_3(int num)
{
    while (num%3==0)
    {
        num=num/3;
    }
    return num;
}
int divisor_5(int num)
{
    while(num%5==0)
    {
        num=num/5;
    }
    return num;
}
int main()
{
long long num1,num2,j;
scanf ("%lld%lld",&num1,num2);

}