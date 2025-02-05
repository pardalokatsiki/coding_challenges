#include <iostream>

using namespace std;

// challenge #15: fibonacchi with recursion

int fib(int n);

int main(){
	cout << fib(10) << endl;
	return 0;
}

int fib(int n){
	if(n<=1)
		return n;
	else
		return fib(n-1)+fib(n-2);
}

