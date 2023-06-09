// repetição em c?
#include "list_dup_encad.h"
#include <stdlib.h>
#include <stdio.h>

list_dupl_encad *leiIni(int cabeca){
    list_dupl_encad* head;
    head = (list_dupl_encad*)malloc(sizeof(list_dupl_encad));
    head->valor = cabeca;
    head->prox = 0;
    head->prev = 0;
    return head;
}

void leiDest(list_dupl_encad* lista){
    if (lista->prox != 0){
        leiDest(lista->prox);
    }
    free(lista);
}

void leiAddEnd(list_dupl_encad** lista, int valor) {
    list_dupl_encad* novoNo = (list_dupl_encad*)malloc(sizeof(list_dupl_encad));
    novoNo->valor = valor;
    novoNo->prox = 0;
    novoNo->prev = 0;

    if (*lista == 0) {
        *lista = novoNo;
    } else {
        list_dupl_encad* atual = *lista;

        while (atual->prox != 0) {
            atual = atual->prox;
        }
        atual->prox = novoNo;
        novoNo->prev = atual;
    }
}

void leiAddIni(list_dupl_encad** lista, int valor) {
    list_dupl_encad* novoNo = (list_dupl_encad*)malloc(sizeof(list_dupl_encad));
    novoNo->valor = valor;
    novoNo->prox = *lista;
    novoNo->prev = 0;

    if (*lista != 0) {
        (*lista)->prev = novoNo;
    }

    *lista = novoNo;
}

void leiprintList(list_dupl_encad** lista) {
    list_dupl_encad* atual = *lista;

    while (atual != 0) {
        printf("%d ", atual->valor);
        atual = atual->prox;
    }
    printf("\n");
}

void leiRemoveEnd(list_dupl_encad** lista) {
    if (*lista == 0) {
        return; 
    }

    if ((*lista)->prox == 0) {
        free(*lista);
        *lista = 0;
        return; 
        }

    list_dupl_encad* atual = *lista;

    while (atual->prox != 0) {
        atual = atual->prox;
    }

    atual->prev->prox = 0;
    free(atual);
}

void leiRemoveIni(list_dupl_encad** lista) {
    if (*lista == 0) {
        return;
    }

    list_dupl_encad* noRemovido = *lista;
    *lista = (*lista)->prox;

    if (*lista != 0) {
        (*lista)->prev = 0;
    }

    free(noRemovido);
}

void leiInsertPos(list_dupl_encad** lista, int valor, int posicao) {
    if (posicao <= 0) {
        leiAddIni(lista, valor);
    } else {
        list_dupl_encad* novoNo = (list_dupl_encad*)malloc(sizeof(list_dupl_encad));
        novoNo->valor = valor;
        novoNo->prox = 0;
        novoNo->prev = 0;

        list_dupl_encad* atual = *lista;
        int contador = 1;

        while (atual != 0 && contador < posicao) {
            atual = atual->prox;
            contador++;
        }

        if (atual == 0) {
            leiAddEnd(lista, valor);
        } else {
            novoNo->prox = atual;
            novoNo->prev = atual->prev;

            if (atual->prev != 0) {
                atual->prev->prox = novoNo;
            }
            atual->prev = novoNo;
            
            if (posicao == 1) {
                *lista = novoNo;
            }
        }
    }
}
void leiRemovePos(list_dupl_encad** lista, int posicao) {
    if (*lista == 0 || posicao <= 0) {
        return;
    }

    list_dupl_encad* atual = *lista;
    int contador = 1;

    while (atual != 0 && contador < posicao) {
        atual = atual->prox;
        contador++;
    }

    if (atual == 0) {
        return;
    }

    if (atual->prev != 0) {
        atual->prev->prox = atual->prox;
    } else {
        *lista = atual->prox;
    }

    if (atual->prox != 0) {
        atual->prox->prev = atual->prev;
    }

    free(atual);
}
int leiConsultIni(list_dupl_encad* lista) {
    if (lista == 0) {
        return -1;
    }
    return lista->valor;
}

int leiConsultEnd(list_dupl_encad* lista) {
    if (lista == 0) {
        return -1;
    }

    list_dupl_encad* atual = lista;

    while (atual->prox != 0) {
        atual = atual->prox;
    }

    return atual->valor;
}

int leiConsultPos(list_dupl_encad* lista, int posicao) {
    if (lista == 0 || posicao <= 0) {
        return -1;
    }

    list_dupl_encad* atual = lista;
    int contador = 1;

    while (atual != 0 && contador < posicao) {
        atual = atual->prox;
        contador++;
    }

    if (atual == 0) {
        return -1;
    }

    return atual->valor;
}

int leiConsutTam(list_dupl_encad* lista) {
    int tamanho = 0;
    list_dupl_encad* atual = lista;

    while (atual != 0) {
        tamanho++;
        atual = atual->prox;
    }

    return tamanho;
}

