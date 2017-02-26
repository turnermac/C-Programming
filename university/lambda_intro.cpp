#include <iostream>
#include <algorithm>

using namespace std;

class Lambdas {
	
	public:
	
	/*Functions that get overloaded may use the same prototype. This kind of prototype is called a template.*/
	void func(int j){
		cout << "Printing an integer: " << j << endl;
		};
	void func(char* c){
		cout << "Printing a string of char*: " << c << endl;
		};
	void func(double d){
		cout << "Printing a float: " << d << endl;
		};
};

int main(){
	
	Lambdas ld;
	
	int i(19);
	
	auto sayHelloWorld = []()
	{
	
		cout << "Hello Lambda in C++" << endl;
	
	};
	
	sayHelloWorld();
	
	auto return_of_the_lambda = [i](int a) -> int
	{\
		
		return a + i;
	};
	
	cout << return_of_the_lambda(190) << endl;
	
	ld.func(23);
	ld.func("Hello Lambdas in C++");
	ld.func(3.14);
	
	return 0;
}


/*https://www.youtube.com/watch?v=uk0Ytomv0wY*/
