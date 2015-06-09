#include "ArvBin.h"
#include<stdio.h>

int main() {
    ArvBin *minhaArv = criarArvore();
    minhaArv = inserir(minhaArv, 5);
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
        printf("\nElemento n�o encontrado!\n");

    return 0;
}

