
#include <iostream>
using namespace std;

/*a class with 3 functions all with the same name overloaded*/

class printData {
		
	public:
	
		void print(int i){
			cout << "Printing int: " << i << endl;
		}

		void print(double f){
			cout << "Printing float: " << f << endl;	
		}

		void print(char* c){
			cout << "Printing character: " << c << endl;
		}
};

int main(){

		printData pd;
		
		pd.print(5);
		pd.print(500.2633);
		pd.print("Hello C++");
		
		/*Overload resolution is done by the compiler.*/
	return 0;
}
