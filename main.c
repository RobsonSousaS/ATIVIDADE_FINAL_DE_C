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
    leiDest(lista);
}

int main()
{
    ListFunc();
}
