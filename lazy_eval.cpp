#include <iostream>
#include <cmath>
using namespace std;

//lazy evaluation
//since the first evaluation is false, the second doesnt get evaluated despite it being a possible division by 0.
//this expression doesn't pose any problems and is in fact logically correct.
int main(){	
	double i(3.0);

bool lazy((i != 0.0) or (25.0 / i > 12.0));
cout << lazy << endl;

return 0;
}
