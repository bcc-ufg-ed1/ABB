#include "ArvBin.h"
#include<stdio.h>

void verificaSeExiste(ArvBin *arv, int item) {
    if (contem(arv, item) == TRUE)
        printf("O elemento %d foi encontrado!\n", item);
    else
        printf("O elemento %d nao foi encontrado!\n", item);
}

int main() {
    ArvBin *minhaArv = criarArvore();

    if (estahVazia(minhaArv))
        printf("Arvore vazia!\n");

    minhaArv = inserir(minhaArv, 3);
    minhaArv = inserir(minhaArv, 5);
    minhaArv = inserir(minhaArv, 4);
    minhaArv = inserir(minhaArv, 0);
    minhaArv = inserir(minhaArv, 2);

    verificaSeExiste(minhaArv, 3);
    verificaSeExiste(minhaArv, 5);
    verificaSeExiste(minhaArv, 4);
    verificaSeExiste(minhaArv, 0);
    verificaSeExiste(minhaArv, 2);
    verificaSeExiste(minhaArv, -1);

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

