#ifndef ARV_BIN_H
#define ARV_BIN_H

#define TRUE 1
#define FALSE 0

typedef struct {
    int item;
    struct ArvBin *sae;
    struct ArvBin *sad;
} ArvBin;

ArvBin* criarArvore();
int estahVazia(ArvBin* arv);
ArvBin* criarNoFolha(int item);
int buscar(ArvBin* arv, int item);
ArvBin* inserir(ArvBin* arv, int item);
void preOrdem(ArvBin* arv, void (*f) (int));
void inOrdem(ArvBin* arv, void (*f) (int));
void posOrdem(ArvBin* arv, void (*f) (int));

#endif