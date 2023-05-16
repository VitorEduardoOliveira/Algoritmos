#include <iostream>



using namespace std;
int main() {
	int n=0 ,tv=0, mt=99, vmt=0,maiort=0;
	float media=0, soma=0;
	
	cout<< "Qual o numero de voltas da corrida? " ;
	cin >> n;
	//estrutura para/ate
	for (int cont=1; cont <= n; cont ++){
		cout <<"Qual o tempo dessa volta"<<endl;
		cin >> tv;
		
		
		
		if (tv < mt){//chave igual a entao
			mt = tv;
			vmt = cont;
		}//finalize
			if (tv > maiort){//chave igual a entao
			maiort = tv;
		
		}
		soma = soma + tv ;	
	}
	media = soma / n;
	cout << "Melhor tempo " << mt << endl;
	cout << "Melhor volta " << vmt << endl;
    cout << "Media de tempo " << media << endl ;
    cout << "Maior tempo " << maiort;
	return 0;
	
	
}
