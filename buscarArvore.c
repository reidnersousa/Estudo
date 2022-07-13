
void buscarArvore(Arv * r,char in)
{
    printf("<");
    if(r !=  NULL){

        printf("%c",r->info);
        if(r->info == in){
            printf("funcionar %c",r->info);

        }           /*Mostra informa��o*/
        buscarArvore(r->esq,in);           /*Imprime sae */
        buscarArvore(r->dir,in);           /*imprime sad */
    }
    printf(">");

}
