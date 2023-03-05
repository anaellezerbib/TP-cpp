//TP1 

//Exercice 1 : calcul de la racine carrée

#include<cmath>
#include <iostream>
using namespace std;


int main(){
	int c;
	cout << "Entrez une valeur positive (0 pour terminer) : ";
	cin >> c;
	int t = 1;
	while(t == 1){
		if(c>=0){
			cout << "La racine de " << c << "\t" << "est " << sqrt(c) << "\t" << endl;
		}
		if(c == 0){
			cout << "Fin du programme." << endl;
			return 0;
		}
		if(c<0){
			cout << "Erreur : la valeur ne peut être négative." << endl;
		}
		cout << "Entrez une valeur positive (0 pour terminer) : ";
		cin >> c;
	}
	return 0;
}