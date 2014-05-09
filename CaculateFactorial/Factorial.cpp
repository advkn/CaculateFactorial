#include <iostream>
using namespace std;

//Recursive version of factorial
int factorial(int n) {
	if(n <= 1) {      //Base case to prevent infinite recursion
		return 1;
	}
	else { 
		return n * factorial(n - 1);	//Main computation of factorial
	}
	return n;
}



int main() {

	int myInt = 10;
	cout << factorial(myInt) << endl;
	getchar();

}