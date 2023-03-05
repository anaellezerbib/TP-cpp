//TP1 
 
//Exercice 4 : Tableau et chaîne de caractères
#include <iostream>
using namespace std;




int occurrences(char* chaine, char caractere) {
    int compteur = 0;
    while (*chaine != '\0') {
        if (*chaine == caractere) {
            compteur++;
        }
        chaine++;
    }
    return compteur;
}


int main(){
	char chaine[] = "bonjour";
	char b = 'o';
	int res;
	res = occurrences(chaine,b);
	cout << "il y a " << res << "fois la lettre " << b << " dans le mot " << chaine << endl;
	return(0);
}
