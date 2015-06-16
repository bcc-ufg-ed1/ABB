#include "ArvBin.h"
#include<stdio.h>

int main() {
    ArvBin *minhaArv = criarArvore();

    if (estahVazia(minhaArv))
        printf("Arvore vazia!\n");

    minhaArv = inserir(minhaArv, 3);
    minhaArv = inserir(minhaArv, 1);
    minhaArv = inserir(minhaArv, 2);
    minhaArv = inserir(minhaArv, 4);
    minhaArv = inserir(minhaArv, 0);

    minhaArv = remover(minhaArv, 3);


    preOrdem(minhaArv);

    printf("h = %d\n", obterAltura(minhaArv));


/*  minhaArv = inserir(minhaArv, 5);
    minhaArv = inserir(minhaArv, 3);
    minhaArv = inserir(minhaArv, 7);
    minhaArv = inserir(minhaArv, 4);
    minhaArv = inserir(minhaArv, 6);
    preOrdem(minhaArv);
    printf("\n");
    inOrdem(minhaArv);
    printf("\n");
    posOrdem(minhaArv);

    if (buscar(minhaArv, 8) == TRUE)
        printf("\nElemento encontrado!\n");
    else
        printf("\nElemento não encontrado!\n");

*/
    return 0;
}

