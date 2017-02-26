
#include<stdio.h>
#include<math.h>

//the prototypes
void sayHello();
double moyenne(double x, double y);
double dub(double n);

int main(int argc, char **argv ){
	
/*Invoke the sayHello command/function*/
	sayHello();
	
/*return value of the function called moyenne populates the double avg*/
	double avg=moyenne(20.0/2.0, 33.9*2.1);
	
	printf("%f\n", avg);
	
	return 0;
}

//the declaration
//because of the position of the declaration, we need a prototype above main for the pre-processor.
void sayHello(){
	printf("Hello C++\n");
}

/*declaration of the function moyenne*/
double moyenne(double a, double b){
	return (a + b) / 2.0; /*returnvalue is a simple arithmetic expression*/
}

double dub(double k){
		return k + cos(0);
}
