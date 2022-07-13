#include<stdio.h>
#include <stdlib.h>
#include "TreeBin.h"


struct arv {
 char info;
 struct arv* esq;
 struct arv* dir;
};


/**
*           @Posicao n1
*           @NomeFuncao "inicializa"
*           @Oquefaz    recebe  um void e  retorna uma Arv null
*           @quaisOutrasFuncoesDentro   nenhuma
*/
Arv* inicializa(void)
{
 return NULL;
}

/**
*           @Posicao n2
*           @NomeFuncao "cria"
*           @Oquefaz    recebe 1 char , uma Arv*sae  e Arv*sad criar um Arv *p para armazenas os ponteiros usa
*            o p para aponta por pro info e recebe c
*              p aponta para esq  e recebe sae
               p aponta para dir e recebe sad
                returna o p em forma de lista
*           @quaisOutrasFuncoesDentro   nenhuma
*/

Arv* cria(char c, Arv* sae, Arv* sad){
 Arv* p=(Arv*)malloc(sizeof(Arv));
 p->info = c;
 p->esq = sae;
 p->dir = sad;
 return p;
}

/**
*           @Posicao n3
*           @NomeFuncao "libera"
*           @Oquefaz    recebe uma Arv*a e se a for diferente de vazio retorna uma arv null(ela chega os dois tanto da esquerda
                                                                                            quanto da direita )
*           @quaisOutrasFuncoesDentro   nenhuma
*/

Arv* libera (Arv* a){
 if (!vazia(a)){
 libera(a->esq); /* libera sae */
 libera(a->dir); /* libera sad */
 free(a); /* libera raiz */
 }
 return NULL;
}


/**
*           @Posicao n4
*           @NomeFuncao "vazia"
*           @Oquefaz    recebe um Arv e retorna um int  a vazio
*           @quaisOutrasFuncoesDentro   nenhuma
*/

int vazia(Arv* a)
{
 return a==NULL;
}

/**
*           @Posicao n5
*           @NomeFuncao "imprime "
*           @Oquefaz    recebe um Arv *a  verificar se arv*a não esta vazia .se nao tive vazia imprimir os elemenos
*           @quaisOutrasFuncoesDentro   nenhuma
*/

void imprime (Arv* a)
{
 if (!vazia(a)){
 printf("%c ", a->info); /* mostra raiz */
 imprime(a->esq); /* mostra sae */
 imprime(a->dir); /* mostra sad */
 }
}



void imprime_seta(Arv * r)
{
    printf("<");
    if(r !=  NULL){
        printf("%c",r->info);           /*Mostra informação*/
        imprime_seta(r->esq);           /*Imprime sae */
        imprime_seta(r->dir);           /*imprime sad */
    }
    printf(">");

}

