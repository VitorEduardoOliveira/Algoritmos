#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
/*	int matriz[5][2] = { {8,9},
						 {7,6},
						 {5,8},
						 {7,7},
						 {5,4}};
						 
	int l=0, c=0;
	
	cout <<"Digite um numero"<<endl;
	/*nao existe limite dentro da estrutura de repetiçao, ele so vai voltar a primeira 
	quando ele acabar a ultima que ele entrou a mais interna para externa
	 de dentro para fora*/
/*	for(int linha=0; linha<5; linha++){
		for(int coluna=0; coluna<2; coluna++){
			cout<<"Linha: "<<linha<<" coluna: "<<coluna<<endl;
			cin>>matriz[linha][coluna];
		}
	}
	//visualizando o conteudo da matriz]
		for(int linha=0; linha<5; linha++){
		for(int coluna=0; coluna<2; coluna++){
			cout<< matriz[linha][coluna]<<"|";
		}
		cout<<endl;
	}*/
	//mostrando diagonal principal
	int matriz [4][4] = {{1,2,56,78},
					   {2,4,32,90},
					   {12,36,1,33},
					   {54,21,55,102}};

	int linha=0, coluna=0;
	cout <<matriz[linha][coluna] <<endl;
	linha++;
	coluna++;
	cout <<matriz[linha][coluna] <<endl;
	linha++;
	coluna++;
	cout <<matriz[linha][coluna] <<endl;
	linha++;
	coluna++;
	cout <<matriz[linha][coluna] <<endl;
	linha++;
	coluna++;
	
	for(int linha=0; linha<4; linha++){
		for(int coluna=0; coluna<4; coluna++){
			if(linha==coluna){
			cout<< matriz[linha][coluna];
			}
		}
		cout << endl;
	}
	
	

	// usando for para automatizar a matriz
/*	for(l=0; l<5; l++){
	cout <<"Linha: " <<l<<endl;
		cin>>matriz[l][0];
		cin>>matriz[l][1];
	}*/

	/*
cin>> matriz[0][0];
cin>> matriz[0][1];
cin>> matriz[1][0];
cin>> matriz[1][1];
cin>> matriz[2][0];
cin>> matriz[2][1];
cin>> matriz[3][0];
cin>> matriz[3][1];
cin>> matriz[4][0];
cin>> matriz[4][1];*/



	return 0;
}
