/*When arguments are passed by value, the function modifies the argument but only within its scope*/
/*Therefore, when the function closes, the value of the variable will not have changed*/

#include <stdio.h>

void func(int x);

int main(int argc, char **argv ){
	
	int var=12;
	
	func(var);
	
	printf("%d\n", var);
	
	return 0;
}

void func(int num){
		num = num * 3;
		printf("%d\n", num);
}


/*This is not C++ so there's no & use like in C++.'*/
/*In order to use & you need pass in a pointer to the variable.*/
/*C is pass by value only. If you want to change the value of a variable passed
 * to a function you must pass a pointer to it*/
