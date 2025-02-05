#include <iostream>

using namespace std;

// challenge #14: fibonacci without recursion (first 10 numbers)

int main(){
	int fib[10] = {0,1};
	for(int i=2; i<10; i++)
		fib[i]=fib[i-1]+fib[i-2];
	for(int i=0; i<10; i++)
		cout << fib[i] << endl;
	return 0;
}

