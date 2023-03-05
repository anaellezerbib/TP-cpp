//TP2 

//Exercice 2 : Tableaux 


#include <iostream>
#include <algorithm>
using namespace std;


int main(){
	float tab1[10] = {1,2,-3,7,1,10,-102,49,16,5};
	float tab2[10] = {7,1,-22,31,17,18,-1,3,6,5};
	float *min = std::min_element(begin(tab1), end(tab1));
    float *max = std::max_element(begin(tab1), end(tab1));
 
    cout << "The min element of tab1 is " << *min << endl;
    cout << "The max element of tab1 is " << *max << endl;
    for(int i =0;i<10;i++){
    	if(tab2[i]<=0){
    		tab1[i] = 0;
    	}
    	else{
    		tab1[i] = tab2[i];
    	}
    }
    cout << "le tab1 devient : " << endl;
    for(int j =0; j<10;j++){
    	cout << tab1[j] << " "; //on affiche élément par élément car on ne peut pas afficher le tableau directement
    }
    cout << endl;
	return(0);
}