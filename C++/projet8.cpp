#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


int main() {
		
		
		
 		int  n=0,m=0, a[n], b[m], soma=0,somb=0;
 		int c[n];
 		cout<<"Escreva o tamanho do vetor A: "<<endl;
 		cin>>n;
 		
 		for(int i=0; i<n; i++)
		{
 			a[n]=n;
 			cout<<"Informe um numero"<<endl;
 			cin>>a[n];
		}
		
			for (int i=0; i<n; i++)
			{
				soma=soma+a[n];
			}
			cout<<"A soma dos numeros do vetor A é: "<<soma<<endl;
			
		 	cout<<"Escreva o tamanho do vetor B: "<<endl;
 				cin>>m;
 		
		 			for(int i=0; i<m; i++)
					{
		 				b[m]=m;
		 				cout<<"Informe um numero"<<endl;
		 				cin>>b[m];
				 	}
				 	
				 		for (int i=0; i<m; i++)
						{
							somb=somb+b[m];
						}
						cout<<"A soma dos numeros do vetor B é: "<<somb<<endl;
							
						//	if(n=m){
							
							for(int i=0;i=n;i++)
							{
								c[i] = a[n] + b[m];
							}
						//	else{
								cout<<"Os vetores tem tamanhos diferentes"<< c[i];
						//	}
						
				/*
	int i=10;
	
	cin>>i;
	
	do(i=10){
		cout<<"Parabens voce acertou";
	}
	while(i!10){
		cout<<"Voce errou";
	}
	
*/	
	
	return 0;
}
