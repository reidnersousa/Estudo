#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{



    char aab[6]="baba";

    verificaABBA(aab);
    return 0;
}



void verifica(char variavel[20])
{

    int i;
    for(i=0; variavel[i]!=NULL; i++)
    {
        if(variavel[i]=='1'||variavel[i]=='2'||variavel[i]=='3'||variavel[i]=='4'||variavel[i]=='5'||
                variavel[i]=='6'||variavel[i]=='7'||variavel[i]=='8'||variavel[i]=='9'||variavel[i]=='0')
        {
            printf("\nsisisii");
        }
        printf("\n%c",variavel[i]);
    }

}

void verificaABBA (char variavel[20])
{
    int i,k,tamanho=0;
    char primeiraParte[20]="0";
    char segundaParte[20]="0";

    for(i=0; variavel[i]!=NULL; i++)
    {
        tamanho++;
    }

    for(i=0;i<tamanho/2;i++){
        primeiraParte[i]=variavel[i];
        printf("\n teste 2%c %d",variavel[i],i);


    }

    int l=0;
    for(k=tamanho/2;k<tamanho;k++){

        segundaParte[l]=variavel[k];

        printf("\n teste 2%c %d",variavel[k],k);
        l++;
    }
    printf("\n primeiro %c",primeiraParte[0]);
    printf("\n primeiro %c",primeiraParte[1]);
    printf("\n segunda  %c",segundaParte[0]);
    printf("\n segunda  %c",segundaParte[1]);

    printf("\n>>%s",primeiraParte);
    printf("\n>>%s",segundaParte);

    int m;

    if(strcmp(primeiraParte,segundaParte)==0){
        printf("iguais");
    }
    else
        printf("difentes");




}
