#include <iostream>
#include <vector>
#include "vector.h"
using namespace std;

class myClass{

public:

	myClass(){
	cout << one << endl;
	cout << two << endl;
	cout << three << endl;
	cout << four << endl;
	cout << five << endl;
	cout << six << endl;
	cout << endl;
	
	vector<int> boo({8,7,6,5,4,22,3});
		for(auto val : boo){
			cout << val << " ";
		}
		cout << endl;
	}
};

class mySeclass{
	
public:

	mySeclass(){
		cout << eight << endl;
		cout << nine << endl;
		
		vector<int> boo({1,2,3,4,5,6,7});
				for(auto val : boo){
			cout << val << " ";
		}
		cout << endl;
	}
};

int main(){
	
	myClass magicPony;
	myClass boobyTrap;
	mySeclass fireStarter;
	
	return 0;
}
