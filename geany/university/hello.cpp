#include <iostream>
#include <cmath>
using namespace std;

int main(){
for (int i = 1; i < 10; i++)
{
	cout << "Table of " << i << endl;
	for (int j = 1; j < 11; j++)
	{
		cout << j << " times " << i << " is " << i * j << endl;
	}
}
	
int num;
double value(0.0);
int val;

cout << "Enter your iterator value: " << endl;
cin >> num;

for (int i(0); i < num; ++i)
{
	do {
		cout << "Enter a number: " << endl;
		cin >> val;
		value += val;
	} while (val < 1);
	
}
cout << "The average is " << value / num << "..." << endl;

return 0;	
}


