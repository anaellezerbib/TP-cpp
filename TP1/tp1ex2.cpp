//TP1 

//Exercice 2 : série harmonique 

#include <iostream>
using namespace std;

int main(){
	int n;
	cout << "Entrez une valeur positive : ";
	cin >> n;
	float s = 0;
	int i = 1;
	while(i <= n){
		s += 1/double(i);
		i++;
	}
	cout << "La série harmonique jusqu'à " << n << " \t est " << s << endl;
	return 0;
}