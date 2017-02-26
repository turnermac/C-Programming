#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	vector<int> turner(29, 77);
	cout << turner.size() << endl;
	cout << turner.back() << endl;
	cout << turner.front() << endl;
	
	vector<int> tableau(turner);
	cout << tableau.size() << endl << endl << endl;
	
	vector<int> rainfall(4);
	
	rainfall[0] = 12;
	rainfall[1] = 4;
	rainfall[2] = 44;
	rainfall[3] = 63;
	
	for (int i = 0; i < 4; i++)
	{
		cout << rainfall[i] << endl;
	}
	
	rainfall.push_back(777);
	
	for (int i = 0; i < 5; i++)
	{
		cout << rainfall[i] << endl;
	}
	
	/* rainfall.front() will specify the first element in the vector.*/
	cout << rainfall.front() << endl;
	cout << rainfall.back() << endl;
	cout << endl;
	
	int size(rainfall.size());
	cout << "The vector has got " << size << " elements." << endl;
	
	return 0;
}
