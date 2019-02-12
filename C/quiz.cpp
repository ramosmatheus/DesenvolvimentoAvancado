#include<iostream>
// Comentário
using namespace std;

int main ()
{

string nome,x;
int pontuacao = 0;

cout << "Bem Vindo ao QUIZ do C " << endl;
cout << "Qual seu nome? ";
getline (cin, nome);
cout << "olá " << nome << endl;
cout << "Gostaria de jogar um jogo? s/n" << endl;
getline (cin, x);

if(x == "s"){
    cout << "Vamos jogar :D " << endl;
    cout << "Questão 1 " << endl;
    string resposta1;
    cout << "Quem descobriu o Brasil?" << endl;
    cout << "1 - Pedro Bial" << endl;
    cout << "2 - Pedro Zulu" << endl;
    cout << "3 - Avares Yout Mother" << endl;
    cout << "4 - Pedro Cabralzin" << endl;
    cin >> resposta1;

    if(resposta1 == "4"){
      pontuacao =+ 1;

    }
    cout << "Questão 2 " << endl;
    string resposta2;
    cout << "Quem foi Pedro Cabralzin?" << endl;
    cout << "1 - Um cara como você" << endl;
    cout << "2 - Como sua mãe" << endl;
    cout << "3 - Um descobridor" << endl;
    cout << "4 - Como a dona Cida" << endl;
    cin >> resposta2;
    if(resposta2 == "3"){
      pontuacao = pontuacao + 1;

    }
    cout << "Questão 3 " << endl;
    string resposta3;
    cout << "Quem foi Pedro Cabralzin?" << endl;
    cout << "1 - Um cara como você" << endl;
    cout << "2 - Como sua mãe" << endl;
    cout << "3 - Um descobridor" << endl;
    cout << "4 - Como a dona Cida" << endl;
    cin >> resposta3;
    if(resposta3 == "3"){
      pontuacao = pontuacao + 1;

    }
    cout << "Questão 4 " << endl;
    string resposta4;
    cout << "Quem foi Pedro Cabralzin?" << endl;
    cout << "1 - Um cara como você" << endl;
    cout << "2 - Como sua mãe" << endl;
    cout << "3 - Um descobridor" << endl;
    cout << "4 - Como a dona Cida" << endl;
    cin >> resposta4;
    if(resposta4 == "3"){
      pontuacao = pontuacao + 1;

    }
    cout << "Questão 5 " << endl;
    string resposta5;
    cout << "Quem foi Pedro Cabralzin?" << endl;
    cout << "1 - Um cara como você" << endl;
    cout << "2 - Como sua mãe" << endl;
    cout << "3 - Um descobridor" << endl;
    cout << "4 - Como a dona Cida" << endl;
    cin >> resposta5;
    if(resposta5 == "3"){
      pontuacao = pontuacao + 1;

    }
    cout << "Questão 6 " << endl;
    string resposta6;
    cout << "Quem foi Pedro Cabralzin?" << endl;
    cout << "1 - Um cara como você" << endl;
    cout << "2 - Como sua mãe" << endl;
    cout << "3 - Um descobridor" << endl;
    cout << "4 - Como a dona Cida" << endl;
    cin >> resposta6;
    if(resposta6 == "3"){
      pontuacao = pontuacao + 1;

    }
    cout << "Questão 7 " << endl;
    string resposta7;
    cout << "Quem foi Pedro Cabralzin?" << endl;
    cout << "1 - Um cara como você" << endl;
    cout << "2 - Como sua mãe" << endl;
    cout << "3 - Um descobridor" << endl;
    cout << "4 - Como a dona Cida" << endl;
    cin >> resposta7;
    if(resposta7 == "3"){
      pontuacao = pontuacao + 1;

    }
    cout << "Questão 8 " << endl;
    string resposta8;
    cout << "Quem foi Pedro Cabralzin?" << endl;
    cout << "1 - Um cara como você" << endl;
    cout << "2 - Como sua mãe" << endl;
    cout << "3 - Um descobridor" << endl;
    cout << "4 - Como a dona Cida" << endl;
    cin >> resposta8;
    if(resposta8 == "3"){
      pontuacao = pontuacao + 1;

    }
    cout << "Questão 9 " << endl;
    string resposta9;
    cout << "Quem foi Pedro Cabralzin?" << endl;
    cout << "1 - Um cara como você" << endl;
    cout << "2 - Como sua mãe" << endl;
    cout << "3 - Um descobridor" << endl;
    cout << "4 - Como a dona Cida" << endl;
    cin >> resposta9;
    if(resposta9 == "3"){
      pontuacao = pontuacao + 1;

    }
    cout << "Questão 10 " << endl;
    string resposta10;
    cout << "Quem foi Pedro Cabralzin?" << endl;
    cout << "1 - Um cara como você" << endl;
    cout << "2 - Como sua mãe" << endl;
    cout << "3 - Um descobridor" << endl;
    cout << "4 - Como a dona Cida" << endl;
    cin >> resposta10;
    if(resposta10 == "3"){
      pontuacao = pontuacao + 1;

    }

}
else{
  cout<<"Então é nois :D" << endl;
}

cout << pontuacao << endl;
}
