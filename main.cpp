#include <iostream>
using namespace std;

struct node {
    int num;
    struct node *prox;
};

struct lista {
    node *head = NULL;
    node *ult = NULL;
};

class posicao {
    int id;
    int x;
    int y;
    int valor;
    int vazia;
};

void inserirLetra(char letra, int linha, int coluna, lista *l){
    node *novo = new(node);


}

void jogo(int linha, int coluna, lista *l){

    int randon;
    char letra;

    cout << endl;

    for(int i = 0; i<linha; i++){
        cout << "  " << i+1;
    }
    cout << endl;

    for(int i=0; i<linha; i++){
        cout << i+1;
        for(int j=0; j<coluna; j++){
            randon = rand() % 20;
            letra = (char)(randon+65);
            inserirLetra(letra, i, j, l);
            cout<< "|"<< letra << "|";
        }
        cout << endl;
    }
}



int main() {

    lista *l;


    int linha, coluna;
    cout<< "Qual o tamanho do tabuleiro (multiplo de 2): ";
    cin >> linha;

    while(linha % 2 != 0){
        cout<< "Tamanho invalido! Tente novamente: ";
        cin >> linha;
    }

    coluna = linha;
    jogo(linha, coluna, l);



    return 0;
}