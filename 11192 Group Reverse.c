#include<stdio.h>
#include<string.h>
int main ()
{
    int i=0,j,group,letter,add,con,con2,l;
      while (scanf ("%d",&group)!=2 && group!=0)
      {

    getchar();
    char str[100],ch;
    gets(str);
    letter=strlen(str)/group;
    add=letter;


    for(l=0,con=0;con<group;con++,l=l+add,letter=letter+add)
    {  i=l;
       for(i,j=letter-1,con2=0;con2<add/2;con2++,i++,j--)
     {
        ch=str[i];
        str[i]=str[j];
        str[j]=ch;

     }

    }
    printf ("%s\n",str);
      }
      return 0;
}