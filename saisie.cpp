#include <iostream>
#include <vector>
#include "my_strings.h"
#include <array>

using namespace std;

void saisie(vector<int>& a, size_t b = 4);

int main(){
	
	vector<int> bob(0);
	
	saisie(bob, 4);
	
	array<array<double, 3>, 5> rotation;
	
	for(auto nintendo : rotation){
		for(auto keke : nintendo){
		cout << keke << endl;
		}
	}
	
	return 0;
}

void saisie(vector<int>& vect, size_t taille){

vect.clear();
cout << val1 << taille << val2 << endl;

	while (vect.size() < taille)
	{
		cout << val3 << vect.size() << val4;
		int val;
		cin >> val;
		
		if ((val < 0) and (not vect.empty())){
			vect.pop_back();
		} 
		
		else if (val == 0){
			vect.clear();
		} 
		
		else if (val > 0) {
			vect.push_back(val);
		}
	}
}
