#include <iostream>
using namespace std;

int main(){

int m(5);
int n;
cout << "enter a number" << endl;
cin >> n;

if (n < m){
	cout << "The number " << n << " is less than " << m << endl;
}
else {
	cout << "The number " << n << " is equal or higher than " << m << endl;
}
cout << "A bientot..." << endl;
return 0;
}
