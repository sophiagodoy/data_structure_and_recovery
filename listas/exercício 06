// EXERCÍCIO 06
/*
Fazer um programa em C para ler uma lista de inteiros positivos
de 15 posições. Imprimir a quantidade de números pares e a
quantidade de múltiplos de 5.
*/

// DEFININDO BIBLIOTECA 
#include <iostream>

// DEFINIÇÃO DA ESTRUTURA DO NÓ
struct No {
    int dado;  
    No* proximo; 
};

// FUNÇÃO PARA A INICIALIZAÇÃO DE UMA LISTA 
No* inicializar() {
    return nullptr; 
}

// FUNÇÃO PARA INSERIR UM ELEMENTO NO FINAL DA LISTA
No* inserir(No* lista, int valor) {  
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
    int i;
    int contpar = 0, cont5 = 0; 
    int valor;  

    // LEITURA DA LISTA X 
    std::cout << "Digite os 15 elementos da lista X (inteiros positivos):" << std::endl;
    for (i = 0; i < 15; ++i) {
        std::cin >> valor;
        listaX = inserir(listaX, valor);
    }

    // DECLARANDO PONTEIRO PARA O LOOP
    No* atualX = listaX; // a variável atualX aponta para o primeiro nó da lista 

    // PERCORRENDO A LISTA PARA CONTAR PARES E MÚLTIPLOS DE 5
    // enquanto o ponteiro (atualX) não for nullptr, ocorrerá a soma dos elementos da listaX
    while (atualX != nullptr) {
        // atualX é um ponteiro que aponta para o nó atual da lista encadeada. dado é o valor armazenado nesse nó
        if (atualX->dado % 2 == 0) {
           contpar++;
        }
        if (atualX->dado % 5 == 0) {
            cont5++;
        }
        atualX = atualX->proximo; // move para o próximo nó 
    }

    // IMPRIMINDO 
    std::cout << "A quantidade de números pares é: " << contpar << std::endl;
    std::cout << "A quantidade de números múltiplos de 5 é: " << cont5 << std::endl; 

    // LIBERAR A MEMÓRIA DAS LISTAS
    liberarLista(listaX);

    return 0;
}
