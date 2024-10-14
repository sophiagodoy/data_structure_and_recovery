// EXERCÍCIO 05
/*
Ler uma lista de inteiros de N posições. Escreva a seguir o valor e
a posição do maior e menor elementos lidos
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
    int posicaoMaior = 0, posicaoMenor = 0, posicaoAtual = 0;
    double maior, menor;
    double valor;

    // PEDINDO O TAMANHO DA LISTA
    std::cout << "Digite o valor de N: ";
    std::cin >> N;

    // LEITURA DA LISTA X 
    std::cout << "Digite os elementos da lista X:" << std::endl;
    for (i = 0; i < N; i++) {
        std::cin >> valor;
        listaX = inserir(listaX, valor);
        // INICIALIZANDO MAIOR E MENOR COM O PRIMEIRO VALOR LIDO
        if (i == 0) {
            maior = valor;
            menor = valor;
        }
    }

    // DECLARANDO PONTEIRO PARA O LOOP
    No* atualX = listaX; // a variável atualX aponta para o primeiro nó da lista 

    // PERCORRENDO A LISTA PARA ENCONTRAR O MENOR E O MAIOR
    // enquanto o ponteiro (atualX) não for nullptr, ocorrerá a soma dos elementos da listaX
    while (atualX != nullptr) {
        if (atualX->dado > maior) {
            // Se o valor do nó atual (atualX->dado) for maior que o valor armazenado em maior, o valor de maior é atualizado com esse novo valor
            maior = atualX->dado; 
            // A posição do maior valor também é atualizada com a posição atual da lista
            posicaoMaior = posicaoAtual; 
        }
        if (atualX->dado < menor) {
            // Se o valor do nó atual for menor que o valor armazenado em menor, o valor de menor é atualizado, assim como sua posição
            menor = atualX->dado;
            posicaoMenor = posicaoAtual;
        }
        // O ponteiro atual é movido para o próximo nó da lista
        atualX = atualX->proximo;
        // A variável posicaoAtual é incrementada, de modo que ela acompanha a posição de cada nó na lista
        posicaoAtual++;
    }

    // IMPRIMINDO O MAIOR E O MENOR NÚMERO E SUAS POSIÇÕES
    std::cout << "Maior valor: " << maior << " na posicao " << posicaoMaior << std::endl;
    std::cout << "Menor valor: " << menor << " na posicao " << posicaoMenor << std::endl;

    // LIBERANDO A LISTA
    liberarLista(listaX);

    return 0;
}

