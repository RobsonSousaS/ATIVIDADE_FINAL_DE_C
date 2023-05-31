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


## Exemplo de Uso

```C
    #Iniciando a lista com um valor
    list_dupl_encad* lista = leiIni(25);
    
    #Adicionando inteiros no fim da lista
    leiAddEnd(&lista, 2);
    leiAddEnd(&lista, 3);
    
    #Adicionando inteiros no inicio da lista
    leiAddIni(&lista,10);
    
    #Printando a lista
    leiprintList(&lista);
    
    #Destruindo lista
    leiDest(lista);
    #Saida(10 25 2 3)

    #Removendo Ultimo Node da lista
    leiRemoveEnd(&lista);

    #Removendo Primeiro Node da lista
    leiRemoveIni(&lista);

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
