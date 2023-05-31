# Lista Duplamente Encadeada

Este é uma atividade de implementação de uma lista duplamente encadeada em C. Uma lista duplamente encadeada é uma estrutura de dados na qual cada nó possui um ponteiro para o próximo nó e um ponteiro para o nó anterior.

## Funcionalidades

- `list_dupl_encad* lista = leiIni(inteiro);`: Insere um novo elemento no início da lista.
- `leiAddEnd(&lista, inteiro);`: Insere um novo elemento no fim da lista.
- `leiAddIni(&lista, inteiro);`: Insere um novo elemento no inicio da lista.
- `leiprintList(&lista);`: Imprime os elementos da lista.
- `leiDest(&lista);`: Destroi os elementos da lista e limpa a memoria.
- `leiRemoveEnd(&lista);`: Remove ultimo node da lista.
- `leiRemoveIni(&lista);`: Remove primeiro node da lista.
- `leiInsertPos(&lista, valor, posicao);`: Insere o nó com o valor na posição inserida pelo user.
- `leiRemovePos(&lista, posicao);`: remove o nó na posição inserida pelo user.


## Exemplo de Uso

```C
    #Iniciando a lista com um valor
    list_dupl_encad* lista = leiIni(25);
    
    #Adicionando inteiros no fim da lista
    leiAddEnd(&lista, 4);
    leiAddEnd(&lista, 6);
    
    #Adicionando inteiros no inicio da lista
    leiAddIni(&lista,20);
    
    #Printando a lista
    leiprintList(&lista);
    #Saida(20 25 4 6)
    
    #Destruindo lista
    leiDest(lista);

    #Removendo Ultimo Node da lista
    leiRemoveEnd(&lista);

    #Removendo Primeiro Node da lista
    leiRemoveIni(&lista);

    #Inserindo valor na posição indicada pelo usuario
    leiInsertPos(&lista, 20, 2);

    #Remove valor na posição indicada pelo usuario
    leiRemovePos(&lista, 1);

   ```
   
## Compilação
Para compilar, executar no terminal:

``` 
make compile 
```
## Testes
Após compilar a aplicação, executar:

``` 
make run 
```
## All
Também é possível compilar e executar, simplesmente chamando o script make:

``` 
make
```

## Contribuição

Se você encontrar algum problema ou tiver sugestões de melhoria, sinta-se à vontade para contribuir abrindo uma issue ou enviando um pull request.

## Licença

Este projeto está licenciado sob a (ANULLBIS)
