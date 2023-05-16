#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std; // espaço de nomes - onde ele usa um espaço para fazer a transição dos dados do teclado para o monitor

int main() {
	//declarando variaveis
	string nome;
	// mostrando uma mensagem na tela
	cout <<"informe seu nome "<<endl; // endl pula a linha 
	// lendo o dado via teclado
	cin >> nome;
	
	cout <<" ola, " << nome << " seja bem vindo";
	
	return 0;
}
