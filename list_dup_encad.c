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
    novoNo->prox = NULL;
    novoNo->prev = NULL;

    if (*lista == NULL) {
        *lista = novoNo;
    } else {
        list_dupl_encad* atual = *lista;

        while (atual->prox != NULL) {
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
    novoNo->prev = NULL;

    if (*lista != NULL) {
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