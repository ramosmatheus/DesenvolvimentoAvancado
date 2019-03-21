#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct produdo_t {

  int codigo;
	string nome;
  double preco;
  int qtde;

};

int main ()
{
	int n, i,x;
  int z = 0;
	produdo_t *produtos;

	cout << "Tem mais algum produto para adicionar? " << endl;
  cout << "1= SIM  / 0= NÃO" << endl;
	cin >> n;

  //produtos = new produdo_t[2];



  vector<produto_t> produtos;

  while (n == 1) {
    cout << "Teste if" << endl;
    for ( i = 0; i < n; i++) {

      //cout << "nome do produto: ";
      //cin >> produtos[i].nome;

      cout << "Código do produto: " << endl;
      cin >> produtos[i].codigo;

      cout << "Preço do produto: " << endl;
      cin >> produtos[i].preco;

      cout << "Quantidade em estoque: " << endl;
      cin >> produtos[i].qtde;

      cout << "---------------------------------------" << endl;
      cout << "Tem mais algum produto para adicionar? " << endl;
      cout << "1= SIM  / 0 = NÃO" << endl;
      cin >> n;
      z = z + 1;
    }

  }

  for ( int j = 0 ; j < z; j++){

  cout << "Código do produto: "<< produtos[j].codigo << endl;
  cout << "Preço do produto: "<< produtos[j].preco << endl;
  cout << "Quantidade em estoque: "<< produtos[j].qtde << endl;


  }

	return 0;
}
