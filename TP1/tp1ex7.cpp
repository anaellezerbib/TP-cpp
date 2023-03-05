//TP1 

//Exercice 7 : PGCD

#include <iostream>
using namespace std;

int pgcd(int a, int b){
	if(b == 0){
		return a;
	}
	else{
		return(pgcd(b, a %= b));
	}
}

int main(){
	int a;
	cout << "Entrez une valeur : ";
	cin >> a;
	int b;
	cout << "Entrez une valeur : ";
	cin >> b;
	float p = pgcd(a,b);
	cout << "Le PGCD de " << a << " et " << b << " est " << p << endl;
	return 0;
}
