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