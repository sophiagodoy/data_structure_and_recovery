// EXERCÍCIO 01
/*
Fazer um programa que faz a leitura de duas listas X e Y, ambas com
N reais (N deve ser lido tb). Efetue a multiplicação dos respectivos
pares de elementos de X por Y, gerando uma terceira lista Z.
Imprima as listas X, Y e Z
*/

// DEFININDO BIBLIOTECA 
#include <iostream>;

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
    No* listaY = inicializar();
    No* listaZ = inicializar();
    int N, i;
    double valor; 

    // PEDINDO O TAMANHO DAS LISTAS
    std::cout << "Digite o tamanho das listas: ";
    std::cin >> N; 

    // LEITURA DA LISTA X 
    std::cout << "Digite os elementos da lista X:" << std::endl;
    for (i = 0; i < N; ++i) {
        std::cin >> valor;
        listaX = inserir(listaX, valor);
    }

    // LEITURA DA LISTA Y
    std::cout << "Digite os elementos da lista Y: " << std::endl; 
    for (i = 0; i < N; i++) {
        std::cin >> valor;
        listaY = inserir(listaY, valor);
    }

    // DECLARANDO PONTEIRO PARA O LOOP
    No* atualX = listaX; // a variável atualX aponta para o primeiro no da lista 
    No* atualY = listaY;

    // MULTIPLICAÇÃO DOS ELEMENTOS DA LISTA X E Y  E CRIANDO LISTA Z
    // enquanto o ponteiro (atualX e atualY) não forem nullptr, ocorrerá a multiplicação dos elementos da listaX e pela listaY
    while (atualX != nullptr && atualY != nullptr) { 
        // primeiro é criando a listaZ, depois é multiplicado os elementos da listaX e listaY apontados pelos ponteiros (atualX e atualY) e adicionado a listaZ
        listaZ = inserir(listaZ, atualX->dado * atualY->dado);
        // a multiplicação e inserção dos ponteiros (atualX e atualY) são movidos para o próximo nó de suas listas
        atualX = atualX->proximo;
        atualY = atualY->proximo;
    }

    // IMPRIMIR A LISTA X 
    std::cout << "Lista X: " << std::endl;
    percorrer(listaX);
    std::cout << std::endl; // Nova linha após imprimir a lista X

    // IMPRIMIR A LISTA Y
    std::cout << "Lista Y: ";
    percorrer(listaY);
    std::cout << std::endl; // Nova linha após imprimir a lista Y

    // IMPRIMIR A LISTA Z
    std::cout << "Lista Z: ";
    percorrer(listaZ);
    std::cout << std::endl; // Nova linha após imprimir a lista Z

    // LIBERAR A MEMÓRIA DAS LISTAS
    liberarLista(listaX);
    liberarLista(listaY);
    liberarLista(listaZ);

    return 0;
}
