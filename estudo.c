
#include <time.h>


int fibonacci(int i)
{
    if(i<2){
        return i;
    }
    else {
        int a=0;
        int b=1;
        for(int j=2; j<=i; ++j){
            int c = a +b;
            a=b;
            b=c;
        }
        return b;

    }
}

static float pow_1(int n)
{
    if(n%2 ==0 ){
        return 1.0;
    }
    else{
        return -1.0;
    }

}
float valor_pi(int n ){
    float soma=0;
    for(int i=0; i<n;i++){
        soma +=(pow_1(i))/(2*i+1);
    }
    return 4*soma;
}

void exemplo_Continue()
{
 for(int i=0; i<10; i++){
        if(i==5){
            continue;
        }
        printf("%d\n",i);
    }
    printf("fim\n");
}

void exemplo_Break(){
     for(int i=0; i<10; i++){
        if(i==5){
            break;
        }
        printf("%d\n",i);
    }
    printf("fim>>>>>\n");


}

void sranddd(){
    srand(time(NULL));
    printf("%d\n",rand()%10);
    printf("%d\n",rand()%10);
    printf("%d\n",rand()%10);
    printf("%d\n",rand()%10);
}

void jogo_Impar_Par()
{
    int escolha;
    int usuario;
    int computador;

    printf("Entre com sua escolha : 0(par) ou 1(impar):\n");
    scanf("%d",&escolha);
    printf("Entre com seu numero (pode ser impar ou par ):");
    scanf("%d",&usuario);

    srand(time(NULL));
    computador = rand()%10;
    printf("Computador : %d \n",computador);

    if(((usuario+computador)%2)==escolha){
        printf("Voce (usuario) ganhou! \n");
    }
    else
        printf("Eu (computador) ganhei !\n");
}
