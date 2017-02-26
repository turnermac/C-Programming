#include <iostream>
using namespace std;

int main(){
	
	int a,b,c;
	cout << "enter 3 numbers" << endl;
	cin >> a >> b >> c;
	
	if (a == b){
		if (b == c){
			cout << "all 3 numbers are equal" << endl;
			}
			else {
				cout << "only a and b are equal" << endl;
				}	
			}
		else {
			if (a == c){
				cout << "only a and c are equal" << endl;
				}
				else {
					if (b == c){
						cout << "only b and c are equal" << endl;
						}
						else{
							cout << "a, b and c are all different" << endl;
							}
					}
			}
			
	int m,n;
	cout << "Enter 2 numbers" << endl;
	cin >> m >> n;
	
		if ((m >= 0) or (n >= 0)){
			cout << "at least 1 value is positive" << endl;
			}
		else {
			cout << "both values are negative" << endl;
			}
	}
