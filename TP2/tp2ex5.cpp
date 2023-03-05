//TP2 

//Exercice 5 : Allocation dynamique

#include <iostream>
using namespace std;

int main(){
	int a;
	cout << "Entrez une valeur : ";
	cin >> a;
	int* tableau = new int[a];
	cout << "Vous allez entrer les valeurs du tableau: " << endl;
	for(int i=0;i<a;i++){
		cout << "Entrez une valeur : " << endl;
		cin >> tableau[i];
	}
	cout << "Le tableau est donc "; 
	for(int i=0;i<a;i++){
		cout << tableau[i] << " ";
	}
	cout << endl;
	int* tableau2 = new int[a];
	for(int i=0;i<a;i++){
		tableau2[i] = tableau[i]*tableau[i];
	}
	delete[] tableau;
	cout << "Le tableau2 est donc "; 
	for(int i=0;i<a;i++){
		cout << tableau2[i] << " ";
	}
	cout << endl;
	delete[] tableau2;
	return 0;
}