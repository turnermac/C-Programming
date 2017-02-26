#include <iostream>
#include <array>
#include <string>
using namespace std;

class QuickFindUF{
public:

	QuickFindUF(){
		array<array<int, 4>, 5> table = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
		
		for(auto itr : table){
			for(auto nintendo : itr){
			cout << nintendo << endl;
			}
		}
	}
};

int main(){
	
	QuickFindUF magicPony;
	
	string Hello;
	Hello = "Bonjour, tout le monde!";
	
	cout << Hello << endl;
	return 0;
}
