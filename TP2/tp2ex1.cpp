//TP2 

//Exercice 1 : Incrémentation 

#include <iostream>
using namespace std;

void ajouter(int p, int *n){
	*n += p;
}


int main(){
	int a;
	int b;
	cout << "Entrez une valeur : ";
	cin >> a;
	cout << "Entrez une autre valeur : ";
	cin >> b;
	int *p = &b;
	ajouter(2*a,p);
	cout << "La nouvelle valeur de b est "  << b << endl;
	return 0;
}