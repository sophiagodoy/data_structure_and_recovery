// EXERCÍCIO 02
/*
Fazer um programa que faz a leitura de uma lista X com N inteiros (N
deve ser lido tb). Multiplique cada elemento de X por um inteiro K
(K também deverá ser lido). Imprimir a lista lida, o valor da variável K
e a lista multiplicada por K
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
    No* listaK = inicializar();
    double valor; 
    int N, K, i;

    // LEITURA DO TAMANHO DA LISTA
    std::cout << "Digite o tamanho da lista: ";
    std::cin >> N;

    // LEITURA DA LISTA X 
    std::cout << "Digite os elementos da lista X:" << std::endl;
    for (i = 0; i < N; ++i) {
        std::cin >> valor;
        listaX = inserir(listaX, valor);
    }

    // LEITURA DO VALOR DE K
    std::cout << "Digite o valor da variável K: ";
    std::cin >> K;

    // DECLARANDO PONTEIRO PARA O LOOP
    No* atualX = listaX; // a variável atualX aponta para o primeiro no da lista 

    // MULTIPLICANDO A LISTA X PELO VALOR DE K E CRIANDO LISTA K
    // enquanto o ponteiro (atualX) não for nullptr, ocorrerá a multiplicação dos elementos da listaX pela variável K
    while (atualX != nullptr) { 
        // primeiro é criando a listaK, depois é multiplicado os elementos apontado pelo ponteiro (atualX) pela variável K e adicionado a listaK
        listaK = inserir(listaK, atualX->dado * K);
        // a multiplicação e inserção do ponteiro (atualX) são movidos para o próximo nó de suas listas
        atualX = atualX->proximo;
    }

    // IMPRIMIR A LISTA X 
    std::cout << "Lista X: " << std::endl;
    percorrer(listaX);
    std::cout << std::endl; // Nova linha após imprimir a lista

    // IMPRIMIR O VALOR DA VARIÁVEL K
    std::cout << "O valor da variavel K é: " << K << std::endl;

    // IMPRIMIR A LISTA K
    std::cout << "Lista K: ";
    percorrer(listaK);
    std::cout << std::endl; // Nova linha após imprimir a lista K

    // LIBERAR A MEMÓRIA DAS LISTAS
    liberarLista(listaX);
    liberarLista(listaK);

    return 0;
}
