#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "TreeBin.h"

int main()
{


    Arv* a = cria('a',
                  cria('b',
                       inicializa(),
                       cria('d', inicializa(), inicializa())
                      ),
                  cria('c',
                       cria('e', inicializa(), inicializa()),
                       cria('f', inicializa(), inicializa())
                      )
                 );

    Arv* a1= cria('b',inicializa(),inicializa());

    Arv* b=cria('2',a1,a1);

    imprime(a);

    printf("\n\n");
    imprime(a1);

    printf("\n\n");

    imprime(b);



    printf("imprimir seta ");
    imprime_seta(a);

    printf("\n\n");



    system("pause");
    return 0;

}
