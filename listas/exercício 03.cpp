// EXERCÍCIO 03
/*
Fazer um programa que faz a leitura de uma lista X com N reais
(N deverá ser lido). Calcule o somatório de todos os elementos
da lista. Imprimir a lista lida e o valor do somatório
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
    int N, i;
    double somatorio = 0.0; 
    double valor;

    // PEDINDO O TAMANHO DA LISTA
    std::cout << "Digite o valor de N: ";
    std::cin >> N;

    // LEITURA DA LISTA X 
    std::cout << "Digite os elementos da lista X:" << std::endl;
    for (i = 0; i < N; i++) {
        std::cin >> valor;
        listaX = inserir(listaX, valor);
    }

    // DECLARANDO PONTEIRO PARA O LOOP
    No* atualX = listaX; // a variável atualX aponta para o primeiro no da lista 

    // CALCULANDO O SOMATÓRIO DOS ELEMENTOS 
    // enquanto o ponteiro (atualX) não for nullptr, ocorrerá a soma dos elementos da listaX
    while (atualX != nullptr) {
        somatorio += atualX->dado; // adiciona o valor do nó (dado) atual ao somatório
        atualX = atualX->proximo; // move para a próxima linha 
    }

    // IMPRIMINDO A LISTA LIDA E O VALOR DO SOMATÓRIO
    std::cout << "Lista X: ";
    percorrer(listaX);
    std::cout << std::endl;
    std::cout << "O valor do somatorio e: " << somatorio << std::endl;

    // LIBERANDO A LISTA
    liberarLista(listaX);

    return 0;
}

