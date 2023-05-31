#ifndef _LISTA_DUPLA_ENCADEADA_H_
#define _LISTA_DUPLA_ENCADEADA_H_

struct node_dupl_encad {
    int valor;
    struct node_dupl_encad* prox;
    struct node_dupl_encad* prev;
};
typedef struct node_dupl_encad list_dupl_encad;

list_dupl_encad* leiIni(int cabeca);
void leiAddEnd(list_dupl_encad** lista, int valor);
void leiAddIni(list_dupl_encad** lista, int valor);
void leiprintList(list_dupl_encad** lista);
void leiDest(list_dupl_encad* lista);
void leiRemoveEnd(list_dupl_encad** lista);
void leiRemoveIni(list_dupl_encad** lista);
void leiInsertPos(list_dupl_encad** lista, int valor, int posicao);
void leiRemovePos(list_dupl_encad** lista, int posicao);
int leiConsultIni(list_dupl_encad* lista);
int leiConsultEnd(list_dupl_encad* lista);
int leiConsultPos(list_dupl_encad* lista, int posicao);
int leiConsutTam(list_dupl_encad* lista);

#endif
