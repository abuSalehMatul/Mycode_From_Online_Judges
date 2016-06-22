#include<stdio.h>
#include<string.h>
int main ()
{
    char text[100];
    gets(text);
    int i,j;
    for (i=0;i<=strlen(text);i++)
    {
        if(text[i]==' ') printf(" ");
        if((text[i]=='d')||(text[i]=='D')) {   (text[i]=='d')?printf("a"):printf("A");   }

        if ((text[i]=='f')||(text[i]=='F')) {   (text[i]=='f')?printf("s"):printf("S");  }

        if((text[i]=='g')||(text[i]=='G')) {   (text[i]=='g')?printf("d"):printf("D");   }

        if ((text[i]=='h')||(text[i]=='H')) {   (text[i]=='h')?printf("f"):printf("F");  }

        if((text[i]=='j')||(text[i]=='J')) {   (text[i]=='j')?printf("g"):printf("G");   }

        if ((text[i]=='k')||(text[i]=='K')) {   (text[i]=='k')?printf("h"):printf("H");  }

        if((text[i]=='l')||(text[i]=='L')) {   (text[i]=='l')?printf("j"):printf("J");   }

        if ((text[i]==';')||(text[i]==':')) {   (text[i]==';')?printf("k"):printf("K");  }

        if((text[i]=='\'')||(text[i]=='"')) {   (text[i]=='\'')?printf("l"):printf("L");   }



        if ((text[i]=='e')||(text[i]=='E')) {   (text[i]=='e')?printf("q"):printf("Q");  }

        if((text[i]=='r')||(text[i]=='R')) {   (text[i]=='r')?printf("w"):printf("W");   }

        if ((text[i]=='t')||(text[i]=='T')) {   (text[i]=='t')?printf("e"):printf("E");  }

        if((text[i]=='y')||(text[i]=='Y')) {   (text[i]=='y')?printf("r"):printf("R");   }

        if ((text[i]=='u')||(text[i]=='U')) {   (text[i]=='u')?printf("t"):printf("T");  }

        if((text[i]=='i')||(text[i]=='I')) {   (text[i]=='i')?printf("y"):printf("Y");   }

        if ((text[i]=='o')||(text[i]=='O')) {   (text[i]=='o')?printf("u"):printf("U");  }

        if((text[i]=='p')||(text[i]=='P')) {   (text[i]=='p')?printf("i"):printf("I");   }

        if ((text[i]=='[')||(text[i]=='{')) {   (text[i]=='[')?printf("o"):printf("O");  }

        if((text[i]==']')||(text[i]=='}')) {   (text[i]==']')?printf("p"):printf("P");   }

        if ((text[i]=='\\')||(text[i]=='|')) {   (text[i]=='\\')?printf("["):printf("{");  }



        if((text[i]=='c')||(text[i]=='C')) {   (text[i]=='c')?printf("z"):printf("Z");   }

        if ((text[i]=='v')||(text[i]=='V')) {   (text[i]=='v')?printf("x"):printf("X");  }

        if((text[i]=='b')||(text[i]=='B')) {   (text[i]=='b')?printf("c"):printf("C");   }

        if ((text[i]=='n')||(text[i]=='N')) {   (text[i]=='n')?printf("v"):printf("V");  }

        if((text[i]=='m')||(text[i]=='M')) {   (text[i]=='m')?printf("b"):printf("B");   }

        if ((text[i]==',')||(text[i]=='<')) {   (text[i]==',')?printf("n"):printf("N");  }

        if((text[i]=='.')||(text[i]=='>')) {   (text[i]=='.')?printf("m"):printf("M");   }

        if ((text[i]=='/')||(text[i]=='?')) {   (text[i]=='/')?printf(","):printf("<");  }

    }
    printf("\n");
    return 0;
}