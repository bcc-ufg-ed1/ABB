#include "ArvBin.h"
#include<stdlib.h>

ArvBin* criarArvore() {
    return NULL;
}

int obterAltura(ArvBin* arv) {
    if (arv == NULL)
        return -1;
    int hSae, hSad;
    hSae = obterAltura(arv->sae);
    hSad = obterAltura(arv->sad);
    if (hSae > hSad)
        return (1 + hSae);
    return (1 + hSad);
}

int estahVazia(ArvBin* arv) {
    if (arv == NULL)
        return TRUE;
    return FALSE;
}

ArvBin* criarNoFolha(int item) {
    ArvBin* folha = malloc(sizeof(*folha));
    if (folha == NULL)
        return NULL;
    folha->item = item;
    folha->sae = NULL; folha->sad = NULL;
    return folha;
}

int buscar(ArvBin* arv, int item) {
    if (arv == NULL)
        return FALSE;
    if (item < arv->item)
        return buscar(arv->sae, item);
    if (item > arv->item)
        return buscar(arv->sad, item);
    return TRUE;
}

ArvBin* inserir(ArvBin* arv, int item) {
    if (arv == NULL)
        return criarNoFolha(item);
    if (item < arv->item)
        arv->sae = inserir(arv->sae, item);
    if (item > arv->item)
        arv->sad = inserir(arv->sad, item);
    return arv;
}

ArvBin* remover(ArvBin* arv, int item) {
    if (arv == NULL) // não encontrou elemento para remover
        return NULL;
    if (item < arv->item)
        arv->sae = remover(arv->sae, item);
    else if (item > arv->item)
        arv->sad = remover(arv->sad, item);
    else {
        if ((arv->sae == NULL) && (arv->sad == NULL)) { // É um nó folha.
            free(arv);
            arv = NULL;
        } else if (arv->sae == NULL) {		    // Tem apenas um filho à direita.
            ArvBin* aux = arv;
            arv = arv->sad;
            free(aux);
            aux = NULL;
        } else if (arv->sad == NULL) {		    // Tem apenas um filho à esquerda.
            ArvBin* aux = arv;
            arv = arv->sae;
            free(aux);
            aux = NULL;
        } else {
            ArvBin* aux = arv->sae;
            while(aux->sad != NULL) {
                aux = aux->sad;
            }
            arv->item = aux->item; aux->item = item;
            arv->sae = remover(arv->sae, item);
        }
    }
    return arv;
}


void preOrdem(ArvBin* arv) {
    if (arv != NULL) {
      printf("%d ", arv->item);
      preOrdem(arv->sae);
      preOrdem(arv->sad);
    }
}

void inOrdem(ArvBin* arv) {
    if (arv != NULL) {
      inOrdem(arv->sae);
      printf("%d ", arv->item);
      inOrdem(arv->sad);
    }
}

void posOrdem(ArvBin* arv) {
    if (arv != NULL) {
      posOrdem(arv->sae);
      posOrdem(arv->sad);
      printf("%d ", arv->item);
    }
}
