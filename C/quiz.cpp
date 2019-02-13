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
    cout << "3 - Álvares Pedrosa" << endl;
    cout << "4 - Pedro Álvares Cabral" << endl;
    cin >> resposta1;

    if(resposta1 == "4"){
      pontuacao =+ 1;

    }else{
      cout << "Você errou :(" << endl;
    }
    cout << "Questão 2 " << endl;
    string resposta2;
    cout << "Qual o nome da esfera sólida do nosso planeta?" << endl;
    cout << "1 - Atmosfera" << endl;
    cout << "2 - Planeta" << endl;
    cout << "3 - Litosfera" << endl;
    cout << "4 - Sistema solar" << endl;
    cin >> resposta2;
    if(resposta2 == "3"){
      pontuacao = pontuacao + 1;

    }else{
      cout << "Você errou :(" << endl;
    }
    cout << "Questão 3 " << endl;
    string resposta3;
    cout << "Quantos ossos tem o corpo humano?" << endl;
    cout << "1 - 206" << endl;
    cout << "2 - 125" << endl;
    cout << "3 - 198" << endl;
    cout << "4 - 145" << endl;
    cin >> resposta3;
    if(resposta3 == "1"){
      pontuacao = pontuacao + 1;

    }else{
      cout << "Você errou :(" << endl;
    }
    cout << "Questão 4 " << endl;
    string resposta4;
    cout << "Quantas letras há no alfabeto?" << endl;
    cout << "1 - 36" << endl;
    cout << "2 - 26" << endl;
    cout << "3 - 21" << endl;
    cout << "4 - 29" << endl;
    cin >> resposta4;
    if(resposta4 == "2"){
      pontuacao = pontuacao + 1;

    }else{
      cout << "Você errou :(" << endl;
    }
    cout << "Questão 5 " << endl;
    string resposta5;
    cout << "Coletivo de chave." << endl;
    cout << "1 - Chaves" << endl;
    cout << "2 - Varias Chaves" << endl;
    cout << "3 - Molho" << endl;
    cout << "4 - Caravam" << endl;
    cin >> resposta5;
    if(resposta5 == "3"){
      pontuacao = pontuacao + 1;

    }else{
      cout << "Você errou :(" << endl;
    }
    cout << "Questão 6 " << endl;
    string resposta6;
    cout << "Côr predominante da Bandeira da Áustria." << endl;
    cout << "1 - Azul" << endl;
    cout << "2 - Roxo" << endl;
    cout << "3 - Branco" << endl;
    cout << "4 - Vermelho" << endl;
    cin >> resposta6;
    if(resposta6 == "4"){
      pontuacao = pontuacao + 1;

    }else{
      cout << "Você errou :(" << endl;
    }
    cout << "Questão 7 " << endl;
    string resposta7;
    cout << "Ano da Proclamação da República no Brasil." << endl;
    cout << "1 - 1889" << endl;
    cout << "2 - 2001" << endl;
    cout << "3 - 1950" << endl;
    cout << "4 - 2018" << endl;
    cin >> resposta7;
    if(resposta7 == "1"){
      pontuacao = pontuacao + 1;

    }else{
      cout << "Você errou :(" << endl;
    }
    cout << "Questão 8 " << endl;
    string resposta8;
    cout << "Qual o maior planeta do Sistema Solar?" << endl;
    cout << "1 - Júpter" << endl;
    cout << "2 - Terra" << endl;
    cout << "3 - Plutão" << endl;
    cout << "4 - Marte" << endl;
    cin >> resposta8;
    if(resposta8 == "1"){
      pontuacao = pontuacao + 1;

    }else{
      cout << "Você errou :(" << endl;
    }
    cout << "Questão 9 " << endl;
    string resposta9;
    cout << "Quem inventou a lâmpada?" << endl;
    cout << "1 - Sam Whinchester" << endl;
    cout << "2 - Thomas Edison" << endl;
    cout << "3 - Roberto Carlos" << endl;
    cout << "4 - James Nobel" << endl;
    cin >> resposta9;
    if(resposta9 == "2"){
      pontuacao = pontuacao + 1;

    }else{
      cout << "Você errou :(" << endl;
    }
    cout << "Questão 10 " << endl;
    string resposta10;
    cout << "Qual é o maior animal vivo?" << endl;
    cout << "1 - Tubarão" << endl;
    cout << "2 - Baleia Azul" << endl;
    cout << "3 - Jararaca" << endl;
    cout << "4 - King Kong" << endl;
    cin >> resposta10;
    if(resposta10 == "2"){
      pontuacao = pontuacao + 1;

    }else{
      cout << "Você errou :(" << endl;
    }

}
else{
  cout<<"Então é nois :D" << endl;
}

cout << pontuacao << endl;
}
