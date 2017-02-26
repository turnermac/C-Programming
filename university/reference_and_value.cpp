/*When arguments are passed by value, the function modifies the argument but only within its scope*/
/*Therefore, when the function closes, the value of the variable will not have changed*/

#include <iostream>
#include <string> /*required library for string*/
#include <cmath>
using namespace std;

void func(int& x);

int main(int argc, char **argv ){
	
	int var=12;
	
	func(var);
	
	cout << var << endl;
	
	double soc=cos(1);
	cout << soc << endl;
	
	double carr=sqrt(2.0);
	cout << carr << endl;
	
	string question1 = "Can you read me?";
	cout << endl;
	cout << question1;

	
	/*Null-terminated char sequences can be transformed into strings implicitly and strings can be transformed
	 * into null-terminated char sequences by using either of string's member functions: c_str or data.*/
	 
	 char myntcs[] = "character sequence conversion...";
	 string mystringy = myntcs; /*convert c-string to string*/
	 cout << mystringy; /*printed as a library string*/
	 cout << mystringy.c_str();  /*printed as a c-string*/	
	
	return 0;
}

void func(int& num){
		num = num * 3;
		cout << num << endl;
}


 /*C has no reference & */
 /*So in order to achieve the same result in C you need to use a different technique*/


/*the different stages of calling a function in C++

1. First stage is an evaluation of the arguments passed to the function when the function is called.
2. Evaluation of the arguments results in data that's fed as parameters to the function.
3. The body of the function is executed.
4. The expression following the return instruction is evaluated
5. The return value is passed back to the calling function block and replaces the expression of the call.

***NOTE THAT:
1. Stages 1 and 2 don't take place in a function without arguments
2. Stages 3 and 4 don't take place in a function without return value (void)
3. Stage 2 doesn't take place when we pass by reference.*/
