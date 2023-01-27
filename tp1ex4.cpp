//TP1 

//Exercice 4 : Suite de Tribonacci 


#include <iostream>
using namespace std;

int main(){
	int n;
	cout << "Entrez une valeur positive : ";
	cin >> n;
	int a = 0;
	int b = 0;
	int c = 1;
	int i = 4;
	int u = a + b+ c;
	cout << "Valeur initiale de u : " << u << endl;
	while(i<=n){
		u = a + b + c;
		a = b;
		b = c;
		c = u;
		i++;
	}
	cout << "La suite de Tribonacci jusqu'au terme " << n << " est " << u << endl;
	return 0;
}