#include <iostream>
#include <list>
#include <iterator>
#include <string>

using namespace std;

struct produto_t {
    int codigo;
    string nome;
    double preco;
    int qtde;
};

list<produto_t> listaDeProdutos; //Comando para criar uma lista de produtos

void cadastrarProdutos(){
    produto_t produtos;

    cout << "Código do produto: ";
    cin >> produtos.codigo;
    cout << "Nome do produto: ";
    cin >> produtos.nome;
    cout << "Preço do produto: ";
    cin >> produtos.preco;
    cout << "Quantidade em estoque: ";
    cin >> produtos.qtde >> endl;

    listaDeProdutos.push_back(produto);
}

void imprimir (list<produto_t>& lista){
    list<produto_t>::iterator p; //Comando para criar um interador de produto

    p = lista.begin();

    while(p != lista.end()){
        cout << "Código: " << (*p).id << endl;
        cout << "Nome: " << (*p).nome << endl;
        cout << "Preço: " << (*p).preco << endl;
        cout << "Quantidade: " << (*p).qtde << endl;
        p++;
    }
}

int main ()
{
    string control;
    int cont = 0;

    do{
        cout << "Deseja cadastrar algum produto?: ";
        cin >> control;
        cout << "" << endl;
        if(control == "sim"){
            cadastrarProdutos();
            cont++;
        }
    } while (control == "sim");

    if(cont > 0)
        imprimir(listaDeProdutos);

    cout << "Saindo ....";

  return 0;
}
