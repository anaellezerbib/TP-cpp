//TP1 

//Exercice 5 : Calculatrice 

#include <iostream>
#include <string>
using namespace std;

//Question 1 : 


int main(){
	float a;
	cout << "Entrez une valeur : ";
	cin >> a;
	float b;
	cout << "Entrez une valeur : ";
	cin >> b;
	string c;
	cout << "Entrez un opérateur parmi les suivants : * + - /" << endl;
	cin >>c;
	//cout << "votre chaine de caractère est " << c << endl;
	float s;
	int val1 = c.compare("-");
	int val2 = c.compare("+");
	int val3 = c.compare("*");
	int val4 = c.compare("/");
	if(val1 != 0 && val2 != 0 && val3 != 0 && val4 != 0){
		cout << "Erreur : vous n'avez pas rentré un opérateur autorisé" << endl;
	}
	if(val1 == 0){
		cout << "Nous sommes dans le cas soustration" << endl;
		s = a - b;
	}
	if(val2 == 0){
		cout << "Nous sommes dans le cas addition" << endl;
		s = a + b;
	}
	if(val3 == 0){
		cout << "Nous sommes dans le cas multiplication" << endl;
		s = a * b;
	}
	if(val4 == 0){
		if(b == 0){
			cout << "Erreur : impossible de diviser par 0" << endl;
		}
		else{
			cout << "Nous sommes dans le cas division" << endl;
			s = a/b;

		}
	}
	if(val1 == 0 || val2 == 0 || val3 == 0 || val4 == 0){
		cout << a  << c << b << " donne " << s << endl; 

	}
	return 0;
}
 


//Question 2 

int main(){
	float a;
	cout << "Entrez une valeur : ";
	cin >> a;
	float b;
	cout << "Entrez une valeur : ";
	cin >> b;
	cout << "Nous effectuons les 4 opérations sur vos 2 nombres" << endl;
	cout << "L'addition : " << a << "+" << b << "=" << a+b << endl;
	cout << "La soustration : " << a << "-" << b << "=" << a-b << endl;
	cout << "La multiplication : " << a << "*" << b << "=" << a*b << endl;
	if(b == 0){
		cout << "Erreur : impossible de diviser par 0" << endl;
	}
	else{
		cout << "La division : " << a << "/" << b << "=" << a/b << endl;
	}
	return 0;

}
