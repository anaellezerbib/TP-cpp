//TP1 

//Exercice 3 : Arbre de Noël 

#include <iostream>
using namespace std;

int main(){
	int n;
	cout << "Hauteur de l'arbre : ";
	cin >> n;
	int i;
	int j;
	int k;
	for(i = 1; i<=n; i++){
		for(j = (n-i); j > 0; j--){
			cout << "=";
		}
		for(k=(i*2)-1; k>0 ; k--){
			cout << "*";
		}
		for(j = (n-i); j > 0; j--){
			cout << "=";
		}
		cout << endl;
	}
	return 0;
}