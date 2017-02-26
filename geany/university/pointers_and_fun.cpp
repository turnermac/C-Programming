#include <iostream>
#include <vector>
#include "my_strings.h"

using namespace std;

class magicPony{

public:

	magicPony(){
		
		vector<int> myVector(4), *pVector;
		
		for(auto& itr : myVector){
			cout << kick << endl;
			cin >> itr;
		}
		
		for(auto itr : myVector){
			cout << itr << endl;
		};	
		
	pVector	= &myVector;
	cout << endl << pVector->size() << endl;
	
	for(auto itr : *pVector){
		cout << itr << endl;
		};
	};
};
int main(){
	
	magicPony kickAss;
	
	vector<double> myVector(12);
	
	myVector = vector<double>(myVector.size(), 1.3); /* Affectation d'une vector de facon anonyme. */
	
	for (auto itr : myVector){
		cout << itr << " ";
		};
	
	cout << endl;
	size_t numberElem(0);
	vector<double> bobDobbs(numberElem);
	cout << m1 << bobDobbs.size() << endl << bobDobbs.empty() << m2 << endl;
	
	return 0;
}
 
