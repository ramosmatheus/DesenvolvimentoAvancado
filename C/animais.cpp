#include <iostream>
#include <string>

using namespace std;

struct bicho_t {
  string nome;
  int idade;



};

int main()
{

  int q;
  string nome;

  cout << "Quantos animais? ";
  cin >> q;

  string nomes[q];
  cout << "Nome dos animais:  ";
  for (size_t i = 0; i < q; i++) {
      cin>> nome;
      nomes[i] = nome;
  }
  cout << "Animais cadastrados com sucesso" << endl;
  cout << "Deseja ver os animais cadastrados?" << endl;
  
  if (animais == 1) {
    cout << "---------" << endl;
    cout << "Nomes" << endl;
    for (size_t x = 0; x < q; x++) {

        cout << nomes[x] << endl;
    }
  }















  // bicho_t totoh;
  // bicho_t *xaninha;
  //
  // xaninha = new bicho_t;
  //
  // totoh.nome = "Spike";
  // totoh.idade = 45;
  //
  // cout << totoh.nome << "Nome" << endl;



}
