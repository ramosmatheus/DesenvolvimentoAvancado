#include <iostream>
#include <string>

using namespace std;

int main()
{

  string *nome;
  int *idade;

  nome = new string;
  idade = new int;

  cin >> *nome;
  cin >> *idade;

  if (*idade >= 18) {
    cout << *nome << "Voce é maior de idade" << endl;
  }else{
    p  cout << *nome << "Voce é menor de idade" << endl;
  }

}
