#include<stdio.h>
#include <string.h>
int main ()
{
    char ch[200],c;
    int i,j;
  while( scanf("%s",ch)!=EOF)
  {  printf("%d",strlen(ch));

    for (i=0;i<strlen(ch);i++)
    {
        c=ch[i]-7;
        printf("%c",c);
    }
    printf("\n");
  }
  return 0;
}
