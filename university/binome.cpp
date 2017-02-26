#include <iostream>
#include <cmath>
using namespace std;

int main(){	
double a(0.0);
double b(0.0);
double c(0.0);

cout << "Enter a non-zero value for 'a'" << endl;
cin >> a;

if (a == 0.0){
	cerr << "Error. You must enter a non-zero value" << endl;
	return 1;
	}
cout << "Enter a non-zero value for 'b'" << endl;
cin >> b;

if (b == 0.0){
	cerr << "Error. You must enter a non-zero value" << endl;
	return 1;
	}
cout << "Enter a non-zero value for 'c'" << endl;
cin >> c;

if (c == 0.0){
	cerr << "Error. You must enter a non-zero value" << endl;
	return 1;
	}
	
cout << endl;
cout << a << endl;
cout << b << endl;
cout << c << endl;

double delta(b * b - 4.0 * a * c);

//voici le calcul

if (delta < 0.0){
	cout << "No real solutions" << endl;
	} else if (delta > 0.0){
		cout << "2 solutions " << (-b-sqrt(delta))/(2.0*a) << " and " << (-b+sqrt(delta))/(2.0*a) << endl;
		} else {
			cout << "One solution " << -b/(2.0*a) << endl;
			}
return 0;
}
