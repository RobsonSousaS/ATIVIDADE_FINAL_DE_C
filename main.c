#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "list_dup_encad.h"

void ListFunc(){
    list_dupl_encad* lista = leiIni(25);
    leiAddEnd(&lista, 2);
    leiAddEnd(&lista, 3);
    leiAddIni(&lista,10);
    leiprintList(&lista);
    leiRemoveEnd(&lista);
    leiprintList(&lista);
    leiRemoveIni(&lista);
    leiprintList(&lista);
    leiInsertPos(&lista, 10, 2);
    leiprintList(&lista);
    leiRemovePos(&lista, 3);
    leiprintList(&lista);
    int valIni = leiConsultIni(lista);
    printf("%d\n", valIni);
    int valEnd = leiConsultEnd(lista);
    printf("%d\n", valEnd);
    int valPos = leiConsultPos(lista, 2);
    printf("%d\n", valPos);
    int valTam = leiConsutTam(lista);
    printf("%d\n", valTam);
    leiDest(lista);
}

int main()
{
    ListFunc();
}
