#include<iostream>
// Comentário
using namespace std;

int main ()
{
    string nome;
    int idade;
    cout << "Qual seu nome? ";
    getline (cin, nome);// Captura oq o usuario escreveu na linha de cima, cin captura a palavra digitada, cout "imprimi" a palavra, getline pega a linha digitada
    cout << "Qual sua idade? ";
    cin >> idade;

    cout << "Olá " << nome << endl; //imprimir algo no terminal

    if (idade <18)
    {
      cout << "Você é de menor" << endl;
    }
    else
    {
      cout << "Você é de maior (borabebe) " << endl;
    }

    for(int n = 0; n<= 10; n++){ //for para exibir números de 0 a 10
        cout << n << endl;

    }

    return 0;
}
