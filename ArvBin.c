#include "ArvBin.h"
#include<stdlib.h>

ArvBin* criarArvore() {
    return NULL;
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

int contem(ArvBin* arv, int item) {
    if (arv == NULL)
        return FALSE;
    if (item < arv->item)
        return contem(arv->sae, item);
    if (item > arv->item)
        return contem(arv->sad, item);
    return TRUE;
}

ArvBin* inserir(ArvBin* arv, int item) {
    if (arv == NULL)
        return criarNoFolha(item);
    if (item < arv->item) {
        arv->sae = inserir(arv->sae, item);
    } else if (item > arv->item) {
        arv->sad = inserir(arv->sad, item);
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
