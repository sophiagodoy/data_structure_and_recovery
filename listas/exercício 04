// EXERCÍCIO 04
/*
Fazer um programa que faz a leitura de uma lista X, com N
inteiros (N deverá ser lido). Gere uma segunda lista com os
valores de X em ordem inversa. Imprimir X e a lista com a
ordem inversa
*/

// DEFININDO BIBLIOTECA 
#include <iostream>

// DEFINIÇÃO DA ESTRUTURA DO NÓ
struct No {
    double dado; 
    No* proximo; 
};

// FUNÇÃO PARA A INICIALIZAÇÃO DE UMA LISTA 
No* inicializar() {
    return nullptr; 
}

// FUNÇÃO PARA INSERIR UM ELEMENTO NO FINAL DA LISTA
// coloca um valor no final da lista
/*
entrada1: 10
entrada2: 20 (saída: 10, 20)
entrada3: 30 (saída: 10, 20, 30)
*/
No* inserir(No* lista, double valor) {
    No* novo = new No;
    novo->dado = valor;
    novo->proximo = nullptr; 
    if (lista == nullptr) {
        return novo;
    } else {
        No* atual = lista;
        while (atual->proximo != nullptr) {
            atual = atual->proximo;
        }
        atual->proximo = novo; 
        return lista; 
    }
}

// FUNÇÃO PARA INSERIR UM ELEMENTO NO INÍCIO DA LISTA (USADA PARA CRIAR A LISTA INVERSA)
// coloca o valor no início da lista
/*
entrada1: 10
entrada2: 20 (saida: 20, 10)
entrada3: 30 (saída: 10, 20, 30)
*/
No* inserirInicio(No* lista, double valor) {
    No* novo = new No;
    novo->dado = valor;
    novo->proximo = lista;
    return novo;
}

// FUNÇÃO PARA PERCORRER A LISTA E IMPRIMIR OS ELEMENTOS 
void percorrer(No* lista) {
    No* atual = lista;
    while (atual != nullptr) {
        std::cout << atual->dado;
        atual = atual->proximo;
        if (atual != nullptr) {
            std::cout << " -> "; 
        }
    }
    std::cout << " -> nullptr"; 
}

// FUNÇÃO PARA LIBERAR A LISTA (LIBERAR A MEMÓRIA) 
void liberarLista(No* lista) {
    No* atual = lista;
    while (atual != nullptr) {
        No* temp = atual;
        atual = atual->proximo;
        delete temp; 
    }
}

int main() {
    // DEFININDO VARIÁVEIS 
    No* listaX = inicializar();
    No* listainversa = inicializar();
    int N, i; 
    double valor;

    // PEDINDO O TAMANHO DA LISTA
    std::cout << "Digite o valor de N: ";
    std::cin >> N;

    // LEITURA DA LISTA X 
    std::cout << "Digite os elementos da lista X:" << std::endl;
    for (i = 0; i < N; i++) {
        std::cin >> valor;
        listaX = inserir(listaX, valor);
        listainversa = inserirInicio(listainversa, valor);
    }

    // IMPRIMINDO A LISTA LIDA
    std::cout << "Lista X: ";
    percorrer(listaX);
    std::cout << std::endl;

    // IMPRIMINDO A LISTA INVERSA
    std::cout << "Lista Inversa: ";
    percorrer(listainversa);
    std::cout << std::endl;

    // LIBERANDO AS LISTAS
    liberarLista(listaX);
    liberarLista(listainversa);

    return 0;
}
