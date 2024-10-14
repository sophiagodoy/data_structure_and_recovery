// EXERCÍCIO 07
/*
Ler uma lista A com 10 elementos inteiros correspondentes às
idades de um grupo de pessoas. Escreva um programa que
determine e escreva a idade média dos elementos lidos e
quantos elementos são menores que a média.
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
    int i, somatorio = 0, contmenor = 0;
    double valor, media;

    // LEITURA DA LISTA X 
    std::cout << "Digite os elementos da lista X:" << std::endl;
    for (i = 0; i < 10; ++i) {
        std::cin >> valor;
        listaX = inserir(listaX, valor);
        somatorio += valor;
    }

    // CÁLCULO MÉDIA
    media = somatorio / 10.0;

    // DECLARANDO PONTEIRO PARA O LOOP
    No* atualX = listaX; // a variável atualX aponta para o primeiro nó da lista 

    // VENDO QUANTOS ELEMENTOS SÃO MENOR QUE A MÉDIA
    while (atualX != nullptr) {
        if (atualX->dado < media) {
            contmenor++; 
        }
        atualX = atualX->proximo; // Avançar para o próximo nó
    }

    // IMPRIMIR A IDADE MÉDIA E CONTAGEM
    std::cout << "Idade media: " << media << std::endl;
    std::cout << "Numero de elementos menores que a media: " << contmenor << std::endl;


    // LIBERAR A MEMÓRIA DAS LISTAS
    liberarLista(listaX);

    return 0;
}
