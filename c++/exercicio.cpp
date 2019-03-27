#include <iostream>
#include <list>
#include <iterator>
#include <string>

using namespace std;

struct produto_t { // Criando uma struct para o produto
    int codigo;
    string nome;
    double preco;
    int qtde;
};

list<produto_t> listaDeProdutos; //Comando para criar uma lista de produtos

void cadastrarProdutos(){ // metodo para cadastrar os produtos
    produto_t produtos;//Defini a lista como produtos

    cout << "Código do produto: ";
    cin >> produtos.codigo; //Guardar código do produto
    cout << "Nome do produto: ";
    cin >> produtos.nome;//Guardar nome do produto
    cout << "Preço do produto: ";
    cin >> produtos.preco;//Guardar preco do produto
    cout << "Quantidade em estoque: ";
    cin >> produtos.qtde;//Guardar quantidade em estoque do produto

    listaDeProdutos.push_back(produtos); // "enviar" os dados para a lista adiciona os elementos na lista
}

void imprimir(){

    list<produto_t>::iterator p;

    p = listaDeProdutos.begin();

    while(p != listaDeProdutos.end()){
      cout << "Código: " << (*p).codigo << endl;// Imprimi código do produto
      cout << "Nome: " << (*p).nome << endl;// Imprimi nome do produto
      cout << "Preço: " << (*p).preco << endl;// Imprimi preco do produto
      cout << "Quantidade: " << (*p).qtde << endl;// Imprimi quantidade em estoque do produto
      cout << "Valor em estoque: R$ " << (*p).preco*(*p).qtde << endl;
      cout << "------------" << endl;
      p++;
  }

}

int main () // metodo main
{
    string opcao;
    int contador = 0;

    do{// Se controle for igual a sim ele cadastra um novo produto se não ele lista os produtos e sai do programa
        cout << "Deseja cadastrar algum produto?: ";
        cin >> opcao;
        cout << "" << endl;
        if(opcao == "sim"){
            cadastrarProdutos();
            contador++;
        }
    } while (opcao == "sim");

    if(contador > 0)
        imprimir();

    cout << "Saindo ...." << endl;

  return 0;
}
