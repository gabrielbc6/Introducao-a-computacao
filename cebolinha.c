#include <stdio.h>
#include <stdlib.h>

int main()
{
    char fala[500];
    int i=0;
    printf("Entre com a fala: ");
    scanf(" %[^\n]",fala);
    while(fala[i]!='\0'){
        if(fala[i]=='r' && (fala[i+1]!=' ' || fala[i+1]!='\0')
           fala[i]='l';
        else if(fala[i]=='r' && fala[i+1]=='r')
    }
    return 0;
}
