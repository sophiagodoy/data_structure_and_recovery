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
