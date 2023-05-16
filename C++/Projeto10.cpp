#include <iostream>


using namespace std;
int main() {

	int matriz [3][3];
	
	for (int lin=0; lin<3; lin++){
		for(int col=0; col<3; col++){
			cout<<"linha "<<lin<<" coluna"<< col<<endl;
			cin >>matriz[lin][col];	
		}	
	}

	
	for (int lin=0; lin<3; lin++){
		for(int col=0; col<3; col++){
			cout <<matriz[lin][col]<<"|";
		}
		cout<<endl;
	}
	
	return 0;
}
