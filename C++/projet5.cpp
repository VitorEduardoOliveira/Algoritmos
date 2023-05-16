#include <iostream>



using namespace std;

int main() {
	int op,i=0;
	string nomes[10], contatos[10];
	
do{
	
		
		cout<<"+========= Menu =========+"<< endl;
		cout<<"| 1 - Cadastra Contato   |"<< endl;
		cout<<"| 2 - Mostra Contato     |"<< endl;
		cout<<"| 3 - Sair               |"<< endl;
		cout<<"+========= Menu =========+"<< endl;
		cout<<"Escolha a opcao: ";
		cin>> op; 
		
		switch(op){
			case 1:
				if(i<=9){
					
					cout <<"*** Rotina de Cadastro ***"<< endl;
					cout<<"# "<<i <<endl;
					cout <<"Informe o nome : " <<endl;
					cin>> nomes[i];
					cout <<"Informe o contato : "<<endl;
					cin>> contatos[i];
					i++;
					
				}else{
					cout<<"Agenda Lotada!!! "<<endl;
				}
					break;
				
				
			case 2:
				for(int c=0; c < i; c++){	
					cout <<"*** Contatos ***"<<endl;					
					cout <<"Nome: "<<nomes[c]<< endl;
					cout <<"Contato:" <<contatos[c]<<endl;
					cout <<"=========================="<<endl;
				}
				system ("pause"); // pausa ele para a tela
				break;
				
			case 3:
				cout <<"Saindo ..."<<endl;
				break;
				
			default:
				cout<<"Opção Invalida!!!" <<endl;
				break;
			}//Fim do switch
			system("cls");// limpa a tela
}while(op!=3);
	return 0;
}
