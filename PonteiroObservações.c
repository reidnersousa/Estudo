 
 
 float v[10];  /// não coloca os ponteiros declara ponteiros assim pois pode causa erro o
   float *p;
    *p=v;


//forma correta 
 float v[10];
    float *p=v;


    /// como passa uma variavel para outro ponteiro 

    int a=0;
    int *pp;
    pp=&a;
    *pp=2;
    printf("o endereço de a %d\n",&a);// imprimiu  o valor doo endereço
    printf("o a %d\n",a);           //imprimiu o valor de a que é 2 
    printf("o endereço de a %d\n",pp);  /// imprimiu o endereço 



// na main 
int nn;
    float x[N];
    printf("Entre os valores ");
    scanf("%d",&nn);
    if(nn>N){
        printf("Valor ultrapassa o limite %d",N);
    }
    captura(nn,x);
    float m =media(nn,x);
    float vv=variancia(nn,x,m);
    printf("Media %f \nVariancia : %f \n",m,vv);
