
#include <vector>
#include <iostream>

using namespace std;

int main(){
	
	vector<int> lilly(4);

	/*Assign values to all elements in a vector C++11 style*/
	/*Use this syntax whenever possible, otherwise use the classical for loop syntax.*/
	for (auto& num : lilly){
		cout << "Value for next element: " << endl;
		cin >> num;
	}
	
	/*Print to screen the values of all elements in a vector C++11 style*/
	/*Again: use this syntax whenever possible, otherwise use the classical for loop syntax.*/
	cout << "Values for all elements: " << endl;
	for (auto num : lilly){
		cout << num << "..." << endl;
	}
	
	return 0;
}
