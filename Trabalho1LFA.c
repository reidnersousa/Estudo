
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{



    char aab[25]="babac";
    printf("\t1 para rejeita e 0 para aceita \n\n");

    printf("Para a palavra babac  a linguagem :");
    verificaABBA(aab);

    char baba[20]="baba";
    printf("\nPara a palavra baba  a linguagem :");

    verificaABBA(baba);

    char babab[20]="babab";
    printf("\nPara a palavra babab  a linguagem :");

    verificaABBA(babab);

    return 0;
}

int verificaSeTemApenasAouB(char variavel[20]){
    int i;

    // 0 para aceita e 1 para rejeita



    for(i=0; variavel[i]!=NULL; i++)
    {
        switch(variavel[i]){
            case 'a':
                //printf("\n tem uma a");
                continue;
            case 'b':
                //printf("\n tem uma b");
                continue;
            default :
               // printf("\n não tem");
                return 1;
        }


    }
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


// 0 para aceita e 1 para rejeita
int verificaABBA (char variavel[20])
{
    int i,k,tamanho=0;
    int j=0;
    int decisao;
    char primeiraParte[20]="0";
    char segundaParte[20]="0";

    for(i=0; variavel[i]!=NULL; i++)
    {
        tamanho++;
    }

    decisao=verificaSeTemApenasAouB(variavel);
   // printf("\n Decisao %d",decisao);
    if(decisao==0){
        printf("\nA linguagem Aceita pois so tem 'a' e 'b' \n");
    }
    else if (decisao==1){
        printf("\nA linguagem Rejeita pois tem letras diferentes de 'a' e 'b'\n");
        return 1;
    }



    for(i=0;i<tamanho/2;i++){
        primeiraParte[i]=variavel[i];
       // printf("\n P teste 2%c %d",variavel[i],i);


    }

    int l=0;
    for(k=tamanho/2;k<tamanho;k++){

        segundaParte[l]=variavel[k];

     //   printf("\n S teste 2%c %d",variavel[k],k);
        l++;
    }


    //printf("\n>>%s",primeiraParte);
    //printf("\n>>%s",segundaParte);

    int m;

    if(strcmp(primeiraParte,segundaParte)==0){
        printf("A primeira parte é igual a segunda parte (aceita)\n ");
        return 0;
    }
    else{
        printf("A primeira parte é diferente da segunda parte (rejeita)\n");
        return 1;
    }



}
