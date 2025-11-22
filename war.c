#include <stdio.h>
#include <string.h>

    typedef struct {
        char nome[30];
        char cor[10];
        int tropas;
    } territorio;

int main() {
  
territorio t1, t2, t3, t4, t5;

printf("Vamos colocar os dados dos territorios: \n");

printf("Territorio 1: \n");
printf("Nome: \n");
scanf("%s", t1.nome);
printf("Cor: \n");
scanf("%s", t1.cor);
printf("Numero de tropas: \n");
scanf("%d", &t1.tropas);

printf("\n");

printf("Territorio 2: \n");
printf("Nome: \n");
scanf("%s", t2.nome);
printf("Cor: \n");
scanf("%s", t2.cor);
printf("Numero de tropas: \n");
scanf("%d", &t2.tropas);

printf("\n");

printf("Territorio 3: \n");
printf("Nome: \n");
scanf("%s", t3.nome);
printf("Cor: \n");
scanf("%s", t3.cor);
printf("Numero de tropas: \n");
scanf("%d", &t3.tropas);

printf("\n");

printf("Territorio 4: \n");
printf("Nome: \n");
scanf("%s", t4.nome);
printf("Cor: \n");
scanf("%s", t4.cor);
printf("Numero de tropas: \n");
scanf("%d", &t4.tropas);

printf("\n");

printf("Territorio 5: \n");
printf("Nome: \n");
scanf("%s", t5.nome);
printf("Cor: \n");
scanf("%s", t5.cor);
printf("Numero de tropas: \n");
scanf("%d", &t5.tropas);

printf("\n");

printf("Territorios:\n");

printf("Territorio 1 == Nome: %s == Cor: %s == Numero de tropas: %d \n", t1.nome, t1.cor, t1.tropas);
printf("Territorio 2 == Nome: %s == Cor: %s == Numero de tropas: %d \n", t2.nome, t2.cor, t2.tropas);
printf("Territorio 3 == Nome: %s == Cor: %s == Numero de tropas: %d \n", t3.nome, t3.cor, t3.tropas);
printf("Territorio 4 == Nome: %s == Cor: %s == Numero de tropas: %d \n", t4.nome, t4.cor, t4.tropas);
printf("Territorio 5 == Nome: %s == Cor: %s == Numero de tropas: %d \n", t5.nome, t5.cor, t5.tropas);

    return 0;
}

