#include <iostream>
#include <string>
using namespace std;

int main() {
	int n,m,g,h;
	string pais[10];
	string b, c, d;
	int jogos[10];

	do	
	{
	
		 cout<<"|-------- Menu de jogos -------|"<<endl;
		 cout<<"|     1- Cadastre Paises       |"<<endl;
		 cout<<"|     2- Jogos e Resultados    |"<<endl;
		 cout<<"|     3- Calculo Pontuacao     |"<<endl;
		 cout<<"|     4- Mostrar classificacao |"<<endl;
		 cout<<"|     5- Sair                  |"<<endl;
		 cin>>n;

				 switch (n)
				{
				 	case 1:
					{
				 		cout<<"Cadastre 10 paises"<<endl;
					 	for(int i=0; i<10; i++)
						{
						 	cout<<"Escreva o nome do pais "<<endl;
							cin>> pais[i];	
						}	 
							break;
					} 
				
					
				
				
					switch(n<2){
					
						case 2:
						{
								cout<<"Qual o resultado dos jogos entre: "<<endl;
								cout<<pais[0]<<" x "<<pais[5]<<endl;
								cin>>jogos[0];cout<<" x "; cin>>jogos[5];
								cout<<pais[1]<<" x "<<pais[6]<<endl; 
								cin>>jogos[1];cout<<" x "; cin>>jogos[6];
								cout<<pais[2]<<" x "<<pais[7]<<endl; 
								cin>>jogos[2];cout<<" x "; cin>>jogos[7];
								cout<<pais[3]<<" x "<<pais[8]<<endl; 
								cin>>jogos[3];cout<<" x "; cin>>jogos[8];
								cout<<pais[4]<<" x "<<pais[9]<<endl;
								cin>>jogos[4];cout<<" x "; cin>>jogos[9];
								
							break;
						}
					}		case 3:
							{
								if(jogos[0]>jogos[5])
								{
									cout<<pais[0]<<"Foi o vencedor"<<endl;
									jogos[0]=3;
										if(jogos[0]<jogos[5])
										{
											cout<<pais[5]<<"Foi o vencedor"<<endl;
										}
										/*	else if
											(jogos[0]=jogos[5])
											{
												cout<<"Os dois times empataram"<<endl;
												jogos[0]=1;
												jogos[5]=1;
											}*/
								}
								break;
							}
								
				}	
			
	
		
	}while(n>=5);
		

	
	
	
	
	
 
    return 0;
}																
	



