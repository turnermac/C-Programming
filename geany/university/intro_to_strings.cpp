
#include <iostream>
#include <string>
using namespace std;

int main(){
	
	char foo[] { 'H', 'e', 'l', 'l', 'o', '\0' };
	cout << foo << endl;
	
	/*Now string literal that does the exact same*/
	/*string literals always produce null-terminated char sequenses, just like the C-strings*/
	char myword[]="Hello string literal.\n";
	cout << myword << endl;
	
	char bar[]="assign a value.\n";
	cout << bar << endl;
	
	/*declare bob as a char and as an array of n-length*/
	
	char bob[55];
	
	bob[0]='B';
	bob[1]='y';
	bob[2]='e';
	bob[3]='!';
	bob[4]='\0';
	
	cout << bob << endl;
	
	/*Arrays cannot be assigned values once declared*/
	/*Arrays can be assigned values per element once delcared -- see char bob[55];*/
	/*If we try to reassign myword[] or foo[] after declaration, the compiler will error out.*/
	
	/*uncommment the following code to test*/
	/*myword[]="This will not work.\0"
	cout << myword << endl;*/
	
	return 0;
}
